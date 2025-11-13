import collections
from collections.abc import (
    Callable,
    Iterable,
    Mapping,
)
import functools
import itertools
from typing import (  # noqa: F401
    Any,
    Dict,
    List,
    Set,
    Tuple,
    TypeVar,
    Union,
)

from .toolz import (
    compose as _compose,
)

T = TypeVar("T")


def identity(value: T) -> T:
    return value


TGIn = TypeVar("TGIn")
TGOut = TypeVar("TGOut")
TFOut = TypeVar("TFOut")


def combine(
    f: Callable[[TGOut], TFOut], g: Callable[[TGIn], TGOut]
) -> Callable[[TGIn], TFOut]:
    return lambda x: f(g(x))


def apply_to_return_value(
    callback: Callable[..., T]
) -> Callable[..., Callable[..., T]]:
    def outer(fn: Callable[..., T]) -> Callable[..., T]:
        # We would need to type annotate *args and **kwargs but doing so segfaults
        # the PyPy builds. We ignore instead.
        @functools.wraps(fn)
        def inner(*args, **kwargs) -> T:  # type: ignore
            return callback(fn(*args, **kwargs))

        return inner

    return outer


TVal = TypeVar("TVal")
TKey = TypeVar("TKey")
to_tuple: Callable[
    [Callable[..., Iterable[TVal]]], Callable[..., tuple[TVal, ...]]
] = apply_to_return_value(tuple)
to_list: Callable[
    [Callable[..., Iterable[TVal]]], Callable[..., list[TVal]]
] = apply_to_return_value(list)
to_set: Callable[
    [Callable[..., Iterable[TVal]]], Callable[..., set[TVal]]
] = apply_to_return_value(set)
to_dict: Callable[
    [Callable[..., Iterable[Mapping[TKey, TVal] | tuple[TKey, TVal]]]],
    Callable[..., dict[TKey, TVal]],
] = apply_to_return_value(dict)
to_ordered_dict: Callable[
    [Callable[..., Iterable[Mapping[TKey, TVal] | tuple[TKey, TVal]]]],
    Callable[..., collections.OrderedDict[TKey, TVal]],
] = apply_to_return_value(collections.OrderedDict)
sort_return = _compose(to_tuple, apply_to_return_value(sorted))
flatten_return = _compose(
    to_tuple, apply_to_return_value(itertools.chain.from_iterable)
)
reversed_return = _compose(to_tuple, apply_to_return_value(reversed), to_tuple)
