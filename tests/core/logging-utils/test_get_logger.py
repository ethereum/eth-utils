import logging
import pickle
import uuid

from eth_utils.logging import (
    ExtendedDebugLogger,
    get_extended_debug_logger,
    get_logger,
)


class CustomLogger(logging.Logger):
    pass


def test_get_logger_with_no_class():
    path = f"testing.{uuid.uuid4()}"
    logger = get_logger(path)
    assert isinstance(logger, logging.Logger)
    assert logger.name == path


def test_get_logger_with_default_class():
    path = f"testing.{uuid.uuid4()}"
    logger = get_logger(path, logging.Logger)
    assert isinstance(logger, logging.Logger)
    assert logger.name == path


def test_get_logger_with_CustomLogger():
    path = f"testing.{uuid.uuid4()}"
    logger = get_logger(path, CustomLogger)
    assert isinstance(logger, CustomLogger)
    assert logger.name == path


def test_get_extended_debug_logger():
    path = f"testing.{uuid.uuid4()}"
    logger = get_extended_debug_logger(path)
    assert isinstance(logger, ExtendedDebugLogger)
    assert logger.name == path


def test_get_extended_debug_logger_if_other_logger_in_cache():
    path = f"testing.{uuid.uuid4()}"
    normal_logger = get_logger(path)
    assert not isinstance(normal_logger, ExtendedDebugLogger)
    assert normal_logger.name == path

    extended_logger = get_extended_debug_logger(path)
    assert isinstance(extended_logger, ExtendedDebugLogger)
    assert extended_logger.name == path


def test_get_logger_preserves_logging_module_config():
    assert logging.getLoggerClass() is logging.Logger

    path = f"testing.{uuid.uuid4()}"
    logger = get_logger(path, CustomLogger)
    assert isinstance(logger, CustomLogger)

    assert logging.getLoggerClass() is logging.Logger


def test_extended_debug_logger_pickling():
    name = f"testing.{uuid.uuid4()}"
    extended_logger = get_extended_debug_logger(name)
    pickled = pickle.dumps(extended_logger)

    # logging.Logger.__reduce__() returns (getLogger, name), which could give us a
    # regular Logger instance after pickling/unpickling an ExtendedDebugLogger
    # (e.g. when crossing process boundaries since the other process wouldn't have an
    # ExtendedDebugLogger with that name in the logging module's cache). This test
    # ensures an unpickled ExtendedDebugLogger is still an ExtendedDebugLogger even
    # when it's not in the logging's module cache.
    del logging.Logger.manager.loggerDict[name]
    unpickled_logger = pickle.loads(pickled)
    assert isinstance(unpickled_logger, ExtendedDebugLogger)
