from typing import (
    Any,
    Callable,
    Dict,
    Generator,
    List,
    Sequence,
    Tuple,
    TypeVar,
    Union,
    cast,
)
import warnings

from .decorators import (
    return_arg_type,
)
from .functional import (
    to_dict,
)
from .pydantic import (
    CamelModel,
)
from .toolz import (
    compose,
    curry,
)

TArg = TypeVar("TArg")
TReturn = TypeVar("TReturn")
TOther = TypeVar("TOther")

Formatters = Callable[[List[Any]], List[Any]]


@return_arg_type(2)
def apply_formatter_at_index(
    formatter: Callable[[TArg], TReturn], at_index: int, value: Sequence[Union[TArg, TOther]]
) -> Generator[Union[TOther, TReturn], None, None]:
    try:
        item = value[at_index]
    except IndexError:
        raise IndexError(
            f"Not enough values in iterable to apply formatter. Got: {len(value)}. "
            f"Need: {at_index + 1}"
        ) from None

    yield from value[:at_index]
    yield formatter(cast(TArg, item))
    yield from value[at_index + 1 :]


def combine_argument_formatters(*formatters: Callable[..., Any]) -> Formatters:
    warnings.warn(
        DeprecationWarning(
            "combine_argument_formatters(formatter1, formatter2)([item1, item2])"
            "has been deprecated and will be removed in a subsequent major version "
            "release of the eth-utils library. Update your calls to use "
            "apply_formatters_to_sequence([formatter1, formatter2], [item1, item2]) "
            "instead."
        ),
        stacklevel=2,
    )

    _formatter_at_index = curry(apply_formatter_at_index)
    return compose(  # type: ignore
        *(
            _formatter_at_index(formatter, index)
            for index, formatter in enumerate(formatters)
        )
    )


@return_arg_type(1)
def apply_formatters_to_sequence(
    formatters: List[Callable[[Any], TReturn]], sequence: Sequence[Any]
) -> Generator[TReturn, None, None]:
    if len(formatters) == len(sequence):
        for formatter, item in zip(formatters, sequence):
            yield formatter(item)
    elif len(formatters) > len(sequence):
        raise IndexError(
            f"Too many formatters for sequence: {len(formatters)} formatters for "
            f"{repr(sequence)}"
        )
    else:
        raise IndexError(
            f"Too few formatters for sequence: {len(formatters)} formatters for "
            f"{repr(sequence)}"
        )


def apply_formatter_if(
    condition: Callable[[TArg], bool], formatter: Callable[[TArg], TReturn], value: TArg
) -> Union[TArg, TReturn]:
    if condition(value):
        return formatter(value)
    else:
        return value


@to_dict
def apply_formatters_to_dict(
    formatters: Dict[Any, Any],
    value: Union[Dict[Any, Any], CamelModel],
    unaliased: bool = False,
) -> Generator[Tuple[Any, Any], None, None]:
    """
    Apply formatters to a dictionary of values. If the value is a pydantic model,
    it will be serialized to a dictionary first, taking into account the
    ``unaliased`` parameter.

    :param formatters: The formatters to apply to the dictionary.
    :param value: The dictionary-like object to apply the formatters to.
    :param unaliased: If the model is a ``CamelModel``, whether to turn off
        serialization by alias (camelCase).
    :return: A generator that yields the formatted key-value pairs.
    """
    if isinstance(value, CamelModel):
        value = value.model_dump(by_alias=not unaliased)

    for key, item in value.items():
        if key in formatters:
            try:
                yield key, formatters[key](item)
            except ValueError as exc:
                new_error_message = (
                    f"Could not format invalid value {repr(item)} as field {repr(key)}"
                )
                raise ValueError(new_error_message) from exc
            except TypeError as exc:
                new_error_message = (
                    f"Could not format invalid type {repr(item)} as field {repr(key)}"
                )
                raise TypeError(new_error_message) from exc
        else:
            yield key, item


@return_arg_type(1)
def apply_formatter_to_array(
    formatter: Callable[[TArg], TReturn], value: Sequence[TArg]
) -> Generator[TReturn, None, None]:
    for item in value:
        yield formatter(item)


def apply_one_of_formatters(
    formatter_condition_pairs: Tuple[Tuple[Callable[[TArg], Any], Callable[[TArg], Any]], ...],
    value: Any,
) -> Any:
    for condition, formatter in formatter_condition_pairs:
        if condition(value):
            return formatter(value)
    else:
        raise ValueError(
            "The provided value did not satisfy any of the formatter conditions"
        )


@to_dict
def apply_key_map(
    key_mappings: Dict[Any, Any], value: Dict[Any, Any]
) -> Generator[Tuple[Any, Any], None, None]:
    key_conflicts = (
        set(value.keys())
        .difference(key_mappings.keys())
        .intersection(v for k, v in key_mappings.items() if v in value)
    )
    if key_conflicts:
        raise KeyError(
            f"Could not apply key map due to conflicting key(s): {key_conflicts}"
        )

    for key, item in value.items():
        if key in key_mappings:
            yield key_mappings[key], item
        else:
            yield key, item
