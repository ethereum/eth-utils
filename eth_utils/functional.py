import collections
import functools
import itertools

from .toolz import (
    compose as _compose,
)


def identity(value):
    return value


def combine(f, g):
    return lambda x: f(g(x))


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
