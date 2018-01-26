import pytest

from eth_utils import (
    apply_formatter_if,
    apply_formatters_to_dict,
    apply_one_of_formatters,
    is_list_like,
    is_string,
)


def i_put_my_thing_down_flip_it_and_reverse_it(lyric):
    return ''.join(reversed(lyric))


CONDITION_FORMATTER_PAIRS = (
    (is_list_like, tuple),
    (is_string, i_put_my_thing_down_flip_it_and_reverse_it),
)


def test_format_dict_error():
    with pytest.raises(ValueError) as exc_info:
        apply_formatters_to_dict(
            {'myfield': int},
            {'myfield': 'a'},
        )
    assert 'myfield' in str(exc_info.value)


@pytest.mark.parametrize(
    'condition, formatter, value, expected',
    (
        (is_string, bool, 1, 1),
        (is_string, bool, '1', True),
        (is_string, bool, '', False),
    ),
)
def test_apply_formatter_if(condition, formatter, value, expected):
    assert apply_formatter_if(condition, formatter, value) == expected

    # must be able to curry
    conditional_formatter = apply_formatter_if(condition, formatter)
    assert conditional_formatter(value) == expected


@pytest.mark.parametrize(
    'condition_formatters, value, expected',
    (
        (CONDITION_FORMATTER_PAIRS, 'my thing', 'gniht ym'),
        (CONDITION_FORMATTER_PAIRS, [2, 3], (2, 3)),
        (CONDITION_FORMATTER_PAIRS, 1, ValueError),
    ),
)
def test_apply_one_of_formatters(condition_formatters, value, expected):
    if isinstance(expected, type) and issubclass(expected, Exception):
        with pytest.raises(expected):
            apply_one_of_formatters(condition_formatters, value)
    else:
        assert apply_one_of_formatters(condition_formatters, value) == expected

        # must be able to curry
        apply_one = apply_one_of_formatters(condition_formatters)
        assert apply_one(value) == expected
