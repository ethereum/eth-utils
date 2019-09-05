import logging
import uuid

from eth_utils.logging import ExtendedDebugLogger, get_extended_debug_logger, get_logger


class CustomLogger(logging.Logger):
    pass


def test_get_logger_with_no_class():
    path = "testing.{0}".format(uuid.uuid4())
    logger = get_logger(path)
    assert isinstance(logger, logging.Logger)
    assert logger.name == path


def test_get_logger_with_default_class():
    path = "testing.{0}".format(uuid.uuid4())
    logger = get_logger(path, logging.Logger)
    assert isinstance(logger, logging.Logger)
    assert logger.name == path


def test_get_logger_with_CustomLogger():
    path = "testing.{0}".format(uuid.uuid4())
    logger = get_logger(path, CustomLogger)
    assert isinstance(logger, CustomLogger)
    assert logger.name == path


def test_get_extended_debug_logger():
    path = "testing.{0}".format(uuid.uuid4())
    logger = get_extended_debug_logger(path)
    assert isinstance(logger, ExtendedDebugLogger)
    assert logger.name == path


def test_get_extended_debug_logger_if_other_logger_in_cache():
    path = "testing.{0}".format(uuid.uuid4())
    normal_logger = get_logger(path)
    assert not isinstance(normal_logger, ExtendedDebugLogger)
    assert normal_logger.name == path

    extended_logger = get_extended_debug_logger(path)
    assert isinstance(extended_logger, ExtendedDebugLogger)
    assert extended_logger.name == path


def test_get_logger_preserves_logging_module_config():
    assert logging.getLoggerClass() is logging.Logger

    path = "testing.{0}".format(uuid.uuid4())
    logger = get_logger(path, CustomLogger)
    assert isinstance(logger, CustomLogger)

    assert logging.getLoggerClass() is logging.Logger
