import numbers
from typing import TypeVar

TValue = TypeVar("TValue", bound=numbers.Real)


def clamp(lower_bound: TValue, upper_bound: TValue, value: TValue) -> TValue:
    if value < lower_bound:
        return lower_bound
    elif value > upper_bound:
        return upper_bound
    else:
        return value
