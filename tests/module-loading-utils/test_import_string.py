from eth_utils.decorators import (
    combomethod,
)
from eth_utils.module_loading import (
    import_string,
)


def test_import_string():
    imported_combomethod = import_string("eth_utils.decorators.combomethod")
    assert imported_combomethod is combomethod
