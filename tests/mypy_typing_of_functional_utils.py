from typing import List, Set, Iterable, Tuple, Dict, TYPE_CHECKING

from eth_utils import (
    flatten_return,
    reversed_return,
    sort_return,
    to_dict,
    to_list,
    to_ordered_dict,
    to_set,
    to_tuple,
)

if TYPE_CHECKING:
    from collections import OrderedDict  # noqa: F401


@to_tuple
def typing_to_tuple() -> Iterable[int]:
    yield 1
    yield 2
    yield 3


v_tuple: Tuple[int, ...] = typing_to_tuple()


@to_list
def typing_to_list() -> Iterable[int]:
    yield 1
    yield 2
    yield 3


v_list: List[int] = typing_to_list()


@to_set
def typing_to_set() -> Iterable[int]:
    yield 1
    yield 2
    yield 3


v_set: Set[int] = typing_to_set()


@to_dict
def typing_to_dict() -> Iterable[Tuple[str, int]]:
    yield ("a", 1)
    yield ("b", 2)
    yield ("c", 3)


v_dict: Dict[str, int] = typing_to_dict()


@to_ordered_dict
def typing_to_ordered_dict() -> Iterable[Tuple[str, int]]:
    yield ("a", 1)
    yield ("b", 2)
    yield ("c", 3)


v_ordered_dict: "OrderedDict[str, int]" = typing_to_ordered_dict()


@flatten_return
def typing_flatten_return() -> Iterable[Tuple[int, ...]]:
    yield (1, 2)
    yield (3, 4)
    yield (5, 6)


v_flatten_return: Tuple[int, ...] = typing_flatten_return()


@reversed_return
def typing_reversed_return() -> Iterable[int]:
    yield 1
    yield 2
    yield 3


v_reversed_return: Tuple[int] = typing_reversed_return()


@sort_return
def typing_sorted_return() -> Iterable[int]:
    yield 1
    yield 2
    yield 3


v_sorted_return: Tuple[int] = typing_sorted_return()
