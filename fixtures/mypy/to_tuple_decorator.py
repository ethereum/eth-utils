from typing_extensions import (
    assert_type,
)

from eth_utils import (
    to_tuple,
)


@to_tuple
def return_value() -> list[int]:
    return [1, 2]


x = return_value()
assert_type(x, tuple[int, ...])
