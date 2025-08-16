Release Notes
=============

Read up on all the latest improvements.

.. towncrier release notes start

eth-utils v5.3.0 (2025-04-14)
-----------------------------

Breaking Changes
~~~~~~~~~~~~~~~~

- Removes ``is_list`` and ``is_tuple`` from the types module.


Bugfixes
~~~~~~~~

- Replace ``arg["name"]`` with ``arg.get("name")`` to correctly handle optional names. (`#299 <https://github.com/ethereum/eth-utils/issues/299>`__)


Features
~~~~~~~~

- Add new methods: ``to_wei_decimals``, and ``from_wei_decimals`` which take a number instead of a string (`#302 <https://github.com/ethereum/eth-utils/issues/302>`__)
- Add ``CamelModel`` pydantic model for validating objects and serializing to camelCase when used with ``by_alias=True``, with the general expectation of a well-formed JSON-RPC object. (`#303 <https://github.com/ethereum/eth-utils/issues/303>`__)


eth-utils v5.2.0 (2025-01-21)
-----------------------------

Bugfixes
~~~~~~~~

- Update types in `is_same_address` to accept `AnyAddress`, `str`, or `bytes`. (`#289 <https://github.com/ethereum/eth-utils/issues/289>`__)


Features
~~~~~~~~

- Add Python 3.13 support and other misc. template updates (`#296 <https://github.com/ethereum/eth-utils/issues/296>`__)


eth-utils v5.1.0 (2024-10-21)
-----------------------------

Bugfixes
~~~~~~~~

- Correct error message in ``from_wei`` and ``to_wei`` (`#247 <https://github.com/ethereum/eth-utils/issues/247>`__)
- Remove unused hexbytes dependency that is causing a cyclic dependency issue (`#284 <https://github.com/ethereum/eth-utils/issues/284>`__)


Features
~~~~~~~~

- Removed ``_BaseHasLogger`` and ``_BaseHasExtendedDebugLogger``, and the ``logger`` attribute in the ``HasLogger`` and ``HasExtendedDebugLogger`` is type hinted directly. (`#275 <https://github.com/ethereum/eth-utils/issues/275>`__)
- Add new humanize_hexstr function (`#285 <https://github.com/ethereum/eth-utils/issues/285>`__)
- Add ``memoryview`` to accepted input type for ``to_hex`` , ``to_int`` , ``to_bytes`` , and ``to_text`` (`#287 <https://github.com/ethereum/eth-utils/issues/287>`__)


eth-utils v5.0.0 (2024-08-15)
-----------------------------

Internal Changes - for eth-utils Contributors
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

- Run ``mypy`` locally via ``pre-commit`` hook, bump to ``mypy==1.10.0`` (`#282 <https://github.com/ethereum/eth-utils/issues/282>`__)


eth-utils v5.0.0-beta.1 (2024-07-25)
------------------------------------

Breaking Changes
~~~~~~~~~~~~~~~~

- Updates to the latest ``eth-typing`` to use new ``ABI`` types for improved type checking in existing ``ABI`` utility functions. (`#271 <https://github.com/ethereum/eth-utils/issues/271>`__)


Features
~~~~~~~~

- Contract Application Binary Interface (ABI) utilities to obtain type and value information for `functions` and `events`. (`#271 <https://github.com/ethereum/eth-utils/issues/271>`__)


Internal Changes - for eth-utils Contributors
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

- Merge template to use `bump-my-version` and update release Make commands. (`#280 <https://github.com/ethereum/eth-utils/issues/280>`__)


eth-utils v4.1.1 (2024-05-06)
-----------------------------

Features
~~~~~~~~

- Update networks for latest changes and testnets. (`#276 <https://github.com/ethereum/eth-utils/issues/276>`__)


Internal Changes - for eth-utils Contributors
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

- Merge template updates, fixing docs CI and setting nightly CI runs for all testing (`#272 <https://github.com/ethereum/eth-utils/issues/272>`__)
- Updated ``eth_networks.json`` with latest networks. (`#273 <https://github.com/ethereum/eth-utils/issues/273>`__)
- No warning for outdated networks. (`#278 <https://github.com/ethereum/eth-utils/issues/278>`__)


eth-utils v4.1.0 (2024-04-01)
-----------------------------

Internal Changes - for eth-utils Contributors
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

- Upgrades from the template with support for Python 3.12 and linting with ``blocklint``. (`#268 <https://github.com/ethereum/eth-utils/issues/268>`__)
- Remove ``cached_property`` dependency, as it was only for ``<=py37`` (`#269 <https://github.com/ethereum/eth-utils/issues/269>`__)


eth-utils v4.0.0 (2024-02-22)
-----------------------------

Breaking Changes
~~~~~~~~~~~~~~~~

- `Web3.is_address` now returns True for non-checksummed addresses. (`#265 <https://github.com/ethereum/eth-utils/issues/265>`__)


eth-utils v3.0.0 (2024-01-10)
-----------------------------

Breaking Changes
~~~~~~~~~~~~~~~~

- Drop python 3.7 support (`#261 <https://github.com/ethereum/eth-utils/issues/261>`__)


