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


def test_decorator_forwards_positional_and_keyword_arguments():
    @replace_exceptions({ValueError: TypeError})
    def parse_integer(value: str, /, *, base: int = 10) -> int:
        return int(value, base)

    assert parse_integer("10") == 10
    assert parse_integer("ff", base=16) == 255
    with pytest.raises(TypeError, match="invalid literal") as exc_info:
        parse_integer("invalid", base=16)
    assert isinstance(exc_info.value.__cause__, ValueError)
