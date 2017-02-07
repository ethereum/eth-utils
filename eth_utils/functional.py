import functools
import itertools


def identity(value):
    return value


def combine(f, g):
    return lambda x: f(g(x))


def compose(*functions):
    return functools.reduce(combine, reversed(functions), identity)


def cast_return(_type):
    def outer(fn):
        @functools.wraps(fn)
        def inner(*args, **kwargs):
            return _type(fn(*args, **kwargs))

        return inner
    return outer


cast_return_to_tuple = cast_return(tuple)
cast_return_to_dict = cast_return(dict)
sort_return = cast_return(sorted)
flatten_return = cast_return(itertools.chain.from_iterable)
