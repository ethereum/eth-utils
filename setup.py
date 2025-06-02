#!/usr/bin/env python
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
            "eth_utils/abi.py",
            "eth_utils/address.py",
            #"eth_utils/applicators.py",
            "eth_utils/conversions.py",
            "eth_utils/currency.py",
            "eth_utils/debug.py",
            "eth_utils/decorators.py",
            "eth_utils/encoding.py",
            "eth_utils/exceptions.py",
            "eth_utils/hexadecimal.py",
            "eth_utils/humanize.py",
            "eth_utils/module_loading.py",
            # "eth_utils/network.py", compiled module has no __file__
            "eth_utils/types.py",
            "eth_utils/units.py",
            "--pretty",
            "--install-types",
            "--disable-error-code=attr-defined",
            "--disable-error-code=comparison-overlap",
            "--disable-error-code=typeddict-item",
        ],
    )

extras_require = {
    "dev": [
        "build>=0.9.0",
        "bumpversion>=0.5.3",
        "eth-hash[pycryptodome]",
        "ipython",
        "pre-commit>=3.4.0",
        "tox>=4.0.0",
        "twine",
        "wheel",
    ],
    "docs": [
        "sphinx>=6.0.0",
        "sphinx-autobuild>=2021.3.14",
        "sphinx_rtd_theme>=1.0.0",
        "towncrier>=21,<22",
    ],
    "test": [
        "hypothesis>=4.43.0",
        "mypy==1.5.1",
        "pytest>=7.0.0",
        "pytest-xdist>=2.4.0",
    ],
}

extras_require["dev"] = (
    extras_require["dev"] + extras_require["docs"] + extras_require["test"]
)


with open("./README.md") as readme:
    long_description = readme.read()


setup(
    name="eth-utils",
    # *IMPORTANT*: Don't manually change the version here. Use `make bump`, as described in readme
    version="4.1.1",
    description=(
        """eth-utils: Common utility functions for python code that interacts with Ethereum"""
    ),
    long_description=long_description,
    long_description_content_type="text/markdown",
    author="The Ethereum Foundation",
    author_email="snakecharmers@ethereum.org",
    url="https://github.com/ethereum/eth-utils",
    include_package_data=True,
    install_requires=[
        "eth-hash>=0.3.1",
        "eth-typing>=3.0.0",
        "toolz>0.8.2;implementation_name=='pypy'",
        "cytoolz>=0.10.1;implementation_name=='cpython'",
    ],
    python_requires=">=3.8, <4",
    extras_require=extras_require,
    py_modules=["eth_utils"],
    license="MIT",
    zip_safe=False,
    keywords="ethereum",
    packages=find_packages(exclude=["scripts", "scripts.*", "tests", "tests.*"]),
    ext_modules=ext_modules,
    package_data={"eth_utils": ["py.typed"]},
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
    ],
)
