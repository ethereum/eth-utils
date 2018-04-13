from typing import (
    Tuple
)
from eth_utils import (
    to_list
)

@to_list
def return_value() -> Tuple[int, int]:
    return (1, 2)

x = return_value()
reveal_type(x)