Internal Changes - for eth-utils Contributors
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

- Merge updates from the project template, notably: use ``pre-commit`` for linting and change the name of the ``master`` branch to ``main`` (`#261 <https://github.com/ethereum/eth-utils/issues/261>`__)
- Correct booleans in ``pyproject.toml`` and add test for the presence of the ``eth_utils.__version__`` attribute (`#263 <https://github.com/ethereum/eth-utils/issues/263>`__)


eth-utils v2.3.1 (2023-11-07)
-----------------------------

Bugfixes
~~~~~~~~

- Some users were experiencing encoding issues when parsing the networks json. Use UTF-8 explicitly. (`#259 <https://github.com/ethereum/eth-utils/issues/259>`__)


Internal Changes - for eth-utils Contributors
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

- Fix and add new test cases for invalid Network ``chain_id`` values. (`#256 <https://github.com/ethereum/eth-utils/issues/256>`__)


Miscellaneous Changes
~~~~~~~~~~~~~~~~~~~~~

- `#259 <https://github.com/ethereum/eth-utils/issues/259>`__


eth-utils v2.3.0 (2023-10-20)
-----------------------------

Features
~~~~~~~~

- Add ``Network`` utility methods to utilize network metadata for a given ``ChainId``. (`#253 <https://github.com/ethereum/eth-utils/issues/253>`__)


eth-utils v2.2.2 (2023-10-11)
-----------------------------

Improved Documentation
~~~~~~~~~~~~~~~~~~~~~~

- Add information to docs for utilities which did not have any. (`#254 <https://github.com/ethereum/eth-utils/issues/254>`__)


Internal Changes - for eth-utils Contributors
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

- Pull latest from template repo to fix release script, update wording in comments and docs. (`#252 <https://github.com/ethereum/eth-utils/issues/252>`__)


Miscellaneous Changes
~~~~~~~~~~~~~~~~~~~~~

- `#242 <https://github.com/ethereum/eth-utils/issues/242>`__


eth-utils v2.2.1 (2023-09-13)
-----------------------------

Internal Changes - for eth-utils Contributors
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

- Add ``build.os`` config for readthedocs (`#250 <https://github.com/ethereum/eth-utils/issues/250>`__)


eth-utils v2.2.0 (2023-07-10)
-----------------------------

Features
~~~~~~~~

- Added ``humanize_wei`` utility to convert common values to more readable units. (`#194 <https://github.com/ethereum/eth-utils/issues/194>`__)


eth-utils v2.1.1 (2023-06-07)
-----------------------------

Internal Changes - for eth-utils Contributors
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

- Add currency tests with float ether inputs. (`#231 <https://github.com/ethereum/eth-utils/issues/231>`__)
- remove unused docs deps, bump version of remaining (`#239 <https://github.com/ethereum/eth-utils/issues/239>`__)
- merge updates from the python project template (`#240 <https://github.com/ethereum/eth-utils/issues/240>`__)


eth-utils v2.1.0 (2022-11-17)
-----------------------------

Features
~~~~~~~~

- Allow a wider eth-hash dependency range (`#225 <https://github.com/ethereum/eth-utils/issues/225>`__)


Performance improvements
~~~~~~~~~~~~~~~~~~~~~~~~

- Performance improvement of up to 65% on ``is_0x_prefixed`` (`#223 <https://github.com/ethereum/eth-utils/issues/223>`__)


Improved Documentation
~~~~~~~~~~~~~~~~~~~~~~

- Fix typo in documentation: hexidecimal -> hexadecimal (`#222 <https://github.com/ethereum/eth-utils/issues/222>`__)


Internal Changes - for eth-utils Contributors
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

- Update use of ``@cached_property`` for debug2 logging. (`#232 <https://github.com/ethereum/eth-utils/issues/232>`__)


Miscellaneous changes
~~~~~~~~~~~~~~~~~~~~~

- `#226 <https://github.com/ethereum/eth-utils/issues/226>`__, `#235 <https://github.com/ethereum/eth-utils/issues/235>`__


Breaking changes
~~~~~~~~~~~~~~~~

- Remove support for Python 3.6, add Python 3.11, misc dev internal updates (`#227 <https://github.com/ethereum/eth-utils/issues/227>`__)


eth-utils v2.0.0 (2021-11-18)
-----------------------------

Features
~~~~~~~~

- Upgrade eth-typing to v3.0+, Add support for python 3.9 and 3.10
  Remove support for python 3.5 (`#215 <https://github.com/ethereum/eth-utils/issues/215>`__)


eth-utils v1.10.0 (2021-01-21)
------------------------------

Bugfixes
~~~~~~~~

- When a TypeError or ValueError is raised during
  :meth:`~eth_utils.applicators.apply_formatters_to_dict`, eth_utils appends some useful contextual
  information. It was trying to re-create the old exception, but that sometimes fails, like with a
  :class:`JSONDecodeError`, which expects more arguments in the constructor. So now we raise a basic
  TypeError or ValueError. (`#204 <https://github.com/ethereum/eth-utils/issues/204>`__)
