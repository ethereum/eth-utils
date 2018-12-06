#!/usr/bin/env python
# -*- coding: utf-8 -*-
from setuptools import (
    setup,
    find_packages,
)

extras_require = {
    'lint': [
        'black>=18.6b4,<19',
        'flake8>=3.5.0,<4.0.0',
        'mypy<0.600',
        'pytest>=3.4.1,<4.0.0',
    ],
    'test': [
        'hypothesis>=3.4.2,<4.0.0',
        'pytest>=3.4.1,<4.0.0',
        'pytest-pythonpath>=0.3,<1.0',
    ],
    'deploy': [
        'bumpversion>=0.5.3,<1.0.0',
        'tox>=2.9.1,<3.0.0',
        'wheel>=0.30.0,<1.0.0',
    ],
    'dev': [
        "twine",
    ],
    'doc': [
        'Sphinx>=1.5.5,<2',
        'sphinx_rtd_theme>=0.1.9,<2',
    ],
}

extras_require['dev'] = (
    extras_require['dev'] +
    extras_require['doc'] +
    extras_require['lint'] +
    extras_require['test'] +
    extras_require['deploy']
)

setup(
    name='eth-utils',
    # *IMPORTANT*: Don't manually change the version here. Use the 'bumpversion' utility.
    version='1.4.0',
    description="""Common utility functions for ethereum codebases.""",
    long_description_markdown_filename='README.md',
    author='Piper Merriam',
    author_email='pipermerriam@gmail.com',
    url='https://github.com/ethereum/eth_utils',
    include_package_data=True,
    install_requires=[
        "eth-hash>=0.1.0,<1.0.0",
        "eth-typing>=1.0.0,<3.0.0",
        "toolz>0.8.2,<1;implementation_name=='pypy'",
        "cytoolz>=0.8.2,<1.0.0;implementation_name=='cpython'",
    ],
    setup_requires=['setuptools-markdown'],
    python_requires='>=3.5,!=3.5.2,<4',
    extras_require=extras_require,
    py_modules=['eth_utils'],
    license="MIT",
    zip_safe=False,
    keywords='ethereum',
    packages=find_packages(exclude=["tests", "tests.*"]),
    classifiers=[
        'Intended Audience :: Developers',
        'License :: OSI Approved :: MIT License',
        'Natural Language :: English',
        'Programming Language :: Python :: 3',
        'Programming Language :: Python :: 3.5',
        'Programming Language :: Python :: 3.6',
        'Programming Language :: Python :: Implementation :: PyPy',
    ],
)
