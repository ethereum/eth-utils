import pytest

from eth_utils import (
    apply_formatters_to_dict,
)


def test_format_dict_error():
    with pytest.raises(ValueError) as exc_info:
        apply_formatters_to_dict(
            {'myfield': int},
            {'myfield': 'a'},
        )
    assert 'myfield' in str(exc_info.value)
