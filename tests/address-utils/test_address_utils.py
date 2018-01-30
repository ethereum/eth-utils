import pytest

from eth_utils.address import (
    is_address,
    is_binary_address,
    is_canonical_address,
    is_checksum_address,
    is_checksum_formatted_address,
    is_hex_address,
    is_normalized_address,
    is_same_address,
    is_32byte_address,
    to_canonical_address,
    to_checksum_address,
    to_normalized_address,
)


@pytest.mark.parametrize(
    "args,is_any,is_hex,is_binary,is_32byte",
    (
        ({'primitive': b'function'}, False, False, False, False),
        ({'primitive': b'0x0000000000000000000000000000000000000000'}, True, True, False, False), # null address
        ({'primitive': b'0xc6d9d2cd449a754c494264e1809c50e34d64562b'}, True, True, False, False), # normalized
        ({'primitive': b'c6d9d2cd449a754c494264e1809c50e34d64562b'}, True, True, False, False), # normalized - unprefixed
        ({'primitive': b'0x5B2063246F2191f18F2675ceDB8b28102e957458'}, True, True, False, False), # checksummed - valid
        ({'primitive': b'0x5b2063246F2191f18F2675ceDB8b28102e957458'}, False, True, False, False), # checksummed - invalid
        ({'primitive': b'c6d9d2cd449a754c494264e1809c50e34d64562'}, False, False, False, False), # too short - unprefixed
        ({'primitive': b'0xc6d9d2cd449a754c494264e1809c50e34d64562'}, False, False, False, False), # too short
        ({'primitive': b'0xc6d9d2cd449a754c494264e1809c50e34d64562bc'}, False, False, False, False), # too long
        ({'primitive': b'c6d9d2cd449a754c494264e1809c50e34d64562bc'}, False, False, False, False), # too long - unprefixed
        ({'primitive': b'0x000000000000000000000000c305c901078781c232a2a521c2af7980f8385ee9'}, True, False, False, True), # padded hex
        ({'primitive': b'\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00'}, False, False, False, False), # null 30 bytes
        ({'primitive': b'0x0000000000000000000000000000000000000000000000000000000000000000'}, False, False, False, False),
        ({'primitive': b'0xc6d9d2cd449a754c494264e1809c50e34d64562b'}, True, True, False, False),
        ({'primitive': b'0xc6d9d2cd449a754c494264e1809c50e34d64562'}, False, False, False, False), # too short
        ({'hexstr': '66756e6374696f6e'}, False, False, False, False),
        ({'hexstr': '307830303030303030303030303030303030303030303030303030303030303030303030303030303030'}, True, True, False, False), # null address
        ({'hexstr': '307863366439643263643434396137353463343934323634653138303963353065333464363435363262'}, True, True, False, False), # normalized
        ({'text': 'function'}, False, False, False, False),
        ({'text': '0x0000000000000000000000000000000000000000'}, True, True, False, False), # null address
        ({'text': '0xc6d9d2cd449a754c494264e1809c50e34d64562b'}, True, True, False, False), # normalized
        ({'text': 'c6d9d2cd449a754c494264e1809c50e34d64562b'}, True, True, False, False), # normalized - unprefixed
        ({'text': '0x5B2063246F2191f18F2675ceDB8b28102e957458'}, True, True, False, False), # checksummed - valid
        ({'text': '0x5b2063246F2191f18F2675ceDB8b28102e957458'}, False, True, False, False), # checksummed - invalid
        ({'text': '0xc6d9d2cd449a754c494264e1809c50e34d64562'}, False, False, False, False), # too short
        ({'text': 'c6d9d2cd449a754c494264e1809c50e34d64562'}, False, False, False, False), # too short - unprefixed
        ({'text': '0xc6d9d2cd449a754c494264e1809c50e34d64562bc'}, False, False, False, False), # too long
        ({'text': 'c6d9d2cd449a754c494264e1809c50e34d64562bc'}, False, False, False, False), # too long - unprefixed
        ({'text': '0x000000000000000000000000c305c901078781c232a2a521c2af7980f8385ee9'}, True, False, False, True), # padded hex
        ({'text': '\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00'}, False, False, False, False), # null 30 bytes
        ({'text': '0x0000000000000000000000000000000000000000000000000000000000000000'}, False, False, False, False),
        ({'text': '0xc6d9d2cd449a754c494264e1809c50e34d64562b'}, True, True, False, False),
        ({'text': '0xc6d9d2cd449a754c494264e1809c50e34d64562'}, False, False, False, False), # too short
    )
)
def test_is_address(args, is_any, is_hex, is_binary, is_32byte):
    assert is_address(**args) == is_any
    assert is_hex_address(**args) == is_hex
    assert is_binary_address(**args) == is_binary
    assert is_32byte_address(**args) == is_32byte


