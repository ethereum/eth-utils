import collections
import functools
import itertools
import warnings

from toolz.functoolz import (
    compose as _compose,
)


def identity(value):
    return value


def combine(f, g):
    return lambda x: f(g(x))


def compose(*functions):
    warnings.warn(DeprecationWarning(
        "The `compose` function has been deprecated and will be removed in a "
        "subsequent release of `ethereum-utils`.  It is recommended that you "
        "switch to use a library like `toolz` which provides similar "
        "functionality through the `toolz.functoolz.compose` function."
    ))
    return functools.reduce(combine, reversed(functions), identity)


def apply_to_return_value(callback):
    def outer(fn):
        @functools.wraps(fn)
        def inner(*args, **kwargs):
            return callback(fn(*args, **kwargs))

        return inner
    return outer


to_tuple = apply_to_return_value(tuple)
to_list = apply_to_return_value(list)
to_dict = apply_to_return_value(dict)
to_ordered_dict = apply_to_return_value(collections.OrderedDict)
to_set = apply_to_return_value(set)
sort_return = _compose(to_tuple, apply_to_return_value(sorted))
flatten_return = _compose(to_tuple, apply_to_return_value(itertools.chain.from_iterable))
reversed_return = _compose(to_tuple, apply_to_return_value(reversed), to_tuple)
