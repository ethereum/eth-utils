try:
    from cytoolz import (
        curry,
        keyfilter,
        merge_with,
        valfilter,
    )
    from cytoolz.functoolz import (
        Compose,
        has_keywords,
        num_required_args,
    )
except ImportError:
    from toolz import curry, keyfilter, merge_with, valfilter
    from toolz.functoolz import Compose, has_keywords, num_required_args

import faster_eth_utils
import faster_eth_utils.curried


def enhanced_num_required_args(func):
    if isinstance(func, Compose):
        return enhanced_num_required_args(func.first)
    else:
        return num_required_args(func)


def enhanced_has_keywords(func):
    if isinstance(func, Compose):
        return enhanced_has_keywords(func.first)
    else:
        return has_keywords(func)


# heavily inspired by https://github.com/pytoolz/toolz/blob/20d8aefc0a5/toolz/tests/test_curried.py  # noqa: E501
def test_curried_namespace():
    def should_curry(value):
        if not callable(value) or isinstance(value, curry) or isinstance(value, type):
            return False
        if isinstance(value, type) and issubclass(value, Exception):
            return False
        nargs = enhanced_num_required_args(value)
        if nargs is None or nargs > 1:
            return True
        else:
            return nargs == 1 and enhanced_has_keywords(value)

    def curry_namespace(ns):
        return {
            name: curry(f) if should_curry(f) else f
            for name, f in ns.items()
            if "__" not in name
        }

    all_auto_curried = curry_namespace(vars(faster_eth_utils))

    inferred_namespace = valfilter(callable, all_auto_curried)
    curried_namespace = valfilter(callable, faster_eth_utils.curried.__dict__)

    if inferred_namespace != curried_namespace:
        missing = set(inferred_namespace) - set(curried_namespace)
        if missing:
            to_insert = sorted(f"{f}," for f in missing)
            raise AssertionError(
                "There are missing functions in eth_utils.curried:\n"
                + "\n".join(to_insert)
            )
        extra = set(curried_namespace) - set(inferred_namespace)
        if extra:
            raise AssertionError(
                "There are extra functions in eth_utils.curried:\n"
                + "\n".join(sorted(extra))
            )
        unequal = merge_with(list, inferred_namespace, curried_namespace)
        unequal = valfilter(lambda x: x[0] != x[1], unequal)
        to_curry = keyfilter(lambda x: should_curry(getattr(faster_eth_utils, x)), unequal)
        if to_curry:
            to_curry_formatted = sorted(f"{f} = curry({f})" for f in to_curry)
            raise AssertionError(
                "There are missing functions to curry in eth_utils.curried:\n"
                + "\n".join(to_curry_formatted)
            )
        elif unequal:
            not_to_curry_formatted = sorted(unequal)
            raise AssertionError(
                "Missing functions NOT to curry in eth_utils.curried:\n"
                + "\n".join(not_to_curry_formatted)
            )
        else:
            raise AssertionError(
                f"unexplained difference between {repr(inferred_namespace)} and "
                f"{repr(curried_namespace)}"
            )
