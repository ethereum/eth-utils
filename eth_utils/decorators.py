import functools
import itertools

from cytoolz import (
    identity,
)


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


def assert_one_arg(to_wrap):
    @functools.wraps(to_wrap)
    def wrapper(*args, **kwargs):
        _assert_one_val(*args, **kwargs)
        return to_wrap(*args, **kwargs)
    return wrapper


def return_arg_type(at_position):
    '''
    Wrap the return value with the result of `type(args[at_position])`
    '''
    def decorator(to_wrap):
        @functools.wraps(to_wrap)
        def wrapper(*args, **kwargs):
            try:
                ReturnType = type(args[at_position])
            except IndexError:
                ReturnType = identity
            result = to_wrap(*args, **kwargs)
            return ReturnType(result)
        return wrapper
    return decorator