@pytest.mark.parametrize(
    "value,expected",
    [
        ({'primitive': b'0x52908400098527886E0F7030069857D2E4169EE7'}, True),
        ({'primitive': b'0x8617E340B3D01FA5F11F306F4090FD50E238070D'}, True),
        ({'primitive': b'0xde709f2102306220921060314715629080e2fb77'}, True),
        ({'primitive': b'0x27b1fdb04752bbc536007a920d24acb045561c26'}, True),
        ({'primitive': b'0x5aAeb6053F3E94C9b9A09f33669435E7Ef1BeAed'}, True),
        ({'primitive': b'0xfB6916095ca1df60bB79Ce92cE3Ea74c37c5d359'}, True),
        ({'primitive': b'0xdbF03B407c01E7cD3CBea99509d93f8DDDC8C6FB'}, True),
        ({'primitive': b'0xD1220A0cf47c7B9Be7A2E6BA89F429762e7b9aDb'}, True),
        ({'primitive': b'0XD1220A0CF47C7B9BE7A2E6BA89F429762E7B9ADB'}, False),
        ({'primitive': b'0xd1220a0cf47c7b9be7a2e6ba89f429762e7b9adb'}, False),
        ({'hexstr': '305844313232304130434634374337423942453741324536424138394634323937363245374239414442'}, False),
        ({'hexstr': '307864313232306130636634376337623962653761326536626138396634323937363265376239616462'}, False),
        ({'hexstr': '307835323930383430303039383532373838364530463730333030363938353744324534313639454537'}, True),
        ({'hexstr': '307866423639313630393563613164663630624237394365393263453345613734633337633564333539'}, True),
        ({'text': '0x52908400098527886E0F7030069857D2E4169EE7'}, True),
        ({'text': '0x8617E340B3D01FA5F11F306F4090FD50E238070D'}, True),
        ({'text': '0xde709f2102306220921060314715629080e2fb77'}, True),
        ({'text': '0x27b1fdb04752bbc536007a920d24acb045561c26'}, True),
        ({'text': '0x5aAeb6053F3E94C9b9A09f33669435E7Ef1BeAed'}, True),
        ({'text': '0xfB6916095ca1df60bB79Ce92cE3Ea74c37c5d359'}, True),
        ({'text': '0xdbF03B407c01E7cD3CBea99509d93f8DDDC8C6FB'}, True),
        ({'text': '0xD1220A0cf47c7B9Be7A2E6BA89F429762e7b9aDb'}, True),
        ({'text': '0XD1220A0CF47C7B9BE7A2E6BA89F429762E7B9ADB'}, False),
        ({'text': '0xd1220a0cf47c7b9be7a2e6ba89f429762e7b9adb'}, False),
    ]
)
def test_is_checksum_address(value, expected):
    assert is_checksum_address(**value) is expected


