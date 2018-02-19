import functools
import codecs
import warnings

from .types import (
    is_bytes,
    is_text,
    is_string,
    is_dict,
    is_list_like,
)


def _deprecated(fn):
    @functools.wraps(fn)
    def inner(*args, **kwargs):
        warnings.warn(DeprecationWarning(
            "The `{0}` function has been deprecated and will be removed in a "
            "subsequent release of the eth-utils library. UTF8 cannot encode "
            "some byte values in the 0-255 range which makes naive coersion between "
            "bytes and text representations impossible without explicitly "
            "declared encodings.".format(fn.__name__)
        ))
        return fn(*args, **kwargs)
    return inner


@_deprecated
def force_bytes(value, encoding='iso-8859-1'):
    if is_bytes(value):
        return bytes(value)
    elif is_text(value):
        return codecs.encode(value, encoding)
    else:
        raise TypeError("Unsupported type: {0}".format(type(value)))


@_deprecated
def force_text(value, encoding='iso-8859-1'):
    if is_text(value):
        return value
    elif is_bytes(value):
        return codecs.decode(value, encoding)
    else:
        raise TypeError("Unsupported type: {0}".format(type(value)))


@_deprecated
def force_obj_to_bytes(obj):
    if is_string(obj):
        return force_bytes(obj)
    elif is_dict(obj):
        return {
            k: force_obj_to_bytes(v) for k, v in obj.items()
        }
    elif is_list_like(obj):
        return type(obj)(force_obj_to_bytes(v) for v in obj)
    else:
        return obj


@_deprecated
def force_obj_to_text(obj):
    if is_string(obj):
        return force_text(obj)
    elif is_dict(obj):
        return {
            k: force_obj_to_text(v) for k, v in obj.items()
        }
    elif is_list_like(obj):
        return type(obj)(force_obj_to_text(v) for v in obj)
    else:
        return obj


@_deprecated
def coerce_args_to_bytes(fn):
    @functools.wraps(fn)
    def inner(*args, **kwargs):
        bytes_args = force_obj_to_bytes(args)
        bytes_kwargs = force_obj_to_bytes(kwargs)
        return fn(*bytes_args, **bytes_kwargs)
    return inner


@_deprecated
def coerce_args_to_text(fn):
    @functools.wraps(fn)
    def inner(*args, **kwargs):
        text_args = force_obj_to_text(args)
        text_kwargs = force_obj_to_text(kwargs)
        return fn(*text_args, **text_kwargs)
    return inner


@_deprecated
def coerce_return_to_bytes(fn):
    @functools.wraps(fn)
    def inner(*args, **kwargs):
        return force_obj_to_bytes(fn(*args, **kwargs))
    return inner


@_deprecated
def coerce_return_to_text(fn):
    @functools.wraps(fn)
    def inner(*args, **kwargs):
        return force_obj_to_text(fn(*args, **kwargs))
    return inner
