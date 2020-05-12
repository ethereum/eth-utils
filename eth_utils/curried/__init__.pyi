from typing import Any, Callable, Sequence, Tuple, TypeVar, Union, overload

TReturn = TypeVar("TReturn")
TValue = TypeVar("TValue")
@overload
def apply_formatter_if(
    condition: Callable[..., bool]
) -> Callable[[Callable[..., TReturn]], Callable[[TValue], Union[TReturn, TValue]]]: ...
@overload
def apply_formatter_if(
    condition: Callable[..., bool], formatter: Callable[..., TReturn]
) -> Callable[[TValue], Union[TReturn, TValue]]: ...
@overload
def apply_formatter_if(
    condition: Callable[..., bool], formatter: Callable[..., TReturn], value: TValue
) -> Union[TReturn, TValue]: ...
@overload
def apply_one_of_formatters(
    formatter_condition_pairs: Sequence[
        Tuple[Callable[..., bool], Callable[..., TReturn]]
    ]
) -> Callable[[TValue], TReturn]: ...
@overload
def apply_one_of_formatters(
    formatter_condition_pairs: Sequence[
        Tuple[Callable[..., bool], Callable[..., TReturn]]
    ],
    value: TValue,
) -> TReturn: ...
