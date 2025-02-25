import pytest
import logging
import uuid

from eth_utils import (
    ExtendedDebugLogger,
)
from eth_utils.logging import (
    DEBUG2_LEVEL_NUM,
)


@pytest.fixture
def DEBUG2_installed():
    # caplog only works on loggers retrieved from `logging.getLogger` so we
    # have to use that mechanism to instantiate our logger.
    original_logger = logging.getLoggerClass()
    logging.setLoggerClass(ExtendedDebugLogger)

    try:
        yield
    finally:
        logging.setLoggerClass(original_logger)


def test_extended_debug_logger(caplog, DEBUG2_installed):
    caplog.set_level(DEBUG2_LEVEL_NUM, "testing")

    logger = logging.getLogger("testing")

    assert len(caplog.records) == 0
    logger.debug2("message %s", 1)
    assert len(caplog.records) == 1

    record = caplog.records[0]
    assert record.levelno == 8
    assert record.args == (1,)
    assert record.message == "message 1"


def test_caching_of_debug2_when_disabled(caplog, DEBUG2_installed):
    caplog.set_level(DEBUG2_LEVEL_NUM, "testing")

    # we need a unique logger because loggers are cached
    logger = logging.getLogger(f"testing-{uuid.uuid4()}")

    assert logger.isEnabledFor(DEBUG2_LEVEL_NUM) is False

    assert "show_debug2" not in logger.__dict__
    assert logger.show_debug2 is False
    # cached property should have inserted it into the dict
    assert "show_debug2" in logger.__dict__

    # sanity pre-check
    assert len(caplog.records) == 0

    assert "debug2" not in logger.__dict__
    assert logger.debug2("this should actually call the function") is None
    assert "debug2" in logger.__dict__
    assert logger.debug2("should not do anything but hit the lambda") is None

    assert len(caplog.records) == 0

    # now see that it always returns the value from `__dict__`
    logger.__dict__["show_debug2"] = 100
    assert logger.show_debug2 == 100


def test_caching_of_debug2_when_enabled(caplog, DEBUG2_installed):
    caplog.set_level(DEBUG2_LEVEL_NUM, "testing")

    # we need a unique logger because loggers are cached
    logger = logging.getLogger(f"testing-{uuid.uuid4()}")

    assert logger.isEnabledFor(DEBUG2_LEVEL_NUM) is False
    logger.setLevel(DEBUG2_LEVEL_NUM)
    assert logger.isEnabledFor(DEBUG2_LEVEL_NUM) is True

    assert "show_debug2" not in logger.__dict__
    assert logger.show_debug2 is True
    # cached property should have inserted it into the dict
    assert "show_debug2" in logger.__dict__

    # sanity pre-check
    assert len(caplog.records) == 0

    assert "debug2" not in logger.__dict__
    assert logger.debug2("this should actually call the function") is None
    assert "debug2" not in logger.__dict__
    assert logger.debug2("this should still call the function") is None

    assert len(caplog.records) == 2

    # now see that it always returns the value from `__dict__`
    logger.__dict__["show_debug2"] = 100
    assert logger.show_debug2 == 100
