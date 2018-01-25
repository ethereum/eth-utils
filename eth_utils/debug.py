import platform
import subprocess
import sys


def pip_freeze():
    result = subprocess.run('pip freeze'.split(), stdout=subprocess.PIPE)
    return "pip freeze result:\n%s" % result.stdout.decode()


def python_version():
    return "Python version:\n%s" % sys.version


def platform_info():
    return "Operating System: %s" % platform.platform()


def get_environment_summary():
    return '\n\n'.join([
        python_version(),
        platform_info(),
        pip_freeze(),
    ])
