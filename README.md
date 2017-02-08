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

#### `is_address(value)` -> bool

Returns `True` if the `value` is one of the following accepted address formats.

- 20 byte hexidecimal, upper/lower/mixed case, with or without `0x` prefix:
    - `'d3cda913deb6f67967b99d67acdfa1712c293601'`
    - `'0xd3cda913deb6f67967b99d67acdfa1712c293601'`
    - `'0xD3CDA913DEB6F67967B99D67ACDFA1712C293601'`
    - `'0xd3CdA913deB6f67967B99D67aCDFa1712C293601'`
- 20 byte hexidecimal padded to 32 bytes with null bytes, upper/lower/mixed case, with or without `0x` prefix:
    - `'000000000000000000000000d3cda913deb6f67967b99d67acdfa1712c293601'`
    - `'000000000000000000000000d3cda913deb6f67967b99d67acdfa1712c293601'`
    - `'0x000000000000000000000000d3cda913deb6f67967b99d67acdfa1712c293601'`
    - `'0x000000000000000000000000D3CDA913DEB6F67967B99D67ACDFA1712C293601'`
    - `'0x000000000000000000000000d3CdA913deB6f67967B99D67aCDFa1712C293601'`
- 20 text or bytes string:
    - `'\xd3\xcd\xa9\x13\xde\xb6\xf6yg\xb9\x9dg\xac\xdf\xa1q,)6\x01'`
- 20 text or bytes string padded to 32 bytes with null bytes.
    - `'\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xd3\xcd\xa9\x13\xde\xb6\xf6yg\xb9\x9dg\xac\xdf\xa1q,)6\x01'`

This function has one special case, which is that it will return false for a 32
byte value that is all null bytes.


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

#### `is_canonical_address(value)` -> bool

Returns `True` if the `value` is an address in it's canonical form.

The canonical representation of an address according to `ethereum-utils` is a
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

#### `is_normalized_address(value)` -> bool

Returns `True` if the `value` is an address in its normalized form.

The normalized representation of an address is the lowercased 20 byte
hexidecimal format.

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
>>> to_checksum_address('0xd3cda913deb6f67967b99d67acdfa1712c293601')
'0xd3cda913deb6f67967b99d67acdfa1712c293601'
>>> to_checksum_address('0xD3CDA913DEB6F67967B99D67ACDFA1712C293601')
'0xd3cda913deb6f67967b99d67acdfa1712c293601'
>>> to_checksum_address('0xd3CdA913deB6f67967B99D67aCDFa1712C293601')
'0xd3cda913deb6f67967b99d67acdfa1712c293601'
>>> to_checksum_address('\xd3\xcd\xa9\x13\xde\xb6\xf6yg\xb9\x9dg\xac\xdf\xa1q,)6\x01xd')
'0xd3cda913deb6f67967b99d67acdfa1712c293601'
```

### Crypto Utils


#### `keccak(value)` -> bytes

Given any string returns the `sha3/keccak` hash.  If `value` is not a byte
string it will be converted using the `force_bytes` function.

```python
>>> keccak('') 
b"\xc5\xd2F\x01\x86\xf7#<\x92~}\xb2\xdc\xc7\x03\xc0\xe5\x00\xb6S\xca\x82';{\xfa\xd8\x04]\x85\xa4p"
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


### Formatting Utils

#### `pad_left(value, to_size, pad_with)` -> string

Returns `value` padded to the length specified by `to_size` with the string `pad_with`.  


```python
>>> pad_left('test', 6, '0')
'00test'
>>> pad_left('testing', 6, '0')
'testing'
>>> pad_left('test', 8, '123')
'12312test'
```

#### `pad_right(value, to_size, pad_with)` -> string

Returns `value` padded to the length specified by `to_size` with the string `pad_with`.  


```python
>>> pad_right('test', 6, '0')
'test00'
>>> pad_right('testing', 6, '0')
'testing'
>>> pad_right('test', 8, '123')
'test12312'
```


### Functional Utils


#### `compose(*callables)` -> callable

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
>>> @to_dict
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

Returns `value` encoded into a hexidecimal representation with a `0x` prefix

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


### String Utils

#### `coerce_args_to_bytes(callable)` -> callable

