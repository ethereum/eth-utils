from eth_utils import (
    replace_exceptions,
)
from eth_utils.curried import (
    replace_exceptions as curried_replace_exceptions,
)


@replace_exceptions({ValueError: TypeError})
def parse_integer(value: str, /, *, base: int = 10) -> int:
    return int(value, base)


integer: int = parse_integer("10")
hexadecimal: int = parse_integer("ff", base=16)

# These ignores must remain necessary under warn_unused_ignores. A decorator
# that erases its argument types would silently accept these invalid calls.
parse_integer(10)  # type: ignore[arg-type]
parse_integer("10", base="10")  # type: ignore[arg-type]
parse_integer()  # type: ignore[call-arg]
parse_integer(value="10")  # type: ignore[call-arg]
# mypy versions use different error codes for extra positional arguments.
parse_integer("10", 16)  # type: ignore
parse_integer("10", radix=16)  # type: ignore[call-arg]


class Parser:
    @replace_exceptions({ValueError: TypeError})
    def parse(self, value: str, *, base: int = 10) -> int:
        return int(value, base)


method_result: int = Parser().parse("ff", base=16)
Parser().parse(10)  # type: ignore[arg-type]
Parser().parse("10", radix=16)  # type: ignore[call-arg]


@curried_replace_exceptions({ValueError: TypeError})
def parse_curried(value: str) -> int:
    return int(value)


curried_result: int = parse_curried("10")
parse_curried(10)  # type: ignore[arg-type]
parse_curried()  # type: ignore[call-arg]
