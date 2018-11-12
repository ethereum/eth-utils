import functools
import itertools

from typing import Any, Callable, Dict, Iterable

from .types import is_text


class combomethod(object):
    def __init__(self, method):
        self.method = method

    def __get__(self, obj=None, objtype=None):
        @functools.wraps(self.method)
        def _wrapper(*args, **kwargs):
            if obj is not None:
                return self.method(obj, *args, **kwargs)
            else:
                return self.method(objtype, *args, **kwargs)

        return _wrapper


def _has_one_val(*args, **kwargs):
    vals = itertools.chain(args, kwargs.values())
    not_nones = list(filter(lambda val: val is not None, vals))
    return len(not_nones) == 1


def _assert_one_val(*args, **kwargs):
    if not _has_one_val(*args, **kwargs):
        raise TypeError(
            "Exactly one of the passed values can be specified. "
            "Instead, values were: %r, %r" % (args, kwargs)
        )


def _hexstr_or_text_kwarg_is_text_type(**kwargs):
    value = kwargs["hexstr"] if "hexstr" in kwargs else kwargs["text"]
    return is_text(value)


def _assert_hexstr_or_text_kwarg_is_text_type(**kwargs):
    if not _hexstr_or_text_kwarg_is_text_type(**kwargs):
        raise TypeError(
            "Arguments passed as hexstr or text must be of text type. "
            "Instead, value was: %r" % (repr(next(list(kwargs.values()))))
        )


def _validate_supported_kwarg(kwargs):
    if next(iter(kwargs)) not in ["primitive", "hexstr", "text"]:
        raise TypeError(
            "Kwarg must be 'primitive', 'hexstr', or 'text'. "
            "Instead, kwarg was: %r" % (next(iter(kwargs)))
        )


def validate_conversion_arguments(to_wrap):
    """
    Validates arguments for conversion functions.
    - Only a single argument is present
    - Kwarg must be 'primitive' 'hexstr' or 'text'
    - If it is 'hexstr' or 'text' that it is a text type
    """

    @functools.wraps(to_wrap)
    def wrapper(*args, **kwargs):
        _assert_one_val(*args, **kwargs)
        if kwargs:
            _validate_supported_kwarg(kwargs)

        if len(args) is 0 and "primitive" not in kwargs:
            _assert_hexstr_or_text_kwarg_is_text_type(**kwargs)
        return to_wrap(*args, **kwargs)

    return wrapper


def return_arg_type(at_position):
    """
    Wrap the return value with the result of `type(args[at_position])`
    """

    def decorator(to_wrap):
        @functools.wraps(to_wrap)
        def wrapper(*args, **kwargs):
            result = to_wrap(*args, **kwargs)
            ReturnType = type(args[at_position])
            return ReturnType(result)

        return wrapper

    return decorator


def replace_exceptions(
    old_to_new_exceptions: Dict[BaseException, BaseException]
) -> Callable[..., Any]:
    """
    Replaces old exceptions with new exceptions to be raised in their place.
    """
    old_exceptions = tuple(old_to_new_exceptions.keys())

    def decorator(to_wrap: Callable[..., Any]) -> Callable[..., Any]:
        @functools.wraps(to_wrap)
        # String type b/c pypy3 throws SegmentationFault with Iterable as arg on nested fn
        # Ignore so we don't have to import `Iterable`
        def wrapper(
            *args: "Iterable[Any]", **kwargs: "Dict[str, Any]"  # type: ignore
        ) -> Callable[..., Any]:
            try:
                return to_wrap(*args, **kwargs)
            except old_exceptions as e:  # type: ignore
                try:
                    raise old_to_new_exceptions[type(e)] from e  # type: ignore
                except KeyError:
                    raise TypeError(
                        "could not look up new exception to use for %r" % e
                    ) from e

        return wrapper

    return decorator
