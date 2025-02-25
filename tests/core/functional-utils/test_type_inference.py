import pytest
from typing import (
    List,
)

from mypy import (
    api,
)

MYPY_ARGS = ["--ignore-missing-imports"]
FIXTURE_DIR = "fixtures/mypy/"


def fixture_dir(val: str):
    return FIXTURE_DIR + val


def check_mypy_run(
    cmd_line: List[str],
    expected_out: str,
    expected_err: str = "",
    expected_returncode: int = 0,
) -> None:
    """Helper to run mypy and check the output."""
    out, err, returncode = api.run(cmd_line)
    assert out == expected_out, err
    assert err == expected_err, out
    assert returncode == expected_returncode, returncode


# The following tests all run code snippets through mypy that contain a
# `reveal_type` statement, and then match the mypy output against our expectations
@pytest.mark.parametrize(
    "fixture,message",
    (
        (
            fixture_dir("to_tuple_decorator.py"),
            fixture_dir(
                'to_tuple_decorator.py:16: note: Revealed type is "builtins.tuple[builtins.int, ...]"\nSuccess: no issues found in 1 source file\n'  # noqa: E501
            ),
        ),
        (
            fixture_dir("to_list_decorator.py"),
            fixture_dir(
                'to_list_decorator.py:16: note: Revealed type is "builtins.list[builtins.int]"\nSuccess: no issues found in 1 source file\n'  # noqa: E501
            ),
        ),
        (
            fixture_dir("to_set_decorator.py"),
            fixture_dir(
                'to_set_decorator.py:16: note: Revealed type is "builtins.set[builtins.int]"\nSuccess: no issues found in 1 source file\n'  # noqa: E501
            ),
        ),
        (
            fixture_dir("to_dict_decorator.py"),
            fixture_dir(
                'to_dict_decorator.py:17: note: Revealed type is "builtins.dict[builtins.int, builtins.int]"\nSuccess: no issues found in 1 source file\n'  # noqa: E501
            ),
        ),
        (
            fixture_dir("to_ordered_dict_decorator.py"),
            fixture_dir(
                'to_ordered_dict_decorator.py:17: note: Revealed type is "collections.OrderedDict[builtins.int, builtins.int]"\nSuccess: no issues found in 1 source file\n'  # noqa: E501
            ),
        ),
        (
            fixture_dir("apply_to_return_value_decorator.py"),
            fixture_dir(
                'apply_to_return_value_decorator.py:20: note: Revealed type is "builtins.list[builtins.int]"\nSuccess: no issues found in 1 source file\n'  # noqa: E501
            ),
        ),
    ),
)
def test_type_inference(fixture, message):
    check_mypy_run(MYPY_ARGS + [fixture], message)