@pytest.mark.parametrize(
    "value,expected",
    [
        ({'primitive': b'0x52908400098527886E0F7030069857D2E4169EE7'}, False),
        ({'primitive': b'0x8617E340B3D01FA5F11F306F4090FD50E238070D'}, False),
        ({'primitive': b'0xde709f2102306220921060314715629080e2fb77'}, False),
        ({'primitive': b'0x27b1fdb04752bbc536007a920d24acb045561c26'}, False),
        ({'primitive': b'0x5aAeb6053F3E94C9b9A09f33669435E7Ef1BeAed'}, True),
        ({'primitive': b'0xfB6916095ca1df60bB79Ce92cE3Ea74c37c5d359'}, True),
        ({'primitive': b'0xdbF03B407c01E7cD3CBea99509d93f8DDDC8C6FB'}, True),
        ({'primitive': b'0xD1220A0cf47c7B9Be7A2E6BA89F429762e7b9aDb'}, True),
        ({'primitive': b'0XD1220A0CF47C7B9BE7A2E6BA89F429762E7B9ADB'}, False),
        ({'primitive': b'0xd1220a0cf47c7b9be7a2e6ba89f429762e7b9adb'}, False),
        ({'hexstr': '307866423639313630393563613164663630624237394365393263453345613734633337633564333539'}, True),
        ({'hexstr': '307864624630334234303763303145376344334342656139393530396439336638444444433843364642'}, True),
        ({'hexstr': '307844313232304130636634376337423942653741324536424138394634323937363265376239614462'}, True),
        ({'hexstr': '305844313232304130434634374337423942453741324536424138394634323937363245374239414442'}, False),
        ({'hexstr': '307864313232306130636634376337623962653761326536626138396634323937363265376239616462'}, False),
        ({'text': '0x52908400098527886E0F7030069857D2E4169EE7'}, False),
        ({'text': '0x8617E340B3D01FA5F11F306F4090FD50E238070D'}, False),
        ({'text': '0xde709f2102306220921060314715629080e2fb77'}, False),
        ({'text': '0x27b1fdb04752bbc536007a920d24acb045561c26'}, False),
        ({'text': '0x5aAeb6053F3E94C9b9A09f33669435E7Ef1BeAed'}, True),
        ({'text': '0xfB6916095ca1df60bB79Ce92cE3Ea74c37c5d359'}, True),
        ({'text': '0xdbF03B407c01E7cD3CBea99509d93f8DDDC8C6FB'}, True),
        ({'text': '0xD1220A0cf47c7B9Be7A2E6BA89F429762e7b9aDb'}, True),
        ({'text': '0XD1220A0CF47C7B9BE7A2E6BA89F429762E7B9ADB'}, False),
        ({'text': '0xd1220a0cf47c7b9be7a2e6ba89f429762e7b9adb'}, False),
    ]
)
def test_is_checksum_formatted_address(value, expected):
    assert is_checksum_formatted_address(**value) is expected


@pytest.mark.parametrize(
    "value,expected",
    [
        ({'primitive': b'0xc6d9d2cd449a754c494264e1809c50e34d64562b'}, False),
        ({'primitive': b'c6d9d2cd449a754c494264e1809c50e34d64562b'}, False),
        ({'primitive': b'0xd3cda913deb6f67967b99d67acdfa1712c293601'}, False),
        ({'hexstr': '307863366439643263643434396137353463343934323634653138303963353065333464363435363262'}, False),
        ({'hexstr': '63366439643263643434396137353463343934323634653138303963353065333464363435363262'}, False),
        ({'hexstr': '307864336364613931336465623666363739363762393964363761636466613137313263323933363031'}, False),
        ({'text': '0xc6d9d2cd449a754c494264e1809c50e34d64562b'}, True),
        ({'text': 'c6d9d2cd449a754c494264e1809c50e34d64562b'}, False),
        ({'text': '0xd3cda913deb6f67967b99d67acdfa1712c293601'}, True),
        ({'text': '0xd3CdA913deB6f67967B99D67aCDFa1712C293601'}, False),
        ({'text': '0xD3CDA913DEB6F67967B99D67ACDFA1712C293601'}, False),
        ({'text': '0xde709f2102306220921060314715629080e2fb77'}, True),
    ]
)
def test_is_normalized_address(value, expected):
    assert is_normalized_address(**value) is expected


