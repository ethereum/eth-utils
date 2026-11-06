import pytest

from eth_utils.decorators import (
    validate_conversion_arguments,
)


@pytest.fixture()
def mock_conversion_function():
    @validate_conversion_arguments
    def conversion_function(primitive=None, hexstr=None, text=None):
        return True

    return conversion_function


@pytest.mark.parametrize("val", (b"123", 123, {}, lambda: None))
def test_decorator_rejects_non_text_type_args_for_hexstr_kwarg(
    mock_conversion_function, val
):
    with pytest.raises(TypeError):
        mock_conversion_function(hexstr=val)


@pytest.mark.parametrize("val", (b"123", 123, {}, lambda: None))
def test_decorator_rejects_non_text_type_args_for_text_kwarg(
    mock_conversion_function, val
):
    with pytest.raises(TypeError):
        mock_conversion_function(text=val)


@pytest.mark.parametrize(
    "values",
    (
        {},
        {"primitive": "abc", "hexstr": "abc"},
        {"primitive": "abc", "hexstr": "abc", "text": "abc"},
    ),
)
def test_decorator_only_accepts_a_single_arg(mock_conversion_function, values):
    with pytest.raises(TypeError):
        mock_conversion_function(**values)


def test_decorator_rejects_invalid_kwarg(mock_conversion_function):
    with pytest.raises(TypeError):
        mock_conversion_function(value="123")


@pytest.mark.parametrize(
    "values", ({"primitive": "abc"}, {"hexstr": "abc"}, {"text": "abc"})
)
def test_decorator_accepts_a_single_text_arg(mock_conversion_function, values):
    actual = mock_conversion_function(**values)
    assert actual is True


@pytest.mark.parametrize("value", [False, 0, b"", "", bytearray(), object()])
def test_decorator_preserves_single_primitive(value):
    @validate_conversion_arguments
    def conversion_function(*args, **kwargs):
        return args, kwargs

    assert conversion_function(value) == ((value,), {})
    assert conversion_function(primitive=value) == ((), {"primitive": value})


@pytest.mark.parametrize("key", ["hexstr", "text"])
def test_decorator_accepts_text_subclasses(key):
    class Text(str):
        pass

    value = Text("")

    @validate_conversion_arguments
    def conversion_function(*args, **kwargs):
        return kwargs[key]

    assert conversion_function(**{key: value}) is value


def test_decorator_checks_argument_count_before_keyword_type():
    @validate_conversion_arguments
    def conversion_function(*args, **kwargs):
        return args, kwargs

    with pytest.raises(TypeError, match="Exactly one of the passed values"):
        conversion_function(1, hexstr=2)
    with pytest.raises(TypeError, match="Arguments passed as hexstr or text"):
        conversion_function(hexstr=2)


def test_decorator_validates_keyword_subclasses_in_order():
    comparisons = []

    class Key(str):
        def __eq__(self, other):
            comparisons.append(other)
            return super().__eq__(other)

        __hash__ = str.__hash__

    @validate_conversion_arguments
    def conversion_function(**kwargs):
        return next(iter(kwargs.values()))

    assert conversion_function(**{Key("text"): "abc"}) == "abc"
    assert comparisons == ["primitive", "hexstr", "text", "text"]
