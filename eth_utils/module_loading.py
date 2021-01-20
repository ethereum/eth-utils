from importlib import import_module
from typing import Any


def import_string(dotted_path: str) -> Any:
    """
    Import a variable using its path and name.

    :param dotted_path: dotted module path and variable/class name
    :return: the attribute/class designated by the last name in the path
    :raise: ImportError, if the import failed

    Source: django.utils.module_loading
    """
    try:
        module_path, class_name = dotted_path.rsplit(".", 1)
    except ValueError:
        msg = "%s doesn't look like a module path" % dotted_path
        raise ImportError(msg)

    module = import_module(module_path)

    try:
        return getattr(module, class_name)
    except AttributeError:
        msg = 'Module "%s" does not define a "%s" attribute/class' % (
            module_path,
            class_name,
        )
        raise ImportError(msg)
