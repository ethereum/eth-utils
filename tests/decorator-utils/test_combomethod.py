import pytest

from eth_utils import (
    combomethod,
)


@pytest.fixture()
def Getter():
    class _Getter:
        val = 1

        @combomethod
        def get(combo):
            if isinstance(combo, type):
                return f"{combo.val} by class"
            elif isinstance(combo, _Getter):
                return f"{combo.val} by instance"
            else:
                raise TypeError("Unreachable, unless you really monkey around")

    return _Getter


def test_class_access(Getter):
    assert Getter.get() == "1 by class"


def test_instance_access(Getter):
    getter = Getter()
    getter.val = 2
    assert getter.get() == "2 by instance"
