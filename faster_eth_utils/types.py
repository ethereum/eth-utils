import collections.abc
import numbers
from typing import (
    Any,
    Final,
    List,
    Literal,
    Tuple,
    Union,
)

from typing_extensions import (
    TypeGuard,
)

Mapping: Final = collections.abc.Mapping
Sequence: Final = collections.abc.Sequence

Number: Final = numbers.Number

bytes_types: Final = (bytes, bytearray)
integer_types: Final = (int,)
text_types: Final = (str,)
string_types: Final = (bytes, str, bytearray)


def is_integer(value: Any) -> TypeGuard[int]:
    return isinstance(value, int) and not isinstance(value, bool)


def is_bytes(value: Any) -> TypeGuard[Union[bytes, bytearray]]:
    return isinstance(value, bytes_types)


def is_text(value: Any) -> TypeGuard[str]:
    return isinstance(value, str)


def is_string(value: Any) -> TypeGuard[Union[bytes, str, bytearray]]:
    return isinstance(value, string_types)


def is_boolean(value: Any) -> TypeGuard[bool]:
    return isinstance(value, bool)


def is_dict(obj: Any) -> TypeGuard[collections.abc.Mapping[Any, Any]]:
    return isinstance(obj, Mapping)


def is_list_like(obj: Any) -> TypeGuard[collections.abc.Sequence[Any]]:
    return not is_string(obj) and isinstance(obj, Sequence)


def is_list(obj: Any) -> TypeGuard[List[Any]]:
    return isinstance(obj, list)


def is_tuple(obj: Any) -> TypeGuard[Tuple[Any, ...]]:
    return isinstance(obj, tuple)


def is_null(obj: Any) -> TypeGuard[Literal[None]]:
    return obj is None


def is_number(obj: Any) -> TypeGuard[numbers.Number]:
    return isinstance(obj, Number)
