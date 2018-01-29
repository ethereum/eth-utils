from .conversions import (
    to_text,
    to_bytes,
)
from .types import (
    is_bytes,
)


def pad_left(value, to_size, pad_with):
    """
    Should be called to pad value to expected length
    """
    pad_amount = to_size - len(value)
    head = b"" if is_bytes(value) else ""
    pad_args = {'primitive': pad_with} if is_bytes(pad_with) else {'text': pad_with}
    pad_value = to_bytes(**pad_args) if is_bytes(value) else to_text(**pad_args)
    pad_with_value = to_text(text=pad_value)
    if pad_amount > 0:
        head = pad_with_value * (pad_amount // len(pad_with_value))
        head += pad_with_value[:(pad_amount % len(pad_with_value))]
    return head + value


def pad_right(value, to_size, pad_with):
    """
    Should be called to pad value to expected length
    """
    pad_amount = to_size - len(value)
    tail = b"" if is_bytes(value) else ""
    pad_args = {'primitive': pad_with} if is_bytes(pad_with) else {'text': pad_with}
    pad_value = to_bytes(**pad_args) if is_bytes(value) else to_text(**pad_args)
    pad_with_value = to_text(text=pad_value)
    if pad_amount > 0:
        tail = pad_with_value * (pad_amount // len(pad_with_value))
        tail += pad_with_value[:(pad_amount % len(pad_with_value))]
    return value + tail


def is_prefixed(value, prefix):
    prefix_args = {'primitive': prefix} if is_bytes(prefix) else {'text': prefix}
    prefix_value = to_bytes(**prefix_args) if is_bytes(value) else to_text(**prefix_args)
    return value.startswith(prefix_value)
