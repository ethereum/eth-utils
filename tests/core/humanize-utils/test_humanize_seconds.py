import pytest

from faster_eth_utils import (
    humanize_seconds,
)

SECOND = 1
MINUTE = 60
HOUR = 60 * 60
DAY = 24 * HOUR
YEAR = 365 * DAY
MONTH = YEAR // 12
WEEK = 7 * DAY


@pytest.mark.parametrize(
    "seconds,expected",
    (
        (0, "0s"),
        (1, "1s"),
        (59, "59s"),
        (60, "1m"),
        (61, "1m1s"),
        (119, "1m59s"),
        (59 * MINUTE + 59, "59m59s"),
        (HOUR, "1h"),
        (HOUR + 1, "1h0m1s"),
        (HOUR + MINUTE + 1, "1h1m1s"),
        (HOUR + MINUTE, "1h1m"),
        (23 * HOUR + 59 * MINUTE, "23h59m"),
        (23 * HOUR + 59 * MINUTE + 1, "23h59m1s"),
        (23 * HOUR + 59 * MINUTE + 59, "23h59m59s"),
        (DAY + HOUR, "1d1h"),
        (DAY + HOUR + MINUTE, "1d1h1m"),
        (DAY + MINUTE, "1d0h1m"),
        (DAY + MINUTE + 1, "1d0h1m"),
        (DAY + SECOND, "1d0h0m"),
        (WEEK + DAY + HOUR, "1w1d1h"),
        (WEEK + DAY + HOUR + MINUTE, "1w1d1h"),
        (WEEK + DAY + HOUR + SECOND, "1w1d1h"),
        (WEEK + SECOND, "1w0d0h"),
        (MONTH + WEEK + DAY, "1m1w1d"),
        (MONTH + WEEK + DAY + HOUR, "1m1w1d"),
        (MONTH + SECOND, "1m0w0d"),
        (YEAR + MONTH + WEEK, "1y1m1w"),
        (YEAR + MONTH + WEEK + DAY, "1y1m1w"),
        (YEAR - SECOND, "11m4w2d"),
        (YEAR + SECOND, "1y0m0w"),
    ),
)
def test_humanize_seconds(seconds, expected):
    actual = humanize_seconds(seconds)
    assert actual == expected
