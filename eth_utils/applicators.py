from cytoolz.functoolz import (
    compose,
    curry,
)

from .decorators import (
    return_arg_type,
)
from .functional import (
    to_dict,
)


@return_arg_type(2)
def apply_formatter_at_index(formatter, at_index, value):
    if at_index + 1 > len(value):
        raise IndexError(
            "Not enough values in iterable to apply formatter.  Got: {0}. "
            "Need: {1}".format(len(value), at_index + 1)
        )
    for index, item in enumerate(value):
        if index == at_index:
            yield formatter(item)
        else:
            yield item


def combine_argument_formatters(*formatters):
    _formatter_at_index = curry(apply_formatter_at_index)
    return compose(*(
        _formatter_at_index(formatter, index)
        for index, formatter
        in enumerate(formatters)
    ))


def apply_formatter_if(condition, formatter, value):
    if condition(value):
        return formatter(value)
    else:
        return value


@to_dict
def apply_formatters_to_dict(formatters, value):
    for key, item in value.items():
        if key in formatters:
            try:
                yield key, formatters[key](item)
            except (TypeError, ValueError) as exc:
                raise type(exc)("Could not format value %r as field %r" % (item, key)) from exc
        else:
            yield key, item


@return_arg_type(1)
def apply_formatter_to_array(formatter, value):
    for item in value:
        yield formatter(item)


def apply_one_of_formatters(formatter_condition_pairs, value):
    for condition, formatter in formatter_condition_pairs:
        if condition(value):
            return formatter(value)
    else:
        raise ValueError("The provided value did not satisfy any of the formatter conditions")


@to_dict
def apply_key_map(key_mappings, value):
    for key, item in value.items():
        if key in key_mappings:
            yield key_mappings[key], item
        else:
            yield key, item
