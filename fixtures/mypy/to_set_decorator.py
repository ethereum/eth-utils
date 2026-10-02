from typing_extensions import (
    assert_type,
)

from eth_utils import (
    to_set,
)


@to_set
def return_value() -> list[int]:
    return [1, 1, 2]


x = return_value()
assert_type(x, set[int])
