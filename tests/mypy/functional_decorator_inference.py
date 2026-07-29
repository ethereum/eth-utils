# no-unused-vars
from typing import (
    Protocol,
)

from eth_utils import (
    apply_to_return_value,
    to_tuple,
)


class CountFormatter(Protocol):
    def __call__(self, name: str, count: int, *, enabled: bool = True) -> list[int]:
        ...


class TupleFormatter(Protocol):
    def __call__(self, prefix: str, total: int) -> tuple[str, ...]:
        ...


def wrap_count(value: int) -> list[int]:
    return [value]


@apply_to_return_value(wrap_count)
def count_items(name: str, count: int, *, enabled: bool = True) -> int:
    return count if enabled else 0


@to_tuple
def generate_values(prefix: str, total: int) -> list[str]:
    return [prefix for _ in range(total)]


formatted_count: CountFormatter = count_items
formatted_tuple: TupleFormatter = generate_values
count_result: list[int] = count_items("items", 3, enabled=False)
tuple_result: tuple[str, ...] = generate_values("item", 3)
