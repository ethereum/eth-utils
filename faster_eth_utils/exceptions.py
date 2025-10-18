"""
faster-eth-utils exceptions always inherit from eth-utils exceptions, so porting to faster-eth-utils
does not require any change to your existing exception handlers. They will continue to work.
"""

import eth_utils.exceptions

class ValidationError(eth_utils.exceptions.ValidationError):
    """
    Raised when something does not pass a validation check.
    """