Decorator which will convert any string arguments both positional or keyword
into byte strings using the `force_bytes` function.  This is a recursive
operation which will reach down into mappings and list-like objects as well.

```python
>>> @coerce_args_to_bytes
... def do_thing(*args):
...     return args
...
>>> do_thing('a', 1, b'a-byte-string', ['a', b'b', 1], {'a': 'a', 'b': ['x', b'y']})
(b'a', 1, b'a-byte-string', [b'a', b'b', 1], {'a': b'a', 'b': [b'x', b'y']})
```

#### `coerce_args_to_text(callable)` -> callable

Decorator which will convert any string arguments both positional or keyword
into text strings using the `force_text` function.  This is a recursive
operation which will reach down into mappings and list-like objects as well.

```python
>>> @coerce_args_to_text
... def do_thing(*args):
...     return args
...
>>> do_thing('a', 1, b'a-byte-string', ['a', b'b', 1], {'a': 'a', 'b': ['x', b'y']})
('a', 1, 'a-byte-string', ['a', 'b', 1], {'a': 'a', 'b': ['x', 'y']})
```

#### `coerce_return_to_bytes(callable)` -> callable

Decorator which will convert any string return values into byte strings using
the `force_text` function.  This is a recursive operation which will reach down
into mappings and list-like objects as well.

```python
>>> @coerce_return_to_bytes
... def do_thing(*args):
...     return args
...
>>> do_thing('a', 1, b'a-byte-string', ['a', b'b', 1], {'a': 'a', 'b': ['x', b'y']})
(b'a', 1, b'a-byte-string', [b'a', b'b', 1], {'a': b'a', 'b': [b'x', b'y']})
```

#### `coerce_return_to_text(callable)` -> callable

Decorator which will convert any string return values into text strings using
the `force_text` function.  This is a recursive operation which will reach down
into mappings and list-like objects as well.

```python
>>> @coerce_return_to_bytes
... def do_thing(*args):
...     return args
...
>>> do_thing('a', 1, b'a-byte-string', ['a', b'b', 1], {'a': 'a', 'b': ['x', b'y']})
('a', 1, 'a-byte-string', ['a', 'b', 1], {'a': 'a', 'b': ['x', 'y']})
```

#### `force_bytes(value, encoding='iso-8859-1')` -> text

Returns `value` encoded into a byte string using the provided encoding.  By
default this uses `iso-8859-1` as it can handle all byte values between `0-255`
(unlike `utf8`)

```python
>>> force_bytes('abcd')
b'abcd'
>>> force_bytes(b'abcd')
b'abcd'
```

#### `force_obj_to_bytes(value)` -> value

Returns `value` with all string elements converted to byte strings by
recursivly traversing mappings and list-like elements.

```python
>>> force_obj_to_bytes(('a', 1, b'a-byte-string', ['a', b'b', 1], {'a': 'a', 'b': ['x', b'y']}))
(b'a', 1, b'a-byte-string', [b'a', b'b', 1], {'a': b'a', 'b': [b'x', b'y']})
```

#### `force_obj_to_text(value)` -> value

Returns `value` with all string elements converted to text strings by
recursivly traversing mappings and list-like elements.

```python
>>> force_obj_to_text(('a', 1, b'a-byte-string', ['a', b'b', 1], {'a': 'a', 'b': ['x', b'y']}))
('a', 1, 'a-byte-string', ['a', 'b', 1], {'a': 'a', 'b': ['x', 'y']})
```

#### `force_text(value, encoding='iso-8859-1')` -> text

Returns `value` decoded into a text string using the provided encoding.  By
default this uses `iso-8859-1` as it can handle all byte values between `0-255`
(unlike `utf8`)

```python
>>> force_text(b'abcd')
'abcd'
>>> force_text('abcd')
'abcd'
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

Returns `True` if `value` is a non-string sequence such as a list or tuple.

```python
>>> is_list_like('abcd')
False
>>> is_list_like([])
True
>>> is_list_like(tuple())
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
>>> is_string(bytearra((1, 2, 3)))
True
```

#### `is_text(value)` -> bool

Returns `True` if `value` is a text string.

```python
>>> is_string('abcd')
True
>>> is_string(b'abcd')
True
>>> is_string(bytearra((1, 2, 3)))
True
```
