import pytest

import eth_utils

from eth_utils.curried import (
    apply_formatter_at_index,
    apply_formatter_if,
    apply_formatter_to_array,
    apply_formatters_to_dict,
    apply_key_map,
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
    with pytest.raises(ValueError) as exc_info:
        eth_utils.apply_formatters_to_dict(
            {'myfield': int},
            {'myfield': 'a'},
        )
    assert 'myfield' in str(exc_info.value)


@pytest.mark.parametrize(
    'formatter, value, expected',
    (
        (
            {'should_be_int': int, 'should_be_bool': bool},
            {'should_be_int': 1.2, 'should_be_bool': 3.4, 'pass_through': 5.6},
            {'should_be_int': 1, 'should_be_bool': True, 'pass_through': 5.6},
        ),
    ),
)
def test_apply_formatters_to_dict(formatter, value, expected):
    assert eth_utils.apply_formatters_to_dict(formatter, value) == expected

    mapper = apply_formatters_to_dict(formatter)
    assert mapper(value) == expected


@pytest.mark.parametrize(
    'formatter, value, expected',
    (
        (
            {'black': 'orange', 'Internet': 'Ethereum'},
            {'black': 1.2, 'Internet': 3.4, 'pass_through': 5.6},
            {'orange': 1.2, 'Ethereum': 3.4, 'pass_through': 5.6},
        ),
    ),
)
def test_apply_key_map(formatter, value, expected):
    assert eth_utils.apply_key_map(formatter, value) == expected

    mapper = apply_key_map(formatter)
    assert mapper(value) == expected


@pytest.mark.parametrize(
    'condition, formatter, value, expected',
    (
        (is_string, bool, 1, 1),
        (is_string, bool, '1', True),
        (is_string, bool, '', False),
    ),
)
def test_apply_formatter_if(condition, formatter, value, expected):
    assert eth_utils.apply_formatter_if(condition, formatter, value) == expected

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
        with pytest.raises(expected):
            eth_utils.apply_one_of_formatters(condition_formatters, value)
    else:
        assert eth_utils.apply_one_of_formatters(condition_formatters, value) == expected

        # must be able to curry
        apply_one = apply_one_of_formatters(condition_formatters)
        assert apply_one(value) == expected


@pytest.mark.parametrize(
    'formatter, index, value, expected',
    (
        (bool, 1, [1, 2, 3], [1, True, 3]),
        (bool, 1, (1, 2, 3), (1, True, 3)),
        (bool, 3, (1, 2, 3), IndexError),
    ),
)
def test_apply_formatter_at_index(formatter, index, value, expected):
    if isinstance(expected, type) and issubclass(expected, Exception):
        with pytest.raises(expected):
            apply_formatter_at_index(formatter, index, value)
        with pytest.raises(expected):
            eth_utils.apply_formatter_at_index(formatter, index, value)
    else:
        assert eth_utils.apply_formatter_at_index(formatter, index, value) == expected

        # must be able to curry
        targetted_formatter = apply_formatter_at_index(formatter, index)
        assert targetted_formatter(value) == expected


@pytest.mark.parametrize(
    'formatters, value, expected',
    (
        (
            [bool, int, str],
            (1.2, 3.4, 5.6),
            (True, 3, '5.6'),
        ),
        (
            [bool, int],
            (1.2, 3.4, 5.6),
            (True, 3, 5.6),
        ),
        (
            [bool, int],
            [1.2, 3.4, 5.6],
            [True, 3, 5.6],
        ),
        (
            [bool, int, str, float],
            (1.2, 3.4, 5.6),
            IndexError,
        ),
    ),
)
def test_combine_argument_formatters(formatters, value, expected):
    list_formatter = eth_utils.combine_argument_formatters(*formatters)
    if isinstance(expected, type) and issubclass(expected, Exception):
        with pytest.raises(expected):
            list_formatter(value)
    else:
        assert list_formatter(value) == expected


@pytest.mark.parametrize(
    'formatter, value, expected',
    (
        (
            int,
            [1.2, 3.4, 5.6],
            [1, 3, 5],
        ),
        (
            int,
            (1.2, 3.4, 5.6),
            (1, 3, 5),
        ),
    ),
)
def test_apply_formatter_to_array(formatter, value, expected):
    assert eth_utils.apply_formatter_to_array(formatter, value) == expected

    mapper = apply_formatter_to_array(formatter)
    assert mapper(value) == expected