@pytest.mark.parametrize(
    "value,expected",
    (
        (
            {'primitive': b'0xc6d9d2cd449a754c494264e1809c50e34d64562b'},
            '0xc6d9d2cd449a754c494264e1809c50e34d64562b',
        ),
        (
            {'primitive': b'0XC6D9D2CD449A754C494264E1809C50E34D64562B'},
            '0xc6d9d2cd449a754c494264e1809c50e34d64562b',
        ),
        (
            {'primitive': b'c6d9d2cd449a754c494264e1809c50e34d64562b'},
            '0xc6d9d2cd449a754c494264e1809c50e34d64562b',
        ),
        (
            {'primitive': b'0x000000000000000000000000c305c901078781c232a2a521c2af7980f8385ee9'},
            '0xc305c901078781c232a2a521c2af7980f8385ee9',
        ),
        (
            {'primitive': b'000000000000000000000000c305c901078781c232a2a521c2af7980f8385ee9'},
            '0xc305c901078781c232a2a521c2af7980f8385ee9',
        ),
        (
            {'hexstr': '305843364439443243443434394137353443343934323634453138303943353045333444363435363242'},
            '0xc6d9d2cd449a754c494264e1809c50e34d64562b',
        ),
        (
            {'hexstr': '307863366439643263643434396137353463343934323634653138303963353065333464363435363262'},
            '0xc6d9d2cd449a754c494264e1809c50e34d64562b',
        ),
        (
            {'hexstr': '307830303030303030303030303030303030303030303030303063333035633930313037383738316332333261326135323163326166373938306638333835656539'},
            '0xc305c901078781c232a2a521c2af7980f8385ee9',
        ),
        (
            {'text': '0xc6d9d2cd449a754c494264e1809c50e34d64562b'},
            '0xc6d9d2cd449a754c494264e1809c50e34d64562b',
        ),
        (
            {'text': '0XC6D9D2CD449A754C494264E1809C50E34D64562B'},
            '0xc6d9d2cd449a754c494264e1809c50e34d64562b',
        ),
        (
            {'text': 'C6D9D2CD449A754C494264E1809C50E34D64562B'},
            '0xc6d9d2cd449a754c494264e1809c50e34d64562b',
        ),
        (
            {'text': '0x000000000000000000000000c305c901078781c232a2a521c2af7980f8385ee9'},
            '0xc305c901078781c232a2a521c2af7980f8385ee9',
        ),
        (
            {'text': 'C6D9D2CD449A754C494264E1809C50E34D64562B'},
            '0xc6d9d2cd449a754c494264e1809c50e34d64562b',
        ),
        (
            {'text': '0x000000000000000000000000c305c901078781c232a2a521c2af7980f8385ee9'},
            '0xc305c901078781c232a2a521c2af7980f8385ee9',
        ),
    )
)
def test_to_normalized_address(value, expected):
    assert to_normalized_address(**value) == expected


@pytest.mark.parametrize(
    "value,expected",
    (
        (
            {'primitive': b'0xc6d9d2cd449a754c494264e1809c50e34d64562b'},
            '0xc6d9d2cD449A754c494264e1809c50e34D64562b',
        ),
        (
            {'primitive': b'c6d9d2cd449a754c494264e1809c50e34d64562b'},
            '0xc6d9d2cD449A754c494264e1809c50e34D64562b',
        ),
        (
            {'hexstr': '307863366439643263643434396137353463343934323634653138303963353065333464363435363262'},
            '0xc6d9d2cD449A754c494264e1809c50e34D64562b',
        ),
        (
            {'hexstr': '63366439643263643434396137353463343934323634653138303963353065333464363435363262'},
            '0xc6d9d2cD449A754c494264e1809c50e34D64562b',
        ),
        (
            {'text': '0xc6d9d2cd449a754c494264e1809c50e34d64562b'},
            '0xc6d9d2cD449A754c494264e1809c50e34D64562b',
        ),
        (
            {'text': 'c6d9d2cd449a754c494264e1809c50e34d64562b'},
            '0xc6d9d2cD449A754c494264e1809c50e34D64562b',
        ),
    )
)
def test_to_checksum_address(value, expected):
    assert to_checksum_address(**value) == expected


