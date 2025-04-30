def test_import_and_version():
    import eth_utils

    assert isinstance(eth_utils.__version__, str)
