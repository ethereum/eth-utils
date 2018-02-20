import pytest
import warnings


@pytest.fixture(autouse=True)
def print_warnings():
    warnings.simplefilter('always')
