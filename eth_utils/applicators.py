from cytoolz.functoolz import (
    curry,
    compose,
)

from .functional import (
    to_list,
    to_dict,
)


@curry
@to_list
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


def apply_formatters_to_args(*formatters):
    return compose(*(
        apply_formatter_at_index(formatter, index)
        for index, formatter
        in enumerate(formatters)
    ))


@curry
def apply_formatter_if(condition, formatter, value):
    if condition(value):
        return formatter(value)
    else:
        return value


@curry
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


@curry
@to_list
def apply_formatter_to_array(formatter, value):
    for item in value:
        yield formatter(item)


@curry
def apply_one_of_formatters(formatter_condition_pairs, value):
    for formatter, condition in formatter_condition_pairs:
        if condition(value):
            return formatter(value)
    else:
        raise ValueError("The provided value did not satisfy any of the formatter conditions")


@curry
@to_dict
def apply_key_map(key_mappings, value):
    for key, item in value.items():
        if key in key_mappings:
            yield key_mappings[key], item
        else:
            yield key, item