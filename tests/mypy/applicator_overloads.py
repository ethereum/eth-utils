# no-unused-vars
from collections.abc import (
    Callable,
)
from typing import (
    Any,
    TypeGuard,
)

from eth_utils import (
    apply_formatter_at_index,
    apply_formatter_if,
    apply_formatter_to_array,
    apply_formatters_to_sequence,
    apply_one_of_formatters,
    combine_argument_formatters,
)
from eth_utils.curried import (
    apply_formatter_if as curried_apply_formatter_if,
    apply_one_of_formatters as curried_apply_one_of_formatters,
)


def is_text_value(value: str | int) -> TypeGuard[str]:
    return isinstance(value, str)


def is_text_condition(value: str) -> bool:
    return isinstance(value, str)


def uppercase(value: str) -> str:
    return value.upper()


def test_sequence_formatter_inputs() -> None:
    array_result: tuple[int, ...] = apply_formatter_to_array(  # noqa: F841
        int, ("1", "2")
    )
    sequence_result: tuple[int, ...] = apply_formatters_to_sequence(  # noqa: F841
        (int, int), ("1", "2")
    )
    index_result: tuple[int | str, ...] = apply_formatter_at_index(  # noqa: F841
        str, 1, (1, 2, 3)
    )
    combined: Callable[  # noqa: F841
        [list[Any]], list[Any]
    ] = combine_argument_formatters(str, int)


def test_condition_formatter_inputs() -> None:
    value: str | int = "abc"
    guarded_result: str | int = apply_formatter_if(  # noqa: F841
        is_text_value, uppercase, value
    )
    bool_result: str | int = apply_formatter_if(  # noqa: F841
        is_text_condition, len, "abc"
    )
    curried_result: Callable[  # noqa: F841
        [str | int], str | int
    ] = curried_apply_formatter_if(is_text_value, uppercase)
    condition_first = curried_apply_formatter_if(is_text_value)
    formatter_first: Callable[[str | int], str | int] = condition_first(  # noqa: F841
        uppercase
    )


def test_one_of_formatter_inputs() -> None:
    formatter_pairs: tuple[tuple[Callable[[str], bool], Callable[[str], str]], ...] = (
        (is_text_condition, uppercase),
    )
    direct_result: str = apply_one_of_formatters(formatter_pairs, "abc")  # noqa: F841
    curried_result: Callable[  # noqa: F841
        [str], str
    ] = curried_apply_one_of_formatters(formatter_pairs)
    curried_value: str = curried_result("abc")  # noqa: F841
