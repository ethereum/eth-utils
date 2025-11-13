from collections.abc import (
    Callable,
    Generator,
)
from typing import (
    Any,
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

Formatters = Callable[[list[Any]], list[Any]]


@return_arg_type(2)
def apply_formatter_at_index(
    formatter: Callable[..., Any], at_index: int, value: list[Any]
) -> Generator[list[Any], None, None]:
    if at_index + 1 > len(value):
        raise IndexError(
            f"Not enough values in iterable to apply formatter. Got: {len(value)}. "
            f"Need: {at_index + 1}"
        )
    for index, item in enumerate(value):
        if index == at_index:
            yield formatter(item)
        else:
            yield item


def combine_argument_formatters(*formatters: list[Callable[..., Any]]) -> Formatters:
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
    formatters: list[Any], sequence: list[Any]
) -> Generator[list[Any], None, None]:
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
    condition: Callable[..., bool], formatter: Callable[..., Any], value: Any
) -> Any:
    if condition(value):
        return formatter(value)
    else:
        return value


@to_dict
def apply_formatters_to_dict(
    formatters: dict[Any, Any],
    value: dict[Any, Any] | CamelModel,
    unaliased: bool = False,
) -> Generator[tuple[Any, Any], None, None]:
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
    formatter: Callable[..., Any], value: list[Any]
) -> Generator[list[Any], None, None]:
    for item in value:
        yield formatter(item)


def apply_one_of_formatters(
    formatter_condition_pairs: tuple[tuple[Callable[..., Any], Callable[..., Any]]],
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
    key_mappings: dict[Any, Any], value: dict[Any, Any]
) -> Generator[tuple[Any, Any], None, None]:
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
