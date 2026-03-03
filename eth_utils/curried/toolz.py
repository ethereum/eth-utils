"""
Compatibility wrappers for the curried toolz API.
"""

try:
    from cytoolz import (
        curried as _curried_toolz,
    )
except ImportError:
    from toolz import (
        curried as _curried_toolz,
    )


globals().update(
    {name: value for name, value in vars(_curried_toolz).items() if "__" not in name}
)

del _curried_toolz
