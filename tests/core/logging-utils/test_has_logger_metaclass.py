import logging

from faster_eth_utils.logging import (
    ExtendedDebugLogger,
    HasExtendedDebugLogger,
    HasLogger,
    HasLoggerMeta,
)


class DefinedAtModule(HasLogger):
    pass


def test_simple_class_has_logger():
    assert hasattr(DefinedAtModule, "logger")
    assert isinstance(DefinedAtModule.logger, logging.Logger)

    assert "DefinedAtModule" in DefinedAtModule.logger.name


def test_has_logger_for_class_defined_in_function_scope():
    class ForTest(HasLogger):
        pass

    assert hasattr(ForTest, "logger")
    assert isinstance(ForTest.logger, logging.Logger)

    assert "ForTest" in ForTest.logger.name
    assert "test_has_logger_for_class_defined_in_function_scope" in ForTest.logger.name


class OuterClass:
    class InnerClass(HasLogger):
        pass


def test_nested_class_has_logger():
    assert hasattr(OuterClass.InnerClass, "logger")
    assert isinstance(OuterClass.InnerClass.logger, logging.Logger)

    assert "OuterClass.InnerClass" in OuterClass.InnerClass.logger.name


class ExplicitLogger(HasLogger):
    logger = logging.getLogger("explicitely-declared")


def test_has_logger_respects_existing_logger():
    assert ExplicitLogger.logger.name == "explicitely-declared"


class Parent(HasLogger):
    pass


class Child(Parent):
    pass


def test_inherited_gets_own_with_has_logger():
    assert hasattr(Parent, "logger")
    assert hasattr(Child, "logger")

    assert Parent.logger.name.endswith("Parent")
    assert Child.logger.name.endswith("Child")
    assert "Parent" not in Child.logger.name


class InheritsExplicit(ExplicitLogger):
    pass


def test_inherited_from_explicit_gets_own_logger_with_has_logger():
    assert hasattr(InheritsExplicit, "logger")
    assert InheritsExplicit.logger.name.endswith("InheritsExplicit")
    assert "ExplicitLogger" not in InheritsExplicit.logger.name


class FancyLogger(logging.Logger):
    pass


def test_can_override_logging_class():
    class HasFancyLogger(metaclass=HasLoggerMeta.replace_logger_class(FancyLogger)):
        pass

    assert hasattr(HasFancyLogger, "logger")
    assert isinstance(HasFancyLogger.logger, FancyLogger)
    assert "HasFancyLogger" in HasFancyLogger.logger.name


def test_extended_debug_logger():
    assert isinstance(HasExtendedDebugLogger.logger, ExtendedDebugLogger)
    assert "HasExtendedDebugLogger" in HasExtendedDebugLogger.logger.name
    assert "_BaseHasExtendedDebugLogger" not in HasExtendedDebugLogger.logger.name


class InheritsExtended(HasExtendedDebugLogger):
    pass


def test_inherited_has_extended_debug_logger():
    assert hasattr(InheritsExtended, "logger")
    assert isinstance(InheritsExtended.logger, ExtendedDebugLogger)
    assert InheritsExtended.logger.name.endswith("InheritsExtended")
