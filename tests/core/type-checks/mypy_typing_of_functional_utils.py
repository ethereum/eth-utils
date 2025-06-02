import decimal
from typing import (
    TYPE_CHECKING,
    Dict,
    Iterable,
    List,
    NoReturn,
    Set,
    Tuple,
)

from faster_eth_utils import (
    clamp,
    denoms,
    replace_exceptions,
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

# verifies that the denoms object is properly typed.
ether: int = denoms.ether


@replace_exceptions({ValueError: TypeError})
def example_replace_exceptions() -> NoReturn:
    raise ValueError("The base exception")


def return_value_int(lower: int, upper: int, value: int) -> int:
    return clamp(lower, upper, value)


int_value: int = return_value_int(2, 5, 8)


def return_value_float(lower: float, upper: float, value: float) -> float:
    return clamp(lower, upper, value)


float_value: float = return_value_float(2.0, 5.0, 8.0)


def return_value_decimal(
    lower: decimal.Decimal, upper: decimal.Decimal, value: decimal.Decimal
) -> decimal.Decimal:
    return clamp(lower, upper, value)


decimal_value: decimal.Decimal = return_value_decimal(
    decimal.Decimal("2.0"), decimal.Decimal("5.0"), decimal.Decimal("8.0")
)
