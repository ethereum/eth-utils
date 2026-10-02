from typing_extensions import (
    assert_type,
)

from eth_utils import (
    apply_to_return_value,
)


def wrap_as_list(value: int) -> list[int]:
    return [value]


@apply_to_return_value(wrap_as_list)
def return_value() -> int:
    return 1


x = return_value()
assert_type(x, list[int])
