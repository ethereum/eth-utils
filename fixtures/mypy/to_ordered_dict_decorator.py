from collections import (
    OrderedDict,
)

from typing_extensions import (
    assert_type,
)

from eth_utils import (
    to_ordered_dict,
)


@to_ordered_dict
def return_value() -> list[tuple[int, int]]:
    return [(1, 2)]


x = return_value()
assert_type(x, OrderedDict[int, int])
