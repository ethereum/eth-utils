import pytest

from eth_utils import (
    apply_key_map,
)
from eth_utils.curried import (
    apply_key_map as curried_apply_key_map,
)


@pytest.mark.parametrize("mapper", [apply_key_map, curried_apply_key_map])
@pytest.mark.parametrize(
    "key_map, value",
    [
        ({"a": "x", "b": "x"}, {"a": 1, "b": 2}),
        ({"a": "x", "b": "x"}, {"b": 2, "a": 1}),
        ({"a": "b", "b": "b"}, {"a": 1, "b": 2}),
        ({"a": "x", "b": "x"}, {"a": 1, "b": 1}),
        ({"a": 0, "b": False}, {"a": 1, "b": 2}),
    ],
)
def test_rejects_colliding_remapped_keys(mapper, key_map, value):
    original = value.copy()
    with pytest.raises(KeyError, match="conflicting key"):
        mapper(key_map, value)
    assert value == original


@pytest.mark.parametrize(
    "key_map, value, expected",
    [
        ({"a": "x", "b": "x"}, {"a": 1}, {"x": 1}),
        ({"a": "x", "b": "x"}, {}, {}),
        ({"a": "b", "b": "a"}, {"a": 1, "b": 2}, {"b": 1, "a": 2}),
        ({"a": "b", "b": "c"}, {"a": 1, "b": 2}, {"b": 1, "c": 2}),
        ({"a": "a"}, {"a": 1, "b": 2}, {"a": 1, "b": 2}),
    ],
)
def test_noncolliding_key_maps(key_map, value, expected):
    assert apply_key_map(key_map, value) == expected
    assert curried_apply_key_map(key_map)(value) == expected
