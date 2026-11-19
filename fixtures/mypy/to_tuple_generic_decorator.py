from collections.abc import (
    Iterable,
    Sequence,
)
from typing import (
    Generic,
    TypeVar,
)

from typing_extensions import (
    assert_type,
)

from eth_utils import (
    to_tuple,
)

TVal = TypeVar("TVal")


@to_tuple
def values(items: Sequence[TVal], /, *, reverse: bool = False) -> Iterable[TVal]:
    yield from reversed(items) if reverse else items


assert_type(values([1, 2, 3]), tuple[int, ...])
assert_type(values(["a", "b"], reverse=True), tuple[str, ...])
integers: Sequence[int] = ()
assert_type(values(integers), tuple[int, ...])


class Box(Generic[TVal]):
    @to_tuple
    def repeat(self, value: TVal, count: int = 1) -> Iterable[TVal]:
        yield from [value] * count


assert_type(Box[int]().repeat(1), tuple[int, ...])
assert_type(Box[str]().repeat("a", count=2), tuple[str, ...])

# Each ignore must be used: otherwise the decorator has lost the parameter types.
values([1], reverse="yes")  # type: ignore
values(items=[1])  # type: ignore
values([1], True)  # type: ignore
values()  # type: ignore
Box[int]().repeat("a")  # type: ignore
