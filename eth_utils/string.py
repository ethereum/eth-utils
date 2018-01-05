import codecs
import functools
import itertools
import json
import warnings

import eth_utils

from .types import (
    is_boolean,
    is_bytes,
    is_dict,
    is_integer,
    is_list_like,
    is_string,
    is_text,
)


def has_one_val(*args, **kwargs):
    vals = itertools.chain(args, kwargs.values())
    not_nones = list(filter(lambda val: val is not None, vals))
    return len(not_nones) == 1


def assert_one_val(*args, **kwargs):
    if not has_one_val(*args, **kwargs):
        raise TypeError(
            "Exactly one of the passed values can be specified. "
            "Instead, values were: %r, %r" % (args, kwargs)
        )


def to_bytes(primitive=None, hexstr=None, text=None):
    """
    Auto converts any supported value into it's bytes equivalent.
    Text gets encoded as UTF-8
    """
    assert_one_val(primitive, hexstr=hexstr, text=text)

    if is_boolean(primitive):
        return b'\x01' if primitive else b'\x00'
    elif isinstance(primitive, bytes):
        return primitive
    elif isinstance(primitive, str):
        return primitive.encode('utf-8')
    elif is_integer(primitive):
        return to_bytes(hexstr=to_hex(primitive))
    elif hexstr is not None:
        if len(hexstr) % 2:
            hexstr = '0x0' + eth_utils.hexidecimal.remove_0x_prefix(hexstr)
        return eth_utils.hexidecimal.decode_hex(hexstr)
    elif text is not None:
        return text.encode('utf-8')
    raise TypeError("expected an int in first arg, or keyword of hexstr or text")


def to_text(primitive=None, hexstr=None, text=None):
    """
    Auto converts any supported value into it's string equivalent.
    Text gets decoded as UTF-8.
    """
    assert_one_val(primitive, hexstr=hexstr, text=text)

    if hexstr is not None:
        return to_bytes(hexstr=hexstr).decode('utf-8')
    elif text is not None:
        return text
    elif isinstance(primitive, str):
        return to_text(text=primitive)
    elif isinstance(primitive, bytes):
        return primitive.decode('utf-8')
    elif is_integer(primitive):
        byte_encoding = eth_utils.encoding.int_to_big_endian(primitive)
        return to_text(byte_encoding)
    raise TypeError("Expected an int, bytes or hexstr.")


def to_hex(primitive=None, hexstr=None, text=None):
    """
    Auto converts any supported value into it's hex representation.
    Trims leading zeros, as defined in:
    https://github.com/ethereum/wiki/wiki/JSON-RPC#hex-value-encoding
    """
    assert_one_val(primitive, hexstr=hexstr, text=text)

    if hexstr is not None:
        return eth_utils.hexidecimal.add_0x_prefix(hexstr.lower())

    if text is not None:
        return eth_utils.hexidecimal.encode_hex(text.encode('utf-8'))

    if is_boolean(primitive):
        return "0x1" if primitive else "0x0"

    if is_dict(primitive):
        return eth_utils.hexidecimal.encode_hex(json.dumps(primitive, sort_keys=True))

    if isinstance(primitive, bytes):
        return eth_utils.hexidecimal.encode_hex(primitive)
    elif is_string(primitive):
        return to_hex(text=primitive)

    if is_integer(primitive):
        return hex(primitive)

    raise TypeError(
        "Unsupported type: '{0}'.  Must be one of Boolean, Dictionary, String, "
        "or Integer.".format(repr(type(primitive)))
    )


def _deprecated(fn):
    def inner(*args, **kwargs):
        warnings.simplefilter('always', DeprecationWarning)
        warnings.warn(DeprecationWarning(
            "The `{0}` function has been deprecated and will be removed in a "
            "subsequent release of the eth-utils library. UTF8 cannot encode "
            "some byte values in the 0-255 range which makes naive coersion between "
            "bytes and text representations impossible without explicitly "
            "declared encodings.".format(fn.__name__)
        ))
        warnings.resetwarnings()
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
    """
    Returns `obj` with all string elements converted to text strings.
    """
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
