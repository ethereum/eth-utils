import pytest

from mypy import (
    api,
)

# Imported modules are checked separately by the library mypy lint job.
MYPY_ARGS = ["--ignore-missing-imports", "--follow-imports=silent"]
FIXTURE_DIR = "fixtures/mypy/"


def fixture_dir(val: str):
    return FIXTURE_DIR + val


def check_mypy_run(
    cmd_line: list[str],
    expected_out: str,
    expected_err: str = "",
    expected_returncode: int = 0,
) -> None:
    """Helper to run mypy and check the output."""
    out, err, returncode = api.run(cmd_line)
    assert out == expected_out, err
    assert err == expected_err, out
    assert returncode == expected_returncode, returncode


# Assert inferred types in the fixtures instead of matching reveal_type formatting.
@pytest.mark.parametrize(
    "fixture",
    (
        "to_tuple_decorator.py",
        "to_list_decorator.py",
        "to_set_decorator.py",
        "to_dict_decorator.py",
        "to_ordered_dict_decorator.py",
        "apply_to_return_value_decorator.py",
    ),
)
def test_type_inference(fixture: str) -> None:
    check_mypy_run(
        MYPY_ARGS + [fixture_dir(fixture)],
        "Success: no issues found in 1 source file\n",
    )
