import pytest

from eth_utils import (
    apply_formatter_if,
    apply_formatters_to_dict,
    is_string,
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
