def test_import():
    import eth_utils

    assert isinstance(eth_utils.__version__, str)
