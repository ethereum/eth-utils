import logging
from typing import (
    Generic,
    TypeVar,
)

from faster_eth_utils import (
    ExtendedDebugLogger,
    HasExtendedDebugLogger,
    HasLogger,
    HasLoggerMeta,
)


def verify_has_logger_type() -> logging.Logger:
    return HasLogger.logger


def verify_has_extended_debug_logger_type() -> ExtendedDebugLogger:
    return HasExtendedDebugLogger.logger


GenericWithLoggerMeta = HasLoggerMeta.meta_compat(type)


# mypy doesn't recognize this as a valid metaclass but it still functions
# properly
class GenericWithLogger(Generic, metaclass=GenericWithLoggerMeta):  # type: ignore
    pass


T = TypeVar("T")


# mypy gets confused about the actual provision of the types for the generics
# but the actual type checking mechanism below works.
class VerifyGenericWithLoggerTyping(GenericWithLogger[T]):  # type: ignore
    @classmethod
    def return_T(cls, value: T) -> T:
        return value


class VerifyGenericWithLoggerTypingInteger(VerifyGenericWithLoggerTyping[int]):
    pass


int_value: int

int_value = VerifyGenericWithLoggerTypingInteger.return_T(1234)

# mypy should be angry about passing a non-integer into this function. We test
# this by using an ignore comment relying on our type checking settings to warn
# on un-used ignore statements
VerifyGenericWithLoggerTypingInteger.return_T("not-an-integer")  # type: ignore
