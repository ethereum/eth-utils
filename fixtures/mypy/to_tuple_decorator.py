from typing import (
    List
)
from eth_utils import (
    to_tuple
)

@to_tuple
def return_value() -> List[int]:
    return [1, 2]

x = return_value()
reveal_type(x)
