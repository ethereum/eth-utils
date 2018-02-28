# Ethereum Utils

[![Join the chat at https://gitter.im/ethereum/eth-utils](https://badges.gitter.im/ethereum/eth-utils.svg)](https://gitter.im/ethereum/eth-utils)

[![Build Status](https://travis-ci.org/ethereum/eth-utils.png)](https://travis-ci.org/ethereum/eth-utils)


Common utility functions for codebases which interact with ethereum.

> This library and repository was previously located at https://github.com/pipermerriam/ethereum-utils.  It was transferred to the Ethereum foundation github in November 2017 and renamed to `eth-utils`.  The PyPi package was also renamed from `ethereum-utils` to `eth-utils.


## Installation

```sh
pip install eth-utils
```

## Development

Clone the repository and then run:

```sh
pip install -e .[dev] eth-hash[pycryptodome]
```


### Running the tests

You can run the tests with:

```sh
py.test tests
```

Or you can install `tox` to run the full test suite.


### Releasing

Pandoc is required for transforming the markdown README to the proper format to
render correctly on pypi.

For Debian-like systems:

```
apt install pandoc
```

Or on OSX:

```sh
brew install pandoc
```

To release a new version:

```sh
make release bump=$$VERSION_PART_TO_BUMP$$
```


#### How to bumpversion

The version format for this repo is `{major}.{minor}.{patch}` for stable, and
`{major}.{minor}.{patch}-{stage}.{devnum}` for unstable (`stage` can be alpha or beta).

To issue the next version in line, specify which part to bump,
like `make release bump=minor` or `make release bump=devnum`.

If you are in a beta version, `make release bump=stage` will switch to a stable.

To issue an unstable version when the current version is stable, specify the
new version explicitly, like `make release bump="--new-version 4.0.0-alpha.1 devnum"`


## Documentation

All functions can be imported directly from the `eth_utils` module

Alternatively, you can get the curried version of the functions by importing them
through the `curried` module like so:

```py
from eth_utils.curried import hexstr_if_str
```

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
>>> event_signature_to_log_topic('MyEvent()')
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
>>> function_signature_to_4byte_selector('myFunction()')
b'\xc3x\n:'
```

### Applicators

Applicators help you apply "formatters" in various ways, most notably:

- apply formatters to values by key
- apply formatters to lists by index
- conditionally applying a formatter
- conditionally applying one of several formatters.

Here we define a "formatter" as any `callable` that may be called with a single positional argument.
It returns the "formatted" result. For example `int()` could be used as a formatter.

Defining your own formatter is easy:

```py
def i_put_my_thing_down_flip_it_and_reverse_it(lyric):
    return ''.join(reversed(lyric))
```

These tools often work nicely when curried. Import them from the `curried` module to get that
capability built in, like `from eth_utils.curried import apply_formatter_if`.

#### `apply_formatter_if(condition, formatter, value)` -> new_value

This function will apply the formatter only if `bool(condition()) is True`.

```py
>>> from eth_utils.curried import apply_formatter_if, is_string

>>> bool_if_string = apply_formatter_if(is_string, bool)

>>> bool_if_string(1)
1
>>> bool_if_string('1')
True
>>> bool_if_string('')
False
```


#### `apply_one_of_formatters(condition_formatter_pairs, value)` -> new_value

This function will iterate through `condition_formatter_pairs`, and
apply the first formatter which has a truthy condition. One of the formatters
*must* match, or this function will raise a `ValueError`.

```py
>>> from eth_utils.curried import apply_one_of_formatters, is_string, is_list_like

>>> multi_formatter = apply_one_of_formatters((
    (is_list_like, tuple),
    (is_string, i_put_my_thing_down_flip_it_and_reverse_it),
)
>>> multi_formatter('my thing')
'gniht ym'
>>> multi_formatter([1, 2])
(1, 2)
>>> multi_formatter(54)
ValueError("The provided value did not satisfy any of the formatter conditions")
```


#### `apply_formatter_at_index(formatter, at_index, <list_like>)` -> <new_list_like>

This function will apply the formatter to one element of `list_like`,
at position `at_index`, and return a new iterable with that element replaced.
The returned value will be the same type as the one passed into the third argument.

```py
>>> from eth_utils.curried import apply_formatter_at_index

>>> targetted_formatter = apply_formatter_at_index(bool, 1)

>>> targetted_formatter((1, 2, 3))
(1, True, 3)

>>> targetted_formatter([1, 2, 3])
[1, True, 3]
```


#### `apply_formatter_to_array(formatter, <list_like>)` -> <new_list_like>

This function will apply the formatter to each element of `list_like`.
It returns the same type as the `list_like` argument

```py
>>> from eth_utils.curried import apply_formatter_to_array

>>> map_int = apply_formatter_to_array(int)

>>> map_int((1.2, 3.4, 5.6))
(1, 3, 5)

>>> map_int([1.2, 3.4, 5.6])
[1, 3, 5]
```


#### `apply_formatters_to_sequence(formatters, <list_like>)` -> <new_list_like>

This function will apply each formatter at to the list-like value, at the
position it was supplied. It returns the same time as the `list_like` argument.
For example:

```py
>>> from eth_utils.curried import apply_formatters_to_sequence

>>> list_formatter = apply_formatters_to_sequence([bool, int, str])

>>> list_formatter([1.2, 3.4, 5.6])
[True, 3, '5.6']

>>> list_formatter((1.2, 3.4, 5.6))
(True, 3, '5.6')

# Formatters and list-like value must be the same length

>>> list_formatter((1.2, 3.4, 5.6, 7.8))
IndexError: Too few formatters for sequence: 3 formatters for (1.2, 3.4, 5.6, 7.8)

>>> list_formatter((1.2, 3.4))
IndexError: Too many formatters for sequence: 3 formatters for (1.2, 3.4)
```


#### `combine_argument_formatters(*formatters)` -> lambda <list_like>: <new_list_like>

**DEPRECATED**

You can replace all current versions of:

```py
>>> from eth_utils import combine_argument_formatters

>>> list_formatter = combine_argument_formatters(bool, int, str)
```

With the newer, preferred:

```py
>>> from eth_utils.curried import apply_formatters_to_sequence

>>> list_formatter = apply_formatters_to_sequence((bool, int, str))
```

The old usage works like:

Combine several formatters to be applied to a list-like value, each formatter
at the position it was supplied. The new formatter will return the same type as
it was supplied. For example:

```py
>>> from eth_utils import combine_argument_formatters

>>> list_formatter = combine_argument_formatters(bool, int, str)

>>> list_formatter([1.2, 3.4, 5.6])
[True, 3, '5.6']

>>> list_formatter((1.2, 3.4, 5.6))
(True, 3, '5.6')

# it will pass through items longer than the number of formatters supplied
>>> list_formatter((1.2, 3.4, 5.6, 7.8))
[True, 3, '5.6', 7.8]
```


#### `apply_formatters_to_dict(formatter_dict, <dict_like>)` -> `dict`

This function will apply the formatter to the element with
the matching key in `dict_like`, passing through values with keys that
have no matching formatter.

```py
>>> from eth_utils.curried import apply_formatters_to_dict

>>> dict_formatter = apply_formatters_to_dict({
    'should_be_int': int,
    'should_be_bool': bool,
})

>>> dict_formatter({
    'should_be_int': 1.2,
    'should_be_bool': 3.4,
    'pass_through': 5.6,
})
{
    'should_be_int': 1,
    'should_be_bool': True,
    'pass_through': 5.6,
}
```


#### `apply_key_map(formatter_dict, <dict_like>)` -> `dict`

This function will rename keys from <dict_like> using the
lookups provided in `formatter_dict`. It will pass through any unspecified keys.

```py
>>> from eth_utils.curried import apply_key_map

>>> dict_key_map = apply_key_map({
    'black': 'orange',
    'Internet': 'Ethereum',
})

>>> dict_key_map({
    'black': 1.2,
    'Internet': 3.4,
    'pass_through': 5.6,
})
{
    'orange': 1.2,
    'Ethereum': 3.4,
    'pass_through': 5.6,
}
```



### Address Utils

#### `is_address(value)` -> bool

Returns `True` if the `value` is one of the following accepted address formats.

- 20 byte hexadecimal, upper/lower/mixed case, with or without `0x` prefix:
    - `'d3cda913deb6f67967b99d67acdfa1712c293601'`
    - `'0xd3cda913deb6f67967b99d67acdfa1712c293601'`
    - `'0xD3CDA913DEB6F67967B99D67ACDFA1712C293601'`
    - `'0xd3CdA913deB6f67967B99D67aCDFa1712C293601'`
- 20 byte hexadecimal padded to 32 bytes with null bytes, upper/lower/mixed case, with or without `0x` prefix:
    - `'000000000000000000000000d3cda913deb6f67967b99d67acdfa1712c293601'`
    - `'000000000000000000000000d3cda913deb6f67967b99d67acdfa1712c293601'`
    - `'0x000000000000000000000000d3cda913deb6f67967b99d67acdfa1712c293601'`
    - `'0x000000000000000000000000D3CDA913DEB6F67967B99D67ACDFA1712C293601'`
    - `'0x000000000000000000000000d3CdA913deB6f67967B99D67aCDFa1712C293601'`
- 20 text or bytes string:
    - `'\xd3\xcd\xa9\x13\xde\xb6\xf6yg\xb9\x9dg\xac\xdf\xa1q,)6\x01'`
- 20 text or bytes string padded to 32 bytes with null bytes.
    - `'\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xd3\xcd\xa9\x13\xde\xb6\xf6yg\xb9\x9dg\xac\xdf\xa1q,)6\x01'`

This function has two special cases when it will return False:

- a 20-byte hex string that has mixed case, with an invalid checksum
- a 32-byte value that is all null bytes


```python
>>> is_address('d3cda913deb6f67967b99d67acdfa1712c293601')
True
>>> is_address('0xd3cda913deb6f67967b99d67acdfa1712c293601')
True
>>> is_address('0xD3CDA913DEB6F67967B99D67ACDFA1712C293601')
True
>>> is_address('0xd3CdA913deB6f67967B99D67aCDFa1712C293601')
True
>>> is_address('000000000000000000000000d3cda913deb6f67967b99d67acdfa1712c293601')
True
>>> is_address('000000000000000000000000d3cda913deb6f67967b99d67acdfa1712c293601')
True
>>> is_address('0x000000000000000000000000d3cda913deb6f67967b99d67acdfa1712c293601')
True
>>> is_address('0x000000000000000000000000D3CDA913DEB6F67967B99D67ACDFA1712C293601')
True
>>> is_address('0x000000000000000000000000d3CdA913deB6f67967B99D67aCDFa1712C293601')
True
>>> is_address('\xd3\xcd\xa9\x13\xde\xb6\xf6yg\xb9\x9dg\xac\xdf\xa1q,)6\x01')
True
>>> is_address('\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xd3\xcd\xa9\x13\xde\xb6\xf6yg\xb9\x9dg\xac\xdf\xa1q,)6\x01')
True
>>> is_address('0x0000000000000000000000000000000000000000000000000000000000000000')
False
>>> is_address('\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00')
False
```

#### `is_hex_address(value)` => bool

Return `True` if the value is a 20 byte hexadecimal encoded string in any of
upper/lower/mixed casing, with or without the `0x` prefix.  Otherwise return
`False`

- `'d3cda913deb6f67967b99d67acdfa1712c293601'`
- `'0xd3cda913deb6f67967b99d67acdfa1712c293601'`
- `'0xD3CDA913DEB6F67967B99D67ACDFA1712C293601'`
- `'0xd3CdA913deB6f67967B99D67aCDFa1712C293601'`

```python
>>> is_hex_address('d3cda913deb6f67967b99d67acdfa1712c293601')
True
>>> is_hex_address('0xd3cda913deb6f67967b99d67acdfa1712c293601')
True
>>> is_hex_address('0xD3CDA913DEB6F67967B99D67ACDFA1712C293601')
True
>>> is_hex_address('0xd3CdA913deB6f67967B99D67aCDFa1712C293601')
True
>>> is_hex_address('000000000000000000000000d3cda913deb6f67967b99d67acdfa1712c293601')
False
>>> is_hex_address('000000000000000000000000d3cda913deb6f67967b99d67acdfa1712c293601')
False
>>> is_hex_address('0x000000000000000000000000d3cda913deb6f67967b99d67acdfa1712c293601')
False
>>> is_hex_address('0x000000000000000000000000D3CDA913DEB6F67967B99D67ACDFA1712C293601')
False
>>> is_hex_address('0x000000000000000000000000d3CdA913deB6f67967B99D67aCDFa1712C293601')
False
>>> is_hex_address('\xd3\xcd\xa9\x13\xde\xb6\xf6yg\xb9\x9dg\xac\xdf\xa1q,)6\x01')
False
>>> is_hex_address('\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xd3\xcd\xa9\x13\xde\xb6\xf6yg\xb9\x9dg\xac\xdf\xa1q,)6\x01')
False
>>> is_hex_address('0x0000000000000000000000000000000000000000000000000000000000000000')
False
>>> is_hex_address('\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00')
False
```


#### `is_binary_address(value)` -> bool

Return `True` if the value is a 20 byte string.

```python
>>> is_binary_address('d3cda913deb6f67967b99d67acdfa1712c293601')
False
>>> is_binary_address('0xd3cda913deb6f67967b99d67acdfa1712c293601')
False
>>> is_binary_address('0xD3CDA913DEB6F67967B99D67ACDFA1712C293601')
False
>>> is_binary_address('0xd3CdA913deB6f67967B99D67aCDFa1712C293601')
False
>>> is_binary_address('000000000000000000000000d3cda913deb6f67967b99d67acdfa1712c293601')
False
>>> is_binary_address('000000000000000000000000d3cda913deb6f67967b99d67acdfa1712c293601')
False
>>> is_binary_address('0x000000000000000000000000d3cda913deb6f67967b99d67acdfa1712c293601')
False
>>> is_binary_address('0x000000000000000000000000D3CDA913DEB6F67967B99D67ACDFA1712C293601')
False
>>> is_binary_address('0x000000000000000000000000d3CdA913deB6f67967B99D67aCDFa1712C293601')
False
>>> is_binary_address('\xd3\xcd\xa9\x13\xde\xb6\xf6yg\xb9\x9dg\xac\xdf\xa1q,)6\x01')
True
>>> is_binary_address('\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xd3\xcd\xa9\x13\xde\xb6\xf6yg\xb9\x9dg\xac\xdf\xa1q,)6\x01')
False
>>> is_binary_address('0x0000000000000000000000000000000000000000000000000000000000000000')
False
>>> is_binary_address('\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00')
False
```


#### `is_canonical_address(value)` -> bool

Returns `True` if the `value` is an address in it's canonical form.

The canonical representation of an address according to `eth_utils` is a
20 byte long string of bytes, eg:
`b'\xd3\xcd\xa9\x13\xde\xb6\xf6yg\xb9\x9dg\xac\xdf\xa1q,)6\x01'`

```python
>>> is_canonical_address('0xd3cda913deb6f67967b99d67acdfa1712c293601')
False
>>> is_canonical_address(b'\xd3\xcd\xa9\x13\xde\xb6\xf6yg\xb9\x9dg\xac\xdf\xa1q,)6\x01xd')
True
>>> is_canonical_address('\xd3\xcd\xa9\x13\xde\xb6\xf6yg\xb9\x9dg\xac\xdf\xa1q,)6\x01xd')
False
```

#### `is_checksum_address(value)` -> bool

Returns `True` if the `value` is a checksummed address as specified by
[ERC55](https://github.com/ethereum/EIPs/issues/55)

```python
>>> is_checksum_address('0xd3CdA913deB6f67967B99D67aCDFa1712C293601')
True
>>> is_checksum_address('0xd3cda913deb6f67967b99d67acdfa1712c293601')
False
>>> is_checksum_address('0xD3CDA913DEB6F67967B99D67ACDFA1712C293601')
False
>>> is_checksum_address('0x52908400098527886E0F7030069857D2E4169EE7')
True
>>> is_checksum_address('0xde709f2102306220921060314715629080e2fb77')
True
```

#### `is_checksum_formatted_address(value)` -> bool

Returns `True` if the `value` is formatted as an
[ERC55](https://github.com/ethereum/EIPs/issues/55) checksum address.

```python
>>> is_checksum_formatted_address('0xd3CdA913deB6f67967B99D67aCDFa1712C293601')
True
>>> is_checksum_formatted_address('0xd3cda913deb6f67967b99d67acdfa1712c293601')
False
>>> is_checksum_formatted_address('0xD3CDA913DEB6F67967B99D67ACDFA1712C293601')
False
>>> is_checksum_formatted_address('0x52908400098527886E0F7030069857D2E4169EE7')
False
>>> is_checksum_formatted_address('0xde709f2102306220921060314715629080e2fb77')
False
```

#### `is_normalized_address(value)` -> bool

Returns `True` if the `value` is an address in its normalized form.

The normalized representation of an address is the lowercased 20 byte
hexadecimal format.

```python
>>> is_normalized_address('0xd3CdA913deB6f67967B99D67aCDFa1712C293601')
False
>>> is_normalized_address('0xd3cda913deb6f67967b99d67acdfa1712c293601')
True
>>> is_normalized_address('0xD3CDA913DEB6F67967B99D67ACDFA1712C293601')
False
>>> is_normalized_address('0x52908400098527886E0F7030069857D2E4169EE7')
False
>>> is_normalized_address('0xde709f2102306220921060314715629080e2fb77')
True
```

#### `is_same_address(a, b)` -> bool

Returns `True` if both `a` and `b` are valid addresses according to the
`is_address` function and that they are both representations of the same
address.

```python
>>> is_same_address('0xd3cda913deb6f67967b99d67acdfa1712c293601', '0xD3CDA913DEB6F67967B99D67ACDFA1712C293601')
True
>>> is_same_address('0xd3cda913deb6f67967b99d67acdfa1712c293601', '0xd3CdA913deB6f67967B99D67aCDFa1712C293601')
True
>>> is_same_address('0xd3cda913deb6f67967b99d67acdfa1712c293601', '\xd3\xcd\xa9\x13\xde\xb6\xf6yg\xb9\x9dg\xac\xdf\xa1q,)6\x01xd')
True
```

#### `to_canonical_address(value)` -> bytes

Given any valid representation of an address return it's canonical form.

```python
>>> to_canonical_address('0xd3cda913deb6f67967b99d67acdfa1712c293601')
b'\xd3\xcd\xa9\x13\xde\xb6\xf6yg\xb9\x9dg\xac\xdf\xa1q,)6\x01xd'
>>> to_canonical_address('0xD3CDA913DEB6F67967B99D67ACDFA1712C293601')
b'\xd3\xcd\xa9\x13\xde\xb6\xf6yg\xb9\x9dg\xac\xdf\xa1q,)6\x01xd'
>>> to_canonical_address('0xd3CdA913deB6f67967B99D67aCDFa1712C293601')
b'\xd3\xcd\xa9\x13\xde\xb6\xf6yg\xb9\x9dg\xac\xdf\xa1q,)6\x01xd'
>>> to_canonical_address('\xd3\xcd\xa9\x13\xde\xb6\xf6yg\xb9\x9dg\xac\xdf\xa1q,)6\x01xd')
b'\xd3\xcd\xa9\x13\xde\xb6\xf6yg\xb9\x9dg\xac\xdf\xa1q,)6\x01xd'
```

#### `to_checksum_address(value)` -> text

Given any valid representation of an address return the checksummed representation.

```python
>>> to_checksum_address('0xd3cda913deb6f67967b99d67acdfa1712c293601')
'0xd3CdA913deB6f67967B99D67aCDFa1712C293601'
>>> to_checksum_address('0xD3CDA913DEB6F67967B99D67ACDFA1712C293601')
'0xd3CdA913deB6f67967B99D67aCDFa1712C293601'
>>> to_checksum_address('0xd3CdA913deB6f67967B99D67aCDFa1712C293601')
'0xd3CdA913deB6f67967B99D67aCDFa1712C293601'
>>> to_checksum_address('\xd3\xcd\xa9\x13\xde\xb6\xf6yg\xb9\x9dg\xac\xdf\xa1q,)6\x01xd')
'0xd3CdA913deB6f67967B99D67aCDFa1712C293601'
```

#### `to_normalized_address(value)` -> text

Given any valid representation of an address return the normalized representation.

```python
>>> to_normalized_address('\xd3\xcd\xa9\x13\xde\xb6\xf6yg\xb9\x9dg\xac\xdf\xa1q,)6\x01')  # raw bytes
'0xd3cda913deb6f67967b99d67acdfa1712c293601'
>>> to_normalized_address(b'0xc6d9d2cd449a754c494264e1809c50e34d64562b')  # hex encoded (as byte string)
'0xc6d9d2cd449a754c494264e1809c50e34d64562b'
>>> to_normalized_address('0xc6d9d2cd449a754c494264e1809c50e34d64562b')  # hex encoded
'0xc6d9d2cd449a754c494264e1809c50e34d64562b'
>>> to_normalized_address('0XC6D9D2CD449A754C494264E1809C50E34D64562B')  # cap-cased
'0xc6d9d2cd449a754c494264e1809c50e34d64562b'
>>> to_normalized_address('0x000000000000000000000000c305c901078781c232a2a521c2af7980f8385ee9')  # padded to 32 bytes
'0xc305c901078781c232a2a521c2af7980f8385ee9',
```

### Conversion Utils


These methods convert values using standard practices in the Ethereum ecosystem.
For example, strings are encoded to binary using UTF-8.

Because there is no reliable way to distinguish between text and a hex-encoded
bytestring, you must explicitly specify which of the two is being supplied when
passing in a `str`.

Only supply one of the arguments:

#### `to_bytes(<bytes/int/bool>, text=<str>, hexstr=<str>)` -> bytes

Takes a variety of inputs and returns its bytes equivalent. Text gets encoded as UTF-8.

```py
>>> to_bytes(0)
b'\x00'
>>> to_bytes(0x000F)
b'\x0f'
>>> to_bytes(b'')
b''
>>> to_bytes(b'\x00\x0F')
b'\x00\x0f'
>>> to_bytes(False)
b'\x00'
>>> to_bytes(True)
b'\x01'
>>> to_bytes(hexstr='0x000F')
b'\x00\x0f'
>>> to_bytes(hexstr='000F')
b'\x00\x0f'
>>> to_bytes(text='')
b''
>>> to_bytes(text='cowmö')
b'cowm\xc3\xb6'
```

#### `to_hex(<bytes/int/bool>, text=<str>, hexstr=<str>)` -> str

Takes a variety of inputs and returns it in its hexadecimal representation.
It follows the rules for converting to hex in the JSON-RPC spec. Roughly,
it leaves leading 0s on bytes input, and trims leading zeros on int input.

```py
>>> to_hex(0)
'0x0'
>>> to_hex(1)
'0x1'
>>> to_hex(0x0)
'0x0'
>>> to_hex(0x000F)
'0xf'
>>> to_hex(b'')
'0x'
>>> to_hex(b'\x00\x0F')
'0x000f'
>>> to_hex(False)
'0x0'
>>> to_hex(True)
'0x1'
>>> to_hex(hexstr='0x000F')
'0x000f'
>>> to_hex(hexstr='000F')
'0x000f'
>>> to_hex(text='')
'0x'
>>> to_hex(text='cowmö')
'0x636f776dc3b6'
```

#### `to_int(<bytes/int/bool>, text=<str>, hexstr=<str>)` -> int

Takes a variety of inputs and returns its integer equivalent.


```py
>>> to_int(0)
0
>>> to_int(0x000F)
15
>>> to_int(b'\x00\x0F')
15
>>> to_int(False)
0
>>> to_int(True)
1
>>> to_int(hexstr='0x000F')
15
>>> to_int(hexstr='000F')
15
```

#### `to_text(<bytes/int/bool>, text=<str>, hexstr=<str>)` -> str

Takes a variety of inputs and returns its string equivalent. Text gets decoded as UTF-8.

```py
>>> Web3.toText(0x636f776dc3b6)
'cowmö'
>>> Web3.toText(b'cowm\xc3\xb6')
'cowmö'
>>> Web3.toText(hexstr='0x636f776dc3b6')
'cowmö'
>>> Web3.toText(hexstr='636f776dc3b6')
'cowmö'
>>> Web3.toText(text='cowmö')
'cowmö'
```

### Crypto Utils

Because there is no reliable way to distinguish between text and a hex-encoded
bytestring, you must explicitly specify which of the two is being supplied when
passing in a `str`.

Only supply one of the arguments:

#### `keccak(<bytes/int/bool>, text=<str>, hexstr=<str>)` -> bytes

```python
>>> keccak(text='')
b"\xc5\xd2F\x01\x86\xf7#<\x92~}\xb2\xdc\xc7\x03\xc0\xe5\x00\xb6S\xca\x82';{\xfa\xd8\x04]\x85\xa4p"

# A series of equivalent hash inputs:

>>> keccak(text='☢')
b'\x85\xe8\x07"\xeb\x93\r\xe9;\xcc\xa8{\xa5\xdf\xda\x89\n\xa12\x95\xae\xad.\xec\xc9\x0b\xb2\xd9z\x14\x93\x16'

>>> keccak(0xe298a2)
b'\x85\xe8\x07"\xeb\x93\r\xe9;\xcc\xa8{\xa5\xdf\xda\x89\n\xa12\x95\xae\xad.\xec\xc9\x0b\xb2\xd9z\x14\x93\x16'

>>> keccak(b'\xe2\x98\xa2')
b'\x85\xe8\x07"\xeb\x93\r\xe9;\xcc\xa8{\xa5\xdf\xda\x89\n\xa12\x95\xae\xad.\xec\xc9\x0b\xb2\xd9z\x14\x93\x16'

>>> keccak(hexstr='0xe298a2')
b'\x85\xe8\x07"\xeb\x93\r\xe9;\xcc\xa8{\xa5\xdf\xda\x89\n\xa12\x95\xae\xad.\xec\xc9\x0b\xb2\xd9z\x14\x93\x16'
```

**Please Note** - When using Python's native hex literals, python converts the hex to an int,
so leading 0 bytes are truncated. But all other formats maintain zeros on the left. Hex literals
are only padded until a whole number of bytes are provided to keccak. For example:

```py
>>> keccak(0xe298a2)
b'\x85\xe8\x07"\xeb\x93\r\xe9;\xcc\xa8{\xa5\xdf\xda\x89\n\xa12\x95\xae\xad.\xec\xc9\x0b\xb2\xd9z\x14\x93\x16'

>>> keccak(0x0e298a2)
b'\x85\xe8\x07"\xeb\x93\r\xe9;\xcc\xa8{\xa5\xdf\xda\x89\n\xa12\x95\xae\xad.\xec\xc9\x0b\xb2\xd9z\x14\x93\x16'

>>> keccak(0x00e298a2)
b'\x85\xe8\x07"\xeb\x93\r\xe9;\xcc\xa8{\xa5\xdf\xda\x89\n\xa12\x95\xae\xad.\xec\xc9\x0b\xb2\xd9z\x14\x93\x16'

>>> keccak(0x000e298a2)
b'\x85\xe8\x07"\xeb\x93\r\xe9;\xcc\xa8{\xa5\xdf\xda\x89\n\xa12\x95\xae\xad.\xec\xc9\x0b\xb2\xd9z\x14\x93\x16'

>>> keccak(hexstr='0x0e298a2')
b'i\x0f$\xbd\xbe\xf7c\xbb\xb9M\xd9\x12H"\x9f\x1f\x87\\E\xa36\xc2\xea,\x8f.\r\xf5\x95\xdc\x19\x9b'

>>> keccak(hexstr='0x00e298a2')
b'i\x0f$\xbd\xbe\xf7c\xbb\xb9M\xd9\x12H"\x9f\x1f\x87\\E\xa36\xc2\xea,\x8f.\r\xf5\x95\xdc\x19\x9b'

>>> keccak(hexstr='0x000e298a2')
b'!$Ezy\xdeU<\xec\x1f\xd1\x10\x05\xff\x11\xfc=J\xcf\xd5H\x0f\xb3c\xcc\xb5\xae\xb1\x1eA\x8b\xd3'
```

### Currency Utils


#### `denoms`

Object with property access to all of the various denominations for ether.
Available denominations are:

+--------------+---------------------------------+
| denomination | amount in wei                   |
+--------------+---------------------------------+
| wei          | 1                               |
| kwei         | 1000                            |
| babbage      | 1000                            |
| femtoether   | 1000                            |
| mwei         | 1000000                         |
| lovelace     | 1000000                         |
| picoether    | 1000000                         |
| gwei         | 1000000000                      |
| shannon      | 1000000000                      |
| nanoether    | 1000000000                      |
| nano         | 1000000000                      |
| szabo        | 1000000000000                   |
| microether   | 1000000000000                   |
| micro        | 1000000000000                   |
| finney       | 1000000000000000                |
| milliether   | 1000000000000000                |
| milli        | 1000000000000000                |
| ether        | 1000000000000000000             |
| kether       | 1000000000000000000000          |
| grand        | 1000000000000000000000          |
| mether       | 1000000000000000000000000       |
| gether       | 1000000000000000000000000000    |
| tether       | 1000000000000000000000000000000 |
+--------------+---------------------------------+

```python
>>> denoms.wei
1
>>> denoms.finney
1000000000000000
>>> denoms.ether
1000000000000000000
```

#### `to_wei(value, denomination)` -> integer

Converts `value` in the given `denomination` to its equivalent in the *wei* denomination.

```python
>>> to_wei(1, 'ether')
1000000000000000000
```

#### `from_wei(value, denomination)` -> decimal.Decimal

Converts the `value` in the *wei* denomination to its equivalent in the given
`denomination`.  Return value is a `decimal.Decimal` with the appropriate
precision to be a lossless conversion.

```python
>>> from_wei(1000000000000000000, 'ether')
Decimal('1')
>>> from_wei(123456789, 'ether')
Decimal('1.23456789E-10')
```


### Debug Utils

#### Generate environment info

At the shell:

```sh
$ python -m eth_utils

Python version:
3.5.3 (default, Nov 23 2017, 11:34:05)
[GCC 6.3.0 20170406]

Operating System: Linux-4.10.0-42-generic-x86_64-with-Ubuntu-17.04-zesty

pip freeze result:
bumpversion==0.5.3
cytoolz==0.9.0
flake8==3.4.1
ipython==6.2.1
pytest==3.3.2
virtualenv==15.1.0
... etc
```


### Decorators

#### `@combomethod`

Decorates methods in a class that can be called as both an instance method
or a `@classmethod`.

Use the decorator like so:

```py
from eth_utils import combomethod

class Storage:
    val = 1

    @combomethod
    def get(combo):
        if isinstance(combo, type):
            print("classmethod call")
        elif isinstance(combo, Storage):
            print("instance method call")
        else:
            raise TypeError("Unreachable, unless you really monkey around")
        return combo.val
```

As usual, instances create their own copy on assignment.

```py
>>> store = Storage()
>>> store.val = 2
>>> store.get()
instance method call
2
>>> Storage.get()
classmethod call
1
```


### Encoding Utils

#### `big_endian_to_int(value)` -> integer

Returns `value` converted to an integer (from a big endian representation).


```python
>>> big_endian_to_int(b'\x00')
0
>>> big_endian_to_int(b'\x01')
1
>>> big_endian_to_int(b'\x01\x00')
256
```

#### `int_to_big_endian(value)` -> bytes

Returns `value` converted to the big endian representation.


```python
>>> int_to_big_endian(0)
b'\x00'
>>> int_to_big_endian(1)
b'\x01'
>>> int_to_big_endian(256)
b'\x01\x00'
```


### Functional Utils


#### `compose(*callables)` -> callable

> **DEPRECATED** in 0.3.0.

Returns a single function which is the composition of the given callables.

```
>>> def f(v):
...     return v * 3
...
>>> def g(v):
...     return v + 2
...
>>> def h(v):
...     return v % 5
...
>>> compose(f, g, h)(1)
0
>>> h(g(f(1)))
0
>>> compose(f, g, h)(2)
3
>>> h(g(f(1)))
3
>>> compose(f, g, h)(3)
1
>>> h(g(f(1)))
1
>>> compose(f, g, h)(4)
4
>>> h(g(f(1)))
4
```

#### `flatten_return(callable)` -> callable() -> tuple

Decorator which performs a non-recursive flattening of the return value from
the given `callable`.

```python
>>> flatten_return(lambda: [[1, 2, 3], [4, 5], [6]])
(1, 2, 3, 4, 5, 6)
```

#### `sort_return(callable)` => callable() -> tuple

Decorator which sorts the return value from the given `callable`.

```python
>>> flatten_return(lambda: [[1, 2, 3], [4, 5], [6]])
(1, 2, 3, 4, 5, 6)
```

#### `reversed_return(callable)` => callable() -> tuple

Decorator which reverses the return value from the given `callable`.

```python
>>> reversed_return(lambda: [1, 5, 2, 4, 3])
(3, 4, 2, 5, 1)
```

#### `to_dict(callable)` => callable() -> dict

Decorator which casts the return value from the given `callable` to a dictionary.

```python
>>> @to_dict
... def build_thing():
...     yield 'a', 1
...     yield 'b', 2
...     yield 'c', 3
...
>>> build_thing()
{'a': 1, 'b': 2, 'c': 3}
```

#### `to_list(callable)` => callable() -> list

Decorator which casts the return value from the given `callable` to a list.

```python
>>> @to_list
... def build_thing():
...     yield 'a'
...     yield 'b'
...     yield 'c'
...
>>> build_thing()
['a', 'b', 'c']
```

#### `to_ordered_dict(callable)` => callable() -> collections.OrderedDict

Decorator which casts the return value from the given `callable` to an ordered dictionary of type `collections.OrderedDict`.

```python
>>> @to_ordered_dict
... def build_thing():
...     yield 'd', 4
...     yield 'a', 1
...     yield 'b', 2
...     yield 'c', 3
...
>>> build_thing()
OrderedDict([('d', 4), ('a', 1), ('b', 2), ('c', 3)])
```

#### `to_tuple(callable)` => callable() -> tuple

Decorator which casts the return value from the given `callable` to a tuple.

```python
>>> @to_tuple
... def build_thing():
...     yield 'a'
...     yield 'b'
...     yield 'c'
...
>>> build_thing()
('a', 'b', 'c')
```

#### `to_set(callable)` => callable() -> set

Decorator which casts the return value from the given `callable` to a set.

```python
>>> @to_set
... def build_thing():
...     yield 'a'
...     yield 'b'
...     yield 'a'  # duplicate
...     yield 'c'
...
>>> build_thing()
{'a', 'b', 'c'}
```

### `apply_to_return_value(callable)` => decorator_fn

This function takes a single callable and returns a decorator.  The returned
decorator, when applied to a function, will incercept the function's return
value, pass it to the callable, and return the value returned by the callable.

```python
>>> double = apply_to_return_value(lambda v: v * 2)
>>> @double
... def f(v):
...     return v
...
>>> f(2)
4
>>> f(3)
6
```


### Hexidecimal Utils


#### `add_0x_prefix(value)` -> string

Returns `value` with a `0x` prefix.  If the value is already prefixed it is returned as-is.

```python
>>> add_0x_prefix('12345')
'0x12345'
>>> add_0x_prefix('0x12345')
'0x12345'
```

#### `decode_hex(value)` -> bytes

Returns `value` decoded into a byte string.  Accepts any string with or without the `0x` prefix.

```python
>>> decode_hex('0x123456')
b'\x124V'
>>> decode_hex('123456')
b'\x124V'
```

#### `encode_hex(value)` -> string

Returns `value` encoded into a hexadecimal representation with a `0x` prefix

```python
>>> encode_hex('\x01\x02\x03')
'0x010203'
```

#### `is_0x_prefixed(value)` -> bool

Returns `True` if `value` has a `0x` prefix.

```python
>>> is_0x_prefixed('12345')
False
>>> is_0x_prefixed('0x12345')
True
>>> is_0x_prefixed(b'0x12345')
True
```

#### `is_hex(value)` -> bool

Returns `True` if `value` is a hexadecimal encoded string of text type.

```python
>>> is_hex('')
False
>>> is_hex(b'')
False
>>> is_hex('0x')
True
>>> is_hex(b'0x')
False
>>> is_hex('0X')
True
>>> is_hex(b'0X')
False
>>> is_hex('1234567890abcdef')
True
>>> is_hex('0x1234567890abcdef')
True
>>> is_hex('0x1234567890ABCDEF')
True
>>> is_hex('0x1234567890AbCdEf')
True
>>> is_hex('12345')  # odd length is ok
True
>>> is_hex('0x12345')  # odd length is ok
True
>>> is_hex('123456__abcdef')  # non hex characters
False
```

#### `remove_0x_prefix(value)` -> string

Returns `value` with the `0x` prefix stripped.  If the value does not have a
`0x` prefix it is returned as-is.

```python
>>> remove_0x_prefix('12345')
'12345'
>>> remove_0x_prefix('0x12345')
'12345'
>>> remove_0x_prefix(b'0x12345')
b'12345'
```


### Type Utils

#### `is_boolean(value)` -> bool

Returns `True` if `value` is of type `bool`

```python
>>> is_boolean(True)
True
>>> is_boolean(False)
False
>>> is_boolean(1)
False
```

#### `is_bytes(value)` -> bool

Returns `True` if `value` is a byte string or a byte array.

```python
>>> is_bytes('abcd')
False
>>> is_bytes(b'abcd')
True
>>> is_bytes(bytearray((1, 2, 3)))
True
```

#### `is_dict(value)` -> bool

Returns `True` if `value` is a mapping type.

```python
>>> is_dict({'a': 1})
True
>>> is_dict([1, 2, 3])
False
```

#### `is_integer(value)` -> bool

Returns `True` if `value` is an integer

```python
>>> is_integer(0)
True
>>> is_integer(1)
True
>>> is_integer('1')
False
>>> is_integer(1.1)
False
```

#### `is_list_like(value)` -> bool

Returns `True` if `value` is a non-string sequence such as a sequence (such as a list or tuple).

```python
>>> is_list_like('abcd')
False
>>> is_list_like([])
True
>>> is_list_like(tuple())
True
```

#### `is_list(value)` -> bool

Returns `True` if `value` is a non-string sequence such as a list.

```python
>>> is_list('abcd')
False
>>> is_list([])
True
>>> is_list(tuple())
False
```

#### `is_tuple(value)` -> bool

Returns `True` if `value` is a non-string sequence such as a tuple.

```python
>>> is_tuple('abcd')
False
>>> is_tuple([])
False
>>> is_tuple(tuple())
True
```

#### `is_null(value)` -> bool

Returns `True` if `value` is `None`

```python
>>> is_null(None)
True
>>> is_null(False)
False
```

#### `is_number(value)` -> bool

Returns `True` if `value` is numeric

```python
>>> is_number(1)
True
>>> is_number(1.1)
True
>>> is_number('1')
False
>>> is_number(decimal.Decimal('1'))
True
```

#### `is_string(value)` -> bool

Returns `True` if `value` is of any string type.

```python
>>> is_string('abcd')
True
>>> is_string(b'abcd')
True
>>> is_string(bytearray((1, 2, 3)))
True
```

#### `is_text(value)` -> bool

Returns `True` if `value` is a text string.

```python
>>> is_text(u'abcd')
True
>>> is_text(b'abcd')
False
>>> is_text(bytearray((1, 2, 3)))
False
```


#### How to bumpversion

The version format for this repo is `{major}.{minor}.{patch}` for stable, and
`{major}.{minor}.{patch}-{stage}.{devnum}` for unstable (`stage` can be alpha or beta).

To issue the next version in line, use bumpversion and specify which part to bump,
like `bumpversion minor` or `bumpversion devnum`.

If you are in a beta version, `bumpversion stage` will switch to a stable.

To issue an unstable version when the current version is stable, specify the
new version explicitly, like `bumpversion --new-version 4.0.0-alpha.1 devnum`
