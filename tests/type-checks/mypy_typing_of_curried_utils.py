from typing import (
    Any,
    List,
)
from eth_utils.curried import (
    apply_formatter_if,
    apply_one_of_formatters,
)

from eth_utils import (
    is_list_like,
    is_string,
)


def i_put_my_thing_down_flip_it_and_reverse_it(lyric: List[str]) -> str:
    return "".join(reversed(lyric))


CONDITION_FORMATTER_PAIRS = (
    (is_list_like, tuple),
    (is_string, i_put_my_thing_down_flip_it_and_reverse_it),
)


apply_formatter_if(is_string)
apply_formatter_if(is_string, bool)
apply_formatter_if(is_string, bool, 1)



apply_one_of_formatters(CONDITION_FORMATTER_PAIRS)
apply_one_of_formatters(CONDITION_FORMATTER_PAIRS, "my thing")
