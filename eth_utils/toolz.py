try:
    from cytoolz import (
        curry,
        compose,
    )
except ImportError:
    from toolz import (  # noqa: F401
        curry,
        compose,
    )
