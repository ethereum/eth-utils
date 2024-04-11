class ValidationError(Exception):
    """
    Raised when something does not pass a validation check.
    """


class EthUtilsABIValidationError(ValidationError):
    pass
