from typing import List, Set, Iterable, Tuple, Dict, TYPE_CHECKING

from eth_utils import (
    denoms,
    to_dict,
    to_list,
    to_ordered_dict,
    to_set,
    to_tuple,
    replace_exceptions,
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

# verifies that the denoms object is properly typed.
ether: int = denoms.ether


@replace_exceptions({ValueError: TypeError})
def example_replace_exceptions():
    raise ValueError("The base exception")
