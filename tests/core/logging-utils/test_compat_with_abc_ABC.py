import pytest
from abc import (
    ABCMeta,
    abstractmethod,
)
import logging

from eth_utils import (
    HasLoggerMeta,
)


class HasLoggerCompatWithABC(metaclass=HasLoggerMeta.meta_compat(ABCMeta)):
    @abstractmethod
    def something(self):
        ...


def test_has_logger_compat_with_abc_ABC():
    assert hasattr(HasLoggerCompatWithABC, "logger")
    assert isinstance(HasLoggerCompatWithABC.logger, logging.Logger)
    assert HasLoggerCompatWithABC.logger.name.endswith("HasLoggerCompatWithABC")


def test_abc_still_enforces_abstract_methods():
    with pytest.raises(TypeError):
        HasLoggerCompatWithABC()
