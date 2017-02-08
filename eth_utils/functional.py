import functools
import itertools
import collections


def identity(value):
    return value


def combine(f, g):
    return lambda x: f(g(x))


def compose(*functions):
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
sort_return = compose(apply_to_return_value(sorted), to_tuple)
flatten_return = compose(apply_to_return_value(itertools.chain.from_iterable), to_tuple)
reversed_return = compose(to_tuple, apply_to_return_value(reversed), to_tuple)
