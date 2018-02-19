import functools
import warnings

from .string import (
    force_bytes,
    force_text,
)
from .types import (
    is_bytes,
)


def _deprecated(fn):
    @functools.wraps(fn)
    def inner(*args, **kwargs):
        warnings.warn(DeprecationWarning(
            "The `{0}` function has been deprecated and will be removed in a "
            "subsequent release of the eth-utils library. Now that eth-utils "
            "is compatible with Python3, we encourage developers to use stdlib "
            "functions where possible.".format(fn.__name__)
        ))
        return fn(*args, **kwargs)
    return inner


@_deprecated
def pad_left(value, to_size, pad_with):
    """
    Should be called to pad value to expected length
    """
    pad_amount = to_size - len(value)
    head = b"" if is_bytes(value) else ""
    pad_with_value = force_bytes(pad_with) if is_bytes(value) else force_text(pad_with)
    if pad_amount > 0:
        head = pad_with_value * (pad_amount // len(pad_with_value))
        head += pad_with_value[:(pad_amount % len(pad_with_value))]
    return head + value


@_deprecated
def pad_right(value, to_size, pad_with):
    """
    Should be called to pad value to expected length
    """
    pad_amount = to_size - len(value)
    tail = b"" if is_bytes(value) else ""
    pad_with_value = force_bytes(pad_with) if is_bytes(value) else force_text(pad_with)
    if pad_amount > 0:
        tail = pad_with_value * (pad_amount // len(pad_with_value))
        tail += pad_with_value[:(pad_amount % len(pad_with_value))]
    return value + tail


@_deprecated
def is_prefixed(value, prefix):
    return value.startswith(
        force_bytes(prefix) if is_bytes(value) else force_text(prefix)
    )
