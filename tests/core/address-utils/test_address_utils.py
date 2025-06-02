import pytest

from faster_eth_utils.address import (
    is_address,
    is_binary_address,
    is_canonical_address,
    is_checksum_address,
    is_checksum_formatted_address,
    is_hex_address,
    is_normalized_address,
    is_same_address,
    to_canonical_address,
    to_checksum_address,
    to_normalized_address,
)


@pytest.mark.parametrize(
    "args,is_any,is_hexstr,is_binary",
    (
        # weird values
        (lambda: None, False, False, False),
        ({}, False, False, False),
        ("function", False, False, False),
        (b"function", False, False, False),
        # null address
        ("0x0000000000000000000000000000000000000000", True, True, False),
        (b"0x0000000000000000000000000000000000000000", False, False, False),
        # normalized
        ("0xc6d9d2cd449a754c494264e1809c50e34d64562b", True, True, False),
        (b"0xc6d9d2cd449a754c494264e1809c50e34d64562b", False, False, False),
        # normalized - unprefixed
        ("c6d9d2cd449a754c494264e1809c50e34d64562b", True, True, False),
        (b"c6d9d2cd449a754c494264e1809c50e34d64562b", False, False, False),
        # checksummed - valid
        ("0x5B2063246F2191f18F2675ceDB8b28102e957458", True, True, False),
        (b"0x5B2063246F2191f18F2675ceDB8b28102e957458", False, False, False),
        ("0x5b2063246F2191f18F2675ceDB8b28102e957458", True, True, False),
        # checksummed - invalid
        (b"0x5b2063246F2191f18F2675ceDB8b28102e957458", False, False, False),
        # too short - unprefixed
        ("c6d9d2cd449a754c494264e1809c50e34d64562", False, False, False),
        (b"c6d9d2cd449a754c494264e1809c50e34d64562", False, False, False),
        # too short
        ("0xc6d9d2cd449a754c494264e1809c50e34d64562", False, False, False),
        (b"0xc6d9d2cd449a754c494264e1809c50e34d64562", False, False, False),
        # too long
        ("0xc6d9d2cd449a754c494264e1809c50e34d64562bc", False, False, False),
        (b"0xc6d9d2cd449a754c494264e1809c50e34d64562bc", False, False, False),
        # too long - unprefixed
        ("c6d9d2cd449a754c494264e1809c50e34d64562bc", False, False, False),
        (b"c6d9d2cd449a754c494264e1809c50e34d64562bc", False, False, False),
        # is_binary_address
        (
            "\xd3\xcd\xa9\x13\xde\xb6\xf6yg\xb9\x9dg\xac\xdf\xa1q,)6\x01",
            False,
            False,
            False,
        ),
        (
            b"\xd3\xcd\xa9\x13\xde\xb6\xf6yg\xb9\x9dg\xac\xdf\xa1q,)6\x01",
            True,
            False,
            True,
        ),
        # null 30 bytes
        (
            "0x0000000000000000000000000000000000000000000000000000000000000000",
            False,
            False,
            False,
        ),
        (
            b"0x0000000000000000000000000000000000000000000000000000000000000000",
            False,
            False,
            False,
        ),
        (b"\x00" * 32, False, False, False),
        # too short
        ("0xc6d9d2cd449a754c494264e1809c50e34d6456", False, False, False),
        ("0xc6d9d2cd449a754c494264e1809c50e34d64562", False, False, False),
        (b"0xc6d9d2cd449a754c494264e1809c50e34d64562", False, False, False),
        # hexstr
        ("66756e6374696f6e", False, False, False),
        (
            "307830303030303030303030303030303030303030303030303030303030303030303030303030303030",  # noqa: E501
            False,
            False,
            False,
        ),  # null address
        (
            "307863366439643263643434396137353463343934323634653138303963353065333464363435363262",  # noqa: E501
            False,
            False,
            False,
        ),  # normalized
    ),
)
def test_is_address(args, is_any, is_hexstr, is_binary):
    assert is_address(args) == is_any
    assert is_hex_address(args) == is_hexstr
    assert is_binary_address(args) == is_binary


