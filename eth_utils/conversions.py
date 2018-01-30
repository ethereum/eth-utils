from .decorators import (
    assert_one_arg,
)
from .encoding import (
    big_endian_to_int,
    int_to_big_endian,
)
from .hexidecimal import (
    add_0x_prefix,
    decode_hex,
    encode_hex,
    is_hex,
    remove_0x_prefix,
)
from .types import (
    is_boolean,
    is_integer,
    is_string,
)


@assert_one_arg
def to_hex(value=None, hexstr=None, text=None):
    """
    Auto converts any supported value into it's hex representation.

    Trims leading zeros, as defined in:
    https://github.com/ethereum/wiki/wiki/JSON-RPC#hex-value-encoding
    """
    if hexstr is not None:
        return add_0x_prefix(hexstr.lower())

    if text is not None:
        return encode_hex(text.encode('utf-8'))

    if is_boolean(value):
        return "0x1" if value else "0x0"

    if isinstance(value, bytes):
        return encode_hex(value)
    elif is_string(value):
        return to_hex(text=value)

    if is_integer(value):
        return hex(value)

    raise TypeError(
        "Unsupported type: '{0}'.  Must be one of: bool, str, bytes"
        "or int.".format(repr(type(value)))
    )


@assert_one_arg
def to_int(value=None, hexstr=None, text=None):
    """
    Converts value to it's integer representation.

    Values are converted this way:

     * value:
       * bytes: big-endian integer
       * bool: True => 1, False => 0
     * hexstr: interpret hex as integer
     * text: interpret as string of digits, like '12' => 12
    """
    if hexstr is not None:
        return int(hexstr, 16)
    elif text is not None:
        return int(text)
    elif isinstance(value, bytes):
        return big_endian_to_int(value)
    elif isinstance(value, str):
        raise TypeError("Pass in strings with keyword hexstr or text")
    else:
        return int(value)


@assert_one_arg
def to_bytes(primitive=None, hexstr=None, text=None):
    if is_boolean(primitive):
        return b'\x01' if primitive else b'\x00'
    elif isinstance(primitive, bytes):
        return primitive
    elif is_integer(primitive):
        return to_bytes(hexstr=to_hex(primitive))
    elif hexstr is not None:
        if len(hexstr) % 2:
            hexstr = '0x0' + remove_0x_prefix(hexstr)
        return decode_hex(hexstr)
    elif text is not None:
        return text.encode('utf-8')
    raise TypeError("expected an int in first arg, or keyword of hexstr or text")


@assert_one_arg
def to_text(primitive=None, hexstr=None, text=None):
    if hexstr is not None:
        return to_bytes(hexstr=hexstr).decode('utf-8')
    elif text is not None:
        return text
    elif isinstance(primitive, str):
        return to_text(hexstr=primitive)
    elif isinstance(primitive, bytes):
        return primitive.decode('utf-8')
    elif is_integer(primitive):
        byte_encoding = int_to_big_endian(primitive)
        return to_text(byte_encoding)
    raise TypeError("Expected an int, bytes or hexstr.")


def text_if_str(to_type, text_or_primitive):
    '''
    Convert to a type, assuming that strings can be only unicode text (not a hexstr)

    @param to_type is a function that takes the arguments (primitive, hexstr=hexstr, text=text),
        eg~ to_bytes, to_text, to_hex, to_int, etc
    @param hexstr_or_primitive in bytes, str, or int.
    '''
    if isinstance(text_or_primitive, str):
        (primitive, text) = (None, text_or_primitive)
    else:
        (primitive, text) = (text_or_primitive, None)
    return to_type(primitive, text=text)


def hexstr_if_str(to_type, hexstr_or_primitive):
    '''
    Convert to a type, assuming that strings can be only hexstr (not unicode text)

    @param to_type is a function that takes the arguments (primitive, hexstr=hexstr, text=text),
        eg~ to_bytes, to_text, to_hex, to_int, etc
    @param text_or_primitive in bytes, str, or int.
    '''
    if isinstance(hexstr_or_primitive, str):
        (primitive, hexstr) = (None, hexstr_or_primitive)
        if remove_0x_prefix(hexstr) and not is_hex(hexstr):
            raise ValueError(
                "when sending a str, it must be a hex string. Got: {0!r}".format(
                    hexstr_or_primitive,
                )
            )
    else:
        (primitive, hexstr) = (hexstr_or_primitive, None)
    return to_type(primitive, hexstr=hexstr)
