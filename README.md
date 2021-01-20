# Ethereum Utilities

[![Join the chat at https://gitter.im/ethereum/eth-utils](https://badges.gitter.im/ethereum/eth-utils.svg)](https://gitter.im/ethereum/eth-utils?utm_source=badge&utm_medium=badge&utm_campaign=pr-badge&utm_content=badge)
[![Build Status](https://circleci.com/gh/ethereum/eth-utils.svg?style=shield)](https://circleci.com/gh/ethereum/eth-utils)
[![PyPI version](https://badge.fury.io/py/eth-utils.svg)](https://badge.fury.io/py/eth-utils)
[![Python versions](https://img.shields.io/pypi/pyversions/eth-utils.svg)](https://pypi.python.org/pypi/eth-utils)
[![Docs build](https://readthedocs.org/projects/eth-utils/badge/?version=latest)](http://eth-utils.readthedocs.io/en/latest/?badge=latest)
   

Common utility functions for python code that interacts with Ethereum

Read more in the [documentation on ReadTheDocs](https://eth-utils.readthedocs.io/). [View the change log](https://eth-utils.readthedocs.io/en/latest/release_notes.html).

## Quickstart

```sh
pip install eth-utils
```

## Developer Setup

If you would like to hack on eth-utils, please check out the [Snake Charmers
Tactical Manual](https://github.com/ethereum/snake-charmers-tactical-manual)
for information on how we do:

- Testing
- Pull Requests
- Code Style
- Documentation

### Development Environment Setup

You can set up your dev environment with:

```sh
git clone git@github.com:ethereum/eth-utils.git
cd eth-utils
virtualenv -p python3 venv
. venv/bin/activate
pip install -e .[dev]
pip install -e eth-hash[pycryptodome]
```

### Testing Setup

During development, you might like to have tests run on every file save.

Show flake8 errors on file change:

```sh
# Test flake8
when-changed -v -s -r -1 eth_utils/ tests/ -c "clear; flake8 eth_utils tests && echo 'flake8 success' || echo 'error'"
```

Run multi-process tests in one command, but without color:

```sh
# in the project root:
pytest --numprocesses=4 --looponfail --maxfail=1
# the same thing, succinctly:
pytest -n 4 -f --maxfail=1
```

Run in one thread, with color and desktop notifications:

```sh
cd venv
ptw --onfail "notify-send -t 5000 'Test failure ⚠⚠⚠⚠⚠' 'python 3 test on eth-utils failed'" ../tests ../eth_utils
```

### Release setup

To release a new version:

```sh
make release bump=$$VERSION_PART_TO_BUMP$$
```

#### How to bumpversion

The version format for this repo is `{major}.{minor}.{patch}` for stable, and
`{major}.{minor}.{patch}-{stage}.{devnum}` for unstable (`stage` can be alpha or beta).

To issue the next version in line, specify which part to bump,
like `make release bump=minor` or `make release bump=devnum`. This is typically done from the
master branch, except when releasing a beta (in which case the beta is released from master,
and the previous stable branch is released from said branch).

If you are in a beta version, `make release bump=stage` will switch to a stable.

To issue an unstable version when the current version is stable, specify the
new version explicitly, like `make release bump="--new-version 4.0.0-alpha.1 devnum"`
