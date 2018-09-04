import collections

from eth_utils import (
    to_tuple,
    to_list,
    to_dict,
    to_set,
    to_ordered_dict,
    sort_return,
    flatten_return,
    reversed_return,
)


def yield_things(*things):
    for thing in things:
        yield thing


def test_to_tuple():
    fn = to_tuple(yield_things)
    actual = fn(1, 1, 2, 3, 5, 8)
    assert actual == (1, 1, 2, 3, 5, 8)


def test_to_list():
    fn = to_list(yield_things)
    actual = fn(1, 1, 2, 3, 5, 8)
    assert actual == [1, 1, 2, 3, 5, 8]


def test_to_dict():
    fn = to_dict(yield_things)
    actual = fn(("a", 1), ("b", 2), ("c", 3))
    assert actual == {"a": 1, "b": 2, "c": 3}


def test_to_ordered_dict():
    fn = to_ordered_dict(yield_things)
    actual = fn(("b", 2), ("d", 4), ("a", 1), ("c", 3))
    assert actual == collections.OrderedDict((("b", 2), ("d", 4), ("a", 1), ("c", 3)))
    assert tuple(actual.items()) == (("b", 2), ("d", 4), ("a", 1), ("c", 3))


def test_to_set():
    fn = to_set(yield_things)
    actual = fn("a", "b", "a", "c")
    assert actual == {"a", "b", "c"}


def test_sorted_return():
    fn = sort_return(yield_things)
    actual = fn(1, 8, 2, 4, 5, 9, 3)
    assert actual == (1, 2, 3, 4, 5, 8, 9)


def test_flatten_return():
    fn = flatten_return(yield_things)
    actual = fn((1, 3, 4), (2, 1), (8, 5))
    assert actual == (1, 3, 4, 2, 1, 8, 5)


def test_reversed_return():
    fn = reversed_return(yield_things)
    actual = fn(1, 5, 2, 4, 3)
    assert actual == (3, 4, 2, 5, 1)
