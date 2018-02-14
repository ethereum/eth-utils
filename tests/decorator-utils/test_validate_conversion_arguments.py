import pytest

from eth_utils.decorators import (
    validate_conversion_arguments,
)


@pytest.fixture()
def mock_conversion_function():
    @validate_conversion_arguments
    def conversion_function(primitive=None, hexstr=None, text=None):
        return True
    
    return conversion_function


@pytest.mark.parametrize(
    'val',
    (
        b'123',
        123,
        {},
        lambda: None,
    )
)
def test_decorator_rejects_non_text_types(mock_conversion_function, val):
    with pytest.raises(TypeError):
        mock_conversion_function(hexstr=val)


@pytest.mark.parametrize(
    'values',
    (
        {},
        {'primitive': 'abc', 'hexstr': 'abc'},
        {'primitive': 'abc', 'hexstr': 'abc', 'text': 'abc'},
    )
)
def test_decorator_only_accepts_a_single_arg(mock_conversion_function, values):
    with pytest.raises(TypeError):
        mock_conversion_function(**values)


@pytest.mark.parametrize(
    'values',
    (
        {'primitive': 'abc'},
        {'hexstr': 'abc'},
        {'text': 'abc'},
    )
)
def test_decorator_accepts_a_single_text_arg(mock_conversion_function, values):
    actual = mock_conversion_function(**values)
    assert actual is True
