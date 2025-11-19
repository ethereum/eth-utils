from eth_utils import (
    to_dict,
)


@to_dict
def return_value() -> list[tuple[int, int]]:
    return [(1, 2)]


x = return_value()
reveal_type(x)  # noqa: F821
