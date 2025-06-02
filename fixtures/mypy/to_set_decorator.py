from typing import (
    List,
)

from faster_eth_utils import (
    to_set,
)


@to_set
def return_value() -> List[int]:
    return [1, 1, 2]


x = return_value()
reveal_type(x)  # noqa: F821
