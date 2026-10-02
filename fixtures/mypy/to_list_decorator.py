from typing_extensions import (
    assert_type,
)

from eth_utils import (
    to_list,
)


@to_list
def return_value() -> tuple[int, int]:
    return (1, 2)


x = return_value()
assert_type(x, list[int])
