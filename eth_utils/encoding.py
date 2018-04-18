def int_to_big_endian(value):
    return value.to_bytes((value.bit_length() + 7) // 8 or 1, 'big')


def big_endian_to_int(value):
    return int.from_bytes(value, 'big')
