from typing_extensions import (
    assert_type,
)

from eth_utils import (
    to_dict,
)


@to_dict
def return_value() -> list[tuple[int, int]]:
    return [(1, 2)]


x = return_value()
assert_type(x, dict[int, int])
