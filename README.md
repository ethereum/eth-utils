# Etherum Utils

[![Join the chat at https://gitter.im/pipermerriam/ethereum-utils](https://badges.gitter.im/pipermerriam/ethereum-utils.svg)](https://gitter.im/pipermerriam/ethereum-utils?utm_source=badge&utm_medium=badge&utm_campaign=pr-badge&utm_content=badge)

[![Build Status](https://travis-ci.org/pipermerriam/ethereum-utils.png)](https://travis-ci.org/pipermerriam/ethereum-utils)


Common utility functions for codebases which interact with ethereum.


## Installation

```sh
pip install ethereum-utils
```


## Documentation

All functions can be imported directly from the `eth_utils` module


### ABI Utils

#### `event_abi_to_log_topic(event_abi)` -> bytes

Returns the 32 byte log topic for the given event abi.

```python
>>> event_abi_to_log_topic({'type': 'event', 'anonymous': False, 'name': 'MyEvent', 'inputs': []})
b'M\xbf\xb6\x8bC\xdd\xdf\xa1+Q\xeb\xe9\x9a\xb8\xfd\xedb\x0f\x9a\n\xc21B\x87\x9aO\x19*\x1byR\xd2'
```

#### `event_signature_to_log_topic(event_signature)` -> bytes

Returns the 32 byte log topic for the given event signature.

```python
>>> event_abi_to_log_topic('MyEvent()')
b'M\xbf\xb6\x8bC\xdd\xdf\xa1+Q\xeb\xe9\x9a\xb8\xfd\xedb\x0f\x9a\n\xc21B\x87\x9aO\x19*\x1byR\xd2'
```

#### `function_abi_to_4byte_selector(function_abi)` -> bytes

Returns the 4 byte function selector for the given function abi.

```python
>>> function_abi_to_4byte_selector({'type': 'function', 'name': 'myFunction', 'inputs': [], 'outputs': []})
b'\xc3x\n:'
```

#### `function_signature_to_4byte_selector(function_signature)` -> bytes

Returns the 4 byte function selector for the given function signature.

```python
>>> function_abi_to_4byte_selector('myFunction()')
b'\xc3x\n:'
```


### Address Utils

:w

