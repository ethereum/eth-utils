import decimal
from decimal import localcontext

from typing import Union

from .types import (
    is_integer,
    is_string,
)


units = {
    'wei':          decimal.Decimal('1'),  # noqa: E241
    'kwei':         decimal.Decimal('1000'),  # noqa: E241
    'babbage':      decimal.Decimal('1000'),  # noqa: E241
    'femtoether':   decimal.Decimal('1000'),  # noqa: E241
    'mwei':         decimal.Decimal('1000000'),  # noqa: E241
    'lovelace':     decimal.Decimal('1000000'),  # noqa: E241
    'picoether':    decimal.Decimal('1000000'),  # noqa: E241
    'gwei':         decimal.Decimal('1000000000'),  # noqa: E241
    'shannon':      decimal.Decimal('1000000000'),  # noqa: E241
    'nanoether':    decimal.Decimal('1000000000'),  # noqa: E241
    'nano':         decimal.Decimal('1000000000'),  # noqa: E241
    'szabo':        decimal.Decimal('1000000000000'),  # noqa: E241
    'microether':   decimal.Decimal('1000000000000'),  # noqa: E241
    'micro':        decimal.Decimal('1000000000000'),  # noqa: E241
    'finney':       decimal.Decimal('1000000000000000'),  # noqa: E241
    'milliether':   decimal.Decimal('1000000000000000'),  # noqa: E241
    'milli':        decimal.Decimal('1000000000000000'),  # noqa: E241
    'ether':        decimal.Decimal('1000000000000000000'),  # noqa: E241
    'kether':       decimal.Decimal('1000000000000000000000'),  # noqa: E241
    'grand':        decimal.Decimal('1000000000000000000000'),  # noqa: E241
    'mether':       decimal.Decimal('1000000000000000000000000'),  # noqa: E241
    'gether':       decimal.Decimal('1000000000000000000000000000'),  # noqa: E241
    'tether':       decimal.Decimal('1000000000000000000000000000000'),  # noqa: E241
}


denoms = type('denoms', (object,), {
    key: int(value) for key, value in units.items()
})


MIN_WEI = 0
MAX_WEI = 2 ** 256 - 1


def from_wei(number: int, unit: str) -> Union[int, decimal.Decimal]:
    """
    Takes a number of wei and converts it to any other ether unit.
    """
    if unit.lower() not in units:
        raise ValueError(
            "Unknown unit.  Must be one of {0}".format('/'.join(units.keys()))
        )

    if number == 0:
        return 0

    if number < MIN_WEI or number > MAX_WEI:
        raise ValueError("value must be between 1 and 2**256 - 1")

    unit_value = units[unit.lower()]

    with localcontext() as ctx:
        ctx.prec = 999
        d_number = decimal.Decimal(value=number, context=ctx)
        result_value = d_number / unit_value

    return result_value


def to_wei(number: int, unit: str) -> int:
    """
    Takes a number of a unit and converts it to wei.
    """
    if unit.lower() not in units:
        raise ValueError(
            "Unknown unit.  Must be one of {0}".format('/'.join(units.keys()))
        )

    if is_integer(number) or is_string(number):
        d_number = decimal.Decimal(value=number)
    elif isinstance(number, float):
        d_number = decimal.Decimal(value=str(number))
    elif isinstance(number, decimal.Decimal):
        d_number = number
    else:
        raise TypeError("Unsupported type.  Must be one of integer, float, or string")

    s_number = str(number)
    unit_value = units[unit.lower()]

    if d_number == 0:
        return 0

    if d_number < 1 and '.' in s_number:
        with localcontext() as ctx:
            multiplier = len(s_number) - s_number.index('.') - 1
            ctx.prec = multiplier
            d_number = decimal.Decimal(value=number, context=ctx) * 10**multiplier
        unit_value /= 10**multiplier

    with localcontext() as ctx:
        ctx.prec = 999
        result_value = decimal.Decimal(value=d_number, context=ctx) * unit_value

    if result_value < MIN_WEI or result_value > MAX_WEI:
        raise ValueError("Resulting wei value must be between 1 and 2**256 - 1")

    return int(result_value)
