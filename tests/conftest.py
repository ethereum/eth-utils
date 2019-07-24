import warnings

import pytest


@pytest.fixture(autouse=True)
def print_warnings():
    warnings.simplefilter("always")