@pytest.mark.parametrize(
    "value,expected",
    [
        ("0x52908400098527886E0F7030069857D2E4169EE7", True),
        ("0x8617E340B3D01FA5F11F306F4090FD50E238070D", True),
        ("0xde709f2102306220921060314715629080e2fb77", True),
        ("0x27b1fdb04752bbc536007a920d24acb045561c26", True),
        ("0x5aAeb6053F3E94C9b9A09f33669435E7Ef1BeAed", True),
        ("0xfB6916095ca1df60bB79Ce92cE3Ea74c37c5d359", True),
        ("0xdbF03B407c01E7cD3CBea99509d93f8DDDC8C6FB", True),
        ("0xD1220A0cf47c7B9Be7A2E6BA89F429762e7b9aDb", True),
        ("0xd3cda913deb6f67967b99d67acdfa1712c293601", False),
        ("0xD3CDA913DEB6F67967B99D67ACDFA1712C293601", False),
        ("0XD1220A0CF47C7B9BE7A2E6BA89F429762E7B9ADB", False),
        ("0xd1220a0cf47c7b9be7a2e6ba89f429762e7b9adb", False),
        (b"0x52908400098527886E0F7030069857D2E4169EE7", False),
        (b"0xd1220a0cf47c7b9be7a2e6ba89f429762e7b9adb", False),
    ],
)
def test_is_checksum_address(value, expected):
    assert is_checksum_address(value) is expected


@pytest.mark.parametrize(
    "value,expected",
    [
        ("0x5aAeb6053F3E94C9b9A09f33669435E7Ef1BeAed", True),
        ("0xd3CdA913deB6f67967B99D67aCDFa1712C293601", True),
        ("0xfB6916095ca1df60bB79Ce92cE3Ea74c37c5d359", True),
        ("0xdbF03B407c01E7cD3CBea99509d93f8DDDC8C6FB", True),
        ("0xD1220A0cf47c7B9Be7A2E6BA89F429762e7b9aDb", True),
        ("0x52908400098527886E0F7030069857D2E4169EE7", False),
        ("0x8617E340B3D01FA5F11F306F4090FD50E238070D", False),
        ("0xde709f2102306220921060314715629080e2fb77", False),
        ("0x27b1fdb04752bbc536007a920d24acb045561c26", False),
        ("0XD1220A0CF47C7B9BE7A2E6BA89F429762E7B9ADB", False),
        ("0xd1220a0cf47c7b9be7a2e6ba89f429762e7b9adb", False),
        (b"0x5aAeb6053F3E94C9b9A09f33669435E7Ef1BeAed", False),
        (b"0XD1220A0CF47C7B9BE7A2E6BA89F429762E7B9ADB", False),
        (b"0xd1220a0cf47c7b9be7a2e6ba89f429762e7b9adb", False),
    ],
)
def test_is_checksum_formatted_address(value, expected):
    assert is_checksum_formatted_address(value) is expected


@pytest.mark.parametrize(
    "value,expected",
    [
        (lambda: None, False),
        ("function", False),
        ({}, False),
        (b"0xc6d9d2cd449a754c494264e1809c50e34d64562b", False),
        (b"c6d9d2cd449a754c494264e1809c50e34d64562b", False),
        (b"0xd3cda913deb6f67967b99d67acdfa1712c293601", False),
        (
            "307863366439643263643434396137353463343934323634653138303963353065333464363435363262",  # noqa: E501
            False,
        ),
        (
            "63366439643263643434396137353463343934323634653138303963353065333464363435363262",  # noqa: E501
            False,
        ),
        (
            "307864336364613931336465623666363739363762393964363761636466613137313263323933363031",  # noqa: E501
            False,
        ),
        ("0xc6d9d2cd449a754c494264e1809c50e34d64562b", True),
        ("c6d9d2cd449a754c494264e1809c50e34d64562b", False),
        ("0xd3cda913deb6f67967b99d67acdfa1712c293601", True),
        ("0xd3CdA913deB6f67967B99D67aCDFa1712C293601", False),
        ("0xD3CDA913DEB6F67967B99D67ACDFA1712C293601", False),
        ("0xde709f2102306220921060314715629080e2fb77", True),
    ],
)
def test_is_normalized_address(value, expected):
    assert is_normalized_address(value) is expected


@pytest.mark.parametrize(
    "value,expected",
    (
        (
            "0xc6d9d2cd449a754c494264e1809c50e34d64562b",
            "0xc6d9d2cd449a754c494264e1809c50e34d64562b",
        ),
        (
            "0XC6D9D2CD449A754C494264E1809C50E34D64562B",
            "0xc6d9d2cd449a754c494264e1809c50e34d64562b",
        ),
        (
            "C6D9D2CD449A754C494264E1809C50E34D64562B",
            "0xc6d9d2cd449a754c494264e1809c50e34d64562b",
        ),
    ),
)
def test_to_normalized_address(value, expected):
    assert to_normalized_address(value) == expected


