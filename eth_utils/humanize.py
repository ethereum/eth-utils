from typing import Iterator, Tuple, Union

from eth_typing import Hash32

from .toolz import take


def humanize_seconds(seconds: Union[float, int]) -> str:
    if int(seconds) == 0:
        return "0s"

    unit_values = _consume_leading_zero_units(_humanize_seconds(int(seconds)))

    return "".join(
        ("{0}{1}".format(amount, unit) for amount, unit in take(3, unit_values))
    )


SECOND = 1
MINUTE = 60
HOUR = 60 * 60
DAY = 24 * HOUR
YEAR = 365 * DAY
MONTH = YEAR // 12
WEEK = 7 * DAY


UNITS = (
    (YEAR, "y"),
    (MONTH, "m"),
    (WEEK, "w"),
    (DAY, "d"),
    (HOUR, "h"),
    (MINUTE, "m"),
    (SECOND, "s"),
)


def _consume_leading_zero_units(
    units_iter: Iterator[Tuple[int, str]]
) -> Iterator[Tuple[int, str]]:
    for amount, unit in units_iter:
        if amount == 0:
            continue
        else:
            yield (amount, unit)
            break

    yield from units_iter


def _humanize_seconds(seconds: int) -> Iterator[Tuple[int, str]]:
    remainder = seconds

    for duration, unit in UNITS:
        if not remainder:
            break

        num = remainder // duration
        yield num, unit

        remainder %= duration


DISPLAY_HASH_CHARS = 4


def humanize_hash(value: Hash32) -> str:
    value_as_hex = value.hex()
    head = value_as_hex[:DISPLAY_HASH_CHARS]
    tail = value_as_hex[-1 * DISPLAY_HASH_CHARS :]
    return "{0}..{1}".format(head, tail)
