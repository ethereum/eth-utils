import numbers
import collections


from decimal import Decimal
from typing import Any, Callable, Optional, Union
bytes_types = (bytes, bytearray)
integer_types = (int,)
text_types = (str,)
string_types = (bytes, str, bytearray)


def is_integer(value: Optional[Union[int, float, str, Decimal]]) -> bool:
    return isinstance(value, integer_types) and not isinstance(value, bool)


def is_bytes(value: Union[bytes, str]) -> bool:
    return isinstance(value, bytes_types)


def is_text(value: Union[bytes, str]) -> bool:
    return isinstance(value, text_types)


def is_string(value: Any) -> bool:
    return isinstance(value, string_types)


def is_boolean(value: Optional[Union[Callable, int, str]]) -> bool:
    return isinstance(value, bool)


def is_dict(obj: Any) -> bool:
    return isinstance(obj, collections.Mapping)


def is_list_like(obj: Any) -> bool:
    return not is_string(obj) and isinstance(obj, collections.Sequence)


def is_list(obj: Any) -> bool:
    return isinstance(obj, list)


def is_tuple(obj: Any) -> bool:
    return isinstance(obj, tuple)


def is_null(obj):
    return obj is None


def is_number(obj):
    return isinstance(obj, numbers.Number)
