from abc import abstractmethod, ABC
from typing import Any, TypeVar


class Comparable(ABC):
    @abstractmethod
    def __lt__(self, other: Any) -> bool:
        ...

    @abstractmethod
    def __gt__(self, other: Any) -> bool:
        ...


TValue = TypeVar("TValue", bound=Comparable)


def clamp(lower_bound: TValue, upper_bound: TValue, value: TValue) -> TValue:
    if value < lower_bound:
        return lower_bound
    elif value > upper_bound:
        return upper_bound
    else:
        return value
