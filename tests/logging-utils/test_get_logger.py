import logging
import uuid

from eth_utils.logging import ExtendedDebugLogger, get_extended_debug_logger, get_logger


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


def test_get_logger_with_ExtendedDebugLogger():
    path = "testing.{0}".format(uuid.uuid4())
    logger = get_logger(path, ExtendedDebugLogger)
    assert isinstance(logger, ExtendedDebugLogger)
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
