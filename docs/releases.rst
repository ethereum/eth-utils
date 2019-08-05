Release Notes
=============

v1.6.3
--------------

Released: August 5, 2019

- Feature

  - Add support for Python3.7
    - `#165 <https://github.com/ethereum/eth-utils/pull/165>`_

- Bugfix

  - Fix ``HasLogger`` compatibility with other metaclasses.
    - `#165 <https://github.com/ethereum/eth-utils/pull/165>`_

v1.6.2
--------------

Released: July 24, 2019

- Feature

  - Add support for Python3.7
    - `#165 <https://github.com/ethereum/eth-utils/pull/165>`_
  - Add ``humanize_ipfs_uri``.
    - `#162 <https://github.com/ethereum/eth-utils/pull/162>`_

- Bugfix

  - Fix typing of ``clamp`` numeric utility.
    - `#164 <https://github.com/ethereum/eth-utils/pull/164>`_

v1.6.1
--------------

Released: June 11, 2019

- Maintenance

  - Use eth-typing types instead of eth-utils types, when available
    - `#163 <https://github.com/ethereum/eth-utils/pull/163>`_

v1.6.0
--------------

Released: May 16, 2019

- Feature

  - Add logging utilities ``HasLogger``, ``ExtendedDebugLogger``, ``HasExtendedDebugLogger`` and ``setup_DEBUG2_logging``
    - `#158 <https://github.com/ethereum/eth-utils/pull/158>`_


v1.5.2
--------------

Released: April 30, 2019

- Bugfix

  - Fix `eth_utils.currency.denom` to be a real class with proper type declarations.
    - `#154 <https://github.com/ethereum/eth-utils/pull/154>`_

  - Fix `eth_utils.functional.replace_exceptions` type declarations.
    - `#155 <https://github.com/ethereum/eth-utils/pull/155>`_

- Feature

  - Add new `eth_utils.clamp`
    - `#150 <https://github.com/ethereum/eth-utils/pull/150>`_

v1.5.1
--------------

Released: April 17, 2019

- Bugfix

  - Fix type declarations for `eth_utils.functional.to_dict` and `eth_utils.funcional.to_ordered_dict`
    - `#151 <https://github.com/ethereum/eth-utils/pull/151>`_

v1.5.0
--------------

Released: April 16, 2019

- Features

  - Add new `eth_utils.humanize.humanize_seconds` and `eth_utils.humanize.humanize_hash`.
    - `#149 <https://github.com/ethereum/eth-utils/pull/149>`_
  - Enable PEP561 type hints


v1.4.1
--------------

Released: Dec 18, 2018

- Bugfixes

  - Fixed `eth_utils.abi.collapse_if_tuple` not handling fixed-size
    tuple arrays.

v1.4.0
--------------

Released: Dec 6, 2018

- Features

  - Support tuples in `eth_utils.abi.function_abi_to_4byte_selector` and a new `eth_utils.abi.collapse_if_tuple`
    - `#141 <https://github.com/ethereum/eth-utils/pull/141>`_

v1.3.0
--------------

- Misc

  - Fix linting issues

v1.3.0-beta.0
--------------

- Misc

  - Use eth-typing v2.0.0, which may be a breaking change for downstream packages

v1.2.2
--------------

- Bugfixes

  - Prevent from installing with Python 3.5.2 which has a fatal bug when ``...`` is used in a type.
    - `#125 <https://github.com/ethereum/eth-utils/issues/125>`_

- Misc

  - Start using ``black`` for style checking.
    - `#129 <https://github.com/ethereum/eth-utils/pulls/129>`_

1.2.1
-----

* Move docs to RTD/Sphinx, with doctest
* Update eth-typing dependency to 1.3.0

1.2.0
-----

* Import more resources from implementation-specific "toolz" library in
  "toolz" wrapper module

1.1.2
-----

* Update eth-typing dependency

1.1.1
-----

* Add `ValidationError` exception

1.1.0
-----

* Add `abi` and `address` type hints
* Add typehints to more modules
* Add `replace_exceptions` decorator to decorators.py
* Add type hints to `applicators` module
* Add type hints to `conversions` module
* Add `import_string` util from django
* Add conditional cytoolz or toolz install based on python implementation

1.0.3
-----

* Reject str as a primitive in `to_hex()`
* Faster `int_to_big_endian` implementation

1.0.2
-----

* Update apply key map to catch conflicting keys
* Add validation of 19 byte address
* Support bytearrays in conversion functions
* Apply formatters to sequence

1.0.1
-----

* Add autouse fixture to print warnings
* Change `hexidecimal` -> `hexadecimal`
* Strictly accept text types for decode_hex
* Remove remaining force_* utils

0.8.1
-----

* Convert formatting from force
* Backport pr45 into v0
* Write validate conversion arguments decorator
* Update `hex` and `int` conversions to work with new decorator
* Deprecate force bytes/text & formatting utils

0.8.0
-----

* Swap in eth-hash for pysha3
* Convert keccak from force_bytes
* Convert address utils from force text/bytes
* Import many of the application functions from web3.py
* Add `@combomethod` decorator
* Add tool to generate environment info
* Add type conversion helpers
* Convert precision to localcontext
* Remove unnecessary future imports
* Drop support for py27

0.7.4
-----

* Constrain dependencies to major version

0.7.3
-----

* Support for python 3.6

0.7.2
-----

* Minor fix for how `__version__` is computed in the `eth_utils` module.

0.7.1
-----

* Futzing with PyPi formatting of README info.

0.7.0
-----

* Rename library on pypi to `eth_utils`

0.6.0
-----

* Bugfix for `to_wei` to handle floating point inputs in a manner consistent with what users would expect.

0.5.1
-----

* Bugfix for `is_hex` to prevent exceptions from being raised for non-hexadecimal inputs.

0.5.0
-----

* `is_hex` now supports both empty string as `0x` and odd length hexadecimal strings.

0.4.1
-----

* Bugfix for currency conversions which retained too high a precision.

0.4.0
-----

* `is_address` will now verify the checksum on any address which passes the `is_checksum_formatted_address` check.

0.3.2
-----

* Added `is_hex`.

0.3.1
-----

* Added `big_endian_to_int` and `int_to_big_endian`.

0.3.0
-----

* Deprecate `compose`
* Bugfix for `is_0x_prefixed` to correctly detect uppercase `X` as part of the prefix.
* Added `is_hex_address`
* Added `is_binary_address`
* Added `is_32byte_address`
* Added `is_checksum_formatted_address`
* Added `apply_to_return_value`
* Added `to_set`
* Added `is_list`
* Added `is_tuple`

0.2.1
-----

* Strip whitespace from event signatures in `event_signature_to_log_topic`

0.2.1
-----

* Strip whitespace from event signatures in `function_signature_to_4byte_selector`

0.2.0
-----

Initial release
