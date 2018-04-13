from typing import (
    List,
    Tuple
)
from eth_utils import (
    to_ordered_dict
)

@to_ordered_dict
def return_value() -> List[Tuple[int, int]]:
    return [(1, 2)]

x = return_value()
reveal_type(x)
