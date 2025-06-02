#include <Python.h>

PyMODINIT_FUNC
PyInit_exceptions(void)
{
    PyObject *tmp;
    if (!(tmp = PyImport_ImportModule("bce0bfc64ce5e845ec4a__mypyc"))) return NULL;
    PyObject *capsule = PyObject_GetAttrString(tmp, "init_faster_eth_utils___exceptions");
    Py_DECREF(tmp);
    if (capsule == NULL) return NULL;
    void *init_func = PyCapsule_GetPointer(capsule, "bce0bfc64ce5e845ec4a__mypyc.init_faster_eth_utils___exceptions");
    Py_DECREF(capsule);
    if (!init_func) {
        return NULL;
    }
    return ((PyObject *(*)(void))init_func)();
}

// distutils sometimes spuriously tells cl to export CPyInit___init__,
// so provide that so it chills out
PyMODINIT_FUNC PyInit___init__(void) { return PyInit_exceptions(); }
