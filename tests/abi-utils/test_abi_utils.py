import pytest

from eth_utils.hexidecimal import (
    encode_hex,
)
from eth_utils.abi import (
    function_signature_to_4byte_selector,
    function_abi_to_4byte_selector,
    event_signature_to_log_topic,
    event_abi_to_log_topic,
)


FN_ABI_A = {
    'name': 'tokenLaunched',
    'type': 'function',
    'inputs': [],
}
FN_ABI_B = {
    'name': 'CEILING',
    'type': 'function',
    'inputs': [],
}
FN_ABI_C = {
    'name': 'Registrar',
    'type': 'function',
    'inputs': [
        {'type': 'address', 'name': 'a'},
        {'type': 'bytes32', 'name': 'b'},
        {'type': 'address', 'name': 'c'},
    ],
}


@pytest.mark.parametrize(
    'fn_abi,expected',
    (
        (FN_ABI_A, '0xde78e78a'),
        (FN_ABI_B, '0xc51bf934'),
        (FN_ABI_C, '0xa31d5580'),
    ),
)
def test_fn_abi_to_4byte_selector(fn_abi, expected):
    bytes_selector = function_abi_to_4byte_selector(fn_abi)
    hex_selector = encode_hex(bytes_selector)
    assert hex_selector == expected


@pytest.mark.parametrize(
    'signature,expected',
    (
        ('tokenLaunched()', '0xde78e78a'),
        ('CEILING()', '0xc51bf934'),
        ('Registrar(address,bytes32,address)', '0xa31d5580'),
    ),
)
def test_fn_signature_to_4byte_selector(signature, expected):
    bytes_selector = function_signature_to_4byte_selector(signature)
    hex_selector = encode_hex(bytes_selector)
    assert hex_selector == expected


EVENT_ABI_A = {
    "anonymous": False,
    "name": "Transfer",
    "type": "event",
    "inputs": [
        {"indexed": True, "name": "from", "type": "address"},
        {"indexed": True, "name": "to", "type": "address"},
        {"indexed": False, "name": "value", "type": "uint256"},
    ],
}


@pytest.mark.parametrize(
    'event_abi,expected',
    (
        (EVENT_ABI_A, '0xddf252ad1be2c89b69c2b068fc378daa952ba7f163c4a11628f55a4df523b3ef'),
    ),
)
def test_event_abi_to_log_topic(event_abi, expected):
    bytes_topic = event_abi_to_log_topic(event_abi)
    hex_topic = encode_hex(bytes_topic)
    assert hex_topic == expected


@pytest.mark.parametrize(
    'event_signature,expected',
    (
        (
            'Transfer(address,address,uint256)',
            '0xddf252ad1be2c89b69c2b068fc378daa952ba7f163c4a11628f55a4df523b3ef',
        ),
    ),
)
def test_event_signature_to_log_topic(event_signature, expected):
    bytes_topic = event_signature_to_log_topic(event_signature)
    hex_topic = encode_hex(bytes_topic)
    assert hex_topic == expected
