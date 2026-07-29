import collections
from collections.abc import (
    Callable,
    Iterable,
)
import functools
import itertools
from typing import (  # noqa: F401
    Any,
    Dict,
    List,
    ParamSpec,
    Set,
    Tuple,
    TypeVar,
    Union,
)

from .toolz import (
    compose as _compose,
)

T = TypeVar("T")
TReturn = TypeVar("TReturn")
P = ParamSpec("P")


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
    callback: Callable[[T], TReturn],
) -> Callable[[Callable[P, T]], Callable[P, TReturn]]:
    def outer(fn: Callable[P, T]) -> Callable[P, TReturn]:
        @functools.wraps(fn)
        def inner(*args: P.args, **kwargs: P.kwargs) -> TReturn:
            return callback(fn(*args, **kwargs))

        return inner

    return outer


TVal = TypeVar("TVal")
TKey = TypeVar("TKey")


def to_tuple(fn: Callable[P, Iterable[TVal]]) -> Callable[P, tuple[TVal, ...]]:
    @functools.wraps(fn)
    def inner(*args: P.args, **kwargs: P.kwargs) -> tuple[TVal, ...]:
        return tuple(fn(*args, **kwargs))

    return inner


def to_list(fn: Callable[P, Iterable[TVal]]) -> Callable[P, list[TVal]]:
    @functools.wraps(fn)
    def inner(*args: P.args, **kwargs: P.kwargs) -> list[TVal]:
        return list(fn(*args, **kwargs))

    return inner


def to_set(fn: Callable[P, Iterable[TVal]]) -> Callable[P, set[TVal]]:
    @functools.wraps(fn)
    def inner(*args: P.args, **kwargs: P.kwargs) -> set[TVal]:
        return set(fn(*args, **kwargs))

    return inner


def to_dict(
    fn: Callable[P, Iterable[tuple[TKey, TVal]]],
) -> Callable[P, dict[TKey, TVal]]:
    @functools.wraps(fn)
    def inner(*args: P.args, **kwargs: P.kwargs) -> dict[TKey, TVal]:
        return dict(fn(*args, **kwargs))

    return inner


def to_ordered_dict(
    fn: Callable[P, Iterable[tuple[TKey, TVal]]],
) -> Callable[P, collections.OrderedDict[TKey, TVal]]:
    @functools.wraps(fn)
    def inner(*args: P.args, **kwargs: P.kwargs) -> collections.OrderedDict[TKey, TVal]:
        return collections.OrderedDict(fn(*args, **kwargs))

    return inner


sort_return = _compose(to_tuple, apply_to_return_value(sorted))
flatten_return = _compose(
    to_tuple, apply_to_return_value(itertools.chain.from_iterable)
)
reversed_return = _compose(to_tuple, apply_to_return_value(reversed), to_tuple)
