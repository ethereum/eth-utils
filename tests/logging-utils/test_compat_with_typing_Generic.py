import logging
from typing import GenericMeta, TypeVar

from eth_utils import HasLoggerMeta

T = TypeVar("T")


class HasLoggerCompatWithGeneric(metaclass=HasLoggerMeta.meta_compat(GenericMeta)):
    ...


def test_has_logger_compat_with_typing_Generic():
    assert hasattr(HasLoggerCompatWithGeneric, "logger")
    assert isinstance(HasLoggerCompatWithGeneric.logger, logging.Logger)
    assert HasLoggerCompatWithGeneric.logger.name.endswith("HasLoggerCompatWithGeneric")
