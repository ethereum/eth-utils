import collections
import functools
import itertools

from typing import (
    Any,
    Callable,
    TypeVar,
)

from .toolz import (
    compose as _compose,
)


AnyCallable = Callable[..., Any]
T = TypeVar('T')


def identity(value: T) -> T:
    return value


def combine(f: AnyCallable, g: AnyCallable) -> AnyCallable:
    return lambda x: f(g(x))


def apply_to_return_value(callback: AnyCallable) -> Any:
    def outer(fn: AnyCallable) -> AnyCallable:
        @functools.wraps(fn)
        # String type b/c pypy3 throws SegmentationFault with Iterable as arg on nested fn
        # Ignore so we don't have to import `Iterable`
        def inner(*args: 'Iterable[Any]',  # type: ignore
                  **kwargs: Callable[..., Any]) -> Callable[..., Any]:
            return callback(fn(*args, **kwargs))

        return inner
    return outer


to_tuple = apply_to_return_value(tuple)
to_list = apply_to_return_value(list)
to_dict = apply_to_return_value(dict)
to_ordered_dict = apply_to_return_value(collections.OrderedDict)
to_set = apply_to_return_value(set)
sort_return = _compose(to_tuple, apply_to_return_value(sorted))
flatten_return = _compose(to_tuple, apply_to_return_value(itertools.chain.from_iterable))
reversed_return = _compose(to_tuple, apply_to_return_value(reversed), to_tuple)
