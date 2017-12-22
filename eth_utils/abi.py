from __future__ import absolute_import

from .crypto import keccak


from typing import Dict, List, Union
def _abi_to_signature(abi: Dict[str, Union[str, List[Dict[str, str]], bool, List[Dict[str, Union[bool, str]]]]]) -> str:
    function_signature = "{fn_name}({fn_input_types})".format(
        fn_name=abi['name'],
        fn_input_types=','.join([
            arg['type'] for arg in abi.get('inputs', [])
        ]),
    )
    return function_signature


def function_signature_to_4byte_selector(event_signature: str) -> bytes:
    return keccak(event_signature.replace(' ', ''))[:4]


def function_abi_to_4byte_selector(function_abi: Dict[str, Union[str, List[Dict[str, str]]]]) -> bytes:
    function_signature = _abi_to_signature(function_abi)
    return function_signature_to_4byte_selector(function_signature)


def event_signature_to_log_topic(event_signature: str) -> bytes:
    return keccak(event_signature.replace(' ', ''))


def event_abi_to_log_topic(event_abi: Dict[str, Union[bool, str, List[Dict[str, Union[bool, str]]]]]) -> bytes:
    event_signature = _abi_to_signature(event_abi)
    return event_signature_to_log_topic(event_signature)
