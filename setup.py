#!/usr/bin/env python
import sys
from setuptools import (
    find_packages,
    setup,
)
try:
    from mypyc.build import mypycify
except ImportError:
    ext_modules = []
else:
    ext_modules = mypycify(
        [
            "faster_eth_utils/abi.py",
            "faster_eth_utils/address.py",
            "faster_eth_utils/applicators.py",
            "faster_eth_utils/conversions.py",
            "faster_eth_utils/crypto.py",
            "faster_eth_utils/currency.py",
            "faster_eth_utils/debug.py",
            "faster_eth_utils/decorators.py",
            "faster_eth_utils/encoding.py",
            "faster_eth_utils/exceptions.py",
            "faster_eth_utils/functional.py",
            "faster_eth_utils/hexadecimal.py",
            "faster_eth_utils/humanize.py",
            "faster_eth_utils/module_loading.py",
            "faster_eth_utils/network.py",
            "faster_eth_utils/numeric.py",
            "faster_eth_utils/toolz.py",
            "faster_eth_utils/types.py",
            "faster_eth_utils/units.py",
            "--pretty",
            "--install-types",
            "--disable-error-code=attr-defined",
            "--disable-error-code=comparison-overlap",
            "--disable-error-code=typeddict-item",
            "--disable-error-code=no-any-return",
            "--disable-error-code=misc",
            "--disable-error-code=unused-ignore",
        ],
    )

MYPY_REQUIREMENT = f"mypy=={'1.14.1' if sys.version_info < (3, 9) else '1.18.2'}"

extras_require = {
    "dev": [
        "build>=0.9.0",
        "bump_my_version>=0.19.0",
        "eth-hash[pycryptodome]",
        "ipython",
        MYPY_REQUIREMENT,
        "pre-commit>=3.4.0",
        "tox>=4.0.0",
        "twine",
        "wheel",
    ],
    "docs": [
        "sphinx>=6.0.0",
        "sphinx-autobuild>=2021.3.14",
        "sphinx_rtd_theme>=1.0.0",
        "towncrier>=24,<25",
    ],
    "test": [
        "hypothesis>=4.43.0",
        MYPY_REQUIREMENT,
        "pytest>=7.0.0",
        "pytest-codspeed>=2.0.0",
        "pytest-xdist>=2.4.0",
    ],
}

extras_require["dev"] = (
    extras_require["dev"] + extras_require["docs"] + extras_require["test"]
)


with open("./README.md") as readme:
    long_description = readme.read()


setup(
    name="faster-eth-utils",
    # *IMPORTANT*: Don't manually change the version here. Use `make bump`, as described in readme
    version="5.3.9",
    description=(
        """A fork of eth-utils: Common utility functions for python code that interacts with Ethereum, implemented in C"""
    ),
    long_description=long_description,
    long_description_content_type="text/markdown",
    author="The Ethereum Foundation",
    author_email="snakecharmers@ethereum.org",
    url="https://github.com/BobTheBuidler/eth-utils",
    include_package_data=True,
    install_requires=[
        "cchecksum>=0.0.3",
        "eth-hash>=0.3.1",
        "eth-typing>=5.0.0",
        "toolz>0.8.2;implementation_name=='pypy'",
        "cytoolz>=0.10.1;implementation_name=='cpython'",
        "pydantic>=2.0.0,<3",
    ],
    python_requires=">=3.8, <4",
    extras_require=extras_require,
    py_modules=["eth_utils"],
    license="MIT",
    zip_safe=False,
    keywords="ethereum",
    packages=find_packages(exclude=["scripts", "scripts.*", "tests", "tests.*"]),
    ext_modules=ext_modules,
    package_data={"faster_eth_utils": ["py.typed"]},
    classifiers=[
        "Intended Audience :: Developers",
        "License :: OSI Approved :: MIT License",
        "Natural Language :: English",
        "Programming Language :: Python :: 3",
        "Programming Language :: Python :: 3.8",
        "Programming Language :: Python :: 3.9",
        "Programming Language :: Python :: 3.10",
        "Programming Language :: Python :: 3.11",
        "Programming Language :: Python :: 3.12",
        "Programming Language :: Python :: 3.13",
        "Programming Language :: Python :: Implementation :: CPython",
    ],
)
