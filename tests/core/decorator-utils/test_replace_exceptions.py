import pytest

from eth_utils import (
    replace_exceptions,
)
from eth_utils.decorators import (
    return_arg_type,
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


def test_return_arg_type_reuses_matching_factory():
    assert return_arg_type(1) is return_arg_type(1)
    assert return_arg_type(1) is not return_arg_type(2)


def test_replace_exceptions_reuses_matching_factory_for_same_mapping():
    old_to_new = {TypeError: AttributeError}

    assert replace_exceptions(old_to_new) is replace_exceptions(old_to_new)


def test_replace_exceptions_does_not_share_factories_across_mappings():
    old_to_new = {TypeError: AttributeError}
    other_old_to_new = {TypeError: AttributeError}

    assert replace_exceptions(old_to_new) is not replace_exceptions(other_old_to_new)


def test_replace_exceptions_rebuilds_when_mapping_changes():
    old_to_new = {TypeError: AttributeError}
    first = replace_exceptions(old_to_new)

    old_to_new[ValueError] = NameError

    assert first is not replace_exceptions(old_to_new)


def test_replace_exceptions_preserves_mutable_mapping_behavior():
    old_to_new = {TypeError: AttributeError}
    decorator = replace_exceptions(old_to_new)
    old_to_new[TypeError] = NameError

    @decorator
    def function_with_exception():
        raise TypeError("Boom!")

    with pytest.raises(NameError, match="Boom!"):
        function_with_exception()
