import logging

import pytest

from eth_utils import ExtendedDebugLogger
from eth_utils.logging import DEBUG2_LEVEL_NUM


@pytest.fixture
def DEBUG2_enabled():
    # caplog only works on loggers retrieved from `logging.getLogger` so we
    # have to use that mechanism to instantiate our logger.
    original_logger = logging.getLoggerClass()
    logging.setLoggerClass(ExtendedDebugLogger)

    try:
        yield
    finally:
        logging.setLoggerClass(original_logger)


def test_extended_debug_logger(caplog, DEBUG2_enabled):
    caplog.set_level(DEBUG2_LEVEL_NUM, "testing")

    logger = logging.getLogger("testing")

    assert len(caplog.records) == 0
    logger.debug2("message %s", 1)
    assert len(caplog.records) == 1

    record = caplog.records[0]
    assert record.levelno == 8
    assert record.args == (1,)
    assert record.message == "message 1"
