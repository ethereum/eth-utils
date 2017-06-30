from __future__ import absolute_import

from .crypto import keccak


def _abi_to_signature(abi):
    function_signature = "{fn_name}({fn_input_types})".format(
        fn_name=abi['name'],
        fn_input_types=','.join([
            arg['type'] for arg in abi.get('inputs', [])
        ]),
    )
    return function_signature


def function_signature_to_4byte_selector(event_signature):
    return keccak(event_signature.replace(' ', ''))[:4]


def function_abi_to_4byte_selector(function_abi):
    function_signature = _abi_to_signature(function_abi)
    return function_signature_to_4byte_selector(function_signature)


def event_signature_to_log_topic(event_signature):
    return keccak(event_signature.replace(' ', ''))


def event_abi_to_log_topic(event_abi):
    event_signature = _abi_to_signature(event_abi)
    return event_signature_to_log_topic(event_signature)
