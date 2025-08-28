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
    overload,
)
import warnings

from typing_extensions import (
    TypeGuard,
)

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

    yield from cast(Sequence[TOther], value[:at_index])
    yield formatter(cast(TArg, item))
    yield from cast(Sequence[TOther], value[at_index + 1 :])


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
    num_formatters = len(formatters)
    num_items = len(sequence)
    if num_formatters == num_items:
        for formatter, item in zip(formatters, sequence):
            yield formatter(item)
    elif num_formatters > num_items:
        raise IndexError(
            f"Too many formatters for sequence: {num_formatters} formatters for "
            f"{sequence!r}"
        )
    else:
        raise IndexError(
            f"Too few formatters for sequence: {num_formatters} formatters for "
            f"{sequence!r}"
        )


@overload
def apply_formatter_if(
    condition: Callable[[TArg], TypeGuard[TOther]], formatter: Callable[[TOther], TReturn], value: TArg
) -> Union[TArg, TReturn]: ...

@overload
def apply_formatter_if(
    condition: Callable[[TArg], bool], formatter: Callable[[TArg], TReturn], value: TArg
) -> Union[TArg, TReturn]: ...

def apply_formatter_if(  # type: ignore [misc]
    condition: Union[Callable[[TArg], TypeGuard[TOther]], Callable[[TArg], bool]],
    formatter: Union[Callable[[TOther], TReturn], Callable[[TArg], TReturn]],
    value: TArg,
) -> Union[TArg, TReturn]:
    if condition(value):
        return formatter(value)  # type: ignore [arg-type]
    else:
        return value


def apply_formatters_to_dict(
    formatters: Dict[Any, Any],
    value: Union[Dict[Any, Any], CamelModel],
    unaliased: bool = False,
) -> Dict[Any, Any]:
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

    def get_value(key: Any, item: Any) -> Any:
        if key not in formatters:
            return item
        try:
            return formatters[key](item)
        except ValueError as exc:
            raise ValueError(
                f"Could not format invalid value {repr(item)} as field {repr(key)}"
            ) from exc
        except TypeError as exc:
            raise TypeError(
                f"Could not format invalid type {repr(item)} as field {repr(key)}"
            ) from exc

    return {
        key: get_value(key, item) if key in formatters else key
        for key, item in value.items()
    }


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


def apply_key_map(
    key_mappings: Dict[Any, Any], value: Dict[Any, Any]
) -> Dict[Any, Any]:
    key_conflicts = (
        set(value.keys())
        .difference(key_mappings.keys())
        .intersection(v for k, v in key_mappings.items() if v in value)
    )
    if key_conflicts:
        raise KeyError(
            f"Could not apply key map due to conflicting key(s): {key_conflicts}"
        )

    def get_key(key: Any) -> Any:
        return key_mappings[key] if key in key_mappings else key

    return {get_key(key): item for key, item in value.items()}
