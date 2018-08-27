# Ethereum Utils

[![Join the chat at https://gitter.im/ethereum/eth-utils](https://badges.gitter.im/ethereum/eth-utils.svg)](https://gitter.im/ethereum/eth-utils)

[![Build Status](https://circleci.com/gh/ethereum/eth-utils.svg?style=shield)](https://circleci.com/gh/ethereum/eth-utils)

Common utility functions for codebases which interact with ethereum.

> This library and repository was previously located at https://github.com/pipermerriam/ethereum-utils.  It was transferred to the Ethereum foundation github in November 2017 and renamed to `eth-utils`.  The PyPi package was also renamed from `ethereum-utils` to `eth-utils.

**Table of Contents**

- [Installation](#installation)
- [Development](#development)
  - [Running the tests](#running-the-tests)
  - [Releasing](#releasing)
    - [How to bump versions](#how-to-bump-versions)
- [API](#api)
- [Contribute](#contribute)
- [License](#license)

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


#### How to bump versions

The version format for this repo is `{major}.{minor}.{patch}` for stable, and
`{major}.{minor}.{patch}-{stage}.{devnum}` for unstable (`stage` can be alpha or beta).

To issue the next version in line, specify which part to bump,
like `make release bump=minor` or `make release bump=devnum`.

If you are in a beta version, `make release bump=stage` will switch to a stable.

To issue an unstable version when the current version is stable, specify the
new version explicitly, like `make release bump="--new-version 4.0.0-alpha.1 devnum"`

## API

Check out the [API file](API.md).

## Contribute

Feel free to contribute by opening a pull request or an issue.

## License

[MIT](LICENSE) © 2017-2018 Piper Merriam