@pytest.mark.parametrize(
    "address1,address2,expected",
    (
	(
	    {'primitive': b'0xc6d9d2cd449a754c494264e1809c50e34d64562b'},
	    {'primitive': b'0xc6d9d2cD449A754c494264e1809c50e34D64562b'},
	    True,
	),
	(
	    {'text': '0xc6d9d2cd449a754c494264e1809c50e34d64562b'},
	    {'primitive': b'0xc6d9d2cD449A754c494264e1809c50e34D64562b'},
	    True,
	),
	(
	    {'hexstr': '307863366439643263643434396137353463343934323634653138303963353065333464363435363262'},
	    {'text': '0xc6d9d2cD449A754c494264e1809c50e34D64562b'},
	    True,
	),
	(
	    {'text': 'c6d9d2cd449a754c494264e1809c50e34d64562b'},
	    {'text': '0xc6d9d2cD449A754c494264e1809c50e34D64562b'},
	    True,
	),
	(
	    {'primitive': b'c6d9d2cd449a754c494264e1809c50e34d64562b'},
	    {'text': '0xc6d9d2cD449A754c494264e1809c50e34D64562b'},
	    True,
	),
	(
	    {'primitive': b'0xc6d9d2cd449a754c494264e1809c50e34d64562b'},
	    {'text': '0xc305c901078781c232a2a521c2af7980f8385ee9'},
	    False,
	),
	(
	    {'text': 'C6D9D2CD449A754C494264E1809C50E34D64562B'},
	    {'primitive': b'0xc6d9d2cd449a754c494264e1809c50e34d64562b'},
	    True,
	),
	(
	    {'primitive': b'0x000000000000000000000000c305c901078781c232a2a521c2af7980f8385ee9'},
	    {'text': '0xc305c901078781c232a2a521c2af7980f8385ee9'},
	    True,
	),
	(
	    {'primitive': b'0x000000000000000000000000c305c901078781c232a2a521c2af7980f8385ee9'},
	    {'hexstr': '307863333035633930313037383738316332333261326135323163326166373938306638333835656539'},
	    True,
	),
	(
	    {'primitive': b'0x000000000000000000000000c305c901078781c232a2a521c2af7980f8385ee9'},
	    {'text': '0xc6d9d2cd449a754c494264e1809c50e34d64562b'},
	    False,
	),
    )
)
def test_is_same_address(address1, address2, expected):
    assert is_same_address(address1, address2) == expected


@pytest.mark.parametrize(
    'value,expected',
    (
	(
	    {'text': '0xd3cda913deb6f67967b99d67acdfa1712c293601'},
	    b'\xd3\xcd\xa9\x13\xde\xb6\xf6yg\xb9\x9dg\xac\xdf\xa1q,)6\x01',
	),
	(
	    {'text': '0xD3CDA913DEB6F67967B99D67ACDFA1712C293601'},
	    b'\xd3\xcd\xa9\x13\xde\xb6\xf6yg\xb9\x9dg\xac\xdf\xa1q,)6\x01',
	),
	(
	    {'hexstr': '307864336364613931336465623666363739363762393964363761636466613137313263323933363031'},
	    b'\xd3\xcd\xa9\x13\xde\xb6\xf6yg\xb9\x9dg\xac\xdf\xa1q,)6\x01',
	),
	(
	    {'primitive': b'0xd3cda913deb6f67967b99d67acdfa1712c293601'},
	    b'\xd3\xcd\xa9\x13\xde\xb6\xf6yg\xb9\x9dg\xac\xdf\xa1q,)6\x01',
	),
    ),
)
def test_to_canonical_address(value, expected):
    assert to_canonical_address(**value) == expected


@pytest.mark.parametrize(
    'value,expected',
    (
	({'primitive': b'\x61\x62\x63\x64\x65\x66\x67\x68\x69\x6A\x6B\x6C\x6D\x6E\x6F\x70\x71\x72\x73\x74'}, True),
	({'hexstr': '5c7864335c7863645c7861395c7831335c7864655c7862365c78663679675c7862395c783964675c7861635c7864665c786131712c29365c7830317864'}, False),
	({'text': '\xd3\xcd\xa9\x13\xde\xb6\xf6yg\xb9\x9dg\xac\xdf\xa1q,)6\x01'}, False),
	({'text': '0xd3cda913deb6f67967b99d67acdfa1712c293601'}, False),
	({'text': 'notAddress'}, False),
    )
)
def test_is_canonical_address(value, expected):
    assert is_canonical_address(**value) == expected 
