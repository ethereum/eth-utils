try:
    from cytoolz import (
        curried as upstream_curried_toolz,
    )
except ImportError:
    from toolz import curried as upstream_curried_toolz

from eth_utils.curried import (
    toolz as imported_toolz_module,
)
import eth_utils.curried.toolz


def test_curried_toolz_module_is_importable_from_package():
    assert imported_toolz_module is eth_utils.curried.toolz


def test_curried_toolz_namespace_matches_upstream():
    expected = {
        name: value
        for name, value in vars(upstream_curried_toolz).items()
        if "__" not in name
    }
    actual = {
        name: value
        for name, value in vars(eth_utils.curried.toolz).items()
        if "__" not in name
    }

    assert actual == expected


def test_curried_toolz_dicttoolz_smoke_test():
    assert eth_utils.curried.toolz.get("count")({"count": 3}) == 3


def test_curried_toolz_functoolz_smoke_test():
    hexint = eth_utils.curried.toolz.compose(hex, int)

    assert hexint("10") == "0xa"


def test_curried_toolz_itertoolz_smoke_test():
    drop2 = eth_utils.curried.toolz.drop(2)

    assert list(drop2([4, 3, 2, 1])) == [2, 1]


def test_curried_toolz_recipe_smoke_test():
    windows = eth_utils.curried.toolz.sliding_window(2)([1, 2, 3, 4])

    assert tuple(windows) == ((1, 2), (2, 3), (3, 4))
