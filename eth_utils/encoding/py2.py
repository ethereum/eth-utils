import binascii
import struct
import codecs


def int_to_big_endian(value):
    if value == 0:
        return b'\0'
    s = hex(value)[2:].rstrip('L')
    if len(s) & 1:
        s = '0' + s
    s = binascii.unhexlify(s)
    return s


def big_endian_to_int(value):
    if len(value) == 1:
        return ord(value)
    elif len(value) <= 8:
        return struct.unpack('>Q', value.rjust(8, '\x00'))[0]
    else:
        return int(codecs.encode(value, 'hex'), 16)
