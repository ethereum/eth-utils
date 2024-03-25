import pytest

from eth_utils import (
    replace_exceptions,
)


@pytest.fixture()
def mock_function_with_exception(old_to_new):
    @replace_exceptions(old_to_new)
    def function_with_exception(x):
        raise TypeError("Boom!")

    return function_with_exception


@pytest.mark.parametrize(
    "old_to_new,new",
    (
        ({TypeError: AttributeError}, AttributeError),
        ({TypeError: NameError}, NameError),
        ({ValueError: AttributeError, TypeError: NameError}, NameError),
    ),
)
def test_decorator_replaces_exceptions(mock_function_with_exception, old_to_new, new):
    with pytest.raises(new, match="Boom!"):
        mock_function_with_exception(old_to_new)
