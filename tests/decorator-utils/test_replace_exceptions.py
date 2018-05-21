import pytest

from eth_utils.decorators import replace_exceptions


class ValidationError(Exception):
    pass


class BlockNotFound(Exception):
    pass

    
@pytest.fixture()
def mock_function_with_exception(old_to_new):
    @replace_exceptions(old_to_new)
    def function_with_exception(val=True):
        raise BlockNotFound
    return function_with_exception


@pytest.mark.parametrize(
    'old_to_new, new',
    (
        ({BlockNotFound: ValidationError}, ValidationError),
        ({BlockNotFound: TypeError}, TypeError),
        ({ValidationError: BlockNotFound, BlockNotFound: TypeError}, TypeError),
    )
)
def test_decorator_replaces_exceptions(mock_function_with_exception, old_to_new, new):
    with pytest.raises(new):
        mock_function_with_exception(old_to_new)