- Update the type signature of :meth:`~eth_utils.address.to_canonical_address`,
  :meth:`~eth_utils.address.to_checksum_address`, and
  :meth:`~eth_utils.address.to_normalized_address` to allow `bytes`-typed
  address input. (`#205 <https://github.com/ethereum/eth-utils/issues/205>`__)


Performance improvements
~~~~~~~~~~~~~~~~~~~~~~~~

- Significant speedup of :meth:`~eth_utils.hexadecimal.is_hex` and
  :meth:`~eth_utils.hexadecimal.is_hexstr`. (`#202 <https://github.com/ethereum/eth-utils/issues/202>`__)
- Significant speedup of :meth:`~eth_utils.address.is_address`. Running a test that abi-encodes an
  array of 10 addresses was about 67% faster. (`#203 <https://github.com/ethereum/eth-utils/issues/203>`__)


Internal Changes - for eth-utils Contributors
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

- Upgrade eth-hash to v0.3.1, to use its exported type annotations instead of casting the results. (`#208 <https://github.com/ethereum/eth-utils/issues/208>`__)


Miscellaneous changes
~~~~~~~~~~~~~~~~~~~~~

- `#196 <https://github.com/ethereum/eth-utils/issues/196>`__
- `#207 <https://github.com/ethereum/eth-utils/issues/207>`__


eth-utils v1.9.5 (2020-08-31)
-----------------------------

Bugfixes
~~~~~~~~

- Added a new type signature of apply_formatter_if to eth_utils curried module.
  Also added text_if_str and apply_formatters_to_dict. (`#201 <https://github.com/ethereum/eth-utils/issues/201>`__)


Misc
~~~~

- `#201 <https://github.com/ethereum/eth-utils/issues/201>`__


eth-utils v1.9.4 (2020-08-25)
-----------------------------

Bugfixes
~~~~~~~~

- Make sure all the eth_utils.curried methods are importable, plus a fix for curried typing of
  hexstr_if_str. (`#156 <https://github.com/ethereum/eth-utils/issues/156>`__)
- Pass context to new exception in ``replace_exceptions`` decorator. (`#198 <https://github.com/ethereum/eth-utils/issues/198>`__)
- Ensure pickling/unpickling an ``ExtendedDebugLogger`` always gives back an ``ExtendedDebugLogger``. (`#199 <https://github.com/ethereum/eth-utils/issues/199>`__)


eth-utils v1.9.0 (2020-05-11)
-----------------------------

Features
~~~~~~~~

- Add `is_hexstr` as preferred method of checking if a given value is a hex string. (`#137 <https://github.com/ethereum/eth-utils/issues/137>`__)
- Improve performance of `is_hex` and `is_hexstr` by up to 40x (`#185 <https://github.com/ethereum/eth-utils/issues/185>`__)
- Add ``humanize_integer_sequence`` utility. (`#188 <https://github.com/ethereum/eth-utils/issues/188>`__)
- Add ``humanize_bytes`` utility. (`#189 <https://github.com/ethereum/eth-utils/issues/189>`__)


Bugfixes
~~~~~~~~

- Silence a deprecation error by importing from collections.abc, instead of collections. (`#186 <https://github.com/ethereum/eth-utils/issues/186>`__)


eth-utils 1.8.4 (2019-12-05)
----------------------------

Bugfixes
~~~~~~~~

- Add missing asterisk to MANIFEST.in (`#182 <https://github.com/ethereum/eth-utils/issues/182>`__)


eth-utils 1.8.3 (2019-12-04)
----------------------------

Misc
~~~~

- `#181 <https://github.com/ethereum/eth-utils/issues/181>`__


eth-utils 1.8.2 (2019-12-04)
----------------------------

Misc
~~~~

- `#177 <https://github.com/ethereum/eth-utils/issues/177>`__, `#180 <https://github.com/ethereum/eth-utils/issues/180>`__


eth-utils 1.8.1 (2019-11-20)
----------------------------

No significant changes.


eth-utils 1.8.0-0.1 (2019-11-20)
--------------------------------

Misc
~~~~

- `#175 <https://github.com/ethereum/eth-utils/issues/175>`__


eth-utils 1.8.0 (2019-11-04)
----------------------------

Features
~~~~~~~~

- Add support for python3.8 (`#174 <https://github.com/ethereum/eth-utils/issues/174>`__)


eth-utils 1.7.0 (2019-09-05)
----------------------------

Features
~~~~~~~~

- Expose ``DEBUG2`` log level as top level module import (`#117 <https://github.com/ethereum/eth-utils/issues/117>`__)
- Add ``get_logger`` and ``get_extended_debug_logger`` utils (`#170 <https://github.com/ethereum/eth-utils/issues/170>`__)


Improved Documentation
~~~~~~~~~~~~~~~~~~~~~~

- Setup towncrier to improve the quality of the release notes (`#172 <https://github.com/ethereum/eth-utils/issues/172>`__)


v1.6.4
--------------

Released: August 5, 2019

- Feature

  - Caching for ``ExtendedDebugLogger.show_debug2`` property
    - `#167 <https://github.com/ethereum/eth-utils/pull/167>`_


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
