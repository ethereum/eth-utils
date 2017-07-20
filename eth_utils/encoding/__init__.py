from __future__ import absolute_import

import sys

from eth_utils.string import (
    force_bytes,
)


if sys.version_info.major == 2:
    from .py2 import (  # noqa: F401
        int_to_big_endian,
        big_endian_to_int as _big_endian_to_int,
    )
else:
    from .py3 import (  # noqa: F401
        int_to_big_endian,
        big_endian_to_int as _big_endian_to_int,
    )


def big_endian_to_int(value):
    return _big_endian_to_int(force_bytes(value))
