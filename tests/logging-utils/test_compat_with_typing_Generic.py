import logging
import sys

import pytest

from eth_utils import HasLoggerMeta


@pytest.mark.skipif(sys.version_info[:2] >= (3, 7), reason="GenericMeta not present in Python 3.7+")
def test_has_logger_compat_with_typing_Generic():
    from typing import GenericMeta

    class HasLoggerCompatWithGeneric(metaclass=HasLoggerMeta.meta_compat(GenericMeta)):
        ...

    assert hasattr(HasLoggerCompatWithGeneric, "logger")
    assert isinstance(HasLoggerCompatWithGeneric.logger, logging.Logger)
    assert HasLoggerCompatWithGeneric.logger.name.endswith("HasLoggerCompatWithGeneric")
