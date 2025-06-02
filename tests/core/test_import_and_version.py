def test_import_and_version():
    import faster_eth_utils

    assert isinstance(faster_eth_utils.__version__, str)