@pytest.mark.parametrize(
    "value,expected",
    (
        (
            "0xd3cda913deb6f67967b99d67acdfa1712c293601",
            "0xd3CdA913deB6f67967B99D67aCDFa1712C293601",
        ),
        (
            "0xD3CDA913DEB6F67967B99D67ACDFA1712C293601",
            "0xd3CdA913deB6f67967B99D67aCDFa1712C293601",
        ),
        (
            "0xd3CdA913deB6f67967B99D67aCDFa1712C293601",
            "0xd3CdA913deB6f67967B99D67aCDFa1712C293601",
        ),
        (
            b"\xd3\xcd\xa9\x13\xde\xb6\xf6yg\xb9\x9dg\xac\xdf\xa1q,)6\x01",
            "0xd3CdA913deB6f67967B99D67aCDFa1712C293601",
        ),
        (
            "0xc6d9d2cd449a754c494264e1809c50e34d64562b",
            "0xc6d9d2cD449A754c494264e1809c50e34D64562b",
        ),
        (
            "c6d9d2cd449a754c494264e1809c50e34d64562b",
            "0xc6d9d2cD449A754c494264e1809c50e34D64562b",
        ),
        (
            b"\xc6\xd9\xd2\xcdD\x9auLIBd\xe1\x80\x9cP\xe3MdV+",
            "0xc6d9d2cD449A754c494264e1809c50e34D64562b",
        ),
    ),
)
def test_to_checksum_address(value, expected):
    assert to_checksum_address(value) == expected


@pytest.mark.parametrize(
    "address1,address2,expected",
    (
        (
            "0xc6d9d2cd449a754c494264e1809c50e34d64562b",
            "0xc6d9d2cD449A754c494264e1809c50e34D64562b",
            True,
        ),
        (
            "c6d9d2cd449a754c494264e1809c50e34d64562b",
            "0xc6d9d2cD449A754c494264e1809c50e34D64562b",
            True,
        ),
        (
            "0xc6d9d2cd449a754c494264e1809c50e34d64562b",
            "0xc305c901078781c232a2a521c2af7980f8385ee9",
            False,
        ),
        (
            "C6D9D2CD449A754C494264E1809C50E34D64562B",
            "0xc6d9d2cd449a754c494264e1809c50e34d64562b",
            True,
        ),
    ),
)
def test_is_same_address(address1, address2, expected):
    assert is_same_address(address1, address2) == expected


@pytest.mark.parametrize(
    "value,expected",
    (
        (
            "0xd3cda913deb6f67967b99d67acdfa1712c293601",
            b"\xd3\xcd\xa9\x13\xde\xb6\xf6yg\xb9\x9dg\xac\xdf\xa1q,)6\x01",
        ),
        (
            "0xD3CDA913DEB6F67967B99D67ACDFA1712C293601",
            b"\xd3\xcd\xa9\x13\xde\xb6\xf6yg\xb9\x9dg\xac\xdf\xa1q,)6\x01",
        ),
        (
            b"\xd3\xcd\xa9\x13\xde\xb6\xf6yg\xb9\x9dg\xac\xdf\xa1q,)6\x01",
            b"\xd3\xcd\xa9\x13\xde\xb6\xf6yg\xb9\x9dg\xac\xdf\xa1q,)6\x01",
        ),
    ),
)
def test_to_canonical_address(value, expected):
    assert to_canonical_address(value) == expected


@pytest.mark.parametrize(
    "value,expected",
    (
        ("\xd3\xcd\xa9\x13\xde\xb6\xf6yg\xb9\x9dg\xac\xdf\xa1q,)6\x01", False),
        (b"\xd3\xcd\xa9\x13\xde\xb6\xf6yg\xb9\x9dg\xac\xdf\xa1q,)6\x02", True),
        ("0xd3cda913deb6f67967b99d67acdfa1712c293601", False),
        (b"0xd3cda913deb6f67967b99d67acdfa1712c293601", False),
    ),
)
def test_is_canonical_address(value, expected):
    assert is_canonical_address(value) == expected
