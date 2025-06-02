#include "init.c"
#include "getargs.c"
#include "getargsfast.c"
#include "int_ops.c"
#include "float_ops.c"
#include "str_ops.c"
#include "bytes_ops.c"
#include "list_ops.c"
#include "dict_ops.c"
#include "set_ops.c"
#include "tuple_ops.c"
#include "exc_ops.c"
#include "misc_ops.c"
#include "generic_ops.c"
#include "pythonsupport.c"
#include "__native_bce0bfc64ce5e845ec4a.h"
#include "__native_internal_bce0bfc64ce5e845ec4a.h"
static PyMethodDef abimodule_methods[] = {
    {"collapse_if_tuple", (PyCFunction)CPyPy_abi___collapse_if_tuple, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"_abi_to_signature", (PyCFunction)CPyPy_abi____abi_to_signature, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"function_signature_to_4byte_selector", (PyCFunction)CPyPy_abi___function_signature_to_4byte_selector, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"function_abi_to_4byte_selector", (PyCFunction)CPyPy_abi___function_abi_to_4byte_selector, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"event_signature_to_log_topic", (PyCFunction)CPyPy_abi___event_signature_to_log_topic, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"event_abi_to_log_topic", (PyCFunction)CPyPy_abi___event_abi_to_log_topic, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef abimodule = {
    PyModuleDef_HEAD_INIT,
    "faster_eth_utils.abi",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    abimodule_methods
};

PyObject *CPyInit_faster_eth_utils___abi(void)
{
    PyObject* modname = NULL;
    if (CPyModule_faster_eth_utils___abi_internal) {
        Py_INCREF(CPyModule_faster_eth_utils___abi_internal);
        return CPyModule_faster_eth_utils___abi_internal;
    }
    CPyModule_faster_eth_utils___abi_internal = PyModule_Create(&abimodule);
    if (unlikely(CPyModule_faster_eth_utils___abi_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_faster_eth_utils___abi_internal, "__name__");
    CPyStatic_abi___globals = PyModule_GetDict(CPyModule_faster_eth_utils___abi_internal);
    if (unlikely(CPyStatic_abi___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_abi_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_faster_eth_utils___abi_internal;
    fail:
    Py_CLEAR(CPyModule_faster_eth_utils___abi_internal);
    Py_CLEAR(modname);
    return NULL;
}

PyObject *CPyDef_abi___collapse_if_tuple(PyObject *cpy_r_abi) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    int32_t cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject **cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    int32_t cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    int32_t cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    cpy_r_r0 = CPyStatics[3]; /* 'type' */
    cpy_r_r1 = CPyDict_GetItem(cpy_r_abi, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/abi.py", "collapse_if_tuple", 28, CPyStatic_abi___globals);
        goto CPyL28;
    }
    cpy_r_r2 = (PyObject *)&PyUnicode_Type;
    cpy_r_r3 = PyObject_IsInstance(cpy_r_r1, cpy_r_r2);
    cpy_r_r4 = cpy_r_r3 >= 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("faster_eth_utils/abi.py", "collapse_if_tuple", 29, CPyStatic_abi___globals);
        goto CPyL29;
    }
    cpy_r_r5 = cpy_r_r3;
    if (cpy_r_r5) goto CPyL10;
    cpy_r_r6 = CPyStatics[4]; /* "The 'type' must be a string, but got " */
    cpy_r_r7 = PyObject_Repr(cpy_r_r1);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/abi.py", "collapse_if_tuple", 31, CPyStatic_abi___globals);
        goto CPyL29;
    }
    cpy_r_r8 = CPyStatics[5]; /* ' of type ' */
    cpy_r_r9 = PyObject_Type(cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    cpy_r_r10 = PyObject_Str(cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/abi.py", "collapse_if_tuple", 31, CPyStatic_abi___globals);
        goto CPyL30;
    }
    cpy_r_r11 = CPyStr_Build(4, cpy_r_r6, cpy_r_r7, cpy_r_r8, cpy_r_r10);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/abi.py", "collapse_if_tuple", 31, CPyStatic_abi___globals);
        goto CPyL28;
    }
    cpy_r_r12 = CPyModule_builtins;
    cpy_r_r13 = CPyStatics[6]; /* 'TypeError' */
    cpy_r_r14 = CPyObject_GetAttr(cpy_r_r12, cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/abi.py", "collapse_if_tuple", 30, CPyStatic_abi___globals);
        goto CPyL31;
    }
    PyObject *cpy_r_r15[1] = {cpy_r_r11};
    cpy_r_r16 = (PyObject **)&cpy_r_r15;
    cpy_r_r17 = PyObject_Vectorcall(cpy_r_r14, cpy_r_r16, 1, 0);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/abi.py", "collapse_if_tuple", 30, CPyStatic_abi___globals);
        goto CPyL31;
    }
    CPy_DECREF(cpy_r_r11);
    CPy_Raise(cpy_r_r17);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_eth_utils/abi.py", "collapse_if_tuple", 30, CPyStatic_abi___globals);
        goto CPyL28;
    }
    CPy_Unreachable();
CPyL10: ;
    CPy_INCREF(cpy_r_r1);
    if (likely(PyUnicode_Check(cpy_r_r1)))
        cpy_r_r18 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/abi.py", "collapse_if_tuple", 33, CPyStatic_abi___globals, "str", cpy_r_r1);
        goto CPyL29;
    }
    cpy_r_r19 = CPyStatics[7]; /* 'tuple' */
    cpy_r_r20 = CPyStr_Startswith(cpy_r_r18, cpy_r_r19);
    CPy_DECREF(cpy_r_r18);
    cpy_r_r21 = cpy_r_r20;
    if (cpy_r_r21) goto CPyL14;
    if (likely(PyUnicode_Check(cpy_r_r1)))
        cpy_r_r22 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/abi.py", "collapse_if_tuple", 34, CPyStatic_abi___globals, "str", cpy_r_r1);
        goto CPyL28;
    }
    return cpy_r_r22;
CPyL14: ;
    cpy_r_r23 = CPyStatics[8]; /* ',' */
    cpy_r_r24 = PyList_New(0);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/abi.py", "collapse_if_tuple", 36, CPyStatic_abi___globals);
        goto CPyL29;
    }
    cpy_r_r25 = CPyStatics[9]; /* 'components' */
    cpy_r_r26 = CPyDict_GetItem(cpy_r_abi, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/abi.py", "collapse_if_tuple", 36, CPyStatic_abi___globals);
        goto CPyL32;
    }
    cpy_r_r27 = PyObject_GetIter(cpy_r_r26);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/abi.py", "collapse_if_tuple", 36, CPyStatic_abi___globals);
        goto CPyL32;
    }
CPyL17: ;
    cpy_r_r28 = PyIter_Next(cpy_r_r27);
    if (cpy_r_r28 == NULL) goto CPyL33;
    if (likely(PyDict_Check(cpy_r_r28)))
        cpy_r_r29 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/abi.py", "collapse_if_tuple", 36, CPyStatic_abi___globals, "dict", cpy_r_r28);
        goto CPyL34;
    }
    cpy_r_r30 = CPyDef_abi___collapse_if_tuple(cpy_r_r29);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/abi.py", "collapse_if_tuple", 36, CPyStatic_abi___globals);
        goto CPyL34;
    }
    cpy_r_r31 = PyList_Append(cpy_r_r24, cpy_r_r30);
    CPy_DECREF(cpy_r_r30);
    cpy_r_r32 = cpy_r_r31 >= 0;
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("faster_eth_utils/abi.py", "collapse_if_tuple", 36, CPyStatic_abi___globals);
        goto CPyL34;
    } else
        goto CPyL17;
CPyL21: ;
    cpy_r_r33 = CPy_NoErrOccurred();
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("faster_eth_utils/abi.py", "collapse_if_tuple", 36, CPyStatic_abi___globals);
        goto CPyL32;
    }
    cpy_r_r34 = PyUnicode_Join(cpy_r_r23, cpy_r_r24);
    CPy_DECREF_NO_IMM(cpy_r_r24);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/abi.py", "collapse_if_tuple", 36, CPyStatic_abi___globals);
        goto CPyL29;
    }
    if (likely(PyUnicode_Check(cpy_r_r1)))
        cpy_r_r35 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/abi.py", "collapse_if_tuple", 39, CPyStatic_abi___globals, "str", cpy_r_r1);
        goto CPyL35;
    }
    cpy_r_r36 = CPyStr_GetSlice(cpy_r_r35, 10, 9223372036854775806LL);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/abi.py", "collapse_if_tuple", 39, CPyStatic_abi___globals);
        goto CPyL35;
    }
    if (likely(PyUnicode_Check(cpy_r_r36)))
        cpy_r_r37 = cpy_r_r36;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/abi.py", "collapse_if_tuple", 39, CPyStatic_abi___globals, "str", cpy_r_r36);
        goto CPyL35;
    }
    cpy_r_r38 = CPyStatics[10]; /* '(' */
    cpy_r_r39 = CPyStatics[11]; /* ')' */
    cpy_r_r40 = CPyStr_Build(4, cpy_r_r38, cpy_r_r34, cpy_r_r39, cpy_r_r37);
    CPy_DECREF(cpy_r_r34);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/abi.py", "collapse_if_tuple", 40, CPyStatic_abi___globals);
        goto CPyL28;
    }
    return cpy_r_r40;
CPyL28: ;
    cpy_r_r41 = NULL;
    return cpy_r_r41;
CPyL29: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL28;
CPyL30: ;
    CPy_DecRef(cpy_r_r7);
    goto CPyL28;
CPyL31: ;
    CPy_DecRef(cpy_r_r11);
    goto CPyL28;
CPyL32: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r24);
    goto CPyL28;
CPyL33: ;
    CPy_DECREF(cpy_r_r27);
    goto CPyL21;
CPyL34: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r27);
    goto CPyL28;
CPyL35: ;
    CPy_DecRef(cpy_r_r34);
    goto CPyL28;
}

PyObject *CPyPy_abi___collapse_if_tuple(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"abi", 0};
    static CPyArg_Parser parser = {"O:collapse_if_tuple", kwlist, 0};
    PyObject *obj_abi;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_abi)) {
        return NULL;
    }
    PyObject *arg_abi;
    if (likely(PyDict_Check(obj_abi)))
        arg_abi = obj_abi;
    else {
        CPy_TypeError("dict", obj_abi); 
        goto fail;
    }
    PyObject *retval = CPyDef_abi___collapse_if_tuple(arg_abi);
    return retval;
fail: ;
    CPy_AddTraceback("faster_eth_utils/abi.py", "collapse_if_tuple", 11, CPyStatic_abi___globals);
    return NULL;
}

PyObject *CPyDef_abi____abi_to_signature(PyObject *cpy_r_abi) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    int32_t cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    cpy_r_r0 = CPyStatics[8]; /* ',' */
    cpy_r_r1 = PyList_New(0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/abi.py", "_abi_to_signature", 47, CPyStatic_abi___globals);
        goto CPyL14;
    }
    cpy_r_r2 = CPyStatics[12]; /* 'inputs' */
    cpy_r_r3 = PyList_New(0);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/abi.py", "_abi_to_signature", 47, CPyStatic_abi___globals);
        goto CPyL15;
    }
    cpy_r_r4 = CPyDict_Get(cpy_r_abi, cpy_r_r2, cpy_r_r3);
    CPy_DECREF_NO_IMM(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/abi.py", "_abi_to_signature", 47, CPyStatic_abi___globals);
        goto CPyL15;
    }
    cpy_r_r5 = PyObject_GetIter(cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/abi.py", "_abi_to_signature", 47, CPyStatic_abi___globals);
        goto CPyL15;
    }
CPyL4: ;
    cpy_r_r6 = PyIter_Next(cpy_r_r5);
    if (cpy_r_r6 == NULL) goto CPyL16;
    if (likely(PyDict_Check(cpy_r_r6)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/abi.py", "_abi_to_signature", 47, CPyStatic_abi___globals, "dict", cpy_r_r6);
        goto CPyL17;
    }
    cpy_r_r8 = CPyDef_abi___collapse_if_tuple(cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/abi.py", "_abi_to_signature", 47, CPyStatic_abi___globals);
        goto CPyL17;
    }
    cpy_r_r9 = PyList_Append(cpy_r_r1, cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r10 = cpy_r_r9 >= 0;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("faster_eth_utils/abi.py", "_abi_to_signature", 47, CPyStatic_abi___globals);
        goto CPyL17;
    } else
        goto CPyL4;
CPyL8: ;
    cpy_r_r11 = CPy_NoErrOccurred();
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("faster_eth_utils/abi.py", "_abi_to_signature", 47, CPyStatic_abi___globals);
        goto CPyL15;
    }
    cpy_r_r12 = PyUnicode_Join(cpy_r_r0, cpy_r_r1);
    CPy_DECREF_NO_IMM(cpy_r_r1);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/abi.py", "_abi_to_signature", 46, CPyStatic_abi___globals);
        goto CPyL14;
    }
    cpy_r_r13 = CPyStatics[13]; /* 'name' */
    cpy_r_r14 = CPyDict_GetItem(cpy_r_abi, cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/abi.py", "_abi_to_signature", 49, CPyStatic_abi___globals);
        goto CPyL18;
    }
    cpy_r_r15 = PyObject_Str(cpy_r_r14);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/abi.py", "_abi_to_signature", 49, CPyStatic_abi___globals);
        goto CPyL18;
    }
    cpy_r_r16 = CPyStatics[10]; /* '(' */
    cpy_r_r17 = CPyStatics[11]; /* ')' */
    cpy_r_r18 = CPyStr_Build(4, cpy_r_r15, cpy_r_r16, cpy_r_r12, cpy_r_r17);
    CPy_DECREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/abi.py", "_abi_to_signature", 49, CPyStatic_abi___globals);
        goto CPyL14;
    }
    return cpy_r_r18;
CPyL14: ;
    cpy_r_r19 = NULL;
    return cpy_r_r19;
CPyL15: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL14;
CPyL16: ;
    CPy_DECREF(cpy_r_r5);
    goto CPyL8;
CPyL17: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r5);
    goto CPyL14;
CPyL18: ;
    CPy_DecRef(cpy_r_r12);
    goto CPyL14;
}

PyObject *CPyPy_abi____abi_to_signature(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"abi", 0};
    static CPyArg_Parser parser = {"O:_abi_to_signature", kwlist, 0};
    PyObject *obj_abi;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_abi)) {
        return NULL;
    }
    PyObject *arg_abi;
    if (likely(PyDict_Check(obj_abi)))
        arg_abi = obj_abi;
    else {
        CPy_TypeError("dict", obj_abi); 
        goto fail;
    }
    PyObject *retval = CPyDef_abi____abi_to_signature(arg_abi);
    return retval;
fail: ;
    CPy_AddTraceback("faster_eth_utils/abi.py", "_abi_to_signature", 45, CPyStatic_abi___globals);
    return NULL;
}

PyObject *CPyDef_abi___function_signature_to_4byte_selector(PyObject *cpy_r_event_signature) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject **cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    cpy_r_r0 = CPyStatics[14]; /* ' ' */
    cpy_r_r1 = CPyStatics[15]; /* '' */
    cpy_r_r2 = PyUnicode_Replace(cpy_r_event_signature, cpy_r_r0, cpy_r_r1, -1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/abi.py", "function_signature_to_4byte_selector", 54, CPyStatic_abi___globals);
        goto CPyL6;
    }
    cpy_r_r3 = CPyStatic_abi___globals;
    cpy_r_r4 = CPyStatics[16]; /* 'keccak' */
    cpy_r_r5 = CPyDict_GetItem(cpy_r_r3, cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/abi.py", "function_signature_to_4byte_selector", 54, CPyStatic_abi___globals);
        goto CPyL7;
    }
    PyObject *cpy_r_r6[1] = {cpy_r_r2};
    cpy_r_r7 = (PyObject **)&cpy_r_r6;
    cpy_r_r8 = CPyStatics[279]; /* ('text',) */
    cpy_r_r9 = PyObject_Vectorcall(cpy_r_r5, cpy_r_r7, 0, cpy_r_r8);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/abi.py", "function_signature_to_4byte_selector", 54, CPyStatic_abi___globals);
        goto CPyL7;
    }
    CPy_DECREF(cpy_r_r2);
    if (likely(PyBytes_Check(cpy_r_r9) || PyByteArray_Check(cpy_r_r9)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/abi.py", "function_signature_to_4byte_selector", 54, CPyStatic_abi___globals, "bytes", cpy_r_r9);
        goto CPyL6;
    }
    cpy_r_r11 = CPyBytes_GetSlice(cpy_r_r10, 0, 8);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/abi.py", "function_signature_to_4byte_selector", 54, CPyStatic_abi___globals);
        goto CPyL6;
    }
    return cpy_r_r11;
CPyL6: ;
    cpy_r_r12 = NULL;
    return cpy_r_r12;
CPyL7: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL6;
}

PyObject *CPyPy_abi___function_signature_to_4byte_selector(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"event_signature", 0};
    static CPyArg_Parser parser = {"O:function_signature_to_4byte_selector", kwlist, 0};
    PyObject *obj_event_signature;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_event_signature)) {
        return NULL;
    }
    PyObject *arg_event_signature;
    if (likely(PyUnicode_Check(obj_event_signature)))
        arg_event_signature = obj_event_signature;
    else {
        CPy_TypeError("str", obj_event_signature); 
        goto fail;
    }
    PyObject *retval = CPyDef_abi___function_signature_to_4byte_selector(arg_event_signature);
    return retval;
fail: ;
    CPy_AddTraceback("faster_eth_utils/abi.py", "function_signature_to_4byte_selector", 53, CPyStatic_abi___globals);
    return NULL;
}

PyObject *CPyDef_abi___function_abi_to_4byte_selector(PyObject *cpy_r_function_abi) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_abi____abi_to_signature(cpy_r_function_abi);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/abi.py", "function_abi_to_4byte_selector", 58, CPyStatic_abi___globals);
        goto CPyL3;
    }
    cpy_r_r1 = CPyDef_abi___function_signature_to_4byte_selector(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/abi.py", "function_abi_to_4byte_selector", 59, CPyStatic_abi___globals);
        goto CPyL3;
    }
    return cpy_r_r1;
CPyL3: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_abi___function_abi_to_4byte_selector(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"function_abi", 0};
    static CPyArg_Parser parser = {"O:function_abi_to_4byte_selector", kwlist, 0};
    PyObject *obj_function_abi;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_function_abi)) {
        return NULL;
    }
    PyObject *arg_function_abi;
    if (likely(PyDict_Check(obj_function_abi)))
        arg_function_abi = obj_function_abi;
    else {
        CPy_TypeError("dict", obj_function_abi); 
        goto fail;
    }
    PyObject *retval = CPyDef_abi___function_abi_to_4byte_selector(arg_function_abi);
    return retval;
fail: ;
    CPy_AddTraceback("faster_eth_utils/abi.py", "function_abi_to_4byte_selector", 57, CPyStatic_abi___globals);
    return NULL;
}

PyObject *CPyDef_abi___event_signature_to_log_topic(PyObject *cpy_r_event_signature) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject **cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    cpy_r_r0 = CPyStatics[14]; /* ' ' */
    cpy_r_r1 = CPyStatics[15]; /* '' */
    cpy_r_r2 = PyUnicode_Replace(cpy_r_event_signature, cpy_r_r0, cpy_r_r1, -1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/abi.py", "event_signature_to_log_topic", 63, CPyStatic_abi___globals);
        goto CPyL5;
    }
    cpy_r_r3 = CPyStatic_abi___globals;
    cpy_r_r4 = CPyStatics[16]; /* 'keccak' */
    cpy_r_r5 = CPyDict_GetItem(cpy_r_r3, cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/abi.py", "event_signature_to_log_topic", 63, CPyStatic_abi___globals);
        goto CPyL6;
    }
    PyObject *cpy_r_r6[1] = {cpy_r_r2};
    cpy_r_r7 = (PyObject **)&cpy_r_r6;
    cpy_r_r8 = CPyStatics[279]; /* ('text',) */
    cpy_r_r9 = PyObject_Vectorcall(cpy_r_r5, cpy_r_r7, 0, cpy_r_r8);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/abi.py", "event_signature_to_log_topic", 63, CPyStatic_abi___globals);
        goto CPyL6;
    }
    CPy_DECREF(cpy_r_r2);
    if (likely(PyBytes_Check(cpy_r_r9) || PyByteArray_Check(cpy_r_r9)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/abi.py", "event_signature_to_log_topic", 63, CPyStatic_abi___globals, "bytes", cpy_r_r9);
        goto CPyL5;
    }
    return cpy_r_r10;
CPyL5: ;
    cpy_r_r11 = NULL;
    return cpy_r_r11;
CPyL6: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL5;
}

PyObject *CPyPy_abi___event_signature_to_log_topic(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"event_signature", 0};
    static CPyArg_Parser parser = {"O:event_signature_to_log_topic", kwlist, 0};
    PyObject *obj_event_signature;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_event_signature)) {
        return NULL;
    }
    PyObject *arg_event_signature;
    if (likely(PyUnicode_Check(obj_event_signature)))
        arg_event_signature = obj_event_signature;
    else {
        CPy_TypeError("str", obj_event_signature); 
        goto fail;
    }
    PyObject *retval = CPyDef_abi___event_signature_to_log_topic(arg_event_signature);
    return retval;
fail: ;
    CPy_AddTraceback("faster_eth_utils/abi.py", "event_signature_to_log_topic", 62, CPyStatic_abi___globals);
    return NULL;
}

PyObject *CPyDef_abi___event_abi_to_log_topic(PyObject *cpy_r_event_abi) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_abi____abi_to_signature(cpy_r_event_abi);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/abi.py", "event_abi_to_log_topic", 67, CPyStatic_abi___globals);
        goto CPyL3;
    }
    cpy_r_r1 = CPyDef_abi___event_signature_to_log_topic(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/abi.py", "event_abi_to_log_topic", 68, CPyStatic_abi___globals);
        goto CPyL3;
    }
    return cpy_r_r1;
CPyL3: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_abi___event_abi_to_log_topic(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"event_abi", 0};
    static CPyArg_Parser parser = {"O:event_abi_to_log_topic", kwlist, 0};
    PyObject *obj_event_abi;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_event_abi)) {
        return NULL;
    }
    PyObject *arg_event_abi;
    if (likely(PyDict_Check(obj_event_abi)))
        arg_event_abi = obj_event_abi;
    else {
        CPy_TypeError("dict", obj_event_abi); 
        goto fail;
    }
    PyObject *retval = CPyDef_abi___event_abi_to_log_topic(arg_event_abi);
    return retval;
fail: ;
    CPy_AddTraceback("faster_eth_utils/abi.py", "event_abi_to_log_topic", 66, CPyStatic_abi___globals);
    return NULL;
}

char CPyDef_abi_____top_level__(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[18]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/abi.py", "<module>", -1, CPyStatic_abi___globals);
        goto CPyL6;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[280]; /* ('Any', 'Dict') */
    cpy_r_r6 = CPyStatics[21]; /* 'typing' */
    cpy_r_r7 = CPyStatic_abi___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/abi.py", "<module>", 1, CPyStatic_abi___globals);
        goto CPyL6;
    }
    CPyModule_typing = cpy_r_r8;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[281]; /* ('keccak',) */
    cpy_r_r10 = CPyStatics[22]; /* 'faster_eth_utils.crypto' */
    cpy_r_r11 = CPyStatic_abi___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/abi.py", "<module>", 6, CPyStatic_abi___globals);
        goto CPyL6;
    }
    CPyModule_faster_eth_utils___crypto = cpy_r_r12;
    CPy_INCREF(CPyModule_faster_eth_utils___crypto);
    CPy_DECREF(cpy_r_r12);
    return 1;
CPyL6: ;
    cpy_r_r13 = 2;
    return cpy_r_r13;
}
static PyMethodDef addressmodule_methods[] = {
    {"is_hex_address", (PyCFunction)CPyPy_address___is_hex_address, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_binary_address", (PyCFunction)CPyPy_address___is_binary_address, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_address", (PyCFunction)CPyPy_address___is_address, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"to_normalized_address", (PyCFunction)CPyPy_address___to_normalized_address, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_normalized_address", (PyCFunction)CPyPy_address___is_normalized_address, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"to_canonical_address", (PyCFunction)CPyPy_address___to_canonical_address, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_canonical_address", (PyCFunction)CPyPy_address___is_canonical_address, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_same_address", (PyCFunction)CPyPy_address___is_same_address, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"to_checksum_address", (PyCFunction)CPyPy_address___to_checksum_address, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_checksum_address", (PyCFunction)CPyPy_address___is_checksum_address, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"_is_checksum_formatted", (PyCFunction)CPyPy_address____is_checksum_formatted, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_checksum_formatted_address", (PyCFunction)CPyPy_address___is_checksum_formatted_address, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef addressmodule = {
    PyModuleDef_HEAD_INIT,
    "faster_eth_utils.address",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    addressmodule_methods
};

PyObject *CPyInit_faster_eth_utils___address(void)
{
    PyObject* modname = NULL;
    if (CPyModule_faster_eth_utils___address_internal) {
        Py_INCREF(CPyModule_faster_eth_utils___address_internal);
        return CPyModule_faster_eth_utils___address_internal;
    }
    CPyModule_faster_eth_utils___address_internal = PyModule_Create(&addressmodule);
    if (unlikely(CPyModule_faster_eth_utils___address_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_faster_eth_utils___address_internal, "__name__");
    CPyStatic_address___globals = PyModule_GetDict(CPyModule_faster_eth_utils___address_internal);
    if (unlikely(CPyStatic_address___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_address_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_faster_eth_utils___address_internal;
    fail:
    Py_CLEAR(CPyModule_faster_eth_utils___address_internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_address____HEX_ADDRESS_REGEXP);
    CPyStatic_address____HEX_ADDRESS_REGEXP = NULL;
    return NULL;
}

char CPyDef_address___is_hex_address(PyObject *cpy_r_value) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject **cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    cpy_r_r0 = CPyDef_types___is_text(cpy_r_value);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "is_hex_address", 42, CPyStatic_address___globals);
        goto CPyL8;
    }
    if (cpy_r_r0) goto CPyL3;
    return 0;
CPyL3: ;
    cpy_r_r1 = CPyStatic_address____HEX_ADDRESS_REGEXP;
    if (likely(cpy_r_r1 != NULL)) goto CPyL6;
    PyErr_SetString(PyExc_NameError, "value for final name \"_HEX_ADDRESS_REGEXP\" was not set");
    cpy_r_r2 = 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "is_hex_address", 44, CPyStatic_address___globals);
        goto CPyL8;
    }
    CPy_Unreachable();
CPyL6: ;
    cpy_r_r3 = CPyStatics[23]; /* 'fullmatch' */
    PyObject *cpy_r_r4[2] = {cpy_r_r1, cpy_r_value};
    cpy_r_r5 = (PyObject **)&cpy_r_r4;
    cpy_r_r6 = PyObject_VectorcallMethod(cpy_r_r3, cpy_r_r5, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "is_hex_address", 44, CPyStatic_address___globals);
        goto CPyL8;
    }
    cpy_r_r7 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r8 = cpy_r_r6 != cpy_r_r7;
    CPy_DECREF(cpy_r_r6);
    return cpy_r_r8;
CPyL8: ;
    cpy_r_r9 = 2;
    return cpy_r_r9;
}

PyObject *CPyPy_address___is_hex_address(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"value", 0};
    static CPyArg_Parser parser = {"O:is_hex_address", kwlist, 0};
    PyObject *obj_value;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_value)) {
        return NULL;
    }
    PyObject *arg_value = obj_value;
    char retval = CPyDef_address___is_hex_address(arg_value);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("faster_eth_utils/address.py", "is_hex_address", 38, CPyStatic_address___globals);
    return NULL;
}

char CPyDef_address___is_binary_address(PyObject *cpy_r_value) {
    char cpy_r_r0;
    CPyTagged cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = CPyDef_types___is_bytes(cpy_r_value);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "is_binary_address", 51, CPyStatic_address___globals);
        goto CPyL7;
    }
    if (cpy_r_r0) goto CPyL3;
    return 0;
CPyL3: ;
    cpy_r_r1 = CPyObject_Size(cpy_r_value);
    if (unlikely(cpy_r_r1 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "is_binary_address", 53, CPyStatic_address___globals);
        goto CPyL7;
    }
    cpy_r_r2 = cpy_r_r1 != 40;
    CPyTagged_DECREF(cpy_r_r1);
    if (!cpy_r_r2) goto CPyL6;
    return 0;
CPyL6: ;
    return 1;
CPyL7: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_address___is_binary_address(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"value", 0};
    static CPyArg_Parser parser = {"O:is_binary_address", kwlist, 0};
    PyObject *obj_value;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_value)) {
        return NULL;
    }
    PyObject *arg_value = obj_value;
    char retval = CPyDef_address___is_binary_address(arg_value);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("faster_eth_utils/address.py", "is_binary_address", 47, CPyStatic_address___globals);
    return NULL;
}

char CPyDef_address___is_address(PyObject *cpy_r_value) {
    char cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = CPyDef_address___is_hex_address(cpy_r_value);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "is_address", 63, CPyStatic_address___globals);
        goto CPyL6;
    }
    if (cpy_r_r0) goto CPyL4;
    cpy_r_r1 = CPyDef_address___is_binary_address(cpy_r_value);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "is_address", 63, CPyStatic_address___globals);
        goto CPyL6;
    }
    if (!cpy_r_r1) goto CPyL5;
CPyL4: ;
    return 1;
CPyL5: ;
    return 0;
CPyL6: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy_address___is_address(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"value", 0};
    static CPyArg_Parser parser = {"O:is_address", kwlist, 0};
    PyObject *obj_value;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_value)) {
        return NULL;
    }
    PyObject *arg_value = obj_value;
    char retval = CPyDef_address___is_address(arg_value);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("faster_eth_utils/address.py", "is_address", 59, CPyStatic_address___globals);
    return NULL;
}

PyObject *CPyDef_address___to_normalized_address(PyObject *cpy_r_value) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject **cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    tuple_T3OOO cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject **cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject **cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    cpy_r_r0 = CPyStatic_address___globals;
    cpy_r_r1 = CPyStatics[24]; /* 'to_hex' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "to_normalized_address", 74, CPyStatic_address___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_value);
    if (PyBytes_Check(cpy_r_value) || PyByteArray_Check(cpy_r_value))
        cpy_r_r3 = cpy_r_value;
    else {
        cpy_r_r3 = NULL;
    }
    if (cpy_r_r3 != NULL) goto __LL1;
    if (PyLong_Check(cpy_r_value))
        cpy_r_r3 = cpy_r_value;
    else {
        cpy_r_r3 = NULL;
    }
    if (cpy_r_r3 != NULL) goto __LL1;
    if (PyUnicode_Check(cpy_r_value))
        cpy_r_r3 = cpy_r_value;
    else {
        cpy_r_r3 = NULL;
    }
    if (cpy_r_r3 != NULL) goto __LL1;
    CPy_TypeErrorTraceback("faster_eth_utils/address.py", "to_normalized_address", 74, CPyStatic_address___globals, "union[bytes, int, str]", cpy_r_value);
    goto CPyL30;
__LL1: ;
    cpy_r_r4 = CPyDef_conversions___hexstr_if_str(cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "to_normalized_address", 74, CPyStatic_address___globals);
        goto CPyL7;
    }
    cpy_r_r5 = CPyStatics[25]; /* 'lower' */
    PyObject *cpy_r_r6[1] = {cpy_r_r4};
    cpy_r_r7 = (PyObject **)&cpy_r_r6;
    cpy_r_r8 = PyObject_VectorcallMethod(cpy_r_r5, cpy_r_r7, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "to_normalized_address", 74, CPyStatic_address___globals);
        goto CPyL31;
    }
    CPy_DECREF(cpy_r_r4);
    if (likely(PyUnicode_Check(cpy_r_r8)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/address.py", "to_normalized_address", 74, CPyStatic_address___globals, "str", cpy_r_r8);
        goto CPyL7;
    }
    goto CPyL19;
CPyL7: ;
    cpy_r_r10 = CPy_CatchError();
    cpy_r_r11 = CPyModule_builtins;
    cpy_r_r12 = CPyStatics[26]; /* 'AttributeError' */
    cpy_r_r13 = CPyObject_GetAttr(cpy_r_r11, cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "to_normalized_address", 75, CPyStatic_address___globals);
        goto CPyL17;
    }
    cpy_r_r14 = CPy_ExceptionMatches(cpy_r_r13);
    CPy_DecRef(cpy_r_r13);
    if (!cpy_r_r14) goto CPyL15;
    cpy_r_r15 = CPyStatics[27]; /* 'Value must be any string, instead got type ' */
    cpy_r_r16 = PyObject_Type(cpy_r_value);
    cpy_r_r17 = PyObject_Str(cpy_r_r16);
    CPy_DecRef(cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "to_normalized_address", 76, CPyStatic_address___globals);
        goto CPyL17;
    }
    cpy_r_r18 = CPyStr_Build(2, cpy_r_r15, cpy_r_r17);
    CPy_DecRef(cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "to_normalized_address", 76, CPyStatic_address___globals);
        goto CPyL17;
    }
    cpy_r_r19 = CPyModule_builtins;
    cpy_r_r20 = CPyStatics[6]; /* 'TypeError' */
    cpy_r_r21 = CPyObject_GetAttr(cpy_r_r19, cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "to_normalized_address", 76, CPyStatic_address___globals);
        goto CPyL32;
    }
    PyObject *cpy_r_r22[1] = {cpy_r_r18};
    cpy_r_r23 = (PyObject **)&cpy_r_r22;
    cpy_r_r24 = PyObject_Vectorcall(cpy_r_r21, cpy_r_r23, 1, 0);
    CPy_DecRef(cpy_r_r21);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "to_normalized_address", 76, CPyStatic_address___globals);
        goto CPyL32;
    }
    CPy_DecRef(cpy_r_r18);
    CPy_Raise(cpy_r_r24);
    CPy_DecRef(cpy_r_r24);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "to_normalized_address", 76, CPyStatic_address___globals);
        goto CPyL17;
    } else
        goto CPyL33;
CPyL14: ;
    CPy_Unreachable();
CPyL15: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL17;
    } else
        goto CPyL34;
CPyL16: ;
    CPy_Unreachable();
CPyL17: ;
    CPy_RestoreExcInfo(cpy_r_r10);
    CPy_DecRef(cpy_r_r10.f0);
    CPy_DecRef(cpy_r_r10.f1);
    CPy_DecRef(cpy_r_r10.f2);
    cpy_r_r25 = CPy_KeepPropagating();
    if (!cpy_r_r25) goto CPyL29;
    CPy_Unreachable();
CPyL19: ;
    cpy_r_r26 = CPyDef_address___is_address(cpy_r_r9);
    if (unlikely(cpy_r_r26 == 2)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "to_normalized_address", 77, CPyStatic_address___globals);
        goto CPyL35;
    }
    if (!cpy_r_r26) goto CPyL22;
    return cpy_r_r9;
CPyL22: ;
    cpy_r_r27 = CPyStatics[28]; /* 'Unknown format ' */
    cpy_r_r28 = PyObject_Repr(cpy_r_value);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "to_normalized_address", 81, CPyStatic_address___globals);
        goto CPyL35;
    }
    cpy_r_r29 = CPyStatics[29]; /* ', attempted to normalize to ' */
    cpy_r_r30 = PyObject_Repr(cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "to_normalized_address", 82, CPyStatic_address___globals);
        goto CPyL36;
    }
    cpy_r_r31 = CPyStr_Build(4, cpy_r_r27, cpy_r_r28, cpy_r_r29, cpy_r_r30);
    CPy_DECREF(cpy_r_r28);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "to_normalized_address", 81, CPyStatic_address___globals);
        goto CPyL29;
    }
    cpy_r_r32 = CPyModule_builtins;
    cpy_r_r33 = CPyStatics[30]; /* 'ValueError' */
    cpy_r_r34 = CPyObject_GetAttr(cpy_r_r32, cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "to_normalized_address", 80, CPyStatic_address___globals);
        goto CPyL37;
    }
    PyObject *cpy_r_r35[1] = {cpy_r_r31};
    cpy_r_r36 = (PyObject **)&cpy_r_r35;
    cpy_r_r37 = PyObject_Vectorcall(cpy_r_r34, cpy_r_r36, 1, 0);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "to_normalized_address", 80, CPyStatic_address___globals);
        goto CPyL37;
    }
    CPy_DECREF(cpy_r_r31);
    CPy_Raise(cpy_r_r37);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "to_normalized_address", 80, CPyStatic_address___globals);
        goto CPyL29;
    }
    CPy_Unreachable();
CPyL29: ;
    cpy_r_r38 = NULL;
    return cpy_r_r38;
CPyL30: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL7;
CPyL31: ;
    CPy_DecRef(cpy_r_r4);
    goto CPyL7;
CPyL32: ;
    CPy_DecRef(cpy_r_r18);
    goto CPyL17;
CPyL33: ;
    CPy_DecRef(cpy_r_r10.f0);
    CPy_DecRef(cpy_r_r10.f1);
    CPy_DecRef(cpy_r_r10.f2);
    goto CPyL14;
CPyL34: ;
    CPy_DecRef(cpy_r_r10.f0);
    CPy_DecRef(cpy_r_r10.f1);
    CPy_DecRef(cpy_r_r10.f2);
    goto CPyL16;
CPyL35: ;
    CPy_DecRef(cpy_r_r9);
    goto CPyL29;
CPyL36: ;
    CPy_DecRef(cpy_r_r28);
    goto CPyL29;
CPyL37: ;
    CPy_DecRef(cpy_r_r31);
    goto CPyL29;
}

PyObject *CPyPy_address___to_normalized_address(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"value", 0};
    static CPyArg_Parser parser = {"O:to_normalized_address", kwlist, 0};
    PyObject *obj_value;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_value)) {
        return NULL;
    }
    PyObject *arg_value;
    arg_value = obj_value;
    if (arg_value != NULL) goto __LL2;
    if (PyUnicode_Check(obj_value))
        arg_value = obj_value;
    else {
        arg_value = NULL;
    }
    if (arg_value != NULL) goto __LL2;
    if (PyBytes_Check(obj_value) || PyByteArray_Check(obj_value))
        arg_value = obj_value;
    else {
        arg_value = NULL;
    }
    if (arg_value != NULL) goto __LL2;
    CPy_TypeError("union[object, str, bytes]", obj_value); 
    goto fail;
__LL2: ;
    PyObject *retval = CPyDef_address___to_normalized_address(arg_value);
    return retval;
fail: ;
    CPy_AddTraceback("faster_eth_utils/address.py", "to_normalized_address", 69, CPyStatic_address___globals);
    return NULL;
}

char CPyDef_address___is_normalized_address(PyObject *cpy_r_value) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    cpy_r_r0 = CPyDef_address___is_address(cpy_r_value);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "is_normalized_address", 90, CPyStatic_address___globals);
        goto CPyL7;
    }
    if (cpy_r_r0) goto CPyL3;
    return 0;
CPyL3: ;
    cpy_r_r1 = CPyDef_address___to_normalized_address(cpy_r_value);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "is_normalized_address", 93, CPyStatic_address___globals);
        goto CPyL7;
    }
    cpy_r_r2 = PyObject_RichCompare(cpy_r_value, cpy_r_r1, 2);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "is_normalized_address", 93, CPyStatic_address___globals);
        goto CPyL7;
    }
    if (unlikely(!PyBool_Check(cpy_r_r2))) {
        CPy_TypeError("bool", cpy_r_r2); cpy_r_r3 = 2;
    } else
        cpy_r_r3 = cpy_r_r2 == Py_True;
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "is_normalized_address", 94, CPyStatic_address___globals);
        goto CPyL7;
    }
    return cpy_r_r3;
CPyL7: ;
    cpy_r_r4 = 2;
    return cpy_r_r4;
}

PyObject *CPyPy_address___is_normalized_address(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"value", 0};
    static CPyArg_Parser parser = {"O:is_normalized_address", kwlist, 0};
    PyObject *obj_value;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_value)) {
        return NULL;
    }
    PyObject *arg_value = obj_value;
    char retval = CPyDef_address___is_normalized_address(arg_value);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("faster_eth_utils/address.py", "is_normalized_address", 86, CPyStatic_address___globals);
    return NULL;
}

PyObject *CPyDef_address___to_canonical_address(PyObject *cpy_r_address) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyDef_address___to_normalized_address(cpy_r_address);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "to_canonical_address", 101, CPyStatic_address___globals);
        goto CPyL4;
    }
    if (likely(PyUnicode_Check(cpy_r_r0)))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/address.py", "to_canonical_address", 101, CPyStatic_address___globals, "str", cpy_r_r0);
        goto CPyL4;
    }
    cpy_r_r2 = CPyDef_hexadecimal___decode_hex(cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "to_canonical_address", 101, CPyStatic_address___globals);
        goto CPyL4;
    }
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_address___to_canonical_address(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"address", 0};
    static CPyArg_Parser parser = {"O:to_canonical_address", kwlist, 0};
    PyObject *obj_address;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_address)) {
        return NULL;
    }
    PyObject *arg_address;
    arg_address = obj_address;
    if (arg_address != NULL) goto __LL3;
    if (PyUnicode_Check(obj_address))
        arg_address = obj_address;
    else {
        arg_address = NULL;
    }
    if (arg_address != NULL) goto __LL3;
    if (PyBytes_Check(obj_address) || PyByteArray_Check(obj_address))
        arg_address = obj_address;
    else {
        arg_address = NULL;
    }
    if (arg_address != NULL) goto __LL3;
    CPy_TypeError("union[object, str, bytes]", obj_address); 
    goto fail;
__LL3: ;
    PyObject *retval = CPyDef_address___to_canonical_address(arg_address);
    return retval;
fail: ;
    CPy_AddTraceback("faster_eth_utils/address.py", "to_canonical_address", 97, CPyStatic_address___globals);
    return NULL;
}

char CPyDef_address___is_canonical_address(PyObject *cpy_r_address) {
    char cpy_r_r0;
    CPyTagged cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    cpy_r_r0 = CPyDef_types___is_bytes(cpy_r_address);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "is_canonical_address", 108, CPyStatic_address___globals);
        goto CPyL9;
    }
    if (!cpy_r_r0) goto CPyL4;
    cpy_r_r1 = CPyObject_Size(cpy_r_address);
    if (unlikely(cpy_r_r1 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "is_canonical_address", 108, CPyStatic_address___globals);
        goto CPyL9;
    }
    cpy_r_r2 = cpy_r_r1 != 40;
    CPyTagged_DECREF(cpy_r_r1);
    if (!cpy_r_r2) goto CPyL5;
CPyL4: ;
    return 0;
CPyL5: ;
    cpy_r_r3 = CPyDef_address___to_canonical_address(cpy_r_address);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "is_canonical_address", 110, CPyStatic_address___globals);
        goto CPyL9;
    }
    cpy_r_r4 = PyObject_RichCompare(cpy_r_address, cpy_r_r3, 2);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "is_canonical_address", 110, CPyStatic_address___globals);
        goto CPyL9;
    }
    if (unlikely(!PyBool_Check(cpy_r_r4))) {
        CPy_TypeError("bool", cpy_r_r4); cpy_r_r5 = 2;
    } else
        cpy_r_r5 = cpy_r_r4 == Py_True;
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == 2)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "is_canonical_address", 111, CPyStatic_address___globals);
        goto CPyL9;
    }
    return cpy_r_r5;
CPyL9: ;
    cpy_r_r6 = 2;
    return cpy_r_r6;
}

PyObject *CPyPy_address___is_canonical_address(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"address", 0};
    static CPyArg_Parser parser = {"O:is_canonical_address", kwlist, 0};
    PyObject *obj_address;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_address)) {
        return NULL;
    }
    PyObject *arg_address = obj_address;
    char retval = CPyDef_address___is_canonical_address(arg_address);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("faster_eth_utils/address.py", "is_canonical_address", 104, CPyStatic_address___globals);
    return NULL;
}

char CPyDef_address___is_same_address(PyObject *cpy_r_left, PyObject *cpy_r_right) {
    char cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject **cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    cpy_r_r0 = CPyDef_address___is_address(cpy_r_left);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "is_same_address", 118, CPyStatic_address___globals);
        goto CPyL13;
    }
    if (!cpy_r_r0) goto CPyL4;
    cpy_r_r1 = CPyDef_address___is_address(cpy_r_right);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "is_same_address", 118, CPyStatic_address___globals);
        goto CPyL13;
    }
    if (cpy_r_r1) goto CPyL8;
CPyL4: ;
    cpy_r_r2 = CPyStatics[31]; /* 'Both values must be valid addresses' */
    cpy_r_r3 = CPyModule_builtins;
    cpy_r_r4 = CPyStatics[30]; /* 'ValueError' */
    cpy_r_r5 = CPyObject_GetAttr(cpy_r_r3, cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "is_same_address", 119, CPyStatic_address___globals);
        goto CPyL13;
    }
    PyObject *cpy_r_r6[1] = {cpy_r_r2};
    cpy_r_r7 = (PyObject **)&cpy_r_r6;
    cpy_r_r8 = PyObject_Vectorcall(cpy_r_r5, cpy_r_r7, 1, 0);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "is_same_address", 119, CPyStatic_address___globals);
        goto CPyL13;
    }
    CPy_Raise(cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "is_same_address", 119, CPyStatic_address___globals);
        goto CPyL13;
    }
    CPy_Unreachable();
CPyL8: ;
    cpy_r_r9 = CPyDef_address___to_normalized_address(cpy_r_left);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "is_same_address", 121, CPyStatic_address___globals);
        goto CPyL13;
    }
    cpy_r_r10 = CPyDef_address___to_normalized_address(cpy_r_right);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "is_same_address", 121, CPyStatic_address___globals);
        goto CPyL14;
    }
    cpy_r_r11 = PyObject_RichCompare(cpy_r_r9, cpy_r_r10, 2);
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "is_same_address", 121, CPyStatic_address___globals);
        goto CPyL13;
    }
    if (unlikely(!PyBool_Check(cpy_r_r11))) {
        CPy_TypeError("bool", cpy_r_r11); cpy_r_r12 = 2;
    } else
        cpy_r_r12 = cpy_r_r11 == Py_True;
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == 2)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "is_same_address", 121, CPyStatic_address___globals);
        goto CPyL13;
    }
    return cpy_r_r12;
CPyL13: ;
    cpy_r_r13 = 2;
    return cpy_r_r13;
CPyL14: ;
    CPy_DecRef(cpy_r_r9);
    goto CPyL13;
}

PyObject *CPyPy_address___is_same_address(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"left", "right", 0};
    static CPyArg_Parser parser = {"OO:is_same_address", kwlist, 0};
    PyObject *obj_left;
    PyObject *obj_right;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_left, &obj_right)) {
        return NULL;
    }
    PyObject *arg_left = obj_left;
    PyObject *arg_right = obj_right;
    char retval = CPyDef_address___is_same_address(arg_left, arg_right);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("faster_eth_utils/address.py", "is_same_address", 114, CPyStatic_address___globals);
    return NULL;
}

PyObject *CPyDef_address___to_checksum_address(PyObject *cpy_r_value) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject **cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    CPyTagged cpy_r_r13;
    CPyTagged cpy_r_i;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    CPyTagged cpy_r_r19;
    int64_t cpy_r_r20;
    char cpy_r_r21;
    int64_t cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject **cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    int32_t cpy_r_r39;
    char cpy_r_r40;
    CPyTagged cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    cpy_r_r0 = CPyDef_address___to_normalized_address(cpy_r_value);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "to_checksum_address", 128, CPyStatic_address___globals);
        goto CPyL31;
    }
    cpy_r_r1 = CPyDef_hexadecimal___remove_0x_prefix(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "to_checksum_address", 129, CPyStatic_address___globals);
        goto CPyL32;
    }
    cpy_r_r2 = CPyStatic_address___globals;
    cpy_r_r3 = CPyStatics[16]; /* 'keccak' */
    cpy_r_r4 = CPyDict_GetItem(cpy_r_r2, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "to_checksum_address", 129, CPyStatic_address___globals);
        goto CPyL33;
    }
    PyObject *cpy_r_r5[1] = {cpy_r_r1};
    cpy_r_r6 = (PyObject **)&cpy_r_r5;
    cpy_r_r7 = CPyStatics[279]; /* ('text',) */
    cpy_r_r8 = PyObject_Vectorcall(cpy_r_r4, cpy_r_r6, 0, cpy_r_r7);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "to_checksum_address", 129, CPyStatic_address___globals);
        goto CPyL33;
    }
    CPy_DECREF(cpy_r_r1);
    if (likely(PyBytes_Check(cpy_r_r8) || PyByteArray_Check(cpy_r_r8)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/address.py", "to_checksum_address", 129, CPyStatic_address___globals, "bytes", cpy_r_r8);
        goto CPyL32;
    }
    cpy_r_r10 = CPyDef_hexadecimal___encode_hex(cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "to_checksum_address", 129, CPyStatic_address___globals);
        goto CPyL32;
    }
    cpy_r_r11 = CPyStatics[15]; /* '' */
    cpy_r_r12 = PyList_New(0);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "to_checksum_address", 133, CPyStatic_address___globals);
        goto CPyL34;
    }
    cpy_r_r13 = 4;
    cpy_r_i = cpy_r_r13;
CPyL8: ;
    cpy_r_r14 = (Py_ssize_t)cpy_r_r13 < (Py_ssize_t)84;
    if (!cpy_r_r14) goto CPyL35;
    CPyTagged_INCREF(cpy_r_i);
    cpy_r_r15 = CPyTagged_StealAsObject(cpy_r_i);
    cpy_r_r16 = PyObject_GetItem(cpy_r_r10, cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "to_checksum_address", 136, CPyStatic_address___globals);
        goto CPyL36;
    }
    if (likely(PyUnicode_Check(cpy_r_r16)))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/address.py", "to_checksum_address", 136, CPyStatic_address___globals, "str", cpy_r_r16);
        goto CPyL36;
    }
    cpy_r_r18 = CPyLong_FromStrWithBase(cpy_r_r17, 32);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "to_checksum_address", 136, CPyStatic_address___globals);
        goto CPyL36;
    }
    if (likely(PyLong_Check(cpy_r_r18)))
        cpy_r_r19 = CPyTagged_FromObject(cpy_r_r18);
    else {
        CPy_TypeError("int", cpy_r_r18); cpy_r_r19 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "to_checksum_address", 136, CPyStatic_address___globals);
        goto CPyL36;
    }
    cpy_r_r20 = cpy_r_r19 & 1;
    cpy_r_r21 = cpy_r_r20 != 0;
    if (cpy_r_r21) goto CPyL15;
    cpy_r_r22 = 14 & 1;
    cpy_r_r23 = cpy_r_r22 != 0;
    if (!cpy_r_r23) goto CPyL16;
CPyL15: ;
    cpy_r_r24 = CPyTagged_IsLt_(14, cpy_r_r19);
    cpy_r_r25 = cpy_r_r24;
    goto CPyL17;
CPyL16: ;
    cpy_r_r26 = (Py_ssize_t)cpy_r_r19 > (Py_ssize_t)14;
    cpy_r_r25 = cpy_r_r26;
CPyL17: ;
    CPyTagged_DECREF(cpy_r_r19);
    if (!cpy_r_r25) goto CPyL23;
    cpy_r_r27 = CPyTagged_StealAsObject(cpy_r_i);
    cpy_r_r28 = PyObject_GetItem(cpy_r_r0, cpy_r_r27);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "to_checksum_address", 135, CPyStatic_address___globals);
        goto CPyL37;
    }
    if (likely(PyUnicode_Check(cpy_r_r28)))
        cpy_r_r29 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/address.py", "to_checksum_address", 135, CPyStatic_address___globals, "str", cpy_r_r28);
        goto CPyL37;
    }
    cpy_r_r30 = CPyStatics[32]; /* 'upper' */
    PyObject *cpy_r_r31[1] = {cpy_r_r29};
    cpy_r_r32 = (PyObject **)&cpy_r_r31;
    cpy_r_r33 = PyObject_VectorcallMethod(cpy_r_r30, cpy_r_r32, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "to_checksum_address", 135, CPyStatic_address___globals);
        goto CPyL38;
    }
    CPy_DECREF(cpy_r_r29);
    if (likely(PyUnicode_Check(cpy_r_r33)))
        cpy_r_r34 = cpy_r_r33;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/address.py", "to_checksum_address", 135, CPyStatic_address___globals, "str", cpy_r_r33);
        goto CPyL37;
    }
    cpy_r_r35 = cpy_r_r34;
    goto CPyL26;
CPyL23: ;
    cpy_r_r36 = CPyTagged_StealAsObject(cpy_r_i);
    cpy_r_r37 = PyObject_GetItem(cpy_r_r0, cpy_r_r36);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "to_checksum_address", 137, CPyStatic_address___globals);
        goto CPyL37;
    }
    if (likely(PyUnicode_Check(cpy_r_r37)))
        cpy_r_r38 = cpy_r_r37;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/address.py", "to_checksum_address", 137, CPyStatic_address___globals, "str", cpy_r_r37);
        goto CPyL37;
    }
    cpy_r_r35 = cpy_r_r38;
CPyL26: ;
    cpy_r_r39 = PyList_Append(cpy_r_r12, cpy_r_r35);
    CPy_DECREF(cpy_r_r35);
    cpy_r_r40 = cpy_r_r39 >= 0;
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "to_checksum_address", 133, CPyStatic_address___globals);
        goto CPyL37;
    }
    cpy_r_r41 = cpy_r_r13 + 2;
    cpy_r_r13 = cpy_r_r41;
    cpy_r_i = cpy_r_r41;
    goto CPyL8;
CPyL28: ;
    cpy_r_r42 = PyUnicode_Join(cpy_r_r11, cpy_r_r12);
    CPy_DECREF_NO_IMM(cpy_r_r12);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "to_checksum_address", 133, CPyStatic_address___globals);
        goto CPyL31;
    }
    cpy_r_r43 = CPyDef_hexadecimal___add_0x_prefix(cpy_r_r42);
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "to_checksum_address", 131, CPyStatic_address___globals);
        goto CPyL31;
    }
    return cpy_r_r43;
CPyL31: ;
    cpy_r_r44 = NULL;
    return cpy_r_r44;
CPyL32: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL31;
CPyL33: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    goto CPyL31;
CPyL34: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r10);
    goto CPyL31;
CPyL35: ;
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r10);
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL28;
CPyL36: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r12);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL31;
CPyL37: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r12);
    goto CPyL31;
CPyL38: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r29);
    goto CPyL31;
}

PyObject *CPyPy_address___to_checksum_address(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"value", 0};
    static CPyArg_Parser parser = {"O:to_checksum_address", kwlist, 0};
    PyObject *obj_value;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_value)) {
        return NULL;
    }
    PyObject *arg_value;
    arg_value = obj_value;
    if (arg_value != NULL) goto __LL4;
    if (PyUnicode_Check(obj_value))
        arg_value = obj_value;
    else {
        arg_value = NULL;
    }
    if (arg_value != NULL) goto __LL4;
    if (PyBytes_Check(obj_value) || PyByteArray_Check(obj_value))
        arg_value = obj_value;
    else {
        arg_value = NULL;
    }
    if (arg_value != NULL) goto __LL4;
    CPy_TypeError("union[object, str, bytes]", obj_value); 
    goto fail;
__LL4: ;
    PyObject *retval = CPyDef_address___to_checksum_address(arg_value);
    return retval;
fail: ;
    CPy_AddTraceback("faster_eth_utils/address.py", "to_checksum_address", 124, CPyStatic_address___globals);
    return NULL;
}

char CPyDef_address___is_checksum_address(PyObject *cpy_r_value) {
    char cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    cpy_r_r0 = CPyDef_types___is_text(cpy_r_value);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "is_checksum_address", 147, CPyStatic_address___globals);
        goto CPyL10;
    }
    if (cpy_r_r0) goto CPyL3;
    return 0;
CPyL3: ;
    cpy_r_r1 = CPyDef_address___is_hex_address(cpy_r_value);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "is_checksum_address", 150, CPyStatic_address___globals);
        goto CPyL10;
    }
    if (cpy_r_r1) goto CPyL6;
    return 0;
CPyL6: ;
    cpy_r_r2 = CPyDef_address___to_checksum_address(cpy_r_value);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "is_checksum_address", 152, CPyStatic_address___globals);
        goto CPyL10;
    }
    cpy_r_r3 = PyObject_RichCompare(cpy_r_value, cpy_r_r2, 2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "is_checksum_address", 152, CPyStatic_address___globals);
        goto CPyL10;
    }
    if (unlikely(!PyBool_Check(cpy_r_r3))) {
        CPy_TypeError("bool", cpy_r_r3); cpy_r_r4 = 2;
    } else
        cpy_r_r4 = cpy_r_r3 == Py_True;
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == 2)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "is_checksum_address", 153, CPyStatic_address___globals);
        goto CPyL10;
    }
    return cpy_r_r4;
CPyL10: ;
    cpy_r_r5 = 2;
    return cpy_r_r5;
}

PyObject *CPyPy_address___is_checksum_address(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"value", 0};
    static CPyArg_Parser parser = {"O:is_checksum_address", kwlist, 0};
    PyObject *obj_value;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_value)) {
        return NULL;
    }
    PyObject *arg_value = obj_value;
    char retval = CPyDef_address___is_checksum_address(arg_value);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("faster_eth_utils/address.py", "is_checksum_address", 146, CPyStatic_address___globals);
    return NULL;
}

char CPyDef_address____is_checksum_formatted(PyObject *cpy_r_value) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject **cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject **cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject **cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    cpy_r_r0 = CPyDef_hexadecimal___remove_0x_prefix(cpy_r_value);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "_is_checksum_formatted", 157, CPyStatic_address___globals);
        goto CPyL14;
    }
    cpy_r_r1 = CPyStatics[33]; /* 'islower' */
    PyObject *cpy_r_r2[1] = {cpy_r_r0};
    cpy_r_r3 = (PyObject **)&cpy_r_r2;
    cpy_r_r4 = PyObject_VectorcallMethod(cpy_r_r1, cpy_r_r3, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "_is_checksum_formatted", 159, CPyStatic_address___globals);
        goto CPyL15;
    }
    if (unlikely(!PyBool_Check(cpy_r_r4))) {
        CPy_TypeError("bool", cpy_r_r4); cpy_r_r5 = 2;
    } else
        cpy_r_r5 = cpy_r_r4 == Py_True;
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == 2)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "_is_checksum_formatted", 159, CPyStatic_address___globals);
        goto CPyL15;
    }
    cpy_r_r6 = cpy_r_r5 ^ 1;
    if (cpy_r_r6) {
        goto CPyL5;
    } else
        goto CPyL16;
CPyL4: ;
    cpy_r_r7 = cpy_r_r6;
    goto CPyL13;
CPyL5: ;
    cpy_r_r8 = CPyStatics[34]; /* 'isupper' */
    PyObject *cpy_r_r9[1] = {cpy_r_r0};
    cpy_r_r10 = (PyObject **)&cpy_r_r9;
    cpy_r_r11 = PyObject_VectorcallMethod(cpy_r_r8, cpy_r_r10, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "_is_checksum_formatted", 160, CPyStatic_address___globals);
        goto CPyL15;
    }
    if (unlikely(!PyBool_Check(cpy_r_r11))) {
        CPy_TypeError("bool", cpy_r_r11); cpy_r_r12 = 2;
    } else
        cpy_r_r12 = cpy_r_r11 == Py_True;
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == 2)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "_is_checksum_formatted", 160, CPyStatic_address___globals);
        goto CPyL15;
    }
    cpy_r_r13 = cpy_r_r12 ^ 1;
    if (cpy_r_r13) {
        goto CPyL9;
    } else
        goto CPyL17;
CPyL8: ;
    cpy_r_r14 = cpy_r_r13;
    goto CPyL12;
CPyL9: ;
    cpy_r_r15 = CPyStatics[35]; /* 'isnumeric' */
    PyObject *cpy_r_r16[1] = {cpy_r_r0};
    cpy_r_r17 = (PyObject **)&cpy_r_r16;
    cpy_r_r18 = PyObject_VectorcallMethod(cpy_r_r15, cpy_r_r17, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "_is_checksum_formatted", 161, CPyStatic_address___globals);
        goto CPyL15;
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!PyBool_Check(cpy_r_r18))) {
        CPy_TypeError("bool", cpy_r_r18); cpy_r_r19 = 2;
    } else
        cpy_r_r19 = cpy_r_r18 == Py_True;
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19 == 2)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "_is_checksum_formatted", 161, CPyStatic_address___globals);
        goto CPyL14;
    }
    cpy_r_r20 = cpy_r_r19 ^ 1;
    cpy_r_r14 = cpy_r_r20;
CPyL12: ;
    cpy_r_r7 = cpy_r_r14;
CPyL13: ;
    return cpy_r_r7;
CPyL14: ;
    cpy_r_r21 = 2;
    return cpy_r_r21;
CPyL15: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL14;
CPyL16: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL4;
CPyL17: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL8;
}

PyObject *CPyPy_address____is_checksum_formatted(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"value", 0};
    static CPyArg_Parser parser = {"O:_is_checksum_formatted", kwlist, 0};
    PyObject *obj_value;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_value)) {
        return NULL;
    }
    PyObject *arg_value = obj_value;
    char retval = CPyDef_address____is_checksum_formatted(arg_value);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("faster_eth_utils/address.py", "_is_checksum_formatted", 156, CPyStatic_address___globals);
    return NULL;
}

char CPyDef_address___is_checksum_formatted_address(PyObject *cpy_r_value) {
    char cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = CPyDef_address___is_hex_address(cpy_r_value);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "is_checksum_formatted_address", 166, CPyStatic_address___globals);
        goto CPyL6;
    }
    if (cpy_r_r0) goto CPyL3;
    cpy_r_r1 = cpy_r_r0;
    goto CPyL5;
CPyL3: ;
    cpy_r_r2 = CPyDef_address____is_checksum_formatted(cpy_r_value);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "is_checksum_formatted_address", 166, CPyStatic_address___globals);
        goto CPyL6;
    }
    cpy_r_r1 = cpy_r_r2;
CPyL5: ;
    return cpy_r_r1;
CPyL6: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_address___is_checksum_formatted_address(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"value", 0};
    static CPyArg_Parser parser = {"O:is_checksum_formatted_address", kwlist, 0};
    PyObject *obj_value;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_value)) {
        return NULL;
    }
    PyObject *arg_value = obj_value;
    char retval = CPyDef_address___is_checksum_formatted_address(arg_value);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("faster_eth_utils/address.py", "is_checksum_formatted_address", 165, CPyStatic_address___globals);
    return NULL;
}

char CPyDef_address_____top_level__(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject **cpy_r_r5;
    void *cpy_r_r7;
    void *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject **cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    int32_t cpy_r_r55;
    char cpy_r_r56;
    char cpy_r_r57;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[18]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "<module>", -1, CPyStatic_address___globals);
        goto CPyL17;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = (PyObject **)&CPyModule_re;
    PyObject **cpy_r_r6[1] = {cpy_r_r5};
    cpy_r_r7 = (void *)&cpy_r_r6;
    int64_t cpy_r_r8[1] = {1};
    cpy_r_r9 = (void *)&cpy_r_r8;
    cpy_r_r10 = CPyStatics[283]; /* (('re', 're', 're'),) */
    cpy_r_r11 = CPyStatic_address___globals;
    cpy_r_r12 = CPyStatics[37]; /* 'faster_eth_utils/address.py' */
    cpy_r_r13 = CPyStatics[38]; /* '<module>' */
    cpy_r_r14 = CPyImport_ImportMany(cpy_r_r10, cpy_r_r7, cpy_r_r11, cpy_r_r12, cpy_r_r13, cpy_r_r9);
    if (!cpy_r_r14) goto CPyL17;
    cpy_r_r15 = CPyStatics[284]; /* ('Any', 'Final', 'Union', 'cast') */
    cpy_r_r16 = CPyStatics[21]; /* 'typing' */
    cpy_r_r17 = CPyStatic_address___globals;
    cpy_r_r18 = CPyImport_ImportFromMany(cpy_r_r16, cpy_r_r15, cpy_r_r15, cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "<module>", 2, CPyStatic_address___globals);
        goto CPyL17;
    }
    CPyModule_typing = cpy_r_r18;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r18);
    cpy_r_r19 = CPyStatics[285]; /* ('Address', 'AnyAddress', 'ChecksumAddress', 'HexAddress',
                                    'HexStr') */
    cpy_r_r20 = CPyStatics[47]; /* 'eth_typing' */
    cpy_r_r21 = CPyStatic_address___globals;
    cpy_r_r22 = CPyImport_ImportFromMany(cpy_r_r20, cpy_r_r19, cpy_r_r19, cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "<module>", 9, CPyStatic_address___globals);
        goto CPyL17;
    }
    CPyModule_eth_typing = cpy_r_r22;
    CPy_INCREF(CPyModule_eth_typing);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r23 = CPyStatics[286]; /* ('hexstr_if_str', 'to_hex') */
    cpy_r_r24 = CPyStatics[49]; /* 'faster_eth_utils.conversions' */
    cpy_r_r25 = CPyStatic_address___globals;
    cpy_r_r26 = CPyImport_ImportFromMany(cpy_r_r24, cpy_r_r23, cpy_r_r23, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "<module>", 17, CPyStatic_address___globals);
        goto CPyL17;
    }
    CPyModule_faster_eth_utils___conversions = cpy_r_r26;
    CPy_INCREF(CPyModule_faster_eth_utils___conversions);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r27 = CPyStatics[281]; /* ('keccak',) */
    cpy_r_r28 = CPyStatics[22]; /* 'faster_eth_utils.crypto' */
    cpy_r_r29 = CPyStatic_address___globals;
    cpy_r_r30 = CPyImport_ImportFromMany(cpy_r_r28, cpy_r_r27, cpy_r_r27, cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "<module>", 21, CPyStatic_address___globals);
        goto CPyL17;
    }
    CPyModule_faster_eth_utils___crypto = cpy_r_r30;
    CPy_INCREF(CPyModule_faster_eth_utils___crypto);
    CPy_DECREF(cpy_r_r30);
    cpy_r_r31 = CPyStatics[287]; /* ('add_0x_prefix', 'decode_hex', 'encode_hex',
                                    'remove_0x_prefix') */
    cpy_r_r32 = CPyStatics[54]; /* 'faster_eth_utils.hexadecimal' */
    cpy_r_r33 = CPyStatic_address___globals;
    cpy_r_r34 = CPyImport_ImportFromMany(cpy_r_r32, cpy_r_r31, cpy_r_r31, cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "<module>", 24, CPyStatic_address___globals);
        goto CPyL17;
    }
    CPyModule_faster_eth_utils___hexadecimal = cpy_r_r34;
    CPy_INCREF(CPyModule_faster_eth_utils___hexadecimal);
    CPy_DECREF(cpy_r_r34);
    cpy_r_r35 = CPyStatics[288]; /* ('is_bytes', 'is_text') */
    cpy_r_r36 = CPyStatics[57]; /* 'faster_eth_utils.types' */
    cpy_r_r37 = CPyStatic_address___globals;
    cpy_r_r38 = CPyImport_ImportFromMany(cpy_r_r36, cpy_r_r35, cpy_r_r35, cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "<module>", 30, CPyStatic_address___globals);
        goto CPyL17;
    }
    CPyModule_faster_eth_utils___types = cpy_r_r38;
    CPy_INCREF(CPyModule_faster_eth_utils___types);
    CPy_DECREF(cpy_r_r38);
    cpy_r_r39 = CPyStatics[58]; /* '(0x)?[0-9a-f]{40}' */
    cpy_r_r40 = CPyModule_re;
    cpy_r_r41 = CPyStatics[59]; /* 'IGNORECASE' */
    cpy_r_r42 = CPyObject_GetAttr(cpy_r_r40, cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "<module>", 35, CPyStatic_address___globals);
        goto CPyL17;
    }
    cpy_r_r43 = CPyModule_re;
    cpy_r_r44 = CPyStatics[60]; /* 'ASCII' */
    cpy_r_r45 = CPyObject_GetAttr(cpy_r_r43, cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "<module>", 35, CPyStatic_address___globals);
        goto CPyL18;
    }
    cpy_r_r46 = PyNumber_Or(cpy_r_r42, cpy_r_r45);
    CPy_DECREF(cpy_r_r42);
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "<module>", 35, CPyStatic_address___globals);
        goto CPyL17;
    }
    cpy_r_r47 = CPyModule_re;
    cpy_r_r48 = CPyStatics[61]; /* 'compile' */
    cpy_r_r49 = CPyObject_GetAttr(cpy_r_r47, cpy_r_r48);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "<module>", 35, CPyStatic_address___globals);
        goto CPyL19;
    }
    PyObject *cpy_r_r50[2] = {cpy_r_r39, cpy_r_r46};
    cpy_r_r51 = (PyObject **)&cpy_r_r50;
    cpy_r_r52 = PyObject_Vectorcall(cpy_r_r49, cpy_r_r51, 2, 0);
    CPy_DECREF(cpy_r_r49);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "<module>", 35, CPyStatic_address___globals);
        goto CPyL19;
    }
    CPy_DECREF(cpy_r_r46);
    CPyStatic_address____HEX_ADDRESS_REGEXP = cpy_r_r52;
    CPy_INCREF(CPyStatic_address____HEX_ADDRESS_REGEXP);
    cpy_r_r53 = CPyStatic_address___globals;
    cpy_r_r54 = CPyStatics[62]; /* '_HEX_ADDRESS_REGEXP' */
    cpy_r_r55 = CPyDict_SetItem(cpy_r_r53, cpy_r_r54, cpy_r_r52);
    CPy_DECREF(cpy_r_r52);
    cpy_r_r56 = cpy_r_r55 >= 0;
    if (unlikely(!cpy_r_r56)) {
        CPy_AddTraceback("faster_eth_utils/address.py", "<module>", 35, CPyStatic_address___globals);
        goto CPyL17;
    }
    return 1;
CPyL17: ;
    cpy_r_r57 = 2;
    return cpy_r_r57;
CPyL18: ;
    CPy_DecRef(cpy_r_r42);
    goto CPyL17;
CPyL19: ;
    CPy_DecRef(cpy_r_r46);
    goto CPyL17;
}
static PyMethodDef conversionsmodule_methods[] = {
    {"to_hex", (PyCFunction)CPyPy_conversions___to_hex, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"to_int", (PyCFunction)CPyPy_conversions___to_int, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"to_bytes", (PyCFunction)CPyPy_conversions___to_bytes, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"to_text", (PyCFunction)CPyPy_conversions___to_text, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"text_if_str", (PyCFunction)CPyPy_conversions___text_if_str, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"hexstr_if_str", (PyCFunction)CPyPy_conversions___hexstr_if_str, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef conversionsmodule = {
    PyModuleDef_HEAD_INIT,
    "faster_eth_utils.conversions",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    conversionsmodule_methods
};

PyObject *CPyInit_faster_eth_utils___conversions(void)
{
    PyObject* modname = NULL;
    if (CPyModule_faster_eth_utils___conversions_internal) {
        Py_INCREF(CPyModule_faster_eth_utils___conversions_internal);
        return CPyModule_faster_eth_utils___conversions_internal;
    }
    CPyModule_faster_eth_utils___conversions_internal = PyModule_Create(&conversionsmodule);
    if (unlikely(CPyModule_faster_eth_utils___conversions_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_faster_eth_utils___conversions_internal, "__name__");
    CPyStatic_conversions___globals = PyModule_GetDict(CPyModule_faster_eth_utils___conversions_internal);
    if (unlikely(CPyStatic_conversions___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_conversions_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_faster_eth_utils___conversions_internal;
    fail:
    Py_CLEAR(CPyModule_faster_eth_utils___conversions_internal);
    Py_CLEAR(modname);
    return NULL;
}

PyObject *CPyDef_conversions___to_hex(PyObject *cpy_r_primitive, PyObject *cpy_r_hexstr, PyObject *cpy_r_text) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject **cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    int32_t cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    tuple_T2OO cpy_r_r28;
    PyObject *cpy_r_r29;
    int32_t cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject **cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    CPyTagged cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject **cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject **cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    if (cpy_r_primitive != NULL) goto CPyL53;
    cpy_r_r0 = Py_None;
    cpy_r_primitive = cpy_r_r0;
CPyL2: ;
    if (cpy_r_hexstr != NULL) goto CPyL54;
    cpy_r_r1 = Py_None;
    cpy_r_hexstr = cpy_r_r1;
CPyL4: ;
    if (cpy_r_text != NULL) goto CPyL55;
    cpy_r_r2 = Py_None;
    cpy_r_text = cpy_r_r2;
CPyL6: ;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = cpy_r_hexstr != cpy_r_r3;
    if (cpy_r_r4) {
        goto CPyL56;
    } else
        goto CPyL57;
CPyL7: ;
    cpy_r_r5 = cpy_r_hexstr;
    cpy_r_r6 = CPyStatics[25]; /* 'lower' */
    PyObject *cpy_r_r7[1] = {cpy_r_r5};
    cpy_r_r8 = (PyObject **)&cpy_r_r7;
    cpy_r_r9 = PyObject_VectorcallMethod(cpy_r_r6, cpy_r_r8, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "to_hex", 45, CPyStatic_conversions___globals);
        goto CPyL58;
    }
    CPy_DECREF(cpy_r_r5);
    if (likely(PyUnicode_Check(cpy_r_r9)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/conversions.py", "to_hex", 45, CPyStatic_conversions___globals, "str", cpy_r_r9);
        goto CPyL52;
    }
    cpy_r_r11 = CPyDef_hexadecimal___add_0x_prefix(cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "to_hex", 45, CPyStatic_conversions___globals);
        goto CPyL52;
    }
    return cpy_r_r11;
CPyL12: ;
    cpy_r_r12 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r13 = cpy_r_text != cpy_r_r12;
    if (cpy_r_r13) {
        goto CPyL59;
    } else
        goto CPyL60;
CPyL13: ;
    if (likely(cpy_r_text != Py_None))
        cpy_r_r14 = cpy_r_text;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/conversions.py", "to_hex", 48, CPyStatic_conversions___globals, "str", cpy_r_text);
        goto CPyL52;
    }
    cpy_r_r15 = PyUnicode_AsUTF8String(cpy_r_r14);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "to_hex", 48, CPyStatic_conversions___globals);
        goto CPyL52;
    }
    cpy_r_r16 = CPyDef_hexadecimal___encode_hex(cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "to_hex", 48, CPyStatic_conversions___globals);
        goto CPyL52;
    }
    return cpy_r_r16;
CPyL17: ;
    cpy_r_r17 = CPyDef_types___is_boolean(cpy_r_primitive);
    if (unlikely(cpy_r_r17 == 2)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "to_hex", 50, CPyStatic_conversions___globals);
        goto CPyL61;
    }
    if (!cpy_r_r17) goto CPyL24;
    cpy_r_r18 = PyObject_IsTrue(cpy_r_primitive);
    CPy_DECREF(cpy_r_primitive);
    cpy_r_r19 = cpy_r_r18 >= 0;
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "to_hex", 35, CPyStatic_conversions___globals);
        goto CPyL52;
    }
    cpy_r_r20 = cpy_r_r18;
    if (!cpy_r_r20) goto CPyL22;
    cpy_r_r21 = CPyStatics[63]; /* '0x1' */
    CPy_INCREF(cpy_r_r21);
    cpy_r_r22 = cpy_r_r21;
    goto CPyL23;
CPyL22: ;
    cpy_r_r23 = CPyStatics[64]; /* '0x0' */
    CPy_INCREF(cpy_r_r23);
    cpy_r_r22 = cpy_r_r23;
CPyL23: ;
    return cpy_r_r22;
CPyL24: ;
    cpy_r_r24 = (PyObject *)&PyBytes_Type;
    cpy_r_r25 = CPyModule_builtins;
    cpy_r_r26 = CPyStatics[65]; /* 'bytearray' */
    cpy_r_r27 = CPyObject_GetAttr(cpy_r_r25, cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "to_hex", 53, CPyStatic_conversions___globals);
        goto CPyL61;
    }
    CPy_INCREF(cpy_r_r24);
    cpy_r_r28.f0 = cpy_r_r24;
    cpy_r_r28.f1 = cpy_r_r27;
    cpy_r_r29 = PyTuple_New(2);
    if (unlikely(cpy_r_r29 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp5 = cpy_r_r28.f0;
    PyTuple_SET_ITEM(cpy_r_r29, 0, __tmp5);
    PyObject *__tmp6 = cpy_r_r28.f1;
    PyTuple_SET_ITEM(cpy_r_r29, 1, __tmp6);
    cpy_r_r30 = PyObject_IsInstance(cpy_r_primitive, cpy_r_r29);
    CPy_DECREF(cpy_r_r29);
    cpy_r_r31 = cpy_r_r30 >= 0;
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "to_hex", 53, CPyStatic_conversions___globals);
        goto CPyL61;
    }
    cpy_r_r32 = cpy_r_r30;
    if (!cpy_r_r32) goto CPyL29;
    cpy_r_r33 = CPyDef_hexadecimal___encode_hex(cpy_r_primitive);
    CPy_DECREF(cpy_r_primitive);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "to_hex", 54, CPyStatic_conversions___globals);
        goto CPyL52;
    }
    return cpy_r_r33;
CPyL29: ;
    CPy_INCREF(cpy_r_primitive);
    if (PyLong_Check(cpy_r_primitive))
        cpy_r_r34 = cpy_r_primitive;
    else {
        cpy_r_r34 = NULL;
    }
    if (cpy_r_r34 != NULL) goto __LL7;
    if (cpy_r_primitive == Py_None)
        cpy_r_r34 = cpy_r_primitive;
    else {
        cpy_r_r34 = NULL;
    }
    if (cpy_r_r34 != NULL) goto __LL7;
    CPy_TypeErrorTraceback("faster_eth_utils/conversions.py", "to_hex", 55, CPyStatic_conversions___globals, "int or None", cpy_r_primitive);
    goto CPyL61;
__LL7: ;
    cpy_r_r35 = CPyDef_types___is_string(cpy_r_r34);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r35 == 2)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "to_hex", 55, CPyStatic_conversions___globals);
        goto CPyL61;
    }
    if (cpy_r_r35) {
        goto CPyL62;
    } else
        goto CPyL36;
CPyL32: ;
    cpy_r_r36 = CPyStatics[66]; /* ('Unsupported type: The primitive argument must be one '
                                   'of: bytes,bytearray, int or bool and not str') */
    cpy_r_r37 = CPyModule_builtins;
    cpy_r_r38 = CPyStatics[6]; /* 'TypeError' */
    cpy_r_r39 = CPyObject_GetAttr(cpy_r_r37, cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "to_hex", 56, CPyStatic_conversions___globals);
        goto CPyL52;
    }
    PyObject *cpy_r_r40[1] = {cpy_r_r36};
    cpy_r_r41 = (PyObject **)&cpy_r_r40;
    cpy_r_r42 = PyObject_Vectorcall(cpy_r_r39, cpy_r_r41, 1, 0);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "to_hex", 56, CPyStatic_conversions___globals);
        goto CPyL52;
    }
    CPy_Raise(cpy_r_r42);
    CPy_DECREF(cpy_r_r42);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "to_hex", 56, CPyStatic_conversions___globals);
        goto CPyL52;
    }
    CPy_Unreachable();
CPyL36: ;
    CPy_INCREF(cpy_r_primitive);
    if (PyLong_Check(cpy_r_primitive))
        cpy_r_r43 = cpy_r_primitive;
    else {
        cpy_r_r43 = NULL;
    }
    if (cpy_r_r43 != NULL) goto __LL8;
    if (cpy_r_primitive == Py_None)
        cpy_r_r43 = cpy_r_primitive;
    else {
        cpy_r_r43 = NULL;
    }
    if (cpy_r_r43 != NULL) goto __LL8;
    CPy_TypeErrorTraceback("faster_eth_utils/conversions.py", "to_hex", 61, CPyStatic_conversions___globals, "int or None", cpy_r_primitive);
    goto CPyL61;
__LL8: ;
    cpy_r_r44 = CPyDef_types___is_integer(cpy_r_r43);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r44 == 2)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "to_hex", 61, CPyStatic_conversions___globals);
        goto CPyL61;
    }
    if (!cpy_r_r44) goto CPyL45;
    if (PyLong_Check(cpy_r_primitive))
        cpy_r_r45 = cpy_r_primitive;
    else {
        cpy_r_r45 = NULL;
    }
    if (cpy_r_r45 != NULL) goto __LL9;
    if (cpy_r_primitive == Py_None)
        cpy_r_r45 = cpy_r_primitive;
    else {
        cpy_r_r45 = NULL;
    }
    if (cpy_r_r45 != NULL) goto __LL9;
    CPy_TypeErrorTraceback("faster_eth_utils/conversions.py", "to_hex", 62, CPyStatic_conversions___globals, "int or None", cpy_r_primitive);
    goto CPyL52;
__LL9: ;
    if (likely(PyLong_Check(cpy_r_r45)))
        cpy_r_r46 = CPyTagged_FromObject(cpy_r_r45);
    else {
        CPy_TypeError("int", cpy_r_r45); cpy_r_r46 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r46 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "to_hex", 62, CPyStatic_conversions___globals);
        goto CPyL52;
    }
    cpy_r_r47 = CPyModule_builtins;
    cpy_r_r48 = CPyStatics[67]; /* 'hex' */
    cpy_r_r49 = CPyObject_GetAttr(cpy_r_r47, cpy_r_r48);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "to_hex", 62, CPyStatic_conversions___globals);
        goto CPyL63;
    }
    cpy_r_r50 = CPyTagged_StealAsObject(cpy_r_r46);
    PyObject *cpy_r_r51[1] = {cpy_r_r50};
    cpy_r_r52 = (PyObject **)&cpy_r_r51;
    cpy_r_r53 = PyObject_Vectorcall(cpy_r_r49, cpy_r_r52, 1, 0);
    CPy_DECREF(cpy_r_r49);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "to_hex", 62, CPyStatic_conversions___globals);
        goto CPyL64;
    }
    CPy_DECREF(cpy_r_r50);
    if (likely(PyUnicode_Check(cpy_r_r53)))
        cpy_r_r54 = cpy_r_r53;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/conversions.py", "to_hex", 62, CPyStatic_conversions___globals, "str", cpy_r_r53);
        goto CPyL52;
    }
    return cpy_r_r54;
CPyL45: ;
    cpy_r_r55 = CPyStatics[68]; /* "Unsupported type: '" */
    if (PyLong_Check(cpy_r_primitive))
        cpy_r_r56 = cpy_r_primitive;
    else {
        cpy_r_r56 = NULL;
    }
    if (cpy_r_r56 != NULL) goto __LL10;
    if (cpy_r_primitive == Py_None)
        cpy_r_r56 = cpy_r_primitive;
    else {
        cpy_r_r56 = NULL;
    }
    if (cpy_r_r56 != NULL) goto __LL10;
    CPy_TypeErrorTraceback("faster_eth_utils/conversions.py", "to_hex", 65, CPyStatic_conversions___globals, "int or None", cpy_r_primitive);
    goto CPyL52;
__LL10: ;
    cpy_r_r57 = PyObject_Type(cpy_r_r56);
    CPy_DECREF(cpy_r_r56);
    cpy_r_r58 = PyObject_Repr(cpy_r_r57);
    CPy_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "to_hex", 65, CPyStatic_conversions___globals);
        goto CPyL52;
    }
    cpy_r_r59 = CPyStatics[69]; /* "'. Must be one of: bool, str, bytes, bytearray or int." */
    cpy_r_r60 = CPyStr_Build(3, cpy_r_r55, cpy_r_r58, cpy_r_r59);
    CPy_DECREF(cpy_r_r58);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "to_hex", 65, CPyStatic_conversions___globals);
        goto CPyL52;
    }
    cpy_r_r61 = CPyModule_builtins;
    cpy_r_r62 = CPyStatics[6]; /* 'TypeError' */
    cpy_r_r63 = CPyObject_GetAttr(cpy_r_r61, cpy_r_r62);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "to_hex", 64, CPyStatic_conversions___globals);
        goto CPyL65;
    }
    PyObject *cpy_r_r64[1] = {cpy_r_r60};
    cpy_r_r65 = (PyObject **)&cpy_r_r64;
    cpy_r_r66 = PyObject_Vectorcall(cpy_r_r63, cpy_r_r65, 1, 0);
    CPy_DECREF(cpy_r_r63);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "to_hex", 64, CPyStatic_conversions___globals);
        goto CPyL65;
    }
    CPy_DECREF(cpy_r_r60);
    CPy_Raise(cpy_r_r66);
    CPy_DECREF(cpy_r_r66);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "to_hex", 64, CPyStatic_conversions___globals);
        goto CPyL52;
    }
    CPy_Unreachable();
CPyL52: ;
    cpy_r_r67 = NULL;
    return cpy_r_r67;
CPyL53: ;
    CPy_INCREF(cpy_r_primitive);
    goto CPyL2;
CPyL54: ;
    CPy_INCREF(cpy_r_hexstr);
    goto CPyL4;
CPyL55: ;
    CPy_INCREF(cpy_r_text);
    goto CPyL6;
CPyL56: ;
    CPy_DECREF(cpy_r_primitive);
    CPy_DECREF(cpy_r_text);
    goto CPyL7;
CPyL57: ;
    CPy_DECREF(cpy_r_hexstr);
    goto CPyL12;
CPyL58: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL52;
CPyL59: ;
    CPy_DECREF(cpy_r_primitive);
    goto CPyL13;
CPyL60: ;
    CPy_DECREF(cpy_r_text);
    goto CPyL17;
CPyL61: ;
    CPy_DecRef(cpy_r_primitive);
    goto CPyL52;
CPyL62: ;
    CPy_DECREF(cpy_r_primitive);
    goto CPyL32;
CPyL63: ;
    CPyTagged_DecRef(cpy_r_r46);
    goto CPyL52;
CPyL64: ;
    CPy_DecRef(cpy_r_r50);
    goto CPyL52;
CPyL65: ;
    CPy_DecRef(cpy_r_r60);
    goto CPyL52;
}

PyObject *CPyPy_conversions___to_hex(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"primitive", "hexstr", "text", 0};
    static CPyArg_Parser parser = {"|OOO:to_hex", kwlist, 0};
    PyObject *obj_primitive = NULL;
    PyObject *obj_hexstr = NULL;
    PyObject *obj_text = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_primitive, &obj_hexstr, &obj_text)) {
        return NULL;
    }
    PyObject *arg_primitive;
    if (obj_primitive == NULL) {
        arg_primitive = NULL;
        goto __LL11;
    }
    if (PyBytes_Check(obj_primitive) || PyByteArray_Check(obj_primitive))
        arg_primitive = obj_primitive;
    else {
        arg_primitive = NULL;
    }
    if (arg_primitive != NULL) goto __LL11;
    if (PyLong_Check(obj_primitive))
        arg_primitive = obj_primitive;
    else {
        arg_primitive = NULL;
    }
    if (arg_primitive != NULL) goto __LL11;
    if (PyBool_Check(obj_primitive))
        arg_primitive = obj_primitive;
    else {
        arg_primitive = NULL;
    }
    if (arg_primitive != NULL) goto __LL11;
    if (obj_primitive == Py_None)
        arg_primitive = obj_primitive;
    else {
        arg_primitive = NULL;
    }
    if (arg_primitive != NULL) goto __LL11;
    CPy_TypeError("union[bytes, int, bool, None]", obj_primitive); 
    goto fail;
__LL11: ;
    PyObject *arg_hexstr;
    if (obj_hexstr == NULL) {
        arg_hexstr = NULL;
        goto __LL12;
    }
    arg_hexstr = obj_hexstr;
    if (arg_hexstr != NULL) goto __LL12;
    if (obj_hexstr == Py_None)
        arg_hexstr = obj_hexstr;
    else {
        arg_hexstr = NULL;
    }
    if (arg_hexstr != NULL) goto __LL12;
    CPy_TypeError("object or None", obj_hexstr); 
    goto fail;
__LL12: ;
    PyObject *arg_text;
    if (obj_text == NULL) {
        arg_text = NULL;
        goto __LL13;
    }
    if (PyUnicode_Check(obj_text))
        arg_text = obj_text;
    else {
        arg_text = NULL;
    }
    if (arg_text != NULL) goto __LL13;
    if (obj_text == Py_None)
        arg_text = obj_text;
    else {
        arg_text = NULL;
    }
    if (arg_text != NULL) goto __LL13;
    CPy_TypeError("str or None", obj_text); 
    goto fail;
__LL13: ;
    PyObject *retval = CPyDef_conversions___to_hex(arg_primitive, arg_hexstr, arg_text);
    return retval;
fail: ;
    CPy_AddTraceback("faster_eth_utils/conversions.py", "to_hex", 34, CPyStatic_conversions___globals);
    return NULL;
}

CPyTagged CPyDef_conversions___to_int(PyObject *cpy_r_primitive, PyObject *cpy_r_hexstr, PyObject *cpy_r_text) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject **cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyTagged cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyTagged cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    tuple_T2OO cpy_r_r20;
    PyObject *cpy_r_r21;
    int32_t cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    CPyTagged cpy_r_r26;
    PyObject *cpy_r_r27;
    int32_t cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject **cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    tuple_T2OO cpy_r_r40;
    PyObject *cpy_r_r41;
    int32_t cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    CPyTagged cpy_r_r45;
    PyObject *cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject **cpy_r_r56;
    PyObject *cpy_r_r57;
    CPyTagged cpy_r_r58;
    if (cpy_r_primitive != NULL) goto CPyL39;
    cpy_r_r0 = Py_None;
    cpy_r_primitive = cpy_r_r0;
CPyL2: ;
    if (cpy_r_hexstr != NULL) goto CPyL40;
    cpy_r_r1 = Py_None;
    cpy_r_hexstr = cpy_r_r1;
CPyL4: ;
    if (cpy_r_text != NULL) goto CPyL41;
    cpy_r_r2 = Py_None;
    cpy_r_text = cpy_r_r2;
CPyL6: ;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = cpy_r_hexstr != cpy_r_r3;
    if (cpy_r_r4) {
        goto CPyL42;
    } else
        goto CPyL43;
CPyL7: ;
    cpy_r_r5 = (PyObject *)&PyLong_Type;
    cpy_r_r6 = CPyStatics[264]; /* 16 */
    PyObject *cpy_r_r7[2] = {cpy_r_hexstr, cpy_r_r6};
    cpy_r_r8 = (PyObject **)&cpy_r_r7;
    cpy_r_r9 = PyObject_Vectorcall(cpy_r_r5, cpy_r_r8, 2, 0);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "to_int", 87, CPyStatic_conversions___globals);
        goto CPyL44;
    }
    CPy_DECREF(cpy_r_hexstr);
    if (likely(PyLong_Check(cpy_r_r9)))
        cpy_r_r10 = CPyTagged_FromObject(cpy_r_r9);
    else {
        CPy_TypeError("int", cpy_r_r9); cpy_r_r10 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "to_int", 87, CPyStatic_conversions___globals);
        goto CPyL38;
    }
    return cpy_r_r10;
CPyL10: ;
    cpy_r_r11 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r12 = cpy_r_text != cpy_r_r11;
    if (cpy_r_r12) {
        goto CPyL45;
    } else
        goto CPyL46;
CPyL11: ;
    if (likely(cpy_r_text != Py_None))
        cpy_r_r13 = cpy_r_text;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/conversions.py", "to_int", 89, CPyStatic_conversions___globals, "str", cpy_r_text);
        goto CPyL38;
    }
    cpy_r_r14 = CPyLong_FromStr(cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "to_int", 89, CPyStatic_conversions___globals);
        goto CPyL38;
    }
    if (likely(PyLong_Check(cpy_r_r14)))
        cpy_r_r15 = CPyTagged_FromObject(cpy_r_r14);
    else {
        CPy_TypeError("int", cpy_r_r14); cpy_r_r15 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "to_int", 89, CPyStatic_conversions___globals);
        goto CPyL38;
    }
    return cpy_r_r15;
CPyL15: ;
    cpy_r_r16 = (PyObject *)&PyBytes_Type;
    cpy_r_r17 = CPyModule_builtins;
    cpy_r_r18 = CPyStatics[65]; /* 'bytearray' */
    cpy_r_r19 = CPyObject_GetAttr(cpy_r_r17, cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "to_int", 90, CPyStatic_conversions___globals);
        goto CPyL47;
    }
    CPy_INCREF(cpy_r_r16);
    cpy_r_r20.f0 = cpy_r_r16;
    cpy_r_r20.f1 = cpy_r_r19;
    cpy_r_r21 = PyTuple_New(2);
    if (unlikely(cpy_r_r21 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp14 = cpy_r_r20.f0;
    PyTuple_SET_ITEM(cpy_r_r21, 0, __tmp14);
    PyObject *__tmp15 = cpy_r_r20.f1;
    PyTuple_SET_ITEM(cpy_r_r21, 1, __tmp15);
    cpy_r_r22 = PyObject_IsInstance(cpy_r_primitive, cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    cpy_r_r23 = cpy_r_r22 >= 0;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "to_int", 90, CPyStatic_conversions___globals);
        goto CPyL47;
    }
    cpy_r_r24 = cpy_r_r22;
    if (!cpy_r_r24) goto CPyL21;
    if (likely(PyBytes_Check(cpy_r_primitive) || PyByteArray_Check(cpy_r_primitive)))
        cpy_r_r25 = cpy_r_primitive;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/conversions.py", "to_int", 91, CPyStatic_conversions___globals, "bytes", cpy_r_primitive);
        goto CPyL38;
    }
    cpy_r_r26 = CPyDef_encoding___big_endian_to_int(cpy_r_r25);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r26 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "to_int", 91, CPyStatic_conversions___globals);
        goto CPyL38;
    }
    return cpy_r_r26;
CPyL21: ;
    cpy_r_r27 = (PyObject *)&PyUnicode_Type;
    cpy_r_r28 = PyObject_IsInstance(cpy_r_primitive, cpy_r_r27);
    cpy_r_r29 = cpy_r_r28 >= 0;
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "to_int", 92, CPyStatic_conversions___globals);
        goto CPyL47;
    }
    cpy_r_r30 = cpy_r_r28;
    if (cpy_r_r30) {
        goto CPyL48;
    } else
        goto CPyL27;
CPyL23: ;
    cpy_r_r31 = CPyStatics[70]; /* 'Pass in strings with keyword hexstr or text' */
    cpy_r_r32 = CPyModule_builtins;
    cpy_r_r33 = CPyStatics[6]; /* 'TypeError' */
    cpy_r_r34 = CPyObject_GetAttr(cpy_r_r32, cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "to_int", 93, CPyStatic_conversions___globals);
        goto CPyL38;
    }
    PyObject *cpy_r_r35[1] = {cpy_r_r31};
    cpy_r_r36 = (PyObject **)&cpy_r_r35;
    cpy_r_r37 = PyObject_Vectorcall(cpy_r_r34, cpy_r_r36, 1, 0);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "to_int", 93, CPyStatic_conversions___globals);
        goto CPyL38;
    }
    CPy_Raise(cpy_r_r37);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "to_int", 93, CPyStatic_conversions___globals);
        goto CPyL38;
    }
    CPy_Unreachable();
CPyL27: ;
    cpy_r_r38 = (PyObject *)&PyLong_Type;
    cpy_r_r39 = (PyObject *)&PyBool_Type;
    CPy_INCREF(cpy_r_r38);
    CPy_INCREF(cpy_r_r39);
    cpy_r_r40.f0 = cpy_r_r38;
    cpy_r_r40.f1 = cpy_r_r39;
    cpy_r_r41 = PyTuple_New(2);
    if (unlikely(cpy_r_r41 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp16 = cpy_r_r40.f0;
    PyTuple_SET_ITEM(cpy_r_r41, 0, __tmp16);
    PyObject *__tmp17 = cpy_r_r40.f1;
    PyTuple_SET_ITEM(cpy_r_r41, 1, __tmp17);
    cpy_r_r42 = PyObject_IsInstance(cpy_r_primitive, cpy_r_r41);
    CPy_DECREF(cpy_r_r41);
    cpy_r_r43 = cpy_r_r42 >= 0;
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "to_int", 94, CPyStatic_conversions___globals);
        goto CPyL47;
    }
    cpy_r_r44 = cpy_r_r42;
    if (!cpy_r_r44) goto CPyL31;
    if (likely(PyLong_Check(cpy_r_primitive)))
        cpy_r_r45 = CPyTagged_FromObject(cpy_r_primitive);
    else {
        CPy_TypeError("int", cpy_r_primitive); cpy_r_r45 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_primitive);
    if (unlikely(cpy_r_r45 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "to_int", 95, CPyStatic_conversions___globals);
        goto CPyL38;
    }
    return cpy_r_r45;
CPyL31: ;
    cpy_r_r46 = CPyStatics[71]; /* ('Invalid type. Expected one of '
                                   'int/bool/str/bytes/bytearray. Got ') */
    if (unlikely(cpy_r_primitive != Py_None)) {
        CPy_TypeError("None", cpy_r_primitive); cpy_r_r47 = 2;
    } else
        cpy_r_r47 = 1;
    CPy_DECREF(cpy_r_primitive);
    if (unlikely(cpy_r_r47 == 2)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "to_int", 99, CPyStatic_conversions___globals);
        goto CPyL38;
    }
    cpy_r_r48 = Py_None;
    cpy_r_r49 = PyObject_Type(cpy_r_r48);
    cpy_r_r50 = PyObject_Str(cpy_r_r49);
    CPy_DECREF(cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "to_int", 98, CPyStatic_conversions___globals);
        goto CPyL38;
    }
    cpy_r_r51 = CPyStr_Build(2, cpy_r_r46, cpy_r_r50);
    CPy_DECREF(cpy_r_r50);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "to_int", 98, CPyStatic_conversions___globals);
        goto CPyL38;
    }
    cpy_r_r52 = CPyModule_builtins;
    cpy_r_r53 = CPyStatics[6]; /* 'TypeError' */
    cpy_r_r54 = CPyObject_GetAttr(cpy_r_r52, cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "to_int", 97, CPyStatic_conversions___globals);
        goto CPyL49;
    }
    PyObject *cpy_r_r55[1] = {cpy_r_r51};
    cpy_r_r56 = (PyObject **)&cpy_r_r55;
    cpy_r_r57 = PyObject_Vectorcall(cpy_r_r54, cpy_r_r56, 1, 0);
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "to_int", 97, CPyStatic_conversions___globals);
        goto CPyL49;
    }
    CPy_DECREF(cpy_r_r51);
    CPy_Raise(cpy_r_r57);
    CPy_DECREF(cpy_r_r57);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "to_int", 97, CPyStatic_conversions___globals);
        goto CPyL38;
    }
    CPy_Unreachable();
CPyL38: ;
    cpy_r_r58 = CPY_INT_TAG;
    return cpy_r_r58;
CPyL39: ;
    CPy_INCREF(cpy_r_primitive);
    goto CPyL2;
CPyL40: ;
    CPy_INCREF(cpy_r_hexstr);
    goto CPyL4;
CPyL41: ;
    CPy_INCREF(cpy_r_text);
    goto CPyL6;
CPyL42: ;
    CPy_DECREF(cpy_r_primitive);
    CPy_DECREF(cpy_r_text);
    goto CPyL7;
CPyL43: ;
    CPy_DECREF(cpy_r_hexstr);
    goto CPyL10;
CPyL44: ;
    CPy_DecRef(cpy_r_hexstr);
    goto CPyL38;
CPyL45: ;
    CPy_DECREF(cpy_r_primitive);
    goto CPyL11;
CPyL46: ;
    CPy_DECREF(cpy_r_text);
    goto CPyL15;
CPyL47: ;
    CPy_DecRef(cpy_r_primitive);
    goto CPyL38;
CPyL48: ;
    CPy_DECREF(cpy_r_primitive);
    goto CPyL23;
CPyL49: ;
    CPy_DecRef(cpy_r_r51);
    goto CPyL38;
}

PyObject *CPyPy_conversions___to_int(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"primitive", "hexstr", "text", 0};
    static CPyArg_Parser parser = {"|OOO:to_int", kwlist, 0};
    PyObject *obj_primitive = NULL;
    PyObject *obj_hexstr = NULL;
    PyObject *obj_text = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_primitive, &obj_hexstr, &obj_text)) {
        return NULL;
    }
    PyObject *arg_primitive;
    if (obj_primitive == NULL) {
        arg_primitive = NULL;
        goto __LL18;
    }
    if (PyBytes_Check(obj_primitive) || PyByteArray_Check(obj_primitive))
        arg_primitive = obj_primitive;
    else {
        arg_primitive = NULL;
    }
    if (arg_primitive != NULL) goto __LL18;
    if (PyLong_Check(obj_primitive))
        arg_primitive = obj_primitive;
    else {
        arg_primitive = NULL;
    }
    if (arg_primitive != NULL) goto __LL18;
    if (PyBool_Check(obj_primitive))
        arg_primitive = obj_primitive;
    else {
        arg_primitive = NULL;
    }
    if (arg_primitive != NULL) goto __LL18;
    if (obj_primitive == Py_None)
        arg_primitive = obj_primitive;
    else {
        arg_primitive = NULL;
    }
    if (arg_primitive != NULL) goto __LL18;
    CPy_TypeError("union[bytes, int, bool, None]", obj_primitive); 
    goto fail;
__LL18: ;
    PyObject *arg_hexstr;
    if (obj_hexstr == NULL) {
        arg_hexstr = NULL;
        goto __LL19;
    }
    arg_hexstr = obj_hexstr;
    if (arg_hexstr != NULL) goto __LL19;
    if (obj_hexstr == Py_None)
        arg_hexstr = obj_hexstr;
    else {
        arg_hexstr = NULL;
    }
    if (arg_hexstr != NULL) goto __LL19;
    CPy_TypeError("object or None", obj_hexstr); 
    goto fail;
__LL19: ;
    PyObject *arg_text;
    if (obj_text == NULL) {
        arg_text = NULL;
        goto __LL20;
    }
    if (PyUnicode_Check(obj_text))
        arg_text = obj_text;
    else {
        arg_text = NULL;
    }
    if (arg_text != NULL) goto __LL20;
    if (obj_text == Py_None)
        arg_text = obj_text;
    else {
        arg_text = NULL;
    }
    if (arg_text != NULL) goto __LL20;
    CPy_TypeError("str or None", obj_text); 
    goto fail;
__LL20: ;
    CPyTagged retval = CPyDef_conversions___to_int(arg_primitive, arg_hexstr, arg_text);
    if (retval == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = CPyTagged_StealAsObject(retval);
    return retbox;
fail: ;
    CPy_AddTraceback("faster_eth_utils/conversions.py", "to_int", 70, CPyStatic_conversions___globals);
    return NULL;
}

PyObject *CPyDef_conversions___to_bytes(PyObject *cpy_r_primitive, PyObject *cpy_r_hexstr, PyObject *cpy_r_text) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    int32_t cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    int32_t cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject **cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    int32_t cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    CPyTagged cpy_r_r37;
    CPyTagged cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject **cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    if (cpy_r_primitive != NULL) goto CPyL50;
    cpy_r_r0 = Py_None;
    cpy_r_primitive = cpy_r_r0;
CPyL2: ;
    if (cpy_r_hexstr != NULL) goto CPyL51;
    cpy_r_r1 = Py_None;
    cpy_r_hexstr = cpy_r_r1;
CPyL4: ;
    if (cpy_r_text != NULL) goto CPyL52;
    cpy_r_r2 = Py_None;
    cpy_r_text = cpy_r_r2;
CPyL6: ;
    cpy_r_r3 = CPyDef_types___is_boolean(cpy_r_primitive);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "to_bytes", 108, CPyStatic_conversions___globals);
        goto CPyL53;
    }
    if (cpy_r_r3) {
        goto CPyL54;
    } else
        goto CPyL13;
CPyL8: ;
    cpy_r_r4 = PyObject_IsTrue(cpy_r_primitive);
    CPy_DECREF(cpy_r_primitive);
    cpy_r_r5 = cpy_r_r4 >= 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "to_bytes", 104, CPyStatic_conversions___globals);
        goto CPyL49;
    }
    cpy_r_r6 = cpy_r_r4;
    if (!cpy_r_r6) goto CPyL11;
    cpy_r_r7 = CPyStatics[262]; /* b'\x01' */
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = cpy_r_r7;
    goto CPyL12;
CPyL11: ;
    cpy_r_r9 = CPyStatics[263]; /* b'\x00' */
    CPy_INCREF(cpy_r_r9);
    cpy_r_r8 = cpy_r_r9;
CPyL12: ;
    return cpy_r_r8;
CPyL13: ;
    cpy_r_r10 = CPyModule_builtins;
    cpy_r_r11 = CPyStatics[65]; /* 'bytearray' */
    cpy_r_r12 = CPyObject_GetAttr(cpy_r_r10, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "to_bytes", 110, CPyStatic_conversions___globals);
        goto CPyL53;
    }
    cpy_r_r13 = PyObject_IsInstance(cpy_r_primitive, cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r14 = cpy_r_r13 >= 0;
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "to_bytes", 110, CPyStatic_conversions___globals);
        goto CPyL53;
    }
    cpy_r_r15 = cpy_r_r13;
    if (cpy_r_r15) {
        goto CPyL55;
    } else
        goto CPyL19;
CPyL16: ;
    cpy_r_r16 = (PyObject *)&PyBytes_Type;
    PyObject *cpy_r_r17[1] = {cpy_r_primitive};
    cpy_r_r18 = (PyObject **)&cpy_r_r17;
    cpy_r_r19 = PyObject_Vectorcall(cpy_r_r16, cpy_r_r18, 1, 0);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "to_bytes", 111, CPyStatic_conversions___globals);
        goto CPyL56;
    }
    CPy_DECREF(cpy_r_primitive);
    if (likely(PyBytes_Check(cpy_r_r19) || PyByteArray_Check(cpy_r_r19)))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/conversions.py", "to_bytes", 111, CPyStatic_conversions___globals, "bytes", cpy_r_r19);
        goto CPyL49;
    }
    return cpy_r_r20;
CPyL19: ;
    cpy_r_r21 = (PyObject *)&PyBytes_Type;
    cpy_r_r22 = PyObject_IsInstance(cpy_r_primitive, cpy_r_r21);
    cpy_r_r23 = cpy_r_r22 >= 0;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "to_bytes", 112, CPyStatic_conversions___globals);
        goto CPyL53;
    }
    cpy_r_r24 = cpy_r_r22;
    if (cpy_r_r24) {
        goto CPyL57;
    } else
        goto CPyL23;
CPyL21: ;
    if (likely(PyBytes_Check(cpy_r_primitive) || PyByteArray_Check(cpy_r_primitive)))
        cpy_r_r25 = cpy_r_primitive;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/conversions.py", "to_bytes", 113, CPyStatic_conversions___globals, "bytes", cpy_r_primitive);
        goto CPyL49;
    }
    return cpy_r_r25;
CPyL23: ;
    CPy_INCREF(cpy_r_primitive);
    if (PyLong_Check(cpy_r_primitive))
        cpy_r_r26 = cpy_r_primitive;
    else {
        cpy_r_r26 = NULL;
    }
    if (cpy_r_r26 != NULL) goto __LL21;
    if (cpy_r_primitive == Py_None)
        cpy_r_r26 = cpy_r_primitive;
    else {
        cpy_r_r26 = NULL;
    }
    if (cpy_r_r26 != NULL) goto __LL21;
    CPy_TypeErrorTraceback("faster_eth_utils/conversions.py", "to_bytes", 114, CPyStatic_conversions___globals, "int or None", cpy_r_primitive);
    goto CPyL53;
__LL21: ;
    cpy_r_r27 = CPyDef_types___is_integer(cpy_r_r26);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r27 == 2)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "to_bytes", 114, CPyStatic_conversions___globals);
        goto CPyL53;
    }
    if (cpy_r_r27) {
        goto CPyL58;
    } else
        goto CPyL59;
CPyL26: ;
    if (PyLong_Check(cpy_r_primitive))
        cpy_r_r28 = cpy_r_primitive;
    else {
        cpy_r_r28 = NULL;
    }
    if (cpy_r_r28 != NULL) goto __LL22;
    if (cpy_r_primitive == Py_None)
        cpy_r_r28 = cpy_r_primitive;
    else {
        cpy_r_r28 = NULL;
    }
    if (cpy_r_r28 != NULL) goto __LL22;
    CPy_TypeErrorTraceback("faster_eth_utils/conversions.py", "to_bytes", 115, CPyStatic_conversions___globals, "int or None", cpy_r_primitive);
    goto CPyL49;
__LL22: ;
    cpy_r_r29 = NULL;
    cpy_r_r30 = NULL;
    cpy_r_r31 = CPyDef_conversions___to_hex(cpy_r_r28, cpy_r_r29, cpy_r_r30);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "to_bytes", 115, CPyStatic_conversions___globals);
        goto CPyL49;
    }
    cpy_r_r32 = NULL;
    cpy_r_r33 = NULL;
    cpy_r_r34 = CPyDef_conversions___to_bytes(cpy_r_r32, cpy_r_r31, cpy_r_r33);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "to_bytes", 115, CPyStatic_conversions___globals);
        goto CPyL49;
    }
    return cpy_r_r34;
CPyL30: ;
    cpy_r_r35 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r36 = cpy_r_hexstr != cpy_r_r35;
    if (cpy_r_r36) {
        goto CPyL60;
    } else
        goto CPyL61;
CPyL31: ;
    cpy_r_r37 = CPyObject_Size(cpy_r_hexstr);
    if (unlikely(cpy_r_r37 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "to_bytes", 117, CPyStatic_conversions___globals);
        goto CPyL62;
    }
    cpy_r_r38 = CPyTagged_Remainder(cpy_r_r37, 4);
    CPyTagged_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r38 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "to_bytes", 117, CPyStatic_conversions___globals);
        goto CPyL62;
    }
    cpy_r_r39 = cpy_r_r38 != 0;
    CPyTagged_DECREF(cpy_r_r38);
    if (!cpy_r_r39) goto CPyL38;
    cpy_r_r40 = CPyStatics[64]; /* '0x0' */
    cpy_r_r41 = CPyDef_hexadecimal___remove_0x_prefix(cpy_r_hexstr);
    CPy_DECREF(cpy_r_hexstr);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "to_bytes", 118, CPyStatic_conversions___globals);
        goto CPyL49;
    }
    cpy_r_r42 = PyNumber_Add(cpy_r_r40, cpy_r_r41);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "to_bytes", 118, CPyStatic_conversions___globals);
        goto CPyL49;
    }
    if (likely(PyUnicode_Check(cpy_r_r42)))
        cpy_r_r43 = cpy_r_r42;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/conversions.py", "to_bytes", 118, CPyStatic_conversions___globals, "str", cpy_r_r42);
        goto CPyL49;
    }
    cpy_r_hexstr = cpy_r_r43;
CPyL38: ;
    if (likely(PyUnicode_Check(cpy_r_hexstr)))
        cpy_r_r44 = cpy_r_hexstr;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/conversions.py", "to_bytes", 119, CPyStatic_conversions___globals, "str", cpy_r_hexstr);
        goto CPyL49;
    }
    cpy_r_r45 = CPyDef_hexadecimal___decode_hex(cpy_r_r44);
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "to_bytes", 119, CPyStatic_conversions___globals);
        goto CPyL49;
    }
    return cpy_r_r45;
CPyL41: ;
    cpy_r_r46 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r47 = cpy_r_text != cpy_r_r46;
    if (!cpy_r_r47) goto CPyL63;
    if (likely(cpy_r_text != Py_None))
        cpy_r_r48 = cpy_r_text;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/conversions.py", "to_bytes", 121, CPyStatic_conversions___globals, "str", cpy_r_text);
        goto CPyL49;
    }
    cpy_r_r49 = PyUnicode_AsUTF8String(cpy_r_r48);
    CPy_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "to_bytes", 121, CPyStatic_conversions___globals);
        goto CPyL49;
    }
    return cpy_r_r49;
CPyL45: ;
    cpy_r_r50 = CPyStatics[72]; /* ('expected a bool, int, byte or bytearray in first arg, '
                                   'or keyword of hexstr or text') */
    cpy_r_r51 = CPyModule_builtins;
    cpy_r_r52 = CPyStatics[6]; /* 'TypeError' */
    cpy_r_r53 = CPyObject_GetAttr(cpy_r_r51, cpy_r_r52);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "to_bytes", 122, CPyStatic_conversions___globals);
        goto CPyL49;
    }
    PyObject *cpy_r_r54[1] = {cpy_r_r50};
    cpy_r_r55 = (PyObject **)&cpy_r_r54;
    cpy_r_r56 = PyObject_Vectorcall(cpy_r_r53, cpy_r_r55, 1, 0);
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "to_bytes", 122, CPyStatic_conversions___globals);
        goto CPyL49;
    }
    CPy_Raise(cpy_r_r56);
    CPy_DECREF(cpy_r_r56);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "to_bytes", 122, CPyStatic_conversions___globals);
        goto CPyL49;
    }
    CPy_Unreachable();
CPyL49: ;
    cpy_r_r57 = NULL;
    return cpy_r_r57;
CPyL50: ;
    CPy_INCREF(cpy_r_primitive);
    goto CPyL2;
CPyL51: ;
    CPy_INCREF(cpy_r_hexstr);
    goto CPyL4;
CPyL52: ;
    CPy_INCREF(cpy_r_text);
    goto CPyL6;
CPyL53: ;
    CPy_DecRef(cpy_r_primitive);
    CPy_DecRef(cpy_r_hexstr);
    CPy_DecRef(cpy_r_text);
    goto CPyL49;
CPyL54: ;
    CPy_DECREF(cpy_r_hexstr);
    CPy_DECREF(cpy_r_text);
    goto CPyL8;
CPyL55: ;
    CPy_DECREF(cpy_r_hexstr);
    CPy_DECREF(cpy_r_text);
    goto CPyL16;
CPyL56: ;
    CPy_DecRef(cpy_r_primitive);
    goto CPyL49;
CPyL57: ;
    CPy_DECREF(cpy_r_hexstr);
    CPy_DECREF(cpy_r_text);
    goto CPyL21;
CPyL58: ;
    CPy_DECREF(cpy_r_hexstr);
    CPy_DECREF(cpy_r_text);
    goto CPyL26;
CPyL59: ;
    CPy_DECREF(cpy_r_primitive);
    goto CPyL30;
CPyL60: ;
    CPy_DECREF(cpy_r_text);
    goto CPyL31;
CPyL61: ;
    CPy_DECREF(cpy_r_hexstr);
    goto CPyL41;
CPyL62: ;
    CPy_DecRef(cpy_r_hexstr);
    goto CPyL49;
CPyL63: ;
    CPy_DECREF(cpy_r_text);
    goto CPyL45;
}

PyObject *CPyPy_conversions___to_bytes(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"primitive", "hexstr", "text", 0};
    static CPyArg_Parser parser = {"|OOO:to_bytes", kwlist, 0};
    PyObject *obj_primitive = NULL;
    PyObject *obj_hexstr = NULL;
    PyObject *obj_text = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_primitive, &obj_hexstr, &obj_text)) {
        return NULL;
    }
    PyObject *arg_primitive;
    if (obj_primitive == NULL) {
        arg_primitive = NULL;
        goto __LL23;
    }
    if (PyBytes_Check(obj_primitive) || PyByteArray_Check(obj_primitive))
        arg_primitive = obj_primitive;
    else {
        arg_primitive = NULL;
    }
    if (arg_primitive != NULL) goto __LL23;
    if (PyLong_Check(obj_primitive))
        arg_primitive = obj_primitive;
    else {
        arg_primitive = NULL;
    }
    if (arg_primitive != NULL) goto __LL23;
    if (PyBool_Check(obj_primitive))
        arg_primitive = obj_primitive;
    else {
        arg_primitive = NULL;
    }
    if (arg_primitive != NULL) goto __LL23;
    if (obj_primitive == Py_None)
        arg_primitive = obj_primitive;
    else {
        arg_primitive = NULL;
    }
    if (arg_primitive != NULL) goto __LL23;
    CPy_TypeError("union[bytes, int, bool, None]", obj_primitive); 
    goto fail;
__LL23: ;
    PyObject *arg_hexstr;
    if (obj_hexstr == NULL) {
        arg_hexstr = NULL;
        goto __LL24;
    }
    arg_hexstr = obj_hexstr;
    if (arg_hexstr != NULL) goto __LL24;
    if (obj_hexstr == Py_None)
        arg_hexstr = obj_hexstr;
    else {
        arg_hexstr = NULL;
    }
    if (arg_hexstr != NULL) goto __LL24;
    CPy_TypeError("object or None", obj_hexstr); 
    goto fail;
__LL24: ;
    PyObject *arg_text;
    if (obj_text == NULL) {
        arg_text = NULL;
        goto __LL25;
    }
    if (PyUnicode_Check(obj_text))
        arg_text = obj_text;
    else {
        arg_text = NULL;
    }
    if (arg_text != NULL) goto __LL25;
    if (obj_text == Py_None)
        arg_text = obj_text;
    else {
        arg_text = NULL;
    }
    if (arg_text != NULL) goto __LL25;
    CPy_TypeError("str or None", obj_text); 
    goto fail;
__LL25: ;
    PyObject *retval = CPyDef_conversions___to_bytes(arg_primitive, arg_hexstr, arg_text);
    return retval;
fail: ;
    CPy_AddTraceback("faster_eth_utils/conversions.py", "to_bytes", 103, CPyStatic_conversions___globals);
    return NULL;
}

PyObject *CPyDef_conversions___to_text(PyObject *cpy_r_primitive, PyObject *cpy_r_hexstr, PyObject *cpy_r_text) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    int32_t cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    tuple_T2OO cpy_r_r24;
    PyObject *cpy_r_r25;
    int32_t cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject **cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    CPyTagged cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject **cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    if (cpy_r_primitive != NULL) goto CPyL37;
    cpy_r_r0 = Py_None;
    cpy_r_primitive = cpy_r_r0;
CPyL2: ;
    if (cpy_r_hexstr != NULL) goto CPyL38;
    cpy_r_r1 = Py_None;
    cpy_r_hexstr = cpy_r_r1;
CPyL4: ;
    if (cpy_r_text != NULL) goto CPyL39;
    cpy_r_r2 = Py_None;
    cpy_r_text = cpy_r_r2;
CPyL6: ;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = cpy_r_hexstr != cpy_r_r3;
    if (cpy_r_r4) {
        goto CPyL40;
    } else
        goto CPyL41;
CPyL7: ;
    cpy_r_r5 = NULL;
    cpy_r_r6 = NULL;
    cpy_r_r7 = CPyDef_conversions___to_bytes(cpy_r_r5, cpy_r_hexstr, cpy_r_r6);
    CPy_DECREF(cpy_r_hexstr);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "to_text", 134, CPyStatic_conversions___globals);
        goto CPyL36;
    }
    cpy_r_r8 = CPyStatics[73]; /* 'utf-8' */
    cpy_r_r9 = CPy_Decode(cpy_r_r7, cpy_r_r8, NULL);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "to_text", 134, CPyStatic_conversions___globals);
        goto CPyL36;
    }
    return cpy_r_r9;
CPyL10: ;
    cpy_r_r10 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r11 = cpy_r_text != cpy_r_r10;
    if (cpy_r_r11) {
        goto CPyL42;
    } else
        goto CPyL43;
CPyL11: ;
    if (likely(cpy_r_text != Py_None))
        cpy_r_r12 = cpy_r_text;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/conversions.py", "to_text", 136, CPyStatic_conversions___globals, "str", cpy_r_text);
        goto CPyL36;
    }
    return cpy_r_r12;
CPyL13: ;
    cpy_r_r13 = (PyObject *)&PyUnicode_Type;
    cpy_r_r14 = PyObject_IsInstance(cpy_r_primitive, cpy_r_r13);
    cpy_r_r15 = cpy_r_r14 >= 0;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "to_text", 137, CPyStatic_conversions___globals);
        goto CPyL44;
    }
    cpy_r_r16 = cpy_r_r14;
    if (!cpy_r_r16) goto CPyL17;
    cpy_r_r17 = NULL;
    cpy_r_r18 = NULL;
    cpy_r_r19 = CPyDef_conversions___to_text(cpy_r_r17, cpy_r_primitive, cpy_r_r18);
    CPy_DECREF(cpy_r_primitive);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "to_text", 138, CPyStatic_conversions___globals);
        goto CPyL36;
    }
    return cpy_r_r19;
CPyL17: ;
    cpy_r_r20 = (PyObject *)&PyBytes_Type;
    cpy_r_r21 = CPyModule_builtins;
    cpy_r_r22 = CPyStatics[65]; /* 'bytearray' */
    cpy_r_r23 = CPyObject_GetAttr(cpy_r_r21, cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "to_text", 139, CPyStatic_conversions___globals);
        goto CPyL44;
    }
    CPy_INCREF(cpy_r_r20);
    cpy_r_r24.f0 = cpy_r_r20;
    cpy_r_r24.f1 = cpy_r_r23;
    cpy_r_r25 = PyTuple_New(2);
    if (unlikely(cpy_r_r25 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp26 = cpy_r_r24.f0;
    PyTuple_SET_ITEM(cpy_r_r25, 0, __tmp26);
    PyObject *__tmp27 = cpy_r_r24.f1;
    PyTuple_SET_ITEM(cpy_r_r25, 1, __tmp27);
    cpy_r_r26 = PyObject_IsInstance(cpy_r_primitive, cpy_r_r25);
    CPy_DECREF(cpy_r_r25);
    cpy_r_r27 = cpy_r_r26 >= 0;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "to_text", 139, CPyStatic_conversions___globals);
        goto CPyL44;
    }
    cpy_r_r28 = cpy_r_r26;
    if (!cpy_r_r28) goto CPyL24;
    cpy_r_r29 = CPyStatics[73]; /* 'utf-8' */
    cpy_r_r30 = cpy_r_primitive;
    cpy_r_r31 = CPyStatics[74]; /* 'decode' */
    PyObject *cpy_r_r32[2] = {cpy_r_r30, cpy_r_r29};
    cpy_r_r33 = (PyObject **)&cpy_r_r32;
    cpy_r_r34 = PyObject_VectorcallMethod(cpy_r_r31, cpy_r_r33, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "to_text", 140, CPyStatic_conversions___globals);
        goto CPyL45;
    }
    CPy_DECREF(cpy_r_r30);
    if (likely(PyUnicode_Check(cpy_r_r34)))
        cpy_r_r35 = cpy_r_r34;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/conversions.py", "to_text", 140, CPyStatic_conversions___globals, "str", cpy_r_r34);
        goto CPyL36;
    }
    return cpy_r_r35;
CPyL24: ;
    CPy_INCREF(cpy_r_primitive);
    if (PyLong_Check(cpy_r_primitive))
        cpy_r_r36 = cpy_r_primitive;
    else {
        cpy_r_r36 = NULL;
    }
    if (cpy_r_r36 != NULL) goto __LL28;
    if (cpy_r_primitive == Py_None)
        cpy_r_r36 = cpy_r_primitive;
    else {
        cpy_r_r36 = NULL;
    }
    if (cpy_r_r36 != NULL) goto __LL28;
    CPy_TypeErrorTraceback("faster_eth_utils/conversions.py", "to_text", 141, CPyStatic_conversions___globals, "int or None", cpy_r_primitive);
    goto CPyL44;
__LL28: ;
    cpy_r_r37 = CPyDef_types___is_integer(cpy_r_r36);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == 2)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "to_text", 141, CPyStatic_conversions___globals);
        goto CPyL44;
    }
    if (!cpy_r_r37) goto CPyL46;
    if (PyLong_Check(cpy_r_primitive))
        cpy_r_r38 = cpy_r_primitive;
    else {
        cpy_r_r38 = NULL;
    }
    if (cpy_r_r38 != NULL) goto __LL29;
    if (cpy_r_primitive == Py_None)
        cpy_r_r38 = cpy_r_primitive;
    else {
        cpy_r_r38 = NULL;
    }
    if (cpy_r_r38 != NULL) goto __LL29;
    CPy_TypeErrorTraceback("faster_eth_utils/conversions.py", "to_text", 142, CPyStatic_conversions___globals, "int or None", cpy_r_primitive);
    goto CPyL36;
__LL29: ;
    if (likely(PyLong_Check(cpy_r_r38)))
        cpy_r_r39 = CPyTagged_FromObject(cpy_r_r38);
    else {
        CPy_TypeError("int", cpy_r_r38); cpy_r_r39 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r39 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "to_text", 142, CPyStatic_conversions___globals);
        goto CPyL36;
    }
    cpy_r_r40 = CPyDef_encoding___int_to_big_endian(cpy_r_r39);
    CPyTagged_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "to_text", 142, CPyStatic_conversions___globals);
        goto CPyL36;
    }
    cpy_r_r41 = NULL;
    cpy_r_r42 = NULL;
    cpy_r_r43 = CPyDef_conversions___to_text(cpy_r_r40, cpy_r_r41, cpy_r_r42);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "to_text", 143, CPyStatic_conversions___globals);
        goto CPyL36;
    }
    return cpy_r_r43;
CPyL32: ;
    cpy_r_r44 = CPyStatics[75]; /* 'Expected an int, bytes, bytearray or hexstr.' */
    cpy_r_r45 = CPyModule_builtins;
    cpy_r_r46 = CPyStatics[6]; /* 'TypeError' */
    cpy_r_r47 = CPyObject_GetAttr(cpy_r_r45, cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "to_text", 144, CPyStatic_conversions___globals);
        goto CPyL36;
    }
    PyObject *cpy_r_r48[1] = {cpy_r_r44};
    cpy_r_r49 = (PyObject **)&cpy_r_r48;
    cpy_r_r50 = PyObject_Vectorcall(cpy_r_r47, cpy_r_r49, 1, 0);
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "to_text", 144, CPyStatic_conversions___globals);
        goto CPyL36;
    }
    CPy_Raise(cpy_r_r50);
    CPy_DECREF(cpy_r_r50);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "to_text", 144, CPyStatic_conversions___globals);
        goto CPyL36;
    }
    CPy_Unreachable();
CPyL36: ;
    cpy_r_r51 = NULL;
    return cpy_r_r51;
CPyL37: ;
    CPy_INCREF(cpy_r_primitive);
    goto CPyL2;
CPyL38: ;
    CPy_INCREF(cpy_r_hexstr);
    goto CPyL4;
CPyL39: ;
    CPy_INCREF(cpy_r_text);
    goto CPyL6;
CPyL40: ;
    CPy_DECREF(cpy_r_primitive);
    CPy_DECREF(cpy_r_text);
    goto CPyL7;
CPyL41: ;
    CPy_DECREF(cpy_r_hexstr);
    goto CPyL10;
CPyL42: ;
    CPy_DECREF(cpy_r_primitive);
    goto CPyL11;
CPyL43: ;
    CPy_DECREF(cpy_r_text);
    goto CPyL13;
CPyL44: ;
    CPy_DecRef(cpy_r_primitive);
    goto CPyL36;
CPyL45: ;
    CPy_DecRef(cpy_r_r30);
    goto CPyL36;
CPyL46: ;
    CPy_DECREF(cpy_r_primitive);
    goto CPyL32;
}

PyObject *CPyPy_conversions___to_text(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"primitive", "hexstr", "text", 0};
    static CPyArg_Parser parser = {"|OOO:to_text", kwlist, 0};
    PyObject *obj_primitive = NULL;
    PyObject *obj_hexstr = NULL;
    PyObject *obj_text = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_primitive, &obj_hexstr, &obj_text)) {
        return NULL;
    }
    PyObject *arg_primitive;
    if (obj_primitive == NULL) {
        arg_primitive = NULL;
        goto __LL30;
    }
    if (PyBytes_Check(obj_primitive) || PyByteArray_Check(obj_primitive))
        arg_primitive = obj_primitive;
    else {
        arg_primitive = NULL;
    }
    if (arg_primitive != NULL) goto __LL30;
    if (PyLong_Check(obj_primitive))
        arg_primitive = obj_primitive;
    else {
        arg_primitive = NULL;
    }
    if (arg_primitive != NULL) goto __LL30;
    if (PyBool_Check(obj_primitive))
        arg_primitive = obj_primitive;
    else {
        arg_primitive = NULL;
    }
    if (arg_primitive != NULL) goto __LL30;
    if (obj_primitive == Py_None)
        arg_primitive = obj_primitive;
    else {
        arg_primitive = NULL;
    }
    if (arg_primitive != NULL) goto __LL30;
    CPy_TypeError("union[bytes, int, bool, None]", obj_primitive); 
    goto fail;
__LL30: ;
    PyObject *arg_hexstr;
    if (obj_hexstr == NULL) {
        arg_hexstr = NULL;
        goto __LL31;
    }
    arg_hexstr = obj_hexstr;
    if (arg_hexstr != NULL) goto __LL31;
    if (obj_hexstr == Py_None)
        arg_hexstr = obj_hexstr;
    else {
        arg_hexstr = NULL;
    }
    if (arg_hexstr != NULL) goto __LL31;
    CPy_TypeError("object or None", obj_hexstr); 
    goto fail;
__LL31: ;
    PyObject *arg_text;
    if (obj_text == NULL) {
        arg_text = NULL;
        goto __LL32;
    }
    if (PyUnicode_Check(obj_text))
        arg_text = obj_text;
    else {
        arg_text = NULL;
    }
    if (arg_text != NULL) goto __LL32;
    if (obj_text == Py_None)
        arg_text = obj_text;
    else {
        arg_text = NULL;
    }
    if (arg_text != NULL) goto __LL32;
    CPy_TypeError("str or None", obj_text); 
    goto fail;
__LL32: ;
    PyObject *retval = CPyDef_conversions___to_text(arg_primitive, arg_hexstr, arg_text);
    return retval;
fail: ;
    CPy_AddTraceback("faster_eth_utils/conversions.py", "to_text", 128, CPyStatic_conversions___globals);
    return NULL;
}

PyObject *CPyDef_conversions___text_if_str(PyObject *cpy_r_to_type, PyObject *cpy_r_text_or_primitive) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject **cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject **cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    cpy_r_r0 = (PyObject *)&PyUnicode_Type;
    cpy_r_r1 = PyObject_IsInstance(cpy_r_text_or_primitive, cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "text_if_str", 157, CPyStatic_conversions___globals);
        goto CPyL8;
    }
    cpy_r_r3 = cpy_r_r1;
    if (!cpy_r_r3) goto CPyL5;
    CPy_INCREF(cpy_r_text_or_primitive);
    if (likely(PyUnicode_Check(cpy_r_text_or_primitive)))
        cpy_r_r4 = cpy_r_text_or_primitive;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/conversions.py", "text_if_str", 158, CPyStatic_conversions___globals, "str", cpy_r_text_or_primitive);
        goto CPyL8;
    }
    PyObject *cpy_r_r5[1] = {cpy_r_r4};
    cpy_r_r6 = (PyObject **)&cpy_r_r5;
    cpy_r_r7 = CPyStatics[279]; /* ('text',) */
    cpy_r_r8 = PyObject_Vectorcall(cpy_r_to_type, cpy_r_r6, 0, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "text_if_str", 158, CPyStatic_conversions___globals);
        goto CPyL9;
    }
    CPy_DECREF(cpy_r_r4);
    return cpy_r_r8;
CPyL5: ;
    CPy_INCREF(cpy_r_text_or_primitive);
    if (PyBytes_Check(cpy_r_text_or_primitive) || PyByteArray_Check(cpy_r_text_or_primitive))
        cpy_r_r9 = cpy_r_text_or_primitive;
    else {
        cpy_r_r9 = NULL;
    }
    if (cpy_r_r9 != NULL) goto __LL33;
    if (PyLong_Check(cpy_r_text_or_primitive))
        cpy_r_r9 = cpy_r_text_or_primitive;
    else {
        cpy_r_r9 = NULL;
    }
    if (cpy_r_r9 != NULL) goto __LL33;
    CPy_TypeErrorTraceback("faster_eth_utils/conversions.py", "text_if_str", 160, CPyStatic_conversions___globals, "union[bytes, int]", cpy_r_text_or_primitive);
    goto CPyL8;
__LL33: ;
    PyObject *cpy_r_r10[1] = {cpy_r_r9};
    cpy_r_r11 = (PyObject **)&cpy_r_r10;
    cpy_r_r12 = PyObject_Vectorcall(cpy_r_to_type, cpy_r_r11, 1, 0);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "text_if_str", 160, CPyStatic_conversions___globals);
        goto CPyL10;
    }
    CPy_DECREF(cpy_r_r9);
    return cpy_r_r12;
CPyL8: ;
    cpy_r_r13 = NULL;
    return cpy_r_r13;
CPyL9: ;
    CPy_DecRef(cpy_r_r4);
    goto CPyL8;
CPyL10: ;
    CPy_DecRef(cpy_r_r9);
    goto CPyL8;
}

PyObject *CPyPy_conversions___text_if_str(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"to_type", "text_or_primitive", 0};
    static CPyArg_Parser parser = {"OO:text_if_str", kwlist, 0};
    PyObject *obj_to_type;
    PyObject *obj_text_or_primitive;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_to_type, &obj_text_or_primitive)) {
        return NULL;
    }
    PyObject *arg_to_type = obj_to_type;
    PyObject *arg_text_or_primitive;
    if (PyBytes_Check(obj_text_or_primitive) || PyByteArray_Check(obj_text_or_primitive))
        arg_text_or_primitive = obj_text_or_primitive;
    else {
        arg_text_or_primitive = NULL;
    }
    if (arg_text_or_primitive != NULL) goto __LL34;
    if (PyLong_Check(obj_text_or_primitive))
        arg_text_or_primitive = obj_text_or_primitive;
    else {
        arg_text_or_primitive = NULL;
    }
    if (arg_text_or_primitive != NULL) goto __LL34;
    if (PyUnicode_Check(obj_text_or_primitive))
        arg_text_or_primitive = obj_text_or_primitive;
    else {
        arg_text_or_primitive = NULL;
    }
    if (arg_text_or_primitive != NULL) goto __LL34;
    CPy_TypeError("union[bytes, int, str]", obj_text_or_primitive); 
    goto fail;
__LL34: ;
    PyObject *retval = CPyDef_conversions___text_if_str(arg_to_type, arg_text_or_primitive);
    return retval;
fail: ;
    CPy_AddTraceback("faster_eth_utils/conversions.py", "text_if_str", 147, CPyStatic_conversions___globals);
    return NULL;
}

PyObject *CPyDef_conversions___hexstr_if_str(PyObject *cpy_r_to_type, PyObject *cpy_r_hexstr_or_primitive) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    int32_t cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject **cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject **cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject **cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    cpy_r_r0 = (PyObject *)&PyUnicode_Type;
    cpy_r_r1 = PyObject_IsInstance(cpy_r_hexstr_or_primitive, cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "hexstr_if_str", 173, CPyStatic_conversions___globals);
        goto CPyL22;
    }
    cpy_r_r3 = cpy_r_r1;
    if (!cpy_r_r3) goto CPyL19;
    CPy_INCREF(cpy_r_hexstr_or_primitive);
    if (likely(PyUnicode_Check(cpy_r_hexstr_or_primitive)))
        cpy_r_r4 = cpy_r_hexstr_or_primitive;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/conversions.py", "hexstr_if_str", 174, CPyStatic_conversions___globals, "str", cpy_r_hexstr_or_primitive);
        goto CPyL22;
    }
    cpy_r_r5 = CPyDef_hexadecimal___remove_0x_prefix(cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "hexstr_if_str", 174, CPyStatic_conversions___globals);
        goto CPyL22;
    }
    cpy_r_r6 = PyObject_IsTrue(cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    cpy_r_r7 = cpy_r_r6 >= 0;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "hexstr_if_str", 174, CPyStatic_conversions___globals);
        goto CPyL22;
    }
    cpy_r_r8 = cpy_r_r6;
    if (!cpy_r_r8) goto CPyL16;
    CPy_INCREF(cpy_r_hexstr_or_primitive);
    if (likely(PyUnicode_Check(cpy_r_hexstr_or_primitive)))
        cpy_r_r9 = cpy_r_hexstr_or_primitive;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/conversions.py", "hexstr_if_str", 175, CPyStatic_conversions___globals, "str", cpy_r_hexstr_or_primitive);
        goto CPyL22;
    }
    cpy_r_r10 = CPyDef_hexadecimal___is_hexstr(cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == 2)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "hexstr_if_str", 174, CPyStatic_conversions___globals);
        goto CPyL22;
    }
    if (cpy_r_r10) goto CPyL16;
    cpy_r_r11 = CPyStatics[76]; /* 'when sending a str, it must be a hex string. Got: ' */
    CPy_INCREF(cpy_r_hexstr_or_primitive);
    if (likely(PyUnicode_Check(cpy_r_hexstr_or_primitive)))
        cpy_r_r12 = cpy_r_hexstr_or_primitive;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/conversions.py", "hexstr_if_str", 179, CPyStatic_conversions___globals, "str", cpy_r_hexstr_or_primitive);
        goto CPyL22;
    }
    cpy_r_r13 = PyObject_Repr(cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "hexstr_if_str", 179, CPyStatic_conversions___globals);
        goto CPyL22;
    }
    cpy_r_r14 = CPyStr_Build(2, cpy_r_r11, cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "hexstr_if_str", 178, CPyStatic_conversions___globals);
        goto CPyL22;
    }
    cpy_r_r15 = CPyModule_builtins;
    cpy_r_r16 = CPyStatics[30]; /* 'ValueError' */
    cpy_r_r17 = CPyObject_GetAttr(cpy_r_r15, cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "hexstr_if_str", 177, CPyStatic_conversions___globals);
        goto CPyL23;
    }
    PyObject *cpy_r_r18[1] = {cpy_r_r14};
    cpy_r_r19 = (PyObject **)&cpy_r_r18;
    cpy_r_r20 = PyObject_Vectorcall(cpy_r_r17, cpy_r_r19, 1, 0);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "hexstr_if_str", 177, CPyStatic_conversions___globals);
        goto CPyL23;
    }
    CPy_DECREF(cpy_r_r14);
    CPy_Raise(cpy_r_r20);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "hexstr_if_str", 177, CPyStatic_conversions___globals);
        goto CPyL22;
    }
    CPy_Unreachable();
CPyL16: ;
    CPy_INCREF(cpy_r_hexstr_or_primitive);
    if (likely(PyUnicode_Check(cpy_r_hexstr_or_primitive)))
        cpy_r_r21 = cpy_r_hexstr_or_primitive;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/conversions.py", "hexstr_if_str", 181, CPyStatic_conversions___globals, "str", cpy_r_hexstr_or_primitive);
        goto CPyL22;
    }
    PyObject *cpy_r_r22[1] = {cpy_r_r21};
    cpy_r_r23 = (PyObject **)&cpy_r_r22;
    cpy_r_r24 = CPyStatics[289]; /* ('hexstr',) */
    cpy_r_r25 = PyObject_Vectorcall(cpy_r_to_type, cpy_r_r23, 0, cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "hexstr_if_str", 181, CPyStatic_conversions___globals);
        goto CPyL24;
    }
    CPy_DECREF(cpy_r_r21);
    return cpy_r_r25;
CPyL19: ;
    CPy_INCREF(cpy_r_hexstr_or_primitive);
    if (PyBytes_Check(cpy_r_hexstr_or_primitive) || PyByteArray_Check(cpy_r_hexstr_or_primitive))
        cpy_r_r26 = cpy_r_hexstr_or_primitive;
    else {
        cpy_r_r26 = NULL;
    }
    if (cpy_r_r26 != NULL) goto __LL35;
    if (PyLong_Check(cpy_r_hexstr_or_primitive))
        cpy_r_r26 = cpy_r_hexstr_or_primitive;
    else {
        cpy_r_r26 = NULL;
    }
    if (cpy_r_r26 != NULL) goto __LL35;
    CPy_TypeErrorTraceback("faster_eth_utils/conversions.py", "hexstr_if_str", 183, CPyStatic_conversions___globals, "union[bytes, int]", cpy_r_hexstr_or_primitive);
    goto CPyL22;
__LL35: ;
    PyObject *cpy_r_r27[1] = {cpy_r_r26};
    cpy_r_r28 = (PyObject **)&cpy_r_r27;
    cpy_r_r29 = PyObject_Vectorcall(cpy_r_to_type, cpy_r_r28, 1, 0);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "hexstr_if_str", 183, CPyStatic_conversions___globals);
        goto CPyL25;
    }
    CPy_DECREF(cpy_r_r26);
    return cpy_r_r29;
CPyL22: ;
    cpy_r_r30 = NULL;
    return cpy_r_r30;
CPyL23: ;
    CPy_DecRef(cpy_r_r14);
    goto CPyL22;
CPyL24: ;
    CPy_DecRef(cpy_r_r21);
    goto CPyL22;
CPyL25: ;
    CPy_DecRef(cpy_r_r26);
    goto CPyL22;
}

PyObject *CPyPy_conversions___hexstr_if_str(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"to_type", "hexstr_or_primitive", 0};
    static CPyArg_Parser parser = {"OO:hexstr_if_str", kwlist, 0};
    PyObject *obj_to_type;
    PyObject *obj_hexstr_or_primitive;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_to_type, &obj_hexstr_or_primitive)) {
        return NULL;
    }
    PyObject *arg_to_type = obj_to_type;
    PyObject *arg_hexstr_or_primitive;
    if (PyBytes_Check(obj_hexstr_or_primitive) || PyByteArray_Check(obj_hexstr_or_primitive))
        arg_hexstr_or_primitive = obj_hexstr_or_primitive;
    else {
        arg_hexstr_or_primitive = NULL;
    }
    if (arg_hexstr_or_primitive != NULL) goto __LL36;
    if (PyLong_Check(obj_hexstr_or_primitive))
        arg_hexstr_or_primitive = obj_hexstr_or_primitive;
    else {
        arg_hexstr_or_primitive = NULL;
    }
    if (arg_hexstr_or_primitive != NULL) goto __LL36;
    if (PyUnicode_Check(obj_hexstr_or_primitive))
        arg_hexstr_or_primitive = obj_hexstr_or_primitive;
    else {
        arg_hexstr_or_primitive = NULL;
    }
    if (arg_hexstr_or_primitive != NULL) goto __LL36;
    CPy_TypeError("union[bytes, int, str]", obj_hexstr_or_primitive); 
    goto fail;
__LL36: ;
    PyObject *retval = CPyDef_conversions___hexstr_if_str(arg_to_type, arg_hexstr_or_primitive);
    return retval;
fail: ;
    CPy_AddTraceback("faster_eth_utils/conversions.py", "hexstr_if_str", 163, CPyStatic_conversions___globals);
    return NULL;
}

char CPyDef_conversions_____top_level__(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject **cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    int32_t cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[18]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "<module>", -1, CPyStatic_conversions___globals);
        goto CPyL12;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[290]; /* ('Callable', 'Optional', 'TypeVar', 'Union', 'cast') */
    cpy_r_r6 = CPyStatics[21]; /* 'typing' */
    cpy_r_r7 = CPyStatic_conversions___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "<module>", 1, CPyStatic_conversions___globals);
        goto CPyL12;
    }
    CPyModule_typing = cpy_r_r8;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[291]; /* ('HexStr', 'Primitives') */
    cpy_r_r10 = CPyStatics[47]; /* 'eth_typing' */
    cpy_r_r11 = CPyStatic_conversions___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "<module>", 9, CPyStatic_conversions___globals);
        goto CPyL12;
    }
    CPyModule_eth_typing = cpy_r_r12;
    CPy_INCREF(CPyModule_eth_typing);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[292]; /* ('big_endian_to_int', 'int_to_big_endian') */
    cpy_r_r14 = CPyStatics[84]; /* 'faster_eth_utils.encoding' */
    cpy_r_r15 = CPyStatic_conversions___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "<module>", 14, CPyStatic_conversions___globals);
        goto CPyL12;
    }
    CPyModule_faster_eth_utils___encoding = cpy_r_r16;
    CPy_INCREF(CPyModule_faster_eth_utils___encoding);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[293]; /* ('add_0x_prefix', 'decode_hex', 'encode_hex', 'is_hexstr',
                                    'remove_0x_prefix') */
    cpy_r_r18 = CPyStatics[54]; /* 'faster_eth_utils.hexadecimal' */
    cpy_r_r19 = CPyStatic_conversions___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "<module>", 18, CPyStatic_conversions___globals);
        goto CPyL12;
    }
    CPyModule_faster_eth_utils___hexadecimal = cpy_r_r20;
    CPy_INCREF(CPyModule_faster_eth_utils___hexadecimal);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[294]; /* ('is_boolean', 'is_integer', 'is_string') */
    cpy_r_r22 = CPyStatics[57]; /* 'faster_eth_utils.types' */
    cpy_r_r23 = CPyStatic_conversions___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "<module>", 25, CPyStatic_conversions___globals);
        goto CPyL12;
    }
    CPyModule_faster_eth_utils___types = cpy_r_r24;
    CPy_INCREF(CPyModule_faster_eth_utils___types);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = CPyStatics[89]; /* 'T' */
    cpy_r_r26 = CPyStatic_conversions___globals;
    cpy_r_r27 = CPyStatics[80]; /* 'TypeVar' */
    cpy_r_r28 = CPyDict_GetItem(cpy_r_r26, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "<module>", 31, CPyStatic_conversions___globals);
        goto CPyL12;
    }
    PyObject *cpy_r_r29[1] = {cpy_r_r25};
    cpy_r_r30 = (PyObject **)&cpy_r_r29;
    cpy_r_r31 = PyObject_Vectorcall(cpy_r_r28, cpy_r_r30, 1, 0);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "<module>", 31, CPyStatic_conversions___globals);
        goto CPyL12;
    }
    cpy_r_r32 = CPyStatic_conversions___globals;
    cpy_r_r33 = CPyStatics[89]; /* 'T' */
    cpy_r_r34 = CPyDict_SetItem(cpy_r_r32, cpy_r_r33, cpy_r_r31);
    CPy_DECREF(cpy_r_r31);
    cpy_r_r35 = cpy_r_r34 >= 0;
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("faster_eth_utils/conversions.py", "<module>", 31, CPyStatic_conversions___globals);
        goto CPyL12;
    }
    return 1;
CPyL12: ;
    cpy_r_r36 = 2;
    return cpy_r_r36;
}

static PyObject *currency___denoms_setup(PyTypeObject *type);
PyObject *CPyDef_currency___denoms(void);

static PyObject *
currency___denoms_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_currency___denoms) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return currency___denoms_setup(type);
}

static int
currency___denoms_traverse(faster_eth_utils___currency___denomsObject *self, visitproc visit, void *arg)
{
    if (CPyTagged_CheckLong(self->_wei)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_wei));
    }
    if (CPyTagged_CheckLong(self->_kwei)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_kwei));
    }
    if (CPyTagged_CheckLong(self->_babbage)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_babbage));
    }
    if (CPyTagged_CheckLong(self->_femtoether)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_femtoether));
    }
    if (CPyTagged_CheckLong(self->_mwei)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_mwei));
    }
    if (CPyTagged_CheckLong(self->_lovelace)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_lovelace));
    }
    if (CPyTagged_CheckLong(self->_picoether)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_picoether));
    }
    if (CPyTagged_CheckLong(self->_gwei)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_gwei));
    }
    if (CPyTagged_CheckLong(self->_shannon)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_shannon));
    }
    if (CPyTagged_CheckLong(self->_nanoether)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_nanoether));
    }
    if (CPyTagged_CheckLong(self->_nano)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_nano));
    }
    if (CPyTagged_CheckLong(self->_szabo)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_szabo));
    }
    if (CPyTagged_CheckLong(self->_microether)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_microether));
    }
    if (CPyTagged_CheckLong(self->_micro)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_micro));
    }
    if (CPyTagged_CheckLong(self->_finney)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_finney));
    }
    if (CPyTagged_CheckLong(self->_milliether)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_milliether));
    }
    if (CPyTagged_CheckLong(self->_milli)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_milli));
    }
    if (CPyTagged_CheckLong(self->_ether)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_ether));
    }
    if (CPyTagged_CheckLong(self->_kether)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_kether));
    }
    if (CPyTagged_CheckLong(self->_grand)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_grand));
    }
    if (CPyTagged_CheckLong(self->_mether)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_mether));
    }
    if (CPyTagged_CheckLong(self->_gether)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_gether));
    }
    if (CPyTagged_CheckLong(self->_tether)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_tether));
    }
    return 0;
}

static int
currency___denoms_clear(faster_eth_utils___currency___denomsObject *self)
{
    if (CPyTagged_CheckLong(self->_wei)) {
        CPyTagged __tmp = self->_wei;
        self->_wei = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    if (CPyTagged_CheckLong(self->_kwei)) {
        CPyTagged __tmp = self->_kwei;
        self->_kwei = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    if (CPyTagged_CheckLong(self->_babbage)) {
        CPyTagged __tmp = self->_babbage;
        self->_babbage = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    if (CPyTagged_CheckLong(self->_femtoether)) {
        CPyTagged __tmp = self->_femtoether;
        self->_femtoether = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    if (CPyTagged_CheckLong(self->_mwei)) {
        CPyTagged __tmp = self->_mwei;
        self->_mwei = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    if (CPyTagged_CheckLong(self->_lovelace)) {
        CPyTagged __tmp = self->_lovelace;
        self->_lovelace = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    if (CPyTagged_CheckLong(self->_picoether)) {
        CPyTagged __tmp = self->_picoether;
        self->_picoether = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    if (CPyTagged_CheckLong(self->_gwei)) {
        CPyTagged __tmp = self->_gwei;
        self->_gwei = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    if (CPyTagged_CheckLong(self->_shannon)) {
        CPyTagged __tmp = self->_shannon;
        self->_shannon = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    if (CPyTagged_CheckLong(self->_nanoether)) {
        CPyTagged __tmp = self->_nanoether;
        self->_nanoether = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    if (CPyTagged_CheckLong(self->_nano)) {
        CPyTagged __tmp = self->_nano;
        self->_nano = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    if (CPyTagged_CheckLong(self->_szabo)) {
        CPyTagged __tmp = self->_szabo;
        self->_szabo = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    if (CPyTagged_CheckLong(self->_microether)) {
        CPyTagged __tmp = self->_microether;
        self->_microether = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    if (CPyTagged_CheckLong(self->_micro)) {
        CPyTagged __tmp = self->_micro;
        self->_micro = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    if (CPyTagged_CheckLong(self->_finney)) {
        CPyTagged __tmp = self->_finney;
        self->_finney = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    if (CPyTagged_CheckLong(self->_milliether)) {
        CPyTagged __tmp = self->_milliether;
        self->_milliether = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    if (CPyTagged_CheckLong(self->_milli)) {
        CPyTagged __tmp = self->_milli;
        self->_milli = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    if (CPyTagged_CheckLong(self->_ether)) {
        CPyTagged __tmp = self->_ether;
        self->_ether = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    if (CPyTagged_CheckLong(self->_kether)) {
        CPyTagged __tmp = self->_kether;
        self->_kether = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    if (CPyTagged_CheckLong(self->_grand)) {
        CPyTagged __tmp = self->_grand;
        self->_grand = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    if (CPyTagged_CheckLong(self->_mether)) {
        CPyTagged __tmp = self->_mether;
        self->_mether = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    if (CPyTagged_CheckLong(self->_gether)) {
        CPyTagged __tmp = self->_gether;
        self->_gether = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    if (CPyTagged_CheckLong(self->_tether)) {
        CPyTagged __tmp = self->_tether;
        self->_tether = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    return 0;
}

static void
currency___denoms_dealloc(faster_eth_utils___currency___denomsObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, currency___denoms_dealloc)
    currency___denoms_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem currency___denoms_vtable[1];
static bool
CPyDef_currency___denoms_trait_vtable_setup(void)
{
    CPyVTableItem currency___denoms_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_currency___denoms_____mypyc_defaults_setup,
    };
    memcpy(currency___denoms_vtable, currency___denoms_vtable_scratch, sizeof(currency___denoms_vtable));
    return 1;
}

static PyObject *
currency___denoms_get_wei(faster_eth_utils___currency___denomsObject *self, void *closure);
static int
currency___denoms_set_wei(faster_eth_utils___currency___denomsObject *self, PyObject *value, void *closure);
static PyObject *
currency___denoms_get_kwei(faster_eth_utils___currency___denomsObject *self, void *closure);
static int
currency___denoms_set_kwei(faster_eth_utils___currency___denomsObject *self, PyObject *value, void *closure);
static PyObject *
currency___denoms_get_babbage(faster_eth_utils___currency___denomsObject *self, void *closure);
static int
currency___denoms_set_babbage(faster_eth_utils___currency___denomsObject *self, PyObject *value, void *closure);
static PyObject *
currency___denoms_get_femtoether(faster_eth_utils___currency___denomsObject *self, void *closure);
static int
currency___denoms_set_femtoether(faster_eth_utils___currency___denomsObject *self, PyObject *value, void *closure);
static PyObject *
currency___denoms_get_mwei(faster_eth_utils___currency___denomsObject *self, void *closure);
static int
currency___denoms_set_mwei(faster_eth_utils___currency___denomsObject *self, PyObject *value, void *closure);
static PyObject *
currency___denoms_get_lovelace(faster_eth_utils___currency___denomsObject *self, void *closure);
static int
currency___denoms_set_lovelace(faster_eth_utils___currency___denomsObject *self, PyObject *value, void *closure);
static PyObject *
currency___denoms_get_picoether(faster_eth_utils___currency___denomsObject *self, void *closure);
static int
currency___denoms_set_picoether(faster_eth_utils___currency___denomsObject *self, PyObject *value, void *closure);
static PyObject *
currency___denoms_get_gwei(faster_eth_utils___currency___denomsObject *self, void *closure);
static int
currency___denoms_set_gwei(faster_eth_utils___currency___denomsObject *self, PyObject *value, void *closure);
static PyObject *
currency___denoms_get_shannon(faster_eth_utils___currency___denomsObject *self, void *closure);
static int
currency___denoms_set_shannon(faster_eth_utils___currency___denomsObject *self, PyObject *value, void *closure);
static PyObject *
currency___denoms_get_nanoether(faster_eth_utils___currency___denomsObject *self, void *closure);
static int
currency___denoms_set_nanoether(faster_eth_utils___currency___denomsObject *self, PyObject *value, void *closure);
static PyObject *
currency___denoms_get_nano(faster_eth_utils___currency___denomsObject *self, void *closure);
static int
currency___denoms_set_nano(faster_eth_utils___currency___denomsObject *self, PyObject *value, void *closure);
static PyObject *
currency___denoms_get_szabo(faster_eth_utils___currency___denomsObject *self, void *closure);
static int
currency___denoms_set_szabo(faster_eth_utils___currency___denomsObject *self, PyObject *value, void *closure);
static PyObject *
currency___denoms_get_microether(faster_eth_utils___currency___denomsObject *self, void *closure);
static int
currency___denoms_set_microether(faster_eth_utils___currency___denomsObject *self, PyObject *value, void *closure);
static PyObject *
currency___denoms_get_micro(faster_eth_utils___currency___denomsObject *self, void *closure);
static int
currency___denoms_set_micro(faster_eth_utils___currency___denomsObject *self, PyObject *value, void *closure);
static PyObject *
currency___denoms_get_finney(faster_eth_utils___currency___denomsObject *self, void *closure);
static int
currency___denoms_set_finney(faster_eth_utils___currency___denomsObject *self, PyObject *value, void *closure);
static PyObject *
currency___denoms_get_milliether(faster_eth_utils___currency___denomsObject *self, void *closure);
static int
currency___denoms_set_milliether(faster_eth_utils___currency___denomsObject *self, PyObject *value, void *closure);
static PyObject *
currency___denoms_get_milli(faster_eth_utils___currency___denomsObject *self, void *closure);
static int
currency___denoms_set_milli(faster_eth_utils___currency___denomsObject *self, PyObject *value, void *closure);
static PyObject *
currency___denoms_get_ether(faster_eth_utils___currency___denomsObject *self, void *closure);
static int
currency___denoms_set_ether(faster_eth_utils___currency___denomsObject *self, PyObject *value, void *closure);
static PyObject *
currency___denoms_get_kether(faster_eth_utils___currency___denomsObject *self, void *closure);
static int
currency___denoms_set_kether(faster_eth_utils___currency___denomsObject *self, PyObject *value, void *closure);
static PyObject *
currency___denoms_get_grand(faster_eth_utils___currency___denomsObject *self, void *closure);
static int
currency___denoms_set_grand(faster_eth_utils___currency___denomsObject *self, PyObject *value, void *closure);
static PyObject *
currency___denoms_get_mether(faster_eth_utils___currency___denomsObject *self, void *closure);
static int
currency___denoms_set_mether(faster_eth_utils___currency___denomsObject *self, PyObject *value, void *closure);
static PyObject *
currency___denoms_get_gether(faster_eth_utils___currency___denomsObject *self, void *closure);
static int
currency___denoms_set_gether(faster_eth_utils___currency___denomsObject *self, PyObject *value, void *closure);
static PyObject *
currency___denoms_get_tether(faster_eth_utils___currency___denomsObject *self, void *closure);
static int
currency___denoms_set_tether(faster_eth_utils___currency___denomsObject *self, PyObject *value, void *closure);

static PyGetSetDef currency___denoms_getseters[] = {
    {"wei",
     (getter)currency___denoms_get_wei, (setter)currency___denoms_set_wei,
     NULL, NULL},
    {"kwei",
     (getter)currency___denoms_get_kwei, (setter)currency___denoms_set_kwei,
     NULL, NULL},
    {"babbage",
     (getter)currency___denoms_get_babbage, (setter)currency___denoms_set_babbage,
     NULL, NULL},
    {"femtoether",
     (getter)currency___denoms_get_femtoether, (setter)currency___denoms_set_femtoether,
     NULL, NULL},
    {"mwei",
     (getter)currency___denoms_get_mwei, (setter)currency___denoms_set_mwei,
     NULL, NULL},
    {"lovelace",
     (getter)currency___denoms_get_lovelace, (setter)currency___denoms_set_lovelace,
     NULL, NULL},
    {"picoether",
     (getter)currency___denoms_get_picoether, (setter)currency___denoms_set_picoether,
     NULL, NULL},
    {"gwei",
     (getter)currency___denoms_get_gwei, (setter)currency___denoms_set_gwei,
     NULL, NULL},
    {"shannon",
     (getter)currency___denoms_get_shannon, (setter)currency___denoms_set_shannon,
     NULL, NULL},
    {"nanoether",
     (getter)currency___denoms_get_nanoether, (setter)currency___denoms_set_nanoether,
     NULL, NULL},
    {"nano",
     (getter)currency___denoms_get_nano, (setter)currency___denoms_set_nano,
     NULL, NULL},
    {"szabo",
     (getter)currency___denoms_get_szabo, (setter)currency___denoms_set_szabo,
     NULL, NULL},
    {"microether",
     (getter)currency___denoms_get_microether, (setter)currency___denoms_set_microether,
     NULL, NULL},
    {"micro",
     (getter)currency___denoms_get_micro, (setter)currency___denoms_set_micro,
     NULL, NULL},
    {"finney",
     (getter)currency___denoms_get_finney, (setter)currency___denoms_set_finney,
     NULL, NULL},
    {"milliether",
     (getter)currency___denoms_get_milliether, (setter)currency___denoms_set_milliether,
     NULL, NULL},
    {"milli",
     (getter)currency___denoms_get_milli, (setter)currency___denoms_set_milli,
     NULL, NULL},
    {"ether",
     (getter)currency___denoms_get_ether, (setter)currency___denoms_set_ether,
     NULL, NULL},
    {"kether",
     (getter)currency___denoms_get_kether, (setter)currency___denoms_set_kether,
     NULL, NULL},
    {"grand",
     (getter)currency___denoms_get_grand, (setter)currency___denoms_set_grand,
     NULL, NULL},
    {"mether",
     (getter)currency___denoms_get_mether, (setter)currency___denoms_set_mether,
     NULL, NULL},
    {"gether",
     (getter)currency___denoms_get_gether, (setter)currency___denoms_set_gether,
     NULL, NULL},
    {"tether",
     (getter)currency___denoms_get_tether, (setter)currency___denoms_set_tether,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef currency___denoms_methods[] = {
    {"__mypyc_defaults_setup",
     (PyCFunction)CPyPy_currency___denoms_____mypyc_defaults_setup,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_currency___denoms_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "denoms",
    .tp_new = currency___denoms_new,
    .tp_dealloc = (destructor)currency___denoms_dealloc,
    .tp_traverse = (traverseproc)currency___denoms_traverse,
    .tp_clear = (inquiry)currency___denoms_clear,
    .tp_getset = currency___denoms_getseters,
    .tp_methods = currency___denoms_methods,
    .tp_basicsize = sizeof(faster_eth_utils___currency___denomsObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_currency___denoms_template = &CPyType_currency___denoms_template_;

static PyObject *
currency___denoms_setup(PyTypeObject *type)
{
    faster_eth_utils___currency___denomsObject *self;
    self = (faster_eth_utils___currency___denomsObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = currency___denoms_vtable;
    self->_wei = CPY_INT_TAG;
    self->_kwei = CPY_INT_TAG;
    self->_babbage = CPY_INT_TAG;
    self->_femtoether = CPY_INT_TAG;
    self->_mwei = CPY_INT_TAG;
    self->_lovelace = CPY_INT_TAG;
    self->_picoether = CPY_INT_TAG;
    self->_gwei = CPY_INT_TAG;
    self->_shannon = CPY_INT_TAG;
    self->_nanoether = CPY_INT_TAG;
    self->_nano = CPY_INT_TAG;
    self->_szabo = CPY_INT_TAG;
    self->_microether = CPY_INT_TAG;
    self->_micro = CPY_INT_TAG;
    self->_finney = CPY_INT_TAG;
    self->_milliether = CPY_INT_TAG;
    self->_milli = CPY_INT_TAG;
    self->_ether = CPY_INT_TAG;
    self->_kether = CPY_INT_TAG;
    self->_grand = CPY_INT_TAG;
    self->_mether = CPY_INT_TAG;
    self->_gether = CPY_INT_TAG;
    self->_tether = CPY_INT_TAG;
    if (CPyDef_currency___denoms_____mypyc_defaults_setup((PyObject *)self) == 0) {
        Py_DECREF(self);
        return NULL;
    }
    return (PyObject *)self;
}

PyObject *CPyDef_currency___denoms(void)
{
    PyObject *self = currency___denoms_setup(CPyType_currency___denoms);
    if (self == NULL)
        return NULL;
    return self;
}

static PyObject *
currency___denoms_get_wei(faster_eth_utils___currency___denomsObject *self, void *closure)
{
    if (unlikely(self->_wei == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'wei' of 'denoms' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_wei);
    PyObject *retval = CPyTagged_StealAsObject(self->_wei);
    return retval;
}

static int
currency___denoms_set_wei(faster_eth_utils___currency___denomsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'denoms' object attribute 'wei' cannot be deleted");
        return -1;
    }
    if (self->_wei != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_wei);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_wei = tmp;
    return 0;
}

static PyObject *
currency___denoms_get_kwei(faster_eth_utils___currency___denomsObject *self, void *closure)
{
    if (unlikely(self->_kwei == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'kwei' of 'denoms' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_kwei);
    PyObject *retval = CPyTagged_StealAsObject(self->_kwei);
    return retval;
}

static int
currency___denoms_set_kwei(faster_eth_utils___currency___denomsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'denoms' object attribute 'kwei' cannot be deleted");
        return -1;
    }
    if (self->_kwei != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_kwei);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_kwei = tmp;
    return 0;
}

static PyObject *
currency___denoms_get_babbage(faster_eth_utils___currency___denomsObject *self, void *closure)
{
    if (unlikely(self->_babbage == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'babbage' of 'denoms' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_babbage);
    PyObject *retval = CPyTagged_StealAsObject(self->_babbage);
    return retval;
}

static int
currency___denoms_set_babbage(faster_eth_utils___currency___denomsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'denoms' object attribute 'babbage' cannot be deleted");
        return -1;
    }
    if (self->_babbage != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_babbage);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_babbage = tmp;
    return 0;
}

static PyObject *
currency___denoms_get_femtoether(faster_eth_utils___currency___denomsObject *self, void *closure)
{
    if (unlikely(self->_femtoether == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'femtoether' of 'denoms' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_femtoether);
    PyObject *retval = CPyTagged_StealAsObject(self->_femtoether);
    return retval;
}

static int
currency___denoms_set_femtoether(faster_eth_utils___currency___denomsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'denoms' object attribute 'femtoether' cannot be deleted");
        return -1;
    }
    if (self->_femtoether != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_femtoether);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_femtoether = tmp;
    return 0;
}

static PyObject *
currency___denoms_get_mwei(faster_eth_utils___currency___denomsObject *self, void *closure)
{
    if (unlikely(self->_mwei == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'mwei' of 'denoms' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_mwei);
    PyObject *retval = CPyTagged_StealAsObject(self->_mwei);
    return retval;
}

static int
currency___denoms_set_mwei(faster_eth_utils___currency___denomsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'denoms' object attribute 'mwei' cannot be deleted");
        return -1;
    }
    if (self->_mwei != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_mwei);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_mwei = tmp;
    return 0;
}

static PyObject *
currency___denoms_get_lovelace(faster_eth_utils___currency___denomsObject *self, void *closure)
{
    if (unlikely(self->_lovelace == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'lovelace' of 'denoms' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_lovelace);
    PyObject *retval = CPyTagged_StealAsObject(self->_lovelace);
    return retval;
}

static int
currency___denoms_set_lovelace(faster_eth_utils___currency___denomsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'denoms' object attribute 'lovelace' cannot be deleted");
        return -1;
    }
    if (self->_lovelace != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_lovelace);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_lovelace = tmp;
    return 0;
}

static PyObject *
currency___denoms_get_picoether(faster_eth_utils___currency___denomsObject *self, void *closure)
{
    if (unlikely(self->_picoether == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'picoether' of 'denoms' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_picoether);
    PyObject *retval = CPyTagged_StealAsObject(self->_picoether);
    return retval;
}

static int
currency___denoms_set_picoether(faster_eth_utils___currency___denomsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'denoms' object attribute 'picoether' cannot be deleted");
        return -1;
    }
    if (self->_picoether != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_picoether);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_picoether = tmp;
    return 0;
}

static PyObject *
currency___denoms_get_gwei(faster_eth_utils___currency___denomsObject *self, void *closure)
{
    if (unlikely(self->_gwei == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'gwei' of 'denoms' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_gwei);
    PyObject *retval = CPyTagged_StealAsObject(self->_gwei);
    return retval;
}

static int
currency___denoms_set_gwei(faster_eth_utils___currency___denomsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'denoms' object attribute 'gwei' cannot be deleted");
        return -1;
    }
    if (self->_gwei != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_gwei);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_gwei = tmp;
    return 0;
}

static PyObject *
currency___denoms_get_shannon(faster_eth_utils___currency___denomsObject *self, void *closure)
{
    if (unlikely(self->_shannon == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'shannon' of 'denoms' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_shannon);
    PyObject *retval = CPyTagged_StealAsObject(self->_shannon);
    return retval;
}

static int
currency___denoms_set_shannon(faster_eth_utils___currency___denomsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'denoms' object attribute 'shannon' cannot be deleted");
        return -1;
    }
    if (self->_shannon != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_shannon);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_shannon = tmp;
    return 0;
}

static PyObject *
currency___denoms_get_nanoether(faster_eth_utils___currency___denomsObject *self, void *closure)
{
    if (unlikely(self->_nanoether == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'nanoether' of 'denoms' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_nanoether);
    PyObject *retval = CPyTagged_StealAsObject(self->_nanoether);
    return retval;
}

static int
currency___denoms_set_nanoether(faster_eth_utils___currency___denomsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'denoms' object attribute 'nanoether' cannot be deleted");
        return -1;
    }
    if (self->_nanoether != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_nanoether);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_nanoether = tmp;
    return 0;
}

static PyObject *
currency___denoms_get_nano(faster_eth_utils___currency___denomsObject *self, void *closure)
{
    if (unlikely(self->_nano == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'nano' of 'denoms' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_nano);
    PyObject *retval = CPyTagged_StealAsObject(self->_nano);
    return retval;
}

static int
currency___denoms_set_nano(faster_eth_utils___currency___denomsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'denoms' object attribute 'nano' cannot be deleted");
        return -1;
    }
    if (self->_nano != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_nano);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_nano = tmp;
    return 0;
}

static PyObject *
currency___denoms_get_szabo(faster_eth_utils___currency___denomsObject *self, void *closure)
{
    if (unlikely(self->_szabo == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'szabo' of 'denoms' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_szabo);
    PyObject *retval = CPyTagged_StealAsObject(self->_szabo);
    return retval;
}

static int
currency___denoms_set_szabo(faster_eth_utils___currency___denomsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'denoms' object attribute 'szabo' cannot be deleted");
        return -1;
    }
    if (self->_szabo != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_szabo);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_szabo = tmp;
    return 0;
}

static PyObject *
currency___denoms_get_microether(faster_eth_utils___currency___denomsObject *self, void *closure)
{
    if (unlikely(self->_microether == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'microether' of 'denoms' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_microether);
    PyObject *retval = CPyTagged_StealAsObject(self->_microether);
    return retval;
}

static int
currency___denoms_set_microether(faster_eth_utils___currency___denomsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'denoms' object attribute 'microether' cannot be deleted");
        return -1;
    }
    if (self->_microether != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_microether);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_microether = tmp;
    return 0;
}

static PyObject *
currency___denoms_get_micro(faster_eth_utils___currency___denomsObject *self, void *closure)
{
    if (unlikely(self->_micro == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'micro' of 'denoms' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_micro);
    PyObject *retval = CPyTagged_StealAsObject(self->_micro);
    return retval;
}

static int
currency___denoms_set_micro(faster_eth_utils___currency___denomsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'denoms' object attribute 'micro' cannot be deleted");
        return -1;
    }
    if (self->_micro != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_micro);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_micro = tmp;
    return 0;
}

static PyObject *
currency___denoms_get_finney(faster_eth_utils___currency___denomsObject *self, void *closure)
{
    if (unlikely(self->_finney == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'finney' of 'denoms' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_finney);
    PyObject *retval = CPyTagged_StealAsObject(self->_finney);
    return retval;
}

static int
currency___denoms_set_finney(faster_eth_utils___currency___denomsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'denoms' object attribute 'finney' cannot be deleted");
        return -1;
    }
    if (self->_finney != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_finney);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_finney = tmp;
    return 0;
}

static PyObject *
currency___denoms_get_milliether(faster_eth_utils___currency___denomsObject *self, void *closure)
{
    if (unlikely(self->_milliether == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'milliether' of 'denoms' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_milliether);
    PyObject *retval = CPyTagged_StealAsObject(self->_milliether);
    return retval;
}

static int
currency___denoms_set_milliether(faster_eth_utils___currency___denomsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'denoms' object attribute 'milliether' cannot be deleted");
        return -1;
    }
    if (self->_milliether != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_milliether);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_milliether = tmp;
    return 0;
}

static PyObject *
currency___denoms_get_milli(faster_eth_utils___currency___denomsObject *self, void *closure)
{
    if (unlikely(self->_milli == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'milli' of 'denoms' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_milli);
    PyObject *retval = CPyTagged_StealAsObject(self->_milli);
    return retval;
}

static int
currency___denoms_set_milli(faster_eth_utils___currency___denomsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'denoms' object attribute 'milli' cannot be deleted");
        return -1;
    }
    if (self->_milli != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_milli);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_milli = tmp;
    return 0;
}

static PyObject *
currency___denoms_get_ether(faster_eth_utils___currency___denomsObject *self, void *closure)
{
    if (unlikely(self->_ether == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'ether' of 'denoms' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_ether);
    PyObject *retval = CPyTagged_StealAsObject(self->_ether);
    return retval;
}

static int
currency___denoms_set_ether(faster_eth_utils___currency___denomsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'denoms' object attribute 'ether' cannot be deleted");
        return -1;
    }
    if (self->_ether != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_ether);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_ether = tmp;
    return 0;
}

static PyObject *
currency___denoms_get_kether(faster_eth_utils___currency___denomsObject *self, void *closure)
{
    if (unlikely(self->_kether == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'kether' of 'denoms' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_kether);
    PyObject *retval = CPyTagged_StealAsObject(self->_kether);
    return retval;
}

static int
currency___denoms_set_kether(faster_eth_utils___currency___denomsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'denoms' object attribute 'kether' cannot be deleted");
        return -1;
    }
    if (self->_kether != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_kether);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_kether = tmp;
    return 0;
}

static PyObject *
currency___denoms_get_grand(faster_eth_utils___currency___denomsObject *self, void *closure)
{
    if (unlikely(self->_grand == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'grand' of 'denoms' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_grand);
    PyObject *retval = CPyTagged_StealAsObject(self->_grand);
    return retval;
}

static int
currency___denoms_set_grand(faster_eth_utils___currency___denomsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'denoms' object attribute 'grand' cannot be deleted");
        return -1;
    }
    if (self->_grand != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_grand);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_grand = tmp;
    return 0;
}

static PyObject *
currency___denoms_get_mether(faster_eth_utils___currency___denomsObject *self, void *closure)
{
    if (unlikely(self->_mether == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'mether' of 'denoms' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_mether);
    PyObject *retval = CPyTagged_StealAsObject(self->_mether);
    return retval;
}

static int
currency___denoms_set_mether(faster_eth_utils___currency___denomsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'denoms' object attribute 'mether' cannot be deleted");
        return -1;
    }
    if (self->_mether != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_mether);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_mether = tmp;
    return 0;
}

static PyObject *
currency___denoms_get_gether(faster_eth_utils___currency___denomsObject *self, void *closure)
{
    if (unlikely(self->_gether == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'gether' of 'denoms' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_gether);
    PyObject *retval = CPyTagged_StealAsObject(self->_gether);
    return retval;
}

static int
currency___denoms_set_gether(faster_eth_utils___currency___denomsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'denoms' object attribute 'gether' cannot be deleted");
        return -1;
    }
    if (self->_gether != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_gether);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_gether = tmp;
    return 0;
}

static PyObject *
currency___denoms_get_tether(faster_eth_utils___currency___denomsObject *self, void *closure)
{
    if (unlikely(self->_tether == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'tether' of 'denoms' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_tether);
    PyObject *retval = CPyTagged_StealAsObject(self->_tether);
    return retval;
}

static int
currency___denoms_set_tether(faster_eth_utils___currency___denomsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'denoms' object attribute 'tether' cannot be deleted");
        return -1;
    }
    if (self->_tether != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_tether);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_tether = tmp;
    return 0;
}
static PyMethodDef currencymodule_methods[] = {
    {"from_wei", (PyCFunction)CPyPy_currency___from_wei, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"to_wei", (PyCFunction)CPyPy_currency___to_wei, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef currencymodule = {
    PyModuleDef_HEAD_INIT,
    "faster_eth_utils.currency",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    currencymodule_methods
};

PyObject *CPyInit_faster_eth_utils___currency(void)
{
    PyObject* modname = NULL;
    if (CPyModule_faster_eth_utils___currency_internal) {
        Py_INCREF(CPyModule_faster_eth_utils___currency_internal);
        return CPyModule_faster_eth_utils___currency_internal;
    }
    CPyModule_faster_eth_utils___currency_internal = PyModule_Create(&currencymodule);
    if (unlikely(CPyModule_faster_eth_utils___currency_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_faster_eth_utils___currency_internal, "__name__");
    CPyStatic_currency___globals = PyModule_GetDict(CPyModule_faster_eth_utils___currency_internal);
    if (unlikely(CPyStatic_currency___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_currency_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_faster_eth_utils___currency_internal;
    fail:
    Py_CLEAR(CPyModule_faster_eth_utils___currency_internal);
    Py_CLEAR(modname);
    CPyTagged_XDECREF(CPyStatic_currency___denoms___wei);
    CPyStatic_currency___denoms___wei = CPY_INT_TAG;
    CPyTagged_XDECREF(CPyStatic_currency___denoms___kwei);
    CPyStatic_currency___denoms___kwei = CPY_INT_TAG;
    CPyTagged_XDECREF(CPyStatic_currency___denoms___babbage);
    CPyStatic_currency___denoms___babbage = CPY_INT_TAG;
    CPyTagged_XDECREF(CPyStatic_currency___denoms___femtoether);
    CPyStatic_currency___denoms___femtoether = CPY_INT_TAG;
    CPyTagged_XDECREF(CPyStatic_currency___denoms___mwei);
    CPyStatic_currency___denoms___mwei = CPY_INT_TAG;
    CPyTagged_XDECREF(CPyStatic_currency___denoms___lovelace);
    CPyStatic_currency___denoms___lovelace = CPY_INT_TAG;
    CPyTagged_XDECREF(CPyStatic_currency___denoms___picoether);
    CPyStatic_currency___denoms___picoether = CPY_INT_TAG;
    CPyTagged_XDECREF(CPyStatic_currency___denoms___gwei);
    CPyStatic_currency___denoms___gwei = CPY_INT_TAG;
    CPyTagged_XDECREF(CPyStatic_currency___denoms___shannon);
    CPyStatic_currency___denoms___shannon = CPY_INT_TAG;
    CPyTagged_XDECREF(CPyStatic_currency___denoms___nanoether);
    CPyStatic_currency___denoms___nanoether = CPY_INT_TAG;
    CPyTagged_XDECREF(CPyStatic_currency___denoms___nano);
    CPyStatic_currency___denoms___nano = CPY_INT_TAG;
    CPyTagged_XDECREF(CPyStatic_currency___denoms___szabo);
    CPyStatic_currency___denoms___szabo = CPY_INT_TAG;
    CPyTagged_XDECREF(CPyStatic_currency___denoms___microether);
    CPyStatic_currency___denoms___microether = CPY_INT_TAG;
    CPyTagged_XDECREF(CPyStatic_currency___denoms___micro);
    CPyStatic_currency___denoms___micro = CPY_INT_TAG;
    CPyTagged_XDECREF(CPyStatic_currency___denoms___finney);
    CPyStatic_currency___denoms___finney = CPY_INT_TAG;
    CPyTagged_XDECREF(CPyStatic_currency___denoms___milliether);
    CPyStatic_currency___denoms___milliether = CPY_INT_TAG;
    CPyTagged_XDECREF(CPyStatic_currency___denoms___milli);
    CPyStatic_currency___denoms___milli = CPY_INT_TAG;
    CPyTagged_XDECREF(CPyStatic_currency___denoms___ether);
    CPyStatic_currency___denoms___ether = CPY_INT_TAG;
    CPyTagged_XDECREF(CPyStatic_currency___denoms___kether);
    CPyStatic_currency___denoms___kether = CPY_INT_TAG;
    CPyTagged_XDECREF(CPyStatic_currency___denoms___grand);
    CPyStatic_currency___denoms___grand = CPY_INT_TAG;
    CPyTagged_XDECREF(CPyStatic_currency___denoms___mether);
    CPyStatic_currency___denoms___mether = CPY_INT_TAG;
    CPyTagged_XDECREF(CPyStatic_currency___denoms___gether);
    CPyStatic_currency___denoms___gether = CPY_INT_TAG;
    CPyTagged_XDECREF(CPyStatic_currency___denoms___tether);
    CPyStatic_currency___denoms___tether = CPY_INT_TAG;
    Py_CLEAR(CPyType_currency___denoms);
    return NULL;
}

char CPyDef_currency___denoms_____mypyc_defaults_setup(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject **cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyTagged cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject **cpy_r_r19;
    PyObject *cpy_r_r20;
    CPyTagged cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject **cpy_r_r30;
    PyObject *cpy_r_r31;
    CPyTagged cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject **cpy_r_r41;
    PyObject *cpy_r_r42;
    CPyTagged cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject **cpy_r_r52;
    PyObject *cpy_r_r53;
    CPyTagged cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject **cpy_r_r63;
    PyObject *cpy_r_r64;
    CPyTagged cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject **cpy_r_r74;
    PyObject *cpy_r_r75;
    CPyTagged cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject **cpy_r_r85;
    PyObject *cpy_r_r86;
    CPyTagged cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject **cpy_r_r96;
    PyObject *cpy_r_r97;
    CPyTagged cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject **cpy_r_r107;
    PyObject *cpy_r_r108;
    CPyTagged cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject **cpy_r_r118;
    PyObject *cpy_r_r119;
    CPyTagged cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject **cpy_r_r129;
    PyObject *cpy_r_r130;
    CPyTagged cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject **cpy_r_r140;
    PyObject *cpy_r_r141;
    CPyTagged cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject **cpy_r_r151;
    PyObject *cpy_r_r152;
    CPyTagged cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject **cpy_r_r162;
    PyObject *cpy_r_r163;
    CPyTagged cpy_r_r164;
    PyObject *cpy_r_r165;
    PyObject *cpy_r_r166;
    PyObject *cpy_r_r167;
    PyObject *cpy_r_r168;
    PyObject *cpy_r_r169;
    PyObject *cpy_r_r170;
    PyObject *cpy_r_r171;
    PyObject **cpy_r_r173;
    PyObject *cpy_r_r174;
    CPyTagged cpy_r_r175;
    PyObject *cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    PyObject *cpy_r_r179;
    PyObject *cpy_r_r180;
    PyObject *cpy_r_r181;
    PyObject *cpy_r_r182;
    PyObject **cpy_r_r184;
    PyObject *cpy_r_r185;
    CPyTagged cpy_r_r186;
    PyObject *cpy_r_r187;
    PyObject *cpy_r_r188;
    PyObject *cpy_r_r189;
    PyObject *cpy_r_r190;
    PyObject *cpy_r_r191;
    PyObject *cpy_r_r192;
    PyObject *cpy_r_r193;
    PyObject **cpy_r_r195;
    PyObject *cpy_r_r196;
    CPyTagged cpy_r_r197;
    PyObject *cpy_r_r198;
    PyObject *cpy_r_r199;
    PyObject *cpy_r_r200;
    PyObject *cpy_r_r201;
    PyObject *cpy_r_r202;
    PyObject *cpy_r_r203;
    PyObject *cpy_r_r204;
    PyObject **cpy_r_r206;
    PyObject *cpy_r_r207;
    CPyTagged cpy_r_r208;
    PyObject *cpy_r_r209;
    PyObject *cpy_r_r210;
    PyObject *cpy_r_r211;
    PyObject *cpy_r_r212;
    PyObject *cpy_r_r213;
    PyObject *cpy_r_r214;
    PyObject *cpy_r_r215;
    PyObject **cpy_r_r217;
    PyObject *cpy_r_r218;
    CPyTagged cpy_r_r219;
    PyObject *cpy_r_r220;
    PyObject *cpy_r_r221;
    PyObject *cpy_r_r222;
    PyObject *cpy_r_r223;
    PyObject *cpy_r_r224;
    PyObject *cpy_r_r225;
    PyObject *cpy_r_r226;
    PyObject **cpy_r_r228;
    PyObject *cpy_r_r229;
    CPyTagged cpy_r_r230;
    PyObject *cpy_r_r231;
    PyObject *cpy_r_r232;
    PyObject *cpy_r_r233;
    PyObject *cpy_r_r234;
    PyObject *cpy_r_r235;
    PyObject *cpy_r_r236;
    PyObject *cpy_r_r237;
    PyObject **cpy_r_r239;
    PyObject *cpy_r_r240;
    CPyTagged cpy_r_r241;
    PyObject *cpy_r_r242;
    PyObject *cpy_r_r243;
    PyObject *cpy_r_r244;
    PyObject *cpy_r_r245;
    PyObject *cpy_r_r246;
    PyObject *cpy_r_r247;
    PyObject *cpy_r_r248;
    PyObject **cpy_r_r250;
    PyObject *cpy_r_r251;
    CPyTagged cpy_r_r252;
    char cpy_r_r253;
    cpy_r_r0 = CPyStatic_currency___globals;
    cpy_r_r1 = CPyStatics[90]; /* 'units' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (cpy_r_r2 == NULL) goto CPyL116;
    if (likely(PyDict_Check(cpy_r_r2)))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeError("dict", cpy_r_r2); 
        cpy_r_r3 = NULL;
    }
    if (cpy_r_r3 == NULL) goto CPyL116;
    cpy_r_r4 = CPyStatics[91]; /* 'wei' */
    cpy_r_r5 = CPyDict_GetItem(cpy_r_r3, cpy_r_r4);
    CPy_DECREF(cpy_r_r3);
    if (cpy_r_r5 == NULL) goto CPyL116;
    cpy_r_r6 = (PyObject *)&PyLong_Type;
    PyObject *cpy_r_r7[1] = {cpy_r_r5};
    cpy_r_r8 = (PyObject **)&cpy_r_r7;
    cpy_r_r9 = PyObject_Vectorcall(cpy_r_r6, cpy_r_r8, 1, 0);
    if (cpy_r_r9 == NULL) goto CPyL117;
    CPy_DECREF(cpy_r_r5);
    if (likely(PyLong_Check(cpy_r_r9)))
        cpy_r_r10 = CPyTagged_FromObject(cpy_r_r9);
    else {
        CPy_TypeError("int", cpy_r_r9); cpy_r_r10 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r9);
    if (cpy_r_r10 == CPY_INT_TAG) goto CPyL116;
    ((faster_eth_utils___currency___denomsObject *)cpy_r___mypyc_self__)->_wei = cpy_r_r10;
    cpy_r_r11 = CPyStatic_currency___globals;
    cpy_r_r12 = CPyStatics[90]; /* 'units' */
    cpy_r_r13 = CPyDict_GetItem(cpy_r_r11, cpy_r_r12);
    if (cpy_r_r13 == NULL) goto CPyL116;
    if (likely(PyDict_Check(cpy_r_r13)))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeError("dict", cpy_r_r13); 
        cpy_r_r14 = NULL;
    }
    if (cpy_r_r14 == NULL) goto CPyL116;
    cpy_r_r15 = CPyStatics[92]; /* 'kwei' */
    cpy_r_r16 = CPyDict_GetItem(cpy_r_r14, cpy_r_r15);
    CPy_DECREF(cpy_r_r14);
    if (cpy_r_r16 == NULL) goto CPyL116;
    cpy_r_r17 = (PyObject *)&PyLong_Type;
    PyObject *cpy_r_r18[1] = {cpy_r_r16};
    cpy_r_r19 = (PyObject **)&cpy_r_r18;
    cpy_r_r20 = PyObject_Vectorcall(cpy_r_r17, cpy_r_r19, 1, 0);
    if (cpy_r_r20 == NULL) goto CPyL118;
    CPy_DECREF(cpy_r_r16);
    if (likely(PyLong_Check(cpy_r_r20)))
        cpy_r_r21 = CPyTagged_FromObject(cpy_r_r20);
    else {
        CPy_TypeError("int", cpy_r_r20); cpy_r_r21 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r20);
    if (cpy_r_r21 == CPY_INT_TAG) goto CPyL116;
    ((faster_eth_utils___currency___denomsObject *)cpy_r___mypyc_self__)->_kwei = cpy_r_r21;
    cpy_r_r22 = CPyStatic_currency___globals;
    cpy_r_r23 = CPyStatics[90]; /* 'units' */
    cpy_r_r24 = CPyDict_GetItem(cpy_r_r22, cpy_r_r23);
    if (cpy_r_r24 == NULL) goto CPyL116;
    if (likely(PyDict_Check(cpy_r_r24)))
        cpy_r_r25 = cpy_r_r24;
    else {
        CPy_TypeError("dict", cpy_r_r24); 
        cpy_r_r25 = NULL;
    }
    if (cpy_r_r25 == NULL) goto CPyL116;
    cpy_r_r26 = CPyStatics[93]; /* 'babbage' */
    cpy_r_r27 = CPyDict_GetItem(cpy_r_r25, cpy_r_r26);
    CPy_DECREF(cpy_r_r25);
    if (cpy_r_r27 == NULL) goto CPyL116;
    cpy_r_r28 = (PyObject *)&PyLong_Type;
    PyObject *cpy_r_r29[1] = {cpy_r_r27};
    cpy_r_r30 = (PyObject **)&cpy_r_r29;
    cpy_r_r31 = PyObject_Vectorcall(cpy_r_r28, cpy_r_r30, 1, 0);
    if (cpy_r_r31 == NULL) goto CPyL119;
    CPy_DECREF(cpy_r_r27);
    if (likely(PyLong_Check(cpy_r_r31)))
        cpy_r_r32 = CPyTagged_FromObject(cpy_r_r31);
    else {
        CPy_TypeError("int", cpy_r_r31); cpy_r_r32 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r31);
    if (cpy_r_r32 == CPY_INT_TAG) goto CPyL116;
    ((faster_eth_utils___currency___denomsObject *)cpy_r___mypyc_self__)->_babbage = cpy_r_r32;
    cpy_r_r33 = CPyStatic_currency___globals;
    cpy_r_r34 = CPyStatics[90]; /* 'units' */
    cpy_r_r35 = CPyDict_GetItem(cpy_r_r33, cpy_r_r34);
    if (cpy_r_r35 == NULL) goto CPyL116;
    if (likely(PyDict_Check(cpy_r_r35)))
        cpy_r_r36 = cpy_r_r35;
    else {
        CPy_TypeError("dict", cpy_r_r35); 
        cpy_r_r36 = NULL;
    }
    if (cpy_r_r36 == NULL) goto CPyL116;
    cpy_r_r37 = CPyStatics[94]; /* 'femtoether' */
    cpy_r_r38 = CPyDict_GetItem(cpy_r_r36, cpy_r_r37);
    CPy_DECREF(cpy_r_r36);
    if (cpy_r_r38 == NULL) goto CPyL116;
    cpy_r_r39 = (PyObject *)&PyLong_Type;
    PyObject *cpy_r_r40[1] = {cpy_r_r38};
    cpy_r_r41 = (PyObject **)&cpy_r_r40;
    cpy_r_r42 = PyObject_Vectorcall(cpy_r_r39, cpy_r_r41, 1, 0);
    if (cpy_r_r42 == NULL) goto CPyL120;
    CPy_DECREF(cpy_r_r38);
    if (likely(PyLong_Check(cpy_r_r42)))
        cpy_r_r43 = CPyTagged_FromObject(cpy_r_r42);
    else {
        CPy_TypeError("int", cpy_r_r42); cpy_r_r43 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r42);
    if (cpy_r_r43 == CPY_INT_TAG) goto CPyL116;
    ((faster_eth_utils___currency___denomsObject *)cpy_r___mypyc_self__)->_femtoether = cpy_r_r43;
    cpy_r_r44 = CPyStatic_currency___globals;
    cpy_r_r45 = CPyStatics[90]; /* 'units' */
    cpy_r_r46 = CPyDict_GetItem(cpy_r_r44, cpy_r_r45);
    if (cpy_r_r46 == NULL) goto CPyL116;
    if (likely(PyDict_Check(cpy_r_r46)))
        cpy_r_r47 = cpy_r_r46;
    else {
        CPy_TypeError("dict", cpy_r_r46); 
        cpy_r_r47 = NULL;
    }
    if (cpy_r_r47 == NULL) goto CPyL116;
    cpy_r_r48 = CPyStatics[95]; /* 'mwei' */
    cpy_r_r49 = CPyDict_GetItem(cpy_r_r47, cpy_r_r48);
    CPy_DECREF(cpy_r_r47);
    if (cpy_r_r49 == NULL) goto CPyL116;
    cpy_r_r50 = (PyObject *)&PyLong_Type;
    PyObject *cpy_r_r51[1] = {cpy_r_r49};
    cpy_r_r52 = (PyObject **)&cpy_r_r51;
    cpy_r_r53 = PyObject_Vectorcall(cpy_r_r50, cpy_r_r52, 1, 0);
    if (cpy_r_r53 == NULL) goto CPyL121;
    CPy_DECREF(cpy_r_r49);
    if (likely(PyLong_Check(cpy_r_r53)))
        cpy_r_r54 = CPyTagged_FromObject(cpy_r_r53);
    else {
        CPy_TypeError("int", cpy_r_r53); cpy_r_r54 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r53);
    if (cpy_r_r54 == CPY_INT_TAG) goto CPyL116;
    ((faster_eth_utils___currency___denomsObject *)cpy_r___mypyc_self__)->_mwei = cpy_r_r54;
    cpy_r_r55 = CPyStatic_currency___globals;
    cpy_r_r56 = CPyStatics[90]; /* 'units' */
    cpy_r_r57 = CPyDict_GetItem(cpy_r_r55, cpy_r_r56);
    if (cpy_r_r57 == NULL) goto CPyL116;
    if (likely(PyDict_Check(cpy_r_r57)))
        cpy_r_r58 = cpy_r_r57;
    else {
        CPy_TypeError("dict", cpy_r_r57); 
        cpy_r_r58 = NULL;
    }
    if (cpy_r_r58 == NULL) goto CPyL116;
    cpy_r_r59 = CPyStatics[96]; /* 'lovelace' */
    cpy_r_r60 = CPyDict_GetItem(cpy_r_r58, cpy_r_r59);
    CPy_DECREF(cpy_r_r58);
    if (cpy_r_r60 == NULL) goto CPyL116;
    cpy_r_r61 = (PyObject *)&PyLong_Type;
    PyObject *cpy_r_r62[1] = {cpy_r_r60};
    cpy_r_r63 = (PyObject **)&cpy_r_r62;
    cpy_r_r64 = PyObject_Vectorcall(cpy_r_r61, cpy_r_r63, 1, 0);
    if (cpy_r_r64 == NULL) goto CPyL122;
    CPy_DECREF(cpy_r_r60);
    if (likely(PyLong_Check(cpy_r_r64)))
        cpy_r_r65 = CPyTagged_FromObject(cpy_r_r64);
    else {
        CPy_TypeError("int", cpy_r_r64); cpy_r_r65 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r64);
    if (cpy_r_r65 == CPY_INT_TAG) goto CPyL116;
    ((faster_eth_utils___currency___denomsObject *)cpy_r___mypyc_self__)->_lovelace = cpy_r_r65;
    cpy_r_r66 = CPyStatic_currency___globals;
    cpy_r_r67 = CPyStatics[90]; /* 'units' */
    cpy_r_r68 = CPyDict_GetItem(cpy_r_r66, cpy_r_r67);
    if (cpy_r_r68 == NULL) goto CPyL116;
    if (likely(PyDict_Check(cpy_r_r68)))
        cpy_r_r69 = cpy_r_r68;
    else {
        CPy_TypeError("dict", cpy_r_r68); 
        cpy_r_r69 = NULL;
    }
    if (cpy_r_r69 == NULL) goto CPyL116;
    cpy_r_r70 = CPyStatics[97]; /* 'picoether' */
    cpy_r_r71 = CPyDict_GetItem(cpy_r_r69, cpy_r_r70);
    CPy_DECREF(cpy_r_r69);
    if (cpy_r_r71 == NULL) goto CPyL116;
    cpy_r_r72 = (PyObject *)&PyLong_Type;
    PyObject *cpy_r_r73[1] = {cpy_r_r71};
    cpy_r_r74 = (PyObject **)&cpy_r_r73;
    cpy_r_r75 = PyObject_Vectorcall(cpy_r_r72, cpy_r_r74, 1, 0);
    if (cpy_r_r75 == NULL) goto CPyL123;
    CPy_DECREF(cpy_r_r71);
    if (likely(PyLong_Check(cpy_r_r75)))
        cpy_r_r76 = CPyTagged_FromObject(cpy_r_r75);
    else {
        CPy_TypeError("int", cpy_r_r75); cpy_r_r76 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r75);
    if (cpy_r_r76 == CPY_INT_TAG) goto CPyL116;
    ((faster_eth_utils___currency___denomsObject *)cpy_r___mypyc_self__)->_picoether = cpy_r_r76;
    cpy_r_r77 = CPyStatic_currency___globals;
    cpy_r_r78 = CPyStatics[90]; /* 'units' */
    cpy_r_r79 = CPyDict_GetItem(cpy_r_r77, cpy_r_r78);
    if (cpy_r_r79 == NULL) goto CPyL116;
    if (likely(PyDict_Check(cpy_r_r79)))
        cpy_r_r80 = cpy_r_r79;
    else {
        CPy_TypeError("dict", cpy_r_r79); 
        cpy_r_r80 = NULL;
    }
    if (cpy_r_r80 == NULL) goto CPyL116;
    cpy_r_r81 = CPyStatics[98]; /* 'gwei' */
    cpy_r_r82 = CPyDict_GetItem(cpy_r_r80, cpy_r_r81);
    CPy_DECREF(cpy_r_r80);
    if (cpy_r_r82 == NULL) goto CPyL116;
    cpy_r_r83 = (PyObject *)&PyLong_Type;
    PyObject *cpy_r_r84[1] = {cpy_r_r82};
    cpy_r_r85 = (PyObject **)&cpy_r_r84;
    cpy_r_r86 = PyObject_Vectorcall(cpy_r_r83, cpy_r_r85, 1, 0);
    if (cpy_r_r86 == NULL) goto CPyL124;
    CPy_DECREF(cpy_r_r82);
    if (likely(PyLong_Check(cpy_r_r86)))
        cpy_r_r87 = CPyTagged_FromObject(cpy_r_r86);
    else {
        CPy_TypeError("int", cpy_r_r86); cpy_r_r87 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r86);
    if (cpy_r_r87 == CPY_INT_TAG) goto CPyL116;
    ((faster_eth_utils___currency___denomsObject *)cpy_r___mypyc_self__)->_gwei = cpy_r_r87;
    cpy_r_r88 = CPyStatic_currency___globals;
    cpy_r_r89 = CPyStatics[90]; /* 'units' */
    cpy_r_r90 = CPyDict_GetItem(cpy_r_r88, cpy_r_r89);
    if (cpy_r_r90 == NULL) goto CPyL116;
    if (likely(PyDict_Check(cpy_r_r90)))
        cpy_r_r91 = cpy_r_r90;
    else {
        CPy_TypeError("dict", cpy_r_r90); 
        cpy_r_r91 = NULL;
    }
    if (cpy_r_r91 == NULL) goto CPyL116;
    cpy_r_r92 = CPyStatics[99]; /* 'shannon' */
    cpy_r_r93 = CPyDict_GetItem(cpy_r_r91, cpy_r_r92);
    CPy_DECREF(cpy_r_r91);
    if (cpy_r_r93 == NULL) goto CPyL116;
    cpy_r_r94 = (PyObject *)&PyLong_Type;
    PyObject *cpy_r_r95[1] = {cpy_r_r93};
    cpy_r_r96 = (PyObject **)&cpy_r_r95;
    cpy_r_r97 = PyObject_Vectorcall(cpy_r_r94, cpy_r_r96, 1, 0);
    if (cpy_r_r97 == NULL) goto CPyL125;
    CPy_DECREF(cpy_r_r93);
    if (likely(PyLong_Check(cpy_r_r97)))
        cpy_r_r98 = CPyTagged_FromObject(cpy_r_r97);
    else {
        CPy_TypeError("int", cpy_r_r97); cpy_r_r98 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r97);
    if (cpy_r_r98 == CPY_INT_TAG) goto CPyL116;
    ((faster_eth_utils___currency___denomsObject *)cpy_r___mypyc_self__)->_shannon = cpy_r_r98;
    cpy_r_r99 = CPyStatic_currency___globals;
    cpy_r_r100 = CPyStatics[90]; /* 'units' */
    cpy_r_r101 = CPyDict_GetItem(cpy_r_r99, cpy_r_r100);
    if (cpy_r_r101 == NULL) goto CPyL116;
    if (likely(PyDict_Check(cpy_r_r101)))
        cpy_r_r102 = cpy_r_r101;
    else {
        CPy_TypeError("dict", cpy_r_r101); 
        cpy_r_r102 = NULL;
    }
    if (cpy_r_r102 == NULL) goto CPyL116;
    cpy_r_r103 = CPyStatics[100]; /* 'nanoether' */
    cpy_r_r104 = CPyDict_GetItem(cpy_r_r102, cpy_r_r103);
    CPy_DECREF(cpy_r_r102);
    if (cpy_r_r104 == NULL) goto CPyL116;
    cpy_r_r105 = (PyObject *)&PyLong_Type;
    PyObject *cpy_r_r106[1] = {cpy_r_r104};
    cpy_r_r107 = (PyObject **)&cpy_r_r106;
    cpy_r_r108 = PyObject_Vectorcall(cpy_r_r105, cpy_r_r107, 1, 0);
    if (cpy_r_r108 == NULL) goto CPyL126;
    CPy_DECREF(cpy_r_r104);
    if (likely(PyLong_Check(cpy_r_r108)))
        cpy_r_r109 = CPyTagged_FromObject(cpy_r_r108);
    else {
        CPy_TypeError("int", cpy_r_r108); cpy_r_r109 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r108);
    if (cpy_r_r109 == CPY_INT_TAG) goto CPyL116;
    ((faster_eth_utils___currency___denomsObject *)cpy_r___mypyc_self__)->_nanoether = cpy_r_r109;
    cpy_r_r110 = CPyStatic_currency___globals;
    cpy_r_r111 = CPyStatics[90]; /* 'units' */
    cpy_r_r112 = CPyDict_GetItem(cpy_r_r110, cpy_r_r111);
    if (cpy_r_r112 == NULL) goto CPyL116;
    if (likely(PyDict_Check(cpy_r_r112)))
        cpy_r_r113 = cpy_r_r112;
    else {
        CPy_TypeError("dict", cpy_r_r112); 
        cpy_r_r113 = NULL;
    }
    if (cpy_r_r113 == NULL) goto CPyL116;
    cpy_r_r114 = CPyStatics[101]; /* 'nano' */
    cpy_r_r115 = CPyDict_GetItem(cpy_r_r113, cpy_r_r114);
    CPy_DECREF(cpy_r_r113);
    if (cpy_r_r115 == NULL) goto CPyL116;
    cpy_r_r116 = (PyObject *)&PyLong_Type;
    PyObject *cpy_r_r117[1] = {cpy_r_r115};
    cpy_r_r118 = (PyObject **)&cpy_r_r117;
    cpy_r_r119 = PyObject_Vectorcall(cpy_r_r116, cpy_r_r118, 1, 0);
    if (cpy_r_r119 == NULL) goto CPyL127;
    CPy_DECREF(cpy_r_r115);
    if (likely(PyLong_Check(cpy_r_r119)))
        cpy_r_r120 = CPyTagged_FromObject(cpy_r_r119);
    else {
        CPy_TypeError("int", cpy_r_r119); cpy_r_r120 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r119);
    if (cpy_r_r120 == CPY_INT_TAG) goto CPyL116;
    ((faster_eth_utils___currency___denomsObject *)cpy_r___mypyc_self__)->_nano = cpy_r_r120;
    cpy_r_r121 = CPyStatic_currency___globals;
    cpy_r_r122 = CPyStatics[90]; /* 'units' */
    cpy_r_r123 = CPyDict_GetItem(cpy_r_r121, cpy_r_r122);
    if (cpy_r_r123 == NULL) goto CPyL116;
    if (likely(PyDict_Check(cpy_r_r123)))
        cpy_r_r124 = cpy_r_r123;
    else {
        CPy_TypeError("dict", cpy_r_r123); 
        cpy_r_r124 = NULL;
    }
    if (cpy_r_r124 == NULL) goto CPyL116;
    cpy_r_r125 = CPyStatics[102]; /* 'szabo' */
    cpy_r_r126 = CPyDict_GetItem(cpy_r_r124, cpy_r_r125);
    CPy_DECREF(cpy_r_r124);
    if (cpy_r_r126 == NULL) goto CPyL116;
    cpy_r_r127 = (PyObject *)&PyLong_Type;
    PyObject *cpy_r_r128[1] = {cpy_r_r126};
    cpy_r_r129 = (PyObject **)&cpy_r_r128;
    cpy_r_r130 = PyObject_Vectorcall(cpy_r_r127, cpy_r_r129, 1, 0);
    if (cpy_r_r130 == NULL) goto CPyL128;
    CPy_DECREF(cpy_r_r126);
    if (likely(PyLong_Check(cpy_r_r130)))
        cpy_r_r131 = CPyTagged_FromObject(cpy_r_r130);
    else {
        CPy_TypeError("int", cpy_r_r130); cpy_r_r131 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r130);
    if (cpy_r_r131 == CPY_INT_TAG) goto CPyL116;
    ((faster_eth_utils___currency___denomsObject *)cpy_r___mypyc_self__)->_szabo = cpy_r_r131;
    cpy_r_r132 = CPyStatic_currency___globals;
    cpy_r_r133 = CPyStatics[90]; /* 'units' */
    cpy_r_r134 = CPyDict_GetItem(cpy_r_r132, cpy_r_r133);
    if (cpy_r_r134 == NULL) goto CPyL116;
    if (likely(PyDict_Check(cpy_r_r134)))
        cpy_r_r135 = cpy_r_r134;
    else {
        CPy_TypeError("dict", cpy_r_r134); 
        cpy_r_r135 = NULL;
    }
    if (cpy_r_r135 == NULL) goto CPyL116;
    cpy_r_r136 = CPyStatics[103]; /* 'microether' */
    cpy_r_r137 = CPyDict_GetItem(cpy_r_r135, cpy_r_r136);
    CPy_DECREF(cpy_r_r135);
    if (cpy_r_r137 == NULL) goto CPyL116;
    cpy_r_r138 = (PyObject *)&PyLong_Type;
    PyObject *cpy_r_r139[1] = {cpy_r_r137};
    cpy_r_r140 = (PyObject **)&cpy_r_r139;
    cpy_r_r141 = PyObject_Vectorcall(cpy_r_r138, cpy_r_r140, 1, 0);
    if (cpy_r_r141 == NULL) goto CPyL129;
    CPy_DECREF(cpy_r_r137);
    if (likely(PyLong_Check(cpy_r_r141)))
        cpy_r_r142 = CPyTagged_FromObject(cpy_r_r141);
    else {
        CPy_TypeError("int", cpy_r_r141); cpy_r_r142 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r141);
    if (cpy_r_r142 == CPY_INT_TAG) goto CPyL116;
    ((faster_eth_utils___currency___denomsObject *)cpy_r___mypyc_self__)->_microether = cpy_r_r142;
    cpy_r_r143 = CPyStatic_currency___globals;
    cpy_r_r144 = CPyStatics[90]; /* 'units' */
    cpy_r_r145 = CPyDict_GetItem(cpy_r_r143, cpy_r_r144);
    if (cpy_r_r145 == NULL) goto CPyL116;
    if (likely(PyDict_Check(cpy_r_r145)))
        cpy_r_r146 = cpy_r_r145;
    else {
        CPy_TypeError("dict", cpy_r_r145); 
        cpy_r_r146 = NULL;
    }
    if (cpy_r_r146 == NULL) goto CPyL116;
    cpy_r_r147 = CPyStatics[104]; /* 'micro' */
    cpy_r_r148 = CPyDict_GetItem(cpy_r_r146, cpy_r_r147);
    CPy_DECREF(cpy_r_r146);
    if (cpy_r_r148 == NULL) goto CPyL116;
    cpy_r_r149 = (PyObject *)&PyLong_Type;
    PyObject *cpy_r_r150[1] = {cpy_r_r148};
    cpy_r_r151 = (PyObject **)&cpy_r_r150;
    cpy_r_r152 = PyObject_Vectorcall(cpy_r_r149, cpy_r_r151, 1, 0);
    if (cpy_r_r152 == NULL) goto CPyL130;
    CPy_DECREF(cpy_r_r148);
    if (likely(PyLong_Check(cpy_r_r152)))
        cpy_r_r153 = CPyTagged_FromObject(cpy_r_r152);
    else {
        CPy_TypeError("int", cpy_r_r152); cpy_r_r153 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r152);
    if (cpy_r_r153 == CPY_INT_TAG) goto CPyL116;
    ((faster_eth_utils___currency___denomsObject *)cpy_r___mypyc_self__)->_micro = cpy_r_r153;
    cpy_r_r154 = CPyStatic_currency___globals;
    cpy_r_r155 = CPyStatics[90]; /* 'units' */
    cpy_r_r156 = CPyDict_GetItem(cpy_r_r154, cpy_r_r155);
    if (cpy_r_r156 == NULL) goto CPyL116;
    if (likely(PyDict_Check(cpy_r_r156)))
        cpy_r_r157 = cpy_r_r156;
    else {
        CPy_TypeError("dict", cpy_r_r156); 
        cpy_r_r157 = NULL;
    }
    if (cpy_r_r157 == NULL) goto CPyL116;
    cpy_r_r158 = CPyStatics[105]; /* 'finney' */
    cpy_r_r159 = CPyDict_GetItem(cpy_r_r157, cpy_r_r158);
    CPy_DECREF(cpy_r_r157);
    if (cpy_r_r159 == NULL) goto CPyL116;
    cpy_r_r160 = (PyObject *)&PyLong_Type;
    PyObject *cpy_r_r161[1] = {cpy_r_r159};
    cpy_r_r162 = (PyObject **)&cpy_r_r161;
    cpy_r_r163 = PyObject_Vectorcall(cpy_r_r160, cpy_r_r162, 1, 0);
    if (cpy_r_r163 == NULL) goto CPyL131;
    CPy_DECREF(cpy_r_r159);
    if (likely(PyLong_Check(cpy_r_r163)))
        cpy_r_r164 = CPyTagged_FromObject(cpy_r_r163);
    else {
        CPy_TypeError("int", cpy_r_r163); cpy_r_r164 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r163);
    if (cpy_r_r164 == CPY_INT_TAG) goto CPyL116;
    ((faster_eth_utils___currency___denomsObject *)cpy_r___mypyc_self__)->_finney = cpy_r_r164;
    cpy_r_r165 = CPyStatic_currency___globals;
    cpy_r_r166 = CPyStatics[90]; /* 'units' */
    cpy_r_r167 = CPyDict_GetItem(cpy_r_r165, cpy_r_r166);
    if (cpy_r_r167 == NULL) goto CPyL116;
    if (likely(PyDict_Check(cpy_r_r167)))
        cpy_r_r168 = cpy_r_r167;
    else {
        CPy_TypeError("dict", cpy_r_r167); 
        cpy_r_r168 = NULL;
    }
    if (cpy_r_r168 == NULL) goto CPyL116;
    cpy_r_r169 = CPyStatics[106]; /* 'milliether' */
    cpy_r_r170 = CPyDict_GetItem(cpy_r_r168, cpy_r_r169);
    CPy_DECREF(cpy_r_r168);
    if (cpy_r_r170 == NULL) goto CPyL116;
    cpy_r_r171 = (PyObject *)&PyLong_Type;
    PyObject *cpy_r_r172[1] = {cpy_r_r170};
    cpy_r_r173 = (PyObject **)&cpy_r_r172;
    cpy_r_r174 = PyObject_Vectorcall(cpy_r_r171, cpy_r_r173, 1, 0);
    if (cpy_r_r174 == NULL) goto CPyL132;
    CPy_DECREF(cpy_r_r170);
    if (likely(PyLong_Check(cpy_r_r174)))
        cpy_r_r175 = CPyTagged_FromObject(cpy_r_r174);
    else {
        CPy_TypeError("int", cpy_r_r174); cpy_r_r175 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r174);
    if (cpy_r_r175 == CPY_INT_TAG) goto CPyL116;
    ((faster_eth_utils___currency___denomsObject *)cpy_r___mypyc_self__)->_milliether = cpy_r_r175;
    cpy_r_r176 = CPyStatic_currency___globals;
    cpy_r_r177 = CPyStatics[90]; /* 'units' */
    cpy_r_r178 = CPyDict_GetItem(cpy_r_r176, cpy_r_r177);
    if (cpy_r_r178 == NULL) goto CPyL116;
    if (likely(PyDict_Check(cpy_r_r178)))
        cpy_r_r179 = cpy_r_r178;
    else {
        CPy_TypeError("dict", cpy_r_r178); 
        cpy_r_r179 = NULL;
    }
    if (cpy_r_r179 == NULL) goto CPyL116;
    cpy_r_r180 = CPyStatics[107]; /* 'milli' */
    cpy_r_r181 = CPyDict_GetItem(cpy_r_r179, cpy_r_r180);
    CPy_DECREF(cpy_r_r179);
    if (cpy_r_r181 == NULL) goto CPyL116;
    cpy_r_r182 = (PyObject *)&PyLong_Type;
    PyObject *cpy_r_r183[1] = {cpy_r_r181};
    cpy_r_r184 = (PyObject **)&cpy_r_r183;
    cpy_r_r185 = PyObject_Vectorcall(cpy_r_r182, cpy_r_r184, 1, 0);
    if (cpy_r_r185 == NULL) goto CPyL133;
    CPy_DECREF(cpy_r_r181);
    if (likely(PyLong_Check(cpy_r_r185)))
        cpy_r_r186 = CPyTagged_FromObject(cpy_r_r185);
    else {
        CPy_TypeError("int", cpy_r_r185); cpy_r_r186 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r185);
    if (cpy_r_r186 == CPY_INT_TAG) goto CPyL116;
    ((faster_eth_utils___currency___denomsObject *)cpy_r___mypyc_self__)->_milli = cpy_r_r186;
    cpy_r_r187 = CPyStatic_currency___globals;
    cpy_r_r188 = CPyStatics[90]; /* 'units' */
    cpy_r_r189 = CPyDict_GetItem(cpy_r_r187, cpy_r_r188);
    if (cpy_r_r189 == NULL) goto CPyL116;
    if (likely(PyDict_Check(cpy_r_r189)))
        cpy_r_r190 = cpy_r_r189;
    else {
        CPy_TypeError("dict", cpy_r_r189); 
        cpy_r_r190 = NULL;
    }
    if (cpy_r_r190 == NULL) goto CPyL116;
    cpy_r_r191 = CPyStatics[108]; /* 'ether' */
    cpy_r_r192 = CPyDict_GetItem(cpy_r_r190, cpy_r_r191);
    CPy_DECREF(cpy_r_r190);
    if (cpy_r_r192 == NULL) goto CPyL116;
    cpy_r_r193 = (PyObject *)&PyLong_Type;
    PyObject *cpy_r_r194[1] = {cpy_r_r192};
    cpy_r_r195 = (PyObject **)&cpy_r_r194;
    cpy_r_r196 = PyObject_Vectorcall(cpy_r_r193, cpy_r_r195, 1, 0);
    if (cpy_r_r196 == NULL) goto CPyL134;
    CPy_DECREF(cpy_r_r192);
    if (likely(PyLong_Check(cpy_r_r196)))
        cpy_r_r197 = CPyTagged_FromObject(cpy_r_r196);
    else {
        CPy_TypeError("int", cpy_r_r196); cpy_r_r197 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r196);
    if (cpy_r_r197 == CPY_INT_TAG) goto CPyL116;
    ((faster_eth_utils___currency___denomsObject *)cpy_r___mypyc_self__)->_ether = cpy_r_r197;
    cpy_r_r198 = CPyStatic_currency___globals;
    cpy_r_r199 = CPyStatics[90]; /* 'units' */
    cpy_r_r200 = CPyDict_GetItem(cpy_r_r198, cpy_r_r199);
    if (cpy_r_r200 == NULL) goto CPyL116;
    if (likely(PyDict_Check(cpy_r_r200)))
        cpy_r_r201 = cpy_r_r200;
    else {
        CPy_TypeError("dict", cpy_r_r200); 
        cpy_r_r201 = NULL;
    }
    if (cpy_r_r201 == NULL) goto CPyL116;
    cpy_r_r202 = CPyStatics[109]; /* 'kether' */
    cpy_r_r203 = CPyDict_GetItem(cpy_r_r201, cpy_r_r202);
    CPy_DECREF(cpy_r_r201);
    if (cpy_r_r203 == NULL) goto CPyL116;
    cpy_r_r204 = (PyObject *)&PyLong_Type;
    PyObject *cpy_r_r205[1] = {cpy_r_r203};
    cpy_r_r206 = (PyObject **)&cpy_r_r205;
    cpy_r_r207 = PyObject_Vectorcall(cpy_r_r204, cpy_r_r206, 1, 0);
    if (cpy_r_r207 == NULL) goto CPyL135;
    CPy_DECREF(cpy_r_r203);
    if (likely(PyLong_Check(cpy_r_r207)))
        cpy_r_r208 = CPyTagged_FromObject(cpy_r_r207);
    else {
        CPy_TypeError("int", cpy_r_r207); cpy_r_r208 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r207);
    if (cpy_r_r208 == CPY_INT_TAG) goto CPyL116;
    ((faster_eth_utils___currency___denomsObject *)cpy_r___mypyc_self__)->_kether = cpy_r_r208;
    cpy_r_r209 = CPyStatic_currency___globals;
    cpy_r_r210 = CPyStatics[90]; /* 'units' */
    cpy_r_r211 = CPyDict_GetItem(cpy_r_r209, cpy_r_r210);
    if (cpy_r_r211 == NULL) goto CPyL116;
    if (likely(PyDict_Check(cpy_r_r211)))
        cpy_r_r212 = cpy_r_r211;
    else {
        CPy_TypeError("dict", cpy_r_r211); 
        cpy_r_r212 = NULL;
    }
    if (cpy_r_r212 == NULL) goto CPyL116;
    cpy_r_r213 = CPyStatics[110]; /* 'grand' */
    cpy_r_r214 = CPyDict_GetItem(cpy_r_r212, cpy_r_r213);
    CPy_DECREF(cpy_r_r212);
    if (cpy_r_r214 == NULL) goto CPyL116;
    cpy_r_r215 = (PyObject *)&PyLong_Type;
    PyObject *cpy_r_r216[1] = {cpy_r_r214};
    cpy_r_r217 = (PyObject **)&cpy_r_r216;
    cpy_r_r218 = PyObject_Vectorcall(cpy_r_r215, cpy_r_r217, 1, 0);
    if (cpy_r_r218 == NULL) goto CPyL136;
    CPy_DECREF(cpy_r_r214);
    if (likely(PyLong_Check(cpy_r_r218)))
        cpy_r_r219 = CPyTagged_FromObject(cpy_r_r218);
    else {
        CPy_TypeError("int", cpy_r_r218); cpy_r_r219 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r218);
    if (cpy_r_r219 == CPY_INT_TAG) goto CPyL116;
    ((faster_eth_utils___currency___denomsObject *)cpy_r___mypyc_self__)->_grand = cpy_r_r219;
    cpy_r_r220 = CPyStatic_currency___globals;
    cpy_r_r221 = CPyStatics[90]; /* 'units' */
    cpy_r_r222 = CPyDict_GetItem(cpy_r_r220, cpy_r_r221);
    if (cpy_r_r222 == NULL) goto CPyL116;
    if (likely(PyDict_Check(cpy_r_r222)))
        cpy_r_r223 = cpy_r_r222;
    else {
        CPy_TypeError("dict", cpy_r_r222); 
        cpy_r_r223 = NULL;
    }
    if (cpy_r_r223 == NULL) goto CPyL116;
    cpy_r_r224 = CPyStatics[111]; /* 'mether' */
    cpy_r_r225 = CPyDict_GetItem(cpy_r_r223, cpy_r_r224);
    CPy_DECREF(cpy_r_r223);
    if (cpy_r_r225 == NULL) goto CPyL116;
    cpy_r_r226 = (PyObject *)&PyLong_Type;
    PyObject *cpy_r_r227[1] = {cpy_r_r225};
    cpy_r_r228 = (PyObject **)&cpy_r_r227;
    cpy_r_r229 = PyObject_Vectorcall(cpy_r_r226, cpy_r_r228, 1, 0);
    if (cpy_r_r229 == NULL) goto CPyL137;
    CPy_DECREF(cpy_r_r225);
    if (likely(PyLong_Check(cpy_r_r229)))
        cpy_r_r230 = CPyTagged_FromObject(cpy_r_r229);
    else {
        CPy_TypeError("int", cpy_r_r229); cpy_r_r230 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r229);
    if (cpy_r_r230 == CPY_INT_TAG) goto CPyL116;
    ((faster_eth_utils___currency___denomsObject *)cpy_r___mypyc_self__)->_mether = cpy_r_r230;
    cpy_r_r231 = CPyStatic_currency___globals;
    cpy_r_r232 = CPyStatics[90]; /* 'units' */
    cpy_r_r233 = CPyDict_GetItem(cpy_r_r231, cpy_r_r232);
    if (cpy_r_r233 == NULL) goto CPyL116;
    if (likely(PyDict_Check(cpy_r_r233)))
        cpy_r_r234 = cpy_r_r233;
    else {
        CPy_TypeError("dict", cpy_r_r233); 
        cpy_r_r234 = NULL;
    }
    if (cpy_r_r234 == NULL) goto CPyL116;
    cpy_r_r235 = CPyStatics[112]; /* 'gether' */
    cpy_r_r236 = CPyDict_GetItem(cpy_r_r234, cpy_r_r235);
    CPy_DECREF(cpy_r_r234);
    if (cpy_r_r236 == NULL) goto CPyL116;
    cpy_r_r237 = (PyObject *)&PyLong_Type;
    PyObject *cpy_r_r238[1] = {cpy_r_r236};
    cpy_r_r239 = (PyObject **)&cpy_r_r238;
    cpy_r_r240 = PyObject_Vectorcall(cpy_r_r237, cpy_r_r239, 1, 0);
    if (cpy_r_r240 == NULL) goto CPyL138;
    CPy_DECREF(cpy_r_r236);
    if (likely(PyLong_Check(cpy_r_r240)))
        cpy_r_r241 = CPyTagged_FromObject(cpy_r_r240);
    else {
        CPy_TypeError("int", cpy_r_r240); cpy_r_r241 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r240);
    if (cpy_r_r241 == CPY_INT_TAG) goto CPyL116;
    ((faster_eth_utils___currency___denomsObject *)cpy_r___mypyc_self__)->_gether = cpy_r_r241;
    cpy_r_r242 = CPyStatic_currency___globals;
    cpy_r_r243 = CPyStatics[90]; /* 'units' */
    cpy_r_r244 = CPyDict_GetItem(cpy_r_r242, cpy_r_r243);
    if (cpy_r_r244 == NULL) goto CPyL116;
    if (likely(PyDict_Check(cpy_r_r244)))
        cpy_r_r245 = cpy_r_r244;
    else {
        CPy_TypeError("dict", cpy_r_r244); 
        cpy_r_r245 = NULL;
    }
    if (cpy_r_r245 == NULL) goto CPyL116;
    cpy_r_r246 = CPyStatics[113]; /* 'tether' */
    cpy_r_r247 = CPyDict_GetItem(cpy_r_r245, cpy_r_r246);
    CPy_DECREF(cpy_r_r245);
    if (cpy_r_r247 == NULL) goto CPyL116;
    cpy_r_r248 = (PyObject *)&PyLong_Type;
    PyObject *cpy_r_r249[1] = {cpy_r_r247};
    cpy_r_r250 = (PyObject **)&cpy_r_r249;
    cpy_r_r251 = PyObject_Vectorcall(cpy_r_r248, cpy_r_r250, 1, 0);
    if (cpy_r_r251 == NULL) goto CPyL139;
    CPy_DECREF(cpy_r_r247);
    if (likely(PyLong_Check(cpy_r_r251)))
        cpy_r_r252 = CPyTagged_FromObject(cpy_r_r251);
    else {
        CPy_TypeError("int", cpy_r_r251); cpy_r_r252 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r251);
    if (cpy_r_r252 == CPY_INT_TAG) goto CPyL116;
    ((faster_eth_utils___currency___denomsObject *)cpy_r___mypyc_self__)->_tether = cpy_r_r252;
    return 1;
CPyL116: ;
    cpy_r_r253 = 2;
    return cpy_r_r253;
CPyL117: ;
    CPy_DECREF(cpy_r_r5);
    goto CPyL116;
CPyL118: ;
    CPy_DECREF(cpy_r_r16);
    goto CPyL116;
CPyL119: ;
    CPy_DECREF(cpy_r_r27);
    goto CPyL116;
CPyL120: ;
    CPy_DECREF(cpy_r_r38);
    goto CPyL116;
CPyL121: ;
    CPy_DECREF(cpy_r_r49);
    goto CPyL116;
CPyL122: ;
    CPy_DECREF(cpy_r_r60);
    goto CPyL116;
CPyL123: ;
    CPy_DECREF(cpy_r_r71);
    goto CPyL116;
CPyL124: ;
    CPy_DECREF(cpy_r_r82);
    goto CPyL116;
CPyL125: ;
    CPy_DECREF(cpy_r_r93);
    goto CPyL116;
CPyL126: ;
    CPy_DECREF(cpy_r_r104);
    goto CPyL116;
CPyL127: ;
    CPy_DECREF(cpy_r_r115);
    goto CPyL116;
CPyL128: ;
    CPy_DECREF(cpy_r_r126);
    goto CPyL116;
CPyL129: ;
    CPy_DECREF(cpy_r_r137);
    goto CPyL116;
CPyL130: ;
    CPy_DECREF(cpy_r_r148);
    goto CPyL116;
CPyL131: ;
    CPy_DECREF(cpy_r_r159);
    goto CPyL116;
CPyL132: ;
    CPy_DECREF(cpy_r_r170);
    goto CPyL116;
CPyL133: ;
    CPy_DECREF(cpy_r_r181);
    goto CPyL116;
CPyL134: ;
    CPy_DECREF(cpy_r_r192);
    goto CPyL116;
CPyL135: ;
    CPy_DECREF(cpy_r_r203);
    goto CPyL116;
CPyL136: ;
    CPy_DECREF(cpy_r_r214);
    goto CPyL116;
CPyL137: ;
    CPy_DECREF(cpy_r_r225);
    goto CPyL116;
CPyL138: ;
    CPy_DECREF(cpy_r_r236);
    goto CPyL116;
CPyL139: ;
    CPy_DECREF(cpy_r_r247);
    goto CPyL116;
}

PyObject *CPyPy_currency___denoms_____mypyc_defaults_setup(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__mypyc_defaults_setup", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_currency___denoms))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_eth_utils.currency.denoms", obj___mypyc_self__); 
        goto fail;
    }
    char retval = CPyDef_currency___denoms_____mypyc_defaults_setup(arg___mypyc_self__);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("faster_eth_utils/currency.py", "__mypyc_defaults_setup", -1, CPyStatic_currency___globals);
    return NULL;
}

PyObject *CPyDef_currency___from_wei(CPyTagged cpy_r_number, PyObject *cpy_r_unit) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_result_value;
    PyObject *cpy_r_r1;
    PyObject **cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    int32_t cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject **cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    int64_t cpy_r_r31;
    char cpy_r_r32;
    int64_t cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    CPyTagged cpy_r_r37;
    int64_t cpy_r_r38;
    char cpy_r_r39;
    int64_t cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject **cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject **cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject **cpy_r_r71;
    PyObject *cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    int32_t cpy_r_r76;
    char cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject **cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    tuple_T3OOO cpy_r_r87;
    tuple_T3OOO cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject **cpy_r_r93;
    PyObject *cpy_r_r94;
    int32_t cpy_r_r95;
    char cpy_r_r96;
    char cpy_r_r97;
    char cpy_r_r98;
    tuple_T3OOO cpy_r_r99;
    tuple_T3OOO cpy_r_r100;
    tuple_T3OOO cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject **cpy_r_r104;
    PyObject *cpy_r_r105;
    char cpy_r_r106;
    char cpy_r_r107;
    PyObject *cpy_r_r108;
    cpy_r_r0 = NULL;
    cpy_r_result_value = cpy_r_r0;
    cpy_r_r1 = CPyStatics[25]; /* 'lower' */
    PyObject *cpy_r_r2[1] = {cpy_r_unit};
    cpy_r_r3 = (PyObject **)&cpy_r_r2;
    cpy_r_r4 = PyObject_VectorcallMethod(cpy_r_r1, cpy_r_r3, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "from_wei", 55, CPyStatic_currency___globals);
        goto CPyL70;
    }
    if (likely(PyUnicode_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/currency.py", "from_wei", 55, CPyStatic_currency___globals, "str", cpy_r_r4);
        goto CPyL70;
    }
    cpy_r_r6 = CPyStatic_currency___globals;
    cpy_r_r7 = CPyStatics[90]; /* 'units' */
    cpy_r_r8 = CPyDict_GetItem(cpy_r_r6, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "from_wei", 55, CPyStatic_currency___globals);
        goto CPyL71;
    }
    if (likely(PyDict_Check(cpy_r_r8)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/currency.py", "from_wei", 55, CPyStatic_currency___globals, "dict", cpy_r_r8);
        goto CPyL71;
    }
    cpy_r_r10 = PyDict_Contains(cpy_r_r9, cpy_r_r5);
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r5);
    cpy_r_r11 = cpy_r_r10 >= 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "from_wei", 55, CPyStatic_currency___globals);
        goto CPyL70;
    }
    cpy_r_r12 = cpy_r_r10;
    cpy_r_r13 = cpy_r_r12 ^ 1;
    if (cpy_r_r13) {
        goto CPyL72;
    } else
        goto CPyL15;
CPyL6: ;
    cpy_r_r14 = CPyStatics[114]; /* 'Unknown unit. Must be one of ' */
    cpy_r_r15 = CPyStatics[115]; /* '/' */
    cpy_r_r16 = CPyStatic_currency___globals;
    cpy_r_r17 = CPyStatics[90]; /* 'units' */
    cpy_r_r18 = CPyDict_GetItem(cpy_r_r16, cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "from_wei", 56, CPyStatic_currency___globals);
        goto CPyL69;
    }
    if (likely(PyDict_Check(cpy_r_r18)))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/currency.py", "from_wei", 56, CPyStatic_currency___globals, "dict", cpy_r_r18);
        goto CPyL69;
    }
    cpy_r_r20 = CPyDict_KeysView(cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "from_wei", 56, CPyStatic_currency___globals);
        goto CPyL69;
    }
    cpy_r_r21 = PyUnicode_Join(cpy_r_r15, cpy_r_r20);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "from_wei", 56, CPyStatic_currency___globals);
        goto CPyL69;
    }
    cpy_r_r22 = CPyStr_Build(2, cpy_r_r14, cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "from_wei", 56, CPyStatic_currency___globals);
        goto CPyL69;
    }
    cpy_r_r23 = CPyModule_builtins;
    cpy_r_r24 = CPyStatics[30]; /* 'ValueError' */
    cpy_r_r25 = CPyObject_GetAttr(cpy_r_r23, cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "from_wei", 56, CPyStatic_currency___globals);
        goto CPyL73;
    }
    PyObject *cpy_r_r26[1] = {cpy_r_r22};
    cpy_r_r27 = (PyObject **)&cpy_r_r26;
    cpy_r_r28 = PyObject_Vectorcall(cpy_r_r25, cpy_r_r27, 1, 0);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "from_wei", 56, CPyStatic_currency___globals);
        goto CPyL73;
    }
    CPy_DECREF(cpy_r_r22);
    CPy_Raise(cpy_r_r28);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "from_wei", 56, CPyStatic_currency___globals);
        goto CPyL69;
    }
    CPy_Unreachable();
CPyL15: ;
    cpy_r_r29 = cpy_r_number == 0;
    if (cpy_r_r29) {
        goto CPyL74;
    } else
        goto CPyL17;
CPyL16: ;
    cpy_r_r30 = CPyStatics[265]; /* 0 */
    return cpy_r_r30;
CPyL17: ;
    cpy_r_r31 = cpy_r_number & 1;
    cpy_r_r32 = cpy_r_r31 != 0;
    if (cpy_r_r32) goto CPyL19;
    cpy_r_r33 = 0 & 1;
    cpy_r_r34 = cpy_r_r33 != 0;
    if (!cpy_r_r34) goto CPyL20;
CPyL19: ;
    cpy_r_r35 = CPyTagged_IsLt_(cpy_r_number, 0);
    if (cpy_r_r35) {
        goto CPyL75;
    } else
        goto CPyL21;
CPyL20: ;
    cpy_r_r36 = (Py_ssize_t)cpy_r_number < (Py_ssize_t)0;
    if (cpy_r_r36) goto CPyL75;
CPyL21: ;
    cpy_r_r37 = (CPyTagged)CPyStatics[266] | 1; /* 115792089237316195423570985008687907853269984665640564039457584007913129639935 */
    cpy_r_r38 = cpy_r_number & 1;
    cpy_r_r39 = cpy_r_r38 != 0;
    if (cpy_r_r39) goto CPyL23;
    cpy_r_r40 = cpy_r_r37 & 1;
    cpy_r_r41 = cpy_r_r40 != 0;
    if (!cpy_r_r41) goto CPyL24;
CPyL23: ;
    cpy_r_r42 = CPyTagged_IsLt_(cpy_r_r37, cpy_r_number);
    if (cpy_r_r42) {
        goto CPyL75;
    } else
        goto CPyL29;
CPyL24: ;
    cpy_r_r43 = (Py_ssize_t)cpy_r_number > (Py_ssize_t)cpy_r_r37;
    if (cpy_r_r43) {
        goto CPyL75;
    } else
        goto CPyL29;
CPyL25: ;
    cpy_r_r44 = CPyStatics[116]; /* 'value must be between 1 and 2**256 - 1' */
    cpy_r_r45 = CPyModule_builtins;
    cpy_r_r46 = CPyStatics[30]; /* 'ValueError' */
    cpy_r_r47 = CPyObject_GetAttr(cpy_r_r45, cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "from_wei", 62, CPyStatic_currency___globals);
        goto CPyL69;
    }
    PyObject *cpy_r_r48[1] = {cpy_r_r44};
    cpy_r_r49 = (PyObject **)&cpy_r_r48;
    cpy_r_r50 = PyObject_Vectorcall(cpy_r_r47, cpy_r_r49, 1, 0);
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "from_wei", 62, CPyStatic_currency___globals);
        goto CPyL69;
    }
    CPy_Raise(cpy_r_r50);
    CPy_DECREF(cpy_r_r50);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "from_wei", 62, CPyStatic_currency___globals);
        goto CPyL69;
    }
    CPy_Unreachable();
CPyL29: ;
    cpy_r_r51 = CPyStatic_currency___globals;
    cpy_r_r52 = CPyStatics[90]; /* 'units' */
    cpy_r_r53 = CPyDict_GetItem(cpy_r_r51, cpy_r_r52);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "from_wei", 64, CPyStatic_currency___globals);
        goto CPyL70;
    }
    if (likely(PyDict_Check(cpy_r_r53)))
        cpy_r_r54 = cpy_r_r53;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/currency.py", "from_wei", 64, CPyStatic_currency___globals, "dict", cpy_r_r53);
        goto CPyL70;
    }
    cpy_r_r55 = CPyStatics[25]; /* 'lower' */
    PyObject *cpy_r_r56[1] = {cpy_r_unit};
    cpy_r_r57 = (PyObject **)&cpy_r_r56;
    cpy_r_r58 = PyObject_VectorcallMethod(cpy_r_r55, cpy_r_r57, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "from_wei", 64, CPyStatic_currency___globals);
        goto CPyL76;
    }
    if (likely(PyUnicode_Check(cpy_r_r58)))
        cpy_r_r59 = cpy_r_r58;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/currency.py", "from_wei", 64, CPyStatic_currency___globals, "str", cpy_r_r58);
        goto CPyL76;
    }
    cpy_r_r60 = CPyDict_GetItem(cpy_r_r54, cpy_r_r59);
    CPy_DECREF(cpy_r_r54);
    CPy_DECREF(cpy_r_r59);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "from_wei", 64, CPyStatic_currency___globals);
        goto CPyL70;
    }
    cpy_r_r61 = CPyStatic_currency___globals;
    cpy_r_r62 = CPyStatics[117]; /* 'localcontext' */
    cpy_r_r63 = CPyDict_GetItem(cpy_r_r61, cpy_r_r62);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "from_wei", 66, CPyStatic_currency___globals);
        goto CPyL77;
    }
    cpy_r_r64 = PyObject_Vectorcall(cpy_r_r63, 0, 0, 0);
    CPy_DECREF(cpy_r_r63);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "from_wei", 66, CPyStatic_currency___globals);
        goto CPyL77;
    }
    cpy_r_r65 = PyObject_Type(cpy_r_r64);
    cpy_r_r66 = CPyStatics[118]; /* '__exit__' */
    cpy_r_r67 = CPyObject_GetAttr(cpy_r_r65, cpy_r_r66);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "from_wei", 66, CPyStatic_currency___globals);
        goto CPyL78;
    }
    cpy_r_r68 = CPyStatics[119]; /* '__enter__' */
    cpy_r_r69 = CPyObject_GetAttr(cpy_r_r65, cpy_r_r68);
    CPy_DECREF(cpy_r_r65);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "from_wei", 66, CPyStatic_currency___globals);
        goto CPyL79;
    }
    PyObject *cpy_r_r70[1] = {cpy_r_r64};
    cpy_r_r71 = (PyObject **)&cpy_r_r70;
    cpy_r_r72 = PyObject_Vectorcall(cpy_r_r69, cpy_r_r71, 1, 0);
    CPy_DECREF(cpy_r_r69);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "from_wei", 66, CPyStatic_currency___globals);
        goto CPyL79;
    }
    cpy_r_r73 = 1;
    cpy_r_r74 = CPyStatics[120]; /* 'prec' */
    cpy_r_r75 = CPyStatics[267]; /* 999 */
    cpy_r_r76 = PyObject_SetAttr(cpy_r_r72, cpy_r_r74, cpy_r_r75);
    cpy_r_r77 = cpy_r_r76 >= 0;
    if (unlikely(!cpy_r_r77)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "from_wei", 67, CPyStatic_currency___globals);
        goto CPyL80;
    }
    cpy_r_r78 = CPyModule_decimal;
    cpy_r_r79 = CPyStatics[121]; /* 'Decimal' */
    cpy_r_r80 = CPyObject_GetAttr(cpy_r_r78, cpy_r_r79);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "from_wei", 68, CPyStatic_currency___globals);
        goto CPyL80;
    }
    CPyTagged_INCREF(cpy_r_number);
    cpy_r_r81 = CPyTagged_StealAsObject(cpy_r_number);
    PyObject *cpy_r_r82[2] = {cpy_r_r81, cpy_r_r72};
    cpy_r_r83 = (PyObject **)&cpy_r_r82;
    cpy_r_r84 = CPyStatics[295]; /* ('value', 'context') */
    cpy_r_r85 = PyObject_Vectorcall(cpy_r_r80, cpy_r_r83, 0, cpy_r_r84);
    CPy_DECREF(cpy_r_r80);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "from_wei", 68, CPyStatic_currency___globals);
        goto CPyL81;
    }
    CPy_DECREF(cpy_r_r81);
    CPy_DECREF(cpy_r_r72);
    cpy_r_r86 = PyNumber_TrueDivide(cpy_r_r85, cpy_r_r60);
    CPy_DECREF(cpy_r_r85);
    CPy_DECREF(cpy_r_r60);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "from_wei", 69, CPyStatic_currency___globals);
        goto CPyL45;
    } else
        goto CPyL82;
CPyL44: ;
    cpy_r_result_value = cpy_r_r86;
    goto CPyL53;
CPyL45: ;
    cpy_r_r87 = CPy_CatchError();
    cpy_r_r73 = 0;
    cpy_r_r88 = CPy_GetExcInfo();
    cpy_r_r89 = cpy_r_r88.f0;
    CPy_INCREF(cpy_r_r89);
    cpy_r_r90 = cpy_r_r88.f1;
    CPy_INCREF(cpy_r_r90);
    cpy_r_r91 = cpy_r_r88.f2;
    CPy_INCREF(cpy_r_r91);
    CPy_DecRef(cpy_r_r88.f0);
    CPy_DecRef(cpy_r_r88.f1);
    CPy_DecRef(cpy_r_r88.f2);
    PyObject *cpy_r_r92[4] = {cpy_r_r64, cpy_r_r89, cpy_r_r90, cpy_r_r91};
    cpy_r_r93 = (PyObject **)&cpy_r_r92;
    cpy_r_r94 = PyObject_Vectorcall(cpy_r_r67, cpy_r_r93, 4, 0);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "from_wei", 66, CPyStatic_currency___globals);
        goto CPyL83;
    }
    CPy_DecRef(cpy_r_r89);
    CPy_DecRef(cpy_r_r90);
    CPy_DecRef(cpy_r_r91);
    cpy_r_r95 = PyObject_IsTrue(cpy_r_r94);
    CPy_DecRef(cpy_r_r94);
    cpy_r_r96 = cpy_r_r95 >= 0;
    if (unlikely(!cpy_r_r96)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "from_wei", 66, CPyStatic_currency___globals);
        goto CPyL51;
    }
    cpy_r_r97 = cpy_r_r95;
    if (cpy_r_r97) goto CPyL50;
    CPy_Reraise();
    if (!0) {
        goto CPyL51;
    } else
        goto CPyL84;
CPyL49: ;
    CPy_Unreachable();
CPyL50: ;
    CPy_RestoreExcInfo(cpy_r_r87);
    CPy_DecRef(cpy_r_r87.f0);
    CPy_DecRef(cpy_r_r87.f1);
    CPy_DecRef(cpy_r_r87.f2);
    goto CPyL53;
CPyL51: ;
    CPy_RestoreExcInfo(cpy_r_r87);
    CPy_DecRef(cpy_r_r87.f0);
    CPy_DecRef(cpy_r_r87.f1);
    CPy_DecRef(cpy_r_r87.f2);
    cpy_r_r98 = CPy_KeepPropagating();
    if (!cpy_r_r98) {
        goto CPyL54;
    } else
        goto CPyL85;
CPyL52: ;
    CPy_Unreachable();
CPyL53: ;
    tuple_T3OOO __tmp37 = { NULL, NULL, NULL };
    cpy_r_r99 = __tmp37;
    cpy_r_r100 = cpy_r_r99;
    goto CPyL55;
CPyL54: ;
    cpy_r_r101 = CPy_CatchError();
    cpy_r_r100 = cpy_r_r101;
CPyL55: ;
    if (!cpy_r_r73) goto CPyL86;
    cpy_r_r102 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r103[4] = {cpy_r_r64, cpy_r_r102, cpy_r_r102, cpy_r_r102};
    cpy_r_r104 = (PyObject **)&cpy_r_r103;
    cpy_r_r105 = PyObject_Vectorcall(cpy_r_r67, cpy_r_r104, 4, 0);
    CPy_DECREF(cpy_r_r67);
    if (unlikely(cpy_r_r105 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "from_wei", 66, CPyStatic_currency___globals);
        goto CPyL87;
    } else
        goto CPyL88;
CPyL57: ;
    CPy_DECREF(cpy_r_r64);
CPyL58: ;
    if (cpy_r_r100.f0 == NULL) {
        goto CPyL65;
    } else
        goto CPyL89;
CPyL59: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL61;
    } else
        goto CPyL90;
CPyL60: ;
    CPy_Unreachable();
CPyL61: ;
    if (cpy_r_r100.f0 == NULL) goto CPyL63;
    CPy_RestoreExcInfo(cpy_r_r100);
    CPy_XDECREF(cpy_r_r100.f0);
    CPy_XDECREF(cpy_r_r100.f1);
    CPy_XDECREF(cpy_r_r100.f2);
CPyL63: ;
    cpy_r_r106 = CPy_KeepPropagating();
    if (!cpy_r_r106) goto CPyL69;
    CPy_Unreachable();
CPyL65: ;
    if (cpy_r_result_value != NULL) goto CPyL68;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"result_value\" referenced before assignment");
    cpy_r_r107 = 0;
    if (unlikely(!cpy_r_r107)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "from_wei", -1, CPyStatic_currency___globals);
        goto CPyL69;
    }
    CPy_Unreachable();
CPyL68: ;
    return cpy_r_result_value;
CPyL69: ;
    cpy_r_r108 = NULL;
    return cpy_r_r108;
CPyL70: ;
    CPy_XDecRef(cpy_r_result_value);
    goto CPyL69;
CPyL71: ;
    CPy_XDecRef(cpy_r_result_value);
    CPy_DecRef(cpy_r_r5);
    goto CPyL69;
CPyL72: ;
    CPy_XDECREF(cpy_r_result_value);
    goto CPyL6;
CPyL73: ;
    CPy_DecRef(cpy_r_r22);
    goto CPyL69;
CPyL74: ;
    CPy_XDECREF(cpy_r_result_value);
    goto CPyL16;
CPyL75: ;
    CPy_XDECREF(cpy_r_result_value);
    goto CPyL25;
CPyL76: ;
    CPy_XDecRef(cpy_r_result_value);
    CPy_DecRef(cpy_r_r54);
    goto CPyL69;
CPyL77: ;
    CPy_XDecRef(cpy_r_result_value);
    CPy_DecRef(cpy_r_r60);
    goto CPyL69;
CPyL78: ;
    CPy_XDecRef(cpy_r_result_value);
    CPy_DecRef(cpy_r_r60);
    CPy_DecRef(cpy_r_r64);
    CPy_DecRef(cpy_r_r65);
    goto CPyL69;
CPyL79: ;
    CPy_XDecRef(cpy_r_result_value);
    CPy_DecRef(cpy_r_r60);
    CPy_DecRef(cpy_r_r64);
    CPy_DecRef(cpy_r_r67);
    goto CPyL69;
CPyL80: ;
    CPy_DecRef(cpy_r_r60);
    CPy_DecRef(cpy_r_r72);
    goto CPyL45;
CPyL81: ;
    CPy_DecRef(cpy_r_r60);
    CPy_DecRef(cpy_r_r72);
    CPy_DecRef(cpy_r_r81);
    goto CPyL45;
CPyL82: ;
    CPy_XDECREF(cpy_r_result_value);
    goto CPyL44;
CPyL83: ;
    CPy_DecRef(cpy_r_r89);
    CPy_DecRef(cpy_r_r90);
    CPy_DecRef(cpy_r_r91);
    goto CPyL51;
CPyL84: ;
    CPy_XDecRef(cpy_r_result_value);
    CPy_DecRef(cpy_r_r64);
    CPy_DecRef(cpy_r_r67);
    CPy_DecRef(cpy_r_r87.f0);
    CPy_DecRef(cpy_r_r87.f1);
    CPy_DecRef(cpy_r_r87.f2);
    goto CPyL49;
CPyL85: ;
    CPy_XDecRef(cpy_r_result_value);
    CPy_DecRef(cpy_r_r64);
    CPy_DecRef(cpy_r_r67);
    goto CPyL52;
CPyL86: ;
    CPy_DECREF(cpy_r_r64);
    CPy_DECREF(cpy_r_r67);
    goto CPyL58;
CPyL87: ;
    CPy_XDecRef(cpy_r_result_value);
    CPy_DecRef(cpy_r_r64);
    goto CPyL61;
CPyL88: ;
    CPy_DECREF(cpy_r_r105);
    goto CPyL57;
CPyL89: ;
    CPy_XDECREF(cpy_r_result_value);
    goto CPyL59;
CPyL90: ;
    CPy_XDECREF(cpy_r_r100.f0);
    CPy_XDECREF(cpy_r_r100.f1);
    CPy_XDECREF(cpy_r_r100.f2);
    goto CPyL60;
}

PyObject *CPyPy_currency___from_wei(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"number", "unit", 0};
    static CPyArg_Parser parser = {"OO:from_wei", kwlist, 0};
    PyObject *obj_number;
    PyObject *obj_unit;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_number, &obj_unit)) {
        return NULL;
    }
    CPyTagged arg_number;
    if (likely(PyLong_Check(obj_number)))
        arg_number = CPyTagged_BorrowFromObject(obj_number);
    else {
        CPy_TypeError("int", obj_number); goto fail;
    }
    PyObject *arg_unit;
    if (likely(PyUnicode_Check(obj_unit)))
        arg_unit = obj_unit;
    else {
        CPy_TypeError("str", obj_unit); 
        goto fail;
    }
    PyObject *retval = CPyDef_currency___from_wei(arg_number, arg_unit);
    return retval;
fail: ;
    CPy_AddTraceback("faster_eth_utils/currency.py", "from_wei", 51, CPyStatic_currency___globals);
    return NULL;
}

CPyTagged CPyDef_currency___to_wei(PyObject *cpy_r_number, PyObject *cpy_r_unit) {
    CPyTagged cpy_r_r0;
    CPyTagged cpy_r_multiplier;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_result_value;
    PyObject *cpy_r_r2;
    PyObject **cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    int32_t cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject **cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject **cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_d_number;
    PyObject *cpy_r_r39;
    int32_t cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    double cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject **cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    int32_t cpy_r_r58;
    char cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject **cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject **cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_unit_value;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject **cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    char cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    char cpy_r_r90;
    PyObject *cpy_r_r91;
    int32_t cpy_r_r92;
    char cpy_r_r93;
    char cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject **cpy_r_r105;
    PyObject *cpy_r_r106;
    char cpy_r_r107;
    int64_t cpy_r_r108;
    char cpy_r_r109;
    CPyTagged cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject **cpy_r_r114;
    PyObject *cpy_r_r115;
    CPyTagged cpy_r_r116;
    CPyTagged cpy_r_r117;
    CPyTagged cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    int32_t cpy_r_r121;
    char cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject **cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    tuple_T3OOO cpy_r_r134;
    tuple_T3OOO cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject **cpy_r_r140;
    PyObject *cpy_r_r141;
    int32_t cpy_r_r142;
    char cpy_r_r143;
    char cpy_r_r144;
    char cpy_r_r145;
    tuple_T3OOO cpy_r_r146;
    tuple_T3OOO cpy_r_r147;
    tuple_T3OOO cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject **cpy_r_r151;
    PyObject *cpy_r_r152;
    char cpy_r_r153;
    PyObject *cpy_r_r154;
    char cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject *cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    PyObject *cpy_r_r166;
    PyObject *cpy_r_r167;
    PyObject **cpy_r_r169;
    PyObject *cpy_r_r170;
    char cpy_r_r171;
    PyObject *cpy_r_r172;
    PyObject *cpy_r_r173;
    int32_t cpy_r_r174;
    char cpy_r_r175;
    PyObject *cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    PyObject **cpy_r_r180;
    PyObject *cpy_r_r181;
    PyObject *cpy_r_r182;
    PyObject *cpy_r_r183;
    tuple_T3OOO cpy_r_r184;
    tuple_T3OOO cpy_r_r185;
    PyObject *cpy_r_r186;
    PyObject *cpy_r_r187;
    PyObject *cpy_r_r188;
    PyObject **cpy_r_r190;
    PyObject *cpy_r_r191;
    int32_t cpy_r_r192;
    char cpy_r_r193;
    char cpy_r_r194;
    char cpy_r_r195;
    tuple_T3OOO cpy_r_r196;
    tuple_T3OOO cpy_r_r197;
    tuple_T3OOO cpy_r_r198;
    PyObject *cpy_r_r199;
    PyObject **cpy_r_r201;
    PyObject *cpy_r_r202;
    char cpy_r_r203;
    PyObject *cpy_r_r204;
    char cpy_r_r205;
    PyObject *cpy_r_r206;
    char cpy_r_r207;
    CPyTagged cpy_r_r208;
    PyObject *cpy_r_r209;
    char cpy_r_r210;
    PyObject *cpy_r_r211;
    char cpy_r_r212;
    PyObject *cpy_r_r213;
    PyObject *cpy_r_r214;
    PyObject *cpy_r_r215;
    PyObject *cpy_r_r216;
    PyObject **cpy_r_r218;
    PyObject *cpy_r_r219;
    PyObject *cpy_r_r220;
    char cpy_r_r221;
    PyObject **cpy_r_r223;
    PyObject *cpy_r_r224;
    char cpy_r_r225;
    CPyTagged cpy_r_r226;
    CPyTagged cpy_r_r227;
    cpy_r_r0 = CPY_INT_TAG;
    cpy_r_multiplier = cpy_r_r0;
    cpy_r_r1 = NULL;
    cpy_r_result_value = cpy_r_r1;
    cpy_r_r2 = CPyStatics[25]; /* 'lower' */
    PyObject *cpy_r_r3[1] = {cpy_r_unit};
    cpy_r_r4 = (PyObject **)&cpy_r_r3;
    cpy_r_r5 = PyObject_VectorcallMethod(cpy_r_r2, cpy_r_r4, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", 78, CPyStatic_currency___globals);
        goto CPyL153;
    }
    if (likely(PyUnicode_Check(cpy_r_r5)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/currency.py", "to_wei", 78, CPyStatic_currency___globals, "str", cpy_r_r5);
        goto CPyL153;
    }
    cpy_r_r7 = CPyStatic_currency___globals;
    cpy_r_r8 = CPyStatics[90]; /* 'units' */
    cpy_r_r9 = CPyDict_GetItem(cpy_r_r7, cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", 78, CPyStatic_currency___globals);
        goto CPyL154;
    }
    if (likely(PyDict_Check(cpy_r_r9)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/currency.py", "to_wei", 78, CPyStatic_currency___globals, "dict", cpy_r_r9);
        goto CPyL154;
    }
    cpy_r_r11 = PyDict_Contains(cpy_r_r10, cpy_r_r6);
    CPy_DECREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r6);
    cpy_r_r12 = cpy_r_r11 >= 0;
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", 78, CPyStatic_currency___globals);
        goto CPyL153;
    }
    cpy_r_r13 = cpy_r_r11;
    cpy_r_r14 = cpy_r_r13 ^ 1;
    if (cpy_r_r14) {
        goto CPyL155;
    } else
        goto CPyL15;
CPyL6: ;
    cpy_r_r15 = CPyStatics[114]; /* 'Unknown unit. Must be one of ' */
    cpy_r_r16 = CPyStatics[115]; /* '/' */
    cpy_r_r17 = CPyStatic_currency___globals;
    cpy_r_r18 = CPyStatics[90]; /* 'units' */
    cpy_r_r19 = CPyDict_GetItem(cpy_r_r17, cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", 79, CPyStatic_currency___globals);
        goto CPyL152;
    }
    if (likely(PyDict_Check(cpy_r_r19)))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/currency.py", "to_wei", 79, CPyStatic_currency___globals, "dict", cpy_r_r19);
        goto CPyL152;
    }
    cpy_r_r21 = CPyDict_KeysView(cpy_r_r20);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", 79, CPyStatic_currency___globals);
        goto CPyL152;
    }
    cpy_r_r22 = PyUnicode_Join(cpy_r_r16, cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", 79, CPyStatic_currency___globals);
        goto CPyL152;
    }
    cpy_r_r23 = CPyStr_Build(2, cpy_r_r15, cpy_r_r22);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", 79, CPyStatic_currency___globals);
        goto CPyL152;
    }
    cpy_r_r24 = CPyModule_builtins;
    cpy_r_r25 = CPyStatics[30]; /* 'ValueError' */
    cpy_r_r26 = CPyObject_GetAttr(cpy_r_r24, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", 79, CPyStatic_currency___globals);
        goto CPyL156;
    }
    PyObject *cpy_r_r27[1] = {cpy_r_r23};
    cpy_r_r28 = (PyObject **)&cpy_r_r27;
    cpy_r_r29 = PyObject_Vectorcall(cpy_r_r26, cpy_r_r28, 1, 0);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", 79, CPyStatic_currency___globals);
        goto CPyL156;
    }
    CPy_DECREF(cpy_r_r23);
    CPy_Raise(cpy_r_r29);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", 79, CPyStatic_currency___globals);
        goto CPyL152;
    }
    CPy_Unreachable();
CPyL15: ;
    cpy_r_r30 = CPyDef_types___is_integer(cpy_r_number);
    if (unlikely(cpy_r_r30 == 2)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", 81, CPyStatic_currency___globals);
        goto CPyL153;
    }
    if (cpy_r_r30) goto CPyL19;
    cpy_r_r31 = CPyDef_types___is_string(cpy_r_number);
    if (unlikely(cpy_r_r31 == 2)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", 81, CPyStatic_currency___globals);
        goto CPyL153;
    }
    if (!cpy_r_r31) goto CPyL22;
CPyL19: ;
    cpy_r_r32 = CPyModule_decimal;
    cpy_r_r33 = CPyStatics[121]; /* 'Decimal' */
    cpy_r_r34 = CPyObject_GetAttr(cpy_r_r32, cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", 82, CPyStatic_currency___globals);
        goto CPyL153;
    }
    PyObject *cpy_r_r35[1] = {cpy_r_number};
    cpy_r_r36 = (PyObject **)&cpy_r_r35;
    cpy_r_r37 = CPyStatics[296]; /* ('value',) */
    cpy_r_r38 = PyObject_Vectorcall(cpy_r_r34, cpy_r_r36, 0, cpy_r_r37);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", 82, CPyStatic_currency___globals);
        goto CPyL153;
    }
    cpy_r_d_number = cpy_r_r38;
    goto CPyL38;
CPyL22: ;
    cpy_r_r39 = (PyObject *)&PyFloat_Type;
    cpy_r_r40 = PyObject_IsInstance(cpy_r_number, cpy_r_r39);
    cpy_r_r41 = cpy_r_r40 >= 0;
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", 83, CPyStatic_currency___globals);
        goto CPyL153;
    }
    cpy_r_r42 = cpy_r_r40;
    if (!cpy_r_r42) goto CPyL30;
    cpy_r_r43 = PyFloat_AsDouble(cpy_r_number);
    if (cpy_r_r43 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_number); cpy_r_r43 = -113.0;
    }
    cpy_r_r44 = cpy_r_r43 == -113.0;
    if (unlikely(cpy_r_r44)) goto CPyL26;
CPyL25: ;
    cpy_r_r45 = PyFloat_FromDouble(cpy_r_r43);
    cpy_r_r46 = PyObject_Str(cpy_r_r45);
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", 84, CPyStatic_currency___globals);
        goto CPyL153;
    } else
        goto CPyL27;
CPyL26: ;
    cpy_r_r47 = PyErr_Occurred();
    if (unlikely(cpy_r_r47 != NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", 84, CPyStatic_currency___globals);
        goto CPyL153;
    } else
        goto CPyL25;
CPyL27: ;
    cpy_r_r48 = CPyModule_decimal;
    cpy_r_r49 = CPyStatics[121]; /* 'Decimal' */
    cpy_r_r50 = CPyObject_GetAttr(cpy_r_r48, cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", 84, CPyStatic_currency___globals);
        goto CPyL157;
    }
    PyObject *cpy_r_r51[1] = {cpy_r_r46};
    cpy_r_r52 = (PyObject **)&cpy_r_r51;
    cpy_r_r53 = CPyStatics[296]; /* ('value',) */
    cpy_r_r54 = PyObject_Vectorcall(cpy_r_r50, cpy_r_r52, 0, cpy_r_r53);
    CPy_DECREF(cpy_r_r50);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", 84, CPyStatic_currency___globals);
        goto CPyL157;
    }
    CPy_DECREF(cpy_r_r46);
    cpy_r_d_number = cpy_r_r54;
    goto CPyL38;
CPyL30: ;
    cpy_r_r55 = CPyModule_decimal;
    cpy_r_r56 = CPyStatics[121]; /* 'Decimal' */
    cpy_r_r57 = CPyObject_GetAttr(cpy_r_r55, cpy_r_r56);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", 85, CPyStatic_currency___globals);
        goto CPyL153;
    }
    cpy_r_r58 = PyObject_IsInstance(cpy_r_number, cpy_r_r57);
    CPy_DECREF(cpy_r_r57);
    cpy_r_r59 = cpy_r_r58 >= 0;
    if (unlikely(!cpy_r_r59)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", 85, CPyStatic_currency___globals);
        goto CPyL153;
    }
    cpy_r_r60 = cpy_r_r58;
    if (!cpy_r_r60) goto CPyL158;
    CPy_INCREF(cpy_r_number);
    cpy_r_d_number = cpy_r_number;
    goto CPyL38;
CPyL34: ;
    cpy_r_r61 = CPyStatics[124]; /* ('Unsupported type. Must be one of integer, float, or '
                                    'string') */
    cpy_r_r62 = CPyModule_builtins;
    cpy_r_r63 = CPyStatics[6]; /* 'TypeError' */
    cpy_r_r64 = CPyObject_GetAttr(cpy_r_r62, cpy_r_r63);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", 88, CPyStatic_currency___globals);
        goto CPyL152;
    }
    PyObject *cpy_r_r65[1] = {cpy_r_r61};
    cpy_r_r66 = (PyObject **)&cpy_r_r65;
    cpy_r_r67 = PyObject_Vectorcall(cpy_r_r64, cpy_r_r66, 1, 0);
    CPy_DECREF(cpy_r_r64);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", 88, CPyStatic_currency___globals);
        goto CPyL152;
    }
    CPy_Raise(cpy_r_r67);
    CPy_DECREF(cpy_r_r67);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", 88, CPyStatic_currency___globals);
        goto CPyL152;
    }
    CPy_Unreachable();
CPyL38: ;
    cpy_r_r68 = PyObject_Str(cpy_r_number);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", 90, CPyStatic_currency___globals);
        goto CPyL159;
    }
    cpy_r_r69 = CPyStatic_currency___globals;
    cpy_r_r70 = CPyStatics[90]; /* 'units' */
    cpy_r_r71 = CPyDict_GetItem(cpy_r_r69, cpy_r_r70);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", 91, CPyStatic_currency___globals);
        goto CPyL160;
    }
    if (likely(PyDict_Check(cpy_r_r71)))
        cpy_r_r72 = cpy_r_r71;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/currency.py", "to_wei", 91, CPyStatic_currency___globals, "dict", cpy_r_r71);
        goto CPyL160;
    }
    cpy_r_r73 = CPyStatics[25]; /* 'lower' */
    PyObject *cpy_r_r74[1] = {cpy_r_unit};
    cpy_r_r75 = (PyObject **)&cpy_r_r74;
    cpy_r_r76 = PyObject_VectorcallMethod(cpy_r_r73, cpy_r_r75, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", 91, CPyStatic_currency___globals);
        goto CPyL161;
    }
    if (likely(PyUnicode_Check(cpy_r_r76)))
        cpy_r_r77 = cpy_r_r76;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/currency.py", "to_wei", 91, CPyStatic_currency___globals, "str", cpy_r_r76);
        goto CPyL161;
    }
    cpy_r_r78 = CPyDict_GetItem(cpy_r_r72, cpy_r_r77);
    CPy_DECREF(cpy_r_r72);
    CPy_DECREF(cpy_r_r77);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", 91, CPyStatic_currency___globals);
        goto CPyL160;
    }
    cpy_r_unit_value = cpy_r_r78;
    cpy_r_r79 = CPyModule_decimal;
    cpy_r_r80 = CPyStatics[121]; /* 'Decimal' */
    cpy_r_r81 = CPyObject_GetAttr(cpy_r_r79, cpy_r_r80);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", 93, CPyStatic_currency___globals);
        goto CPyL162;
    }
    cpy_r_r82 = CPyStatics[265]; /* 0 */
    PyObject *cpy_r_r83[1] = {cpy_r_r82};
    cpy_r_r84 = (PyObject **)&cpy_r_r83;
    cpy_r_r85 = PyObject_Vectorcall(cpy_r_r81, cpy_r_r84, 1, 0);
    CPy_DECREF(cpy_r_r81);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", 93, CPyStatic_currency___globals);
        goto CPyL162;
    }
    cpy_r_r86 = PyObject_RichCompare(cpy_r_d_number, cpy_r_r85, 2);
    CPy_DECREF(cpy_r_r85);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", 93, CPyStatic_currency___globals);
        goto CPyL162;
    }
    if (unlikely(!PyBool_Check(cpy_r_r86))) {
        CPy_TypeError("bool", cpy_r_r86); cpy_r_r87 = 2;
    } else
        cpy_r_r87 = cpy_r_r86 == Py_True;
    CPy_DECREF(cpy_r_r86);
    if (unlikely(cpy_r_r87 == 2)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", 93, CPyStatic_currency___globals);
        goto CPyL162;
    }
    if (cpy_r_r87) {
        goto CPyL163;
    } else
        goto CPyL50;
CPyL49: ;
    return 0;
CPyL50: ;
    cpy_r_r88 = CPyStatics[268]; /* 1 */
    cpy_r_r89 = PyObject_RichCompare(cpy_r_d_number, cpy_r_r88, 0);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", 96, CPyStatic_currency___globals);
        goto CPyL162;
    }
    if (unlikely(!PyBool_Check(cpy_r_r89))) {
        CPy_TypeError("bool", cpy_r_r89); cpy_r_r90 = 2;
    } else
        cpy_r_r90 = cpy_r_r89 == Py_True;
    CPy_DECREF(cpy_r_r89);
    if (unlikely(cpy_r_r90 == 2)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", 96, CPyStatic_currency___globals);
        goto CPyL162;
    }
    if (!cpy_r_r90) goto CPyL164;
    cpy_r_r91 = CPyStatics[125]; /* '.' */
    cpy_r_r92 = PyUnicode_Contains(cpy_r_r68, cpy_r_r91);
    cpy_r_r93 = cpy_r_r92 >= 0;
    if (unlikely(!cpy_r_r93)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", 96, CPyStatic_currency___globals);
        goto CPyL162;
    }
    cpy_r_r94 = cpy_r_r92;
    if (!cpy_r_r94) goto CPyL164;
    cpy_r_r95 = CPyStatic_currency___globals;
    cpy_r_r96 = CPyStatics[117]; /* 'localcontext' */
    cpy_r_r97 = CPyDict_GetItem(cpy_r_r95, cpy_r_r96);
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", 97, CPyStatic_currency___globals);
        goto CPyL162;
    }
    cpy_r_r98 = PyObject_Vectorcall(cpy_r_r97, 0, 0, 0);
    CPy_DECREF(cpy_r_r97);
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", 97, CPyStatic_currency___globals);
        goto CPyL162;
    }
    cpy_r_r99 = PyObject_Type(cpy_r_r98);
    cpy_r_r100 = CPyStatics[118]; /* '__exit__' */
    cpy_r_r101 = CPyObject_GetAttr(cpy_r_r99, cpy_r_r100);
    if (unlikely(cpy_r_r101 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", 97, CPyStatic_currency___globals);
        goto CPyL165;
    }
    cpy_r_r102 = CPyStatics[119]; /* '__enter__' */
    cpy_r_r103 = CPyObject_GetAttr(cpy_r_r99, cpy_r_r102);
    CPy_DECREF(cpy_r_r99);
    if (unlikely(cpy_r_r103 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", 97, CPyStatic_currency___globals);
        goto CPyL166;
    }
    PyObject *cpy_r_r104[1] = {cpy_r_r98};
    cpy_r_r105 = (PyObject **)&cpy_r_r104;
    cpy_r_r106 = PyObject_Vectorcall(cpy_r_r103, cpy_r_r105, 1, 0);
    CPy_DECREF(cpy_r_r103);
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", 97, CPyStatic_currency___globals);
        goto CPyL166;
    }
    cpy_r_r107 = 1;
    cpy_r_r108 = CPyStr_Size_size_t(cpy_r_r68);
    cpy_r_r109 = cpy_r_r108 >= 0;
    if (unlikely(!cpy_r_r109)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", 98, CPyStatic_currency___globals);
        goto CPyL167;
    }
    cpy_r_r110 = cpy_r_r108 << 1;
    cpy_r_r111 = CPyStatics[125]; /* '.' */
    cpy_r_r112 = CPyStatics[126]; /* 'index' */
    PyObject *cpy_r_r113[2] = {cpy_r_r68, cpy_r_r111};
    cpy_r_r114 = (PyObject **)&cpy_r_r113;
    cpy_r_r115 = PyObject_VectorcallMethod(cpy_r_r112, cpy_r_r114, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r115 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", 98, CPyStatic_currency___globals);
        goto CPyL167;
    }
    CPy_DECREF(cpy_r_r68);
    if (likely(PyLong_Check(cpy_r_r115)))
        cpy_r_r116 = CPyTagged_FromObject(cpy_r_r115);
    else {
        CPy_TypeError("int", cpy_r_r115); cpy_r_r116 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r115);
    if (unlikely(cpy_r_r116 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", 98, CPyStatic_currency___globals);
        goto CPyL168;
    } else
        goto CPyL169;
CPyL64: ;
    cpy_r_r117 = CPyTagged_Subtract(cpy_r_r110, cpy_r_r116);
    CPyTagged_DECREF(cpy_r_r116);
    cpy_r_r118 = CPyTagged_Subtract(cpy_r_r117, 2);
    CPyTagged_DECREF(cpy_r_r117);
    cpy_r_multiplier = cpy_r_r118;
    cpy_r_r119 = CPyStatics[120]; /* 'prec' */
    CPyTagged_INCREF(cpy_r_multiplier);
    cpy_r_r120 = CPyTagged_StealAsObject(cpy_r_multiplier);
    cpy_r_r121 = PyObject_SetAttr(cpy_r_r106, cpy_r_r119, cpy_r_r120);
    CPy_DECREF(cpy_r_r120);
    cpy_r_r122 = cpy_r_r121 >= 0;
    if (unlikely(!cpy_r_r122)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", 99, CPyStatic_currency___globals);
        goto CPyL168;
    }
    cpy_r_r123 = CPyModule_decimal;
    cpy_r_r124 = CPyStatics[121]; /* 'Decimal' */
    cpy_r_r125 = CPyObject_GetAttr(cpy_r_r123, cpy_r_r124);
    if (unlikely(cpy_r_r125 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", 100, CPyStatic_currency___globals);
        goto CPyL168;
    }
    PyObject *cpy_r_r126[2] = {cpy_r_number, cpy_r_r106};
    cpy_r_r127 = (PyObject **)&cpy_r_r126;
    cpy_r_r128 = CPyStatics[295]; /* ('value', 'context') */
    cpy_r_r129 = PyObject_Vectorcall(cpy_r_r125, cpy_r_r127, 0, cpy_r_r128);
    CPy_DECREF(cpy_r_r125);
    if (unlikely(cpy_r_r129 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", 100, CPyStatic_currency___globals);
        goto CPyL168;
    }
    CPy_DECREF(cpy_r_r106);
    cpy_r_r130 = CPyStatics[269]; /* 10 */
    CPyTagged_INCREF(cpy_r_multiplier);
    cpy_r_r131 = CPyTagged_StealAsObject(cpy_r_multiplier);
    cpy_r_r132 = CPyNumber_Power(cpy_r_r130, cpy_r_r131);
    CPy_DECREF(cpy_r_r131);
    if (unlikely(cpy_r_r132 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", 100, CPyStatic_currency___globals);
        goto CPyL170;
    }
    cpy_r_r133 = PyNumber_Multiply(cpy_r_r129, cpy_r_r132);
    CPy_DECREF(cpy_r_r129);
    CPy_DECREF(cpy_r_r132);
    if (unlikely(cpy_r_r133 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", 100, CPyStatic_currency___globals);
        goto CPyL70;
    } else
        goto CPyL171;
CPyL69: ;
    cpy_r_d_number = cpy_r_r133;
    goto CPyL78;
CPyL70: ;
    cpy_r_r134 = CPy_CatchError();
    cpy_r_r107 = 0;
    cpy_r_r135 = CPy_GetExcInfo();
    cpy_r_r136 = cpy_r_r135.f0;
    CPy_INCREF(cpy_r_r136);
    cpy_r_r137 = cpy_r_r135.f1;
    CPy_INCREF(cpy_r_r137);
    cpy_r_r138 = cpy_r_r135.f2;
    CPy_INCREF(cpy_r_r138);
    CPy_DecRef(cpy_r_r135.f0);
    CPy_DecRef(cpy_r_r135.f1);
    CPy_DecRef(cpy_r_r135.f2);
    PyObject *cpy_r_r139[4] = {cpy_r_r98, cpy_r_r136, cpy_r_r137, cpy_r_r138};
    cpy_r_r140 = (PyObject **)&cpy_r_r139;
    cpy_r_r141 = PyObject_Vectorcall(cpy_r_r101, cpy_r_r140, 4, 0);
    if (unlikely(cpy_r_r141 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", 97, CPyStatic_currency___globals);
        goto CPyL172;
    }
    CPy_DecRef(cpy_r_r136);
    CPy_DecRef(cpy_r_r137);
    CPy_DecRef(cpy_r_r138);
    cpy_r_r142 = PyObject_IsTrue(cpy_r_r141);
    CPy_DecRef(cpy_r_r141);
    cpy_r_r143 = cpy_r_r142 >= 0;
    if (unlikely(!cpy_r_r143)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", 97, CPyStatic_currency___globals);
        goto CPyL76;
    }
    cpy_r_r144 = cpy_r_r142;
    if (cpy_r_r144) goto CPyL75;
    CPy_Reraise();
    if (!0) {
        goto CPyL76;
    } else
        goto CPyL173;
CPyL74: ;
    CPy_Unreachable();
CPyL75: ;
    CPy_RestoreExcInfo(cpy_r_r134);
    CPy_DecRef(cpy_r_r134.f0);
    CPy_DecRef(cpy_r_r134.f1);
    CPy_DecRef(cpy_r_r134.f2);
    goto CPyL78;
CPyL76: ;
    CPy_RestoreExcInfo(cpy_r_r134);
    CPy_DecRef(cpy_r_r134.f0);
    CPy_DecRef(cpy_r_r134.f1);
    CPy_DecRef(cpy_r_r134.f2);
    cpy_r_r145 = CPy_KeepPropagating();
    if (!cpy_r_r145) {
        goto CPyL79;
    } else
        goto CPyL174;
CPyL77: ;
    CPy_Unreachable();
CPyL78: ;
    tuple_T3OOO __tmp38 = { NULL, NULL, NULL };
    cpy_r_r146 = __tmp38;
    cpy_r_r147 = cpy_r_r146;
    goto CPyL80;
CPyL79: ;
    cpy_r_r148 = CPy_CatchError();
    cpy_r_r147 = cpy_r_r148;
CPyL80: ;
    if (!cpy_r_r107) goto CPyL175;
    cpy_r_r149 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r150[4] = {cpy_r_r98, cpy_r_r149, cpy_r_r149, cpy_r_r149};
    cpy_r_r151 = (PyObject **)&cpy_r_r150;
    cpy_r_r152 = PyObject_Vectorcall(cpy_r_r101, cpy_r_r151, 4, 0);
    CPy_DECREF(cpy_r_r101);
    if (unlikely(cpy_r_r152 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", 97, CPyStatic_currency___globals);
        goto CPyL176;
    } else
        goto CPyL177;
CPyL82: ;
    CPy_DECREF(cpy_r_r98);
CPyL83: ;
    if (cpy_r_r147.f0 == NULL) {
        goto CPyL90;
    } else
        goto CPyL178;
CPyL84: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL86;
    } else
        goto CPyL179;
CPyL85: ;
    CPy_Unreachable();
CPyL86: ;
    if (cpy_r_r147.f0 == NULL) goto CPyL88;
    CPy_RestoreExcInfo(cpy_r_r147);
    CPy_XDECREF(cpy_r_r147.f0);
    CPy_XDECREF(cpy_r_r147.f1);
    CPy_XDECREF(cpy_r_r147.f2);
CPyL88: ;
    cpy_r_r153 = CPy_KeepPropagating();
    if (!cpy_r_r153) goto CPyL152;
    CPy_Unreachable();
CPyL90: ;
    cpy_r_r154 = CPyStatics[269]; /* 10 */
    if (cpy_r_multiplier == CPY_INT_TAG) {
        goto CPyL180;
    } else
        goto CPyL93;
CPyL91: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"multiplier\" referenced before assignment");
    cpy_r_r155 = 0;
    if (unlikely(!cpy_r_r155)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", -1, CPyStatic_currency___globals);
        goto CPyL152;
    }
    CPy_Unreachable();
CPyL93: ;
    cpy_r_r156 = CPyTagged_StealAsObject(cpy_r_multiplier);
    cpy_r_r157 = CPyNumber_Power(cpy_r_r154, cpy_r_r156);
    CPy_DECREF(cpy_r_r156);
    if (unlikely(cpy_r_r157 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", 101, CPyStatic_currency___globals);
        goto CPyL181;
    }
    cpy_r_r158 = PyNumber_InPlaceTrueDivide(cpy_r_unit_value, cpy_r_r157);
    CPy_DECREF(cpy_r_unit_value);
    CPy_DECREF(cpy_r_r157);
    if (unlikely(cpy_r_r158 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", 101, CPyStatic_currency___globals);
        goto CPyL182;
    }
    cpy_r_unit_value = cpy_r_r158;
CPyL96: ;
    cpy_r_r159 = CPyStatic_currency___globals;
    cpy_r_r160 = CPyStatics[117]; /* 'localcontext' */
    cpy_r_r161 = CPyDict_GetItem(cpy_r_r159, cpy_r_r160);
    if (unlikely(cpy_r_r161 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", 103, CPyStatic_currency___globals);
        goto CPyL181;
    }
    cpy_r_r162 = PyObject_Vectorcall(cpy_r_r161, 0, 0, 0);
    CPy_DECREF(cpy_r_r161);
    if (unlikely(cpy_r_r162 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", 103, CPyStatic_currency___globals);
        goto CPyL181;
    }
    cpy_r_r163 = PyObject_Type(cpy_r_r162);
    cpy_r_r164 = CPyStatics[118]; /* '__exit__' */
    cpy_r_r165 = CPyObject_GetAttr(cpy_r_r163, cpy_r_r164);
    if (unlikely(cpy_r_r165 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", 103, CPyStatic_currency___globals);
        goto CPyL183;
    }
    cpy_r_r166 = CPyStatics[119]; /* '__enter__' */
    cpy_r_r167 = CPyObject_GetAttr(cpy_r_r163, cpy_r_r166);
    CPy_DECREF(cpy_r_r163);
    if (unlikely(cpy_r_r167 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", 103, CPyStatic_currency___globals);
        goto CPyL184;
    }
    PyObject *cpy_r_r168[1] = {cpy_r_r162};
    cpy_r_r169 = (PyObject **)&cpy_r_r168;
    cpy_r_r170 = PyObject_Vectorcall(cpy_r_r167, cpy_r_r169, 1, 0);
    CPy_DECREF(cpy_r_r167);
    if (unlikely(cpy_r_r170 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", 103, CPyStatic_currency___globals);
        goto CPyL184;
    }
    cpy_r_r171 = 1;
    cpy_r_r172 = CPyStatics[120]; /* 'prec' */
    cpy_r_r173 = CPyStatics[267]; /* 999 */
    cpy_r_r174 = PyObject_SetAttr(cpy_r_r170, cpy_r_r172, cpy_r_r173);
    cpy_r_r175 = cpy_r_r174 >= 0;
    if (unlikely(!cpy_r_r175)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", 104, CPyStatic_currency___globals);
        goto CPyL185;
    }
    cpy_r_r176 = CPyModule_decimal;
    cpy_r_r177 = CPyStatics[121]; /* 'Decimal' */
    cpy_r_r178 = CPyObject_GetAttr(cpy_r_r176, cpy_r_r177);
    if (unlikely(cpy_r_r178 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", 105, CPyStatic_currency___globals);
        goto CPyL185;
    }
    PyObject *cpy_r_r179[2] = {cpy_r_d_number, cpy_r_r170};
    cpy_r_r180 = (PyObject **)&cpy_r_r179;
    cpy_r_r181 = CPyStatics[295]; /* ('value', 'context') */
    cpy_r_r182 = PyObject_Vectorcall(cpy_r_r178, cpy_r_r180, 0, cpy_r_r181);
    CPy_DECREF(cpy_r_r178);
    if (unlikely(cpy_r_r182 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", 105, CPyStatic_currency___globals);
        goto CPyL185;
    }
    CPy_DECREF(cpy_r_d_number);
    CPy_DECREF(cpy_r_r170);
    cpy_r_r183 = PyNumber_Multiply(cpy_r_r182, cpy_r_unit_value);
    CPy_DECREF(cpy_r_r182);
    CPy_DECREF(cpy_r_unit_value);
    if (unlikely(cpy_r_r183 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", 105, CPyStatic_currency___globals);
        goto CPyL107;
    } else
        goto CPyL186;
CPyL106: ;
    cpy_r_result_value = cpy_r_r183;
    goto CPyL115;
CPyL107: ;
    cpy_r_r184 = CPy_CatchError();
    cpy_r_r171 = 0;
    cpy_r_r185 = CPy_GetExcInfo();
    cpy_r_r186 = cpy_r_r185.f0;
    CPy_INCREF(cpy_r_r186);
    cpy_r_r187 = cpy_r_r185.f1;
    CPy_INCREF(cpy_r_r187);
    cpy_r_r188 = cpy_r_r185.f2;
    CPy_INCREF(cpy_r_r188);
    CPy_DecRef(cpy_r_r185.f0);
    CPy_DecRef(cpy_r_r185.f1);
    CPy_DecRef(cpy_r_r185.f2);
    PyObject *cpy_r_r189[4] = {cpy_r_r162, cpy_r_r186, cpy_r_r187, cpy_r_r188};
    cpy_r_r190 = (PyObject **)&cpy_r_r189;
    cpy_r_r191 = PyObject_Vectorcall(cpy_r_r165, cpy_r_r190, 4, 0);
    if (unlikely(cpy_r_r191 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", 103, CPyStatic_currency___globals);
        goto CPyL187;
    }
    CPy_DecRef(cpy_r_r186);
    CPy_DecRef(cpy_r_r187);
    CPy_DecRef(cpy_r_r188);
    cpy_r_r192 = PyObject_IsTrue(cpy_r_r191);
    CPy_DecRef(cpy_r_r191);
    cpy_r_r193 = cpy_r_r192 >= 0;
    if (unlikely(!cpy_r_r193)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", 103, CPyStatic_currency___globals);
        goto CPyL113;
    }
    cpy_r_r194 = cpy_r_r192;
    if (cpy_r_r194) goto CPyL112;
    CPy_Reraise();
    if (!0) {
        goto CPyL113;
    } else
        goto CPyL188;
CPyL111: ;
    CPy_Unreachable();
CPyL112: ;
    CPy_RestoreExcInfo(cpy_r_r184);
    CPy_DecRef(cpy_r_r184.f0);
    CPy_DecRef(cpy_r_r184.f1);
    CPy_DecRef(cpy_r_r184.f2);
    goto CPyL115;
CPyL113: ;
    CPy_RestoreExcInfo(cpy_r_r184);
    CPy_DecRef(cpy_r_r184.f0);
    CPy_DecRef(cpy_r_r184.f1);
    CPy_DecRef(cpy_r_r184.f2);
    cpy_r_r195 = CPy_KeepPropagating();
    if (!cpy_r_r195) {
        goto CPyL116;
    } else
        goto CPyL189;
CPyL114: ;
    CPy_Unreachable();
CPyL115: ;
    tuple_T3OOO __tmp39 = { NULL, NULL, NULL };
    cpy_r_r196 = __tmp39;
    cpy_r_r197 = cpy_r_r196;
    goto CPyL117;
CPyL116: ;
    cpy_r_r198 = CPy_CatchError();
    cpy_r_r197 = cpy_r_r198;
CPyL117: ;
    if (!cpy_r_r171) goto CPyL190;
    cpy_r_r199 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r200[4] = {cpy_r_r162, cpy_r_r199, cpy_r_r199, cpy_r_r199};
    cpy_r_r201 = (PyObject **)&cpy_r_r200;
    cpy_r_r202 = PyObject_Vectorcall(cpy_r_r165, cpy_r_r201, 4, 0);
    CPy_DECREF(cpy_r_r165);
    if (unlikely(cpy_r_r202 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", 103, CPyStatic_currency___globals);
        goto CPyL191;
    } else
        goto CPyL192;
CPyL119: ;
    CPy_DECREF(cpy_r_r162);
CPyL120: ;
    if (cpy_r_r197.f0 == NULL) {
        goto CPyL127;
    } else
        goto CPyL193;
CPyL121: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL123;
    } else
        goto CPyL194;
CPyL122: ;
    CPy_Unreachable();
CPyL123: ;
    if (cpy_r_r197.f0 == NULL) goto CPyL125;
    CPy_RestoreExcInfo(cpy_r_r197);
    CPy_XDECREF(cpy_r_r197.f0);
    CPy_XDECREF(cpy_r_r197.f1);
    CPy_XDECREF(cpy_r_r197.f2);
CPyL125: ;
    cpy_r_r203 = CPy_KeepPropagating();
    if (!cpy_r_r203) goto CPyL152;
    CPy_Unreachable();
CPyL127: ;
    cpy_r_r204 = CPyStatics[265]; /* 0 */
    if (cpy_r_result_value != NULL) goto CPyL130;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"result_value\" referenced before assignment");
    cpy_r_r205 = 0;
    if (unlikely(!cpy_r_r205)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", 107, CPyStatic_currency___globals);
        goto CPyL152;
    }
    CPy_Unreachable();
CPyL130: ;
    cpy_r_r206 = PyObject_RichCompare(cpy_r_result_value, cpy_r_r204, 0);
    if (unlikely(cpy_r_r206 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", 107, CPyStatic_currency___globals);
        goto CPyL195;
    }
    if (unlikely(!PyBool_Check(cpy_r_r206))) {
        CPy_TypeError("bool", cpy_r_r206); cpy_r_r207 = 2;
    } else
        cpy_r_r207 = cpy_r_r206 == Py_True;
    CPy_DECREF(cpy_r_r206);
    if (unlikely(cpy_r_r207 == 2)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", 107, CPyStatic_currency___globals);
        goto CPyL195;
    }
    if (cpy_r_r207) goto CPyL196;
    cpy_r_r208 = (CPyTagged)CPyStatics[266] | 1; /* 115792089237316195423570985008687907853269984665640564039457584007913129639935 */
    CPyTagged_INCREF(cpy_r_r208);
    cpy_r_r209 = CPyTagged_StealAsObject(cpy_r_r208);
    if (cpy_r_result_value == NULL) {
        goto CPyL197;
    } else
        goto CPyL136;
CPyL134: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"result_value\" referenced before assignment");
    cpy_r_r210 = 0;
    if (unlikely(!cpy_r_r210)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", 107, CPyStatic_currency___globals);
        goto CPyL152;
    }
    CPy_Unreachable();
CPyL136: ;
    cpy_r_r211 = PyObject_RichCompare(cpy_r_result_value, cpy_r_r209, 4);
    CPy_DECREF(cpy_r_r209);
    if (unlikely(cpy_r_r211 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", 107, CPyStatic_currency___globals);
        goto CPyL195;
    }
    if (unlikely(!PyBool_Check(cpy_r_r211))) {
        CPy_TypeError("bool", cpy_r_r211); cpy_r_r212 = 2;
    } else
        cpy_r_r212 = cpy_r_r211 == Py_True;
    CPy_DECREF(cpy_r_r211);
    if (unlikely(cpy_r_r212 == 2)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", 107, CPyStatic_currency___globals);
        goto CPyL195;
    }
    if (cpy_r_r212) {
        goto CPyL196;
    } else
        goto CPyL143;
CPyL139: ;
    cpy_r_r213 = CPyStatics[127]; /* 'Resulting wei value must be between 1 and 2**256 - 1' */
    cpy_r_r214 = CPyModule_builtins;
    cpy_r_r215 = CPyStatics[30]; /* 'ValueError' */
    cpy_r_r216 = CPyObject_GetAttr(cpy_r_r214, cpy_r_r215);
    if (unlikely(cpy_r_r216 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", 108, CPyStatic_currency___globals);
        goto CPyL152;
    }
    PyObject *cpy_r_r217[1] = {cpy_r_r213};
    cpy_r_r218 = (PyObject **)&cpy_r_r217;
    cpy_r_r219 = PyObject_Vectorcall(cpy_r_r216, cpy_r_r218, 1, 0);
    CPy_DECREF(cpy_r_r216);
    if (unlikely(cpy_r_r219 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", 108, CPyStatic_currency___globals);
        goto CPyL152;
    }
    CPy_Raise(cpy_r_r219);
    CPy_DECREF(cpy_r_r219);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", 108, CPyStatic_currency___globals);
        goto CPyL152;
    }
    CPy_Unreachable();
CPyL143: ;
    cpy_r_r220 = (PyObject *)&PyLong_Type;
    if (cpy_r_result_value != NULL) goto CPyL146;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"result_value\" referenced before assignment");
    cpy_r_r221 = 0;
    if (unlikely(!cpy_r_r221)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", -1, CPyStatic_currency___globals);
        goto CPyL152;
    }
    CPy_Unreachable();
CPyL146: ;
    PyObject *cpy_r_r222[1] = {cpy_r_result_value};
    cpy_r_r223 = (PyObject **)&cpy_r_r222;
    cpy_r_r224 = PyObject_Vectorcall(cpy_r_r220, cpy_r_r223, 1, 0);
    if (unlikely(cpy_r_r224 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", 110, CPyStatic_currency___globals);
        goto CPyL195;
    }
    if (cpy_r_result_value == NULL) {
        goto CPyL198;
    } else
        goto CPyL150;
CPyL148: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"result_value\" referenced before assignment");
    cpy_r_r225 = 0;
    if (unlikely(!cpy_r_r225)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", -1, CPyStatic_currency___globals);
        goto CPyL152;
    }
    CPy_Unreachable();
CPyL150: ;
    CPy_XDECREF(cpy_r_result_value);
    if (likely(PyLong_Check(cpy_r_r224)))
        cpy_r_r226 = CPyTagged_FromObject(cpy_r_r224);
    else {
        CPy_TypeError("int", cpy_r_r224); cpy_r_r226 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r224);
    if (unlikely(cpy_r_r226 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", 110, CPyStatic_currency___globals);
        goto CPyL152;
    }
    return cpy_r_r226;
CPyL152: ;
    cpy_r_r227 = CPY_INT_TAG;
    return cpy_r_r227;
CPyL153: ;
    CPyTagged_XDecRef(cpy_r_multiplier);
    CPy_XDecRef(cpy_r_result_value);
    goto CPyL152;
CPyL154: ;
    CPyTagged_XDecRef(cpy_r_multiplier);
    CPy_XDecRef(cpy_r_result_value);
    CPy_DecRef(cpy_r_r6);
    goto CPyL152;
CPyL155: ;
    CPyTagged_XDECREF(cpy_r_multiplier);
    CPy_XDECREF(cpy_r_result_value);
    goto CPyL6;
CPyL156: ;
    CPy_DecRef(cpy_r_r23);
    goto CPyL152;
CPyL157: ;
    CPyTagged_XDecRef(cpy_r_multiplier);
    CPy_XDecRef(cpy_r_result_value);
    CPy_DecRef(cpy_r_r46);
    goto CPyL152;
CPyL158: ;
    CPyTagged_XDECREF(cpy_r_multiplier);
    CPy_XDECREF(cpy_r_result_value);
    goto CPyL34;
CPyL159: ;
    CPyTagged_XDecRef(cpy_r_multiplier);
    CPy_XDecRef(cpy_r_result_value);
    CPy_DecRef(cpy_r_d_number);
    goto CPyL152;
CPyL160: ;
    CPyTagged_XDecRef(cpy_r_multiplier);
    CPy_XDecRef(cpy_r_result_value);
    CPy_DecRef(cpy_r_d_number);
    CPy_DecRef(cpy_r_r68);
    goto CPyL152;
CPyL161: ;
    CPyTagged_XDecRef(cpy_r_multiplier);
    CPy_XDecRef(cpy_r_result_value);
    CPy_DecRef(cpy_r_d_number);
    CPy_DecRef(cpy_r_r68);
    CPy_DecRef(cpy_r_r72);
    goto CPyL152;
CPyL162: ;
    CPyTagged_XDecRef(cpy_r_multiplier);
    CPy_XDecRef(cpy_r_result_value);
    CPy_DecRef(cpy_r_d_number);
    CPy_DecRef(cpy_r_r68);
    CPy_DecRef(cpy_r_unit_value);
    goto CPyL152;
CPyL163: ;
    CPyTagged_XDECREF(cpy_r_multiplier);
    CPy_XDECREF(cpy_r_result_value);
    CPy_DECREF(cpy_r_d_number);
    CPy_DECREF(cpy_r_r68);
    CPy_DECREF(cpy_r_unit_value);
    goto CPyL49;
CPyL164: ;
    CPyTagged_XDECREF(cpy_r_multiplier);
    CPy_DECREF(cpy_r_r68);
    goto CPyL96;
CPyL165: ;
    CPyTagged_XDecRef(cpy_r_multiplier);
    CPy_XDecRef(cpy_r_result_value);
    CPy_DecRef(cpy_r_d_number);
    CPy_DecRef(cpy_r_r68);
    CPy_DecRef(cpy_r_unit_value);
    CPy_DecRef(cpy_r_r98);
    CPy_DecRef(cpy_r_r99);
    goto CPyL152;
CPyL166: ;
    CPyTagged_XDecRef(cpy_r_multiplier);
    CPy_XDecRef(cpy_r_result_value);
    CPy_DecRef(cpy_r_d_number);
    CPy_DecRef(cpy_r_r68);
    CPy_DecRef(cpy_r_unit_value);
    CPy_DecRef(cpy_r_r98);
    CPy_DecRef(cpy_r_r101);
    goto CPyL152;
CPyL167: ;
    CPy_DecRef(cpy_r_r68);
    CPy_DecRef(cpy_r_r106);
    goto CPyL70;
CPyL168: ;
    CPy_DecRef(cpy_r_r106);
    goto CPyL70;
CPyL169: ;
    CPyTagged_XDECREF(cpy_r_multiplier);
    goto CPyL64;
CPyL170: ;
    CPy_DecRef(cpy_r_r129);
    goto CPyL70;
CPyL171: ;
    CPy_DECREF(cpy_r_d_number);
    goto CPyL69;
CPyL172: ;
    CPy_DecRef(cpy_r_r136);
    CPy_DecRef(cpy_r_r137);
    CPy_DecRef(cpy_r_r138);
    goto CPyL76;
CPyL173: ;
    CPyTagged_XDecRef(cpy_r_multiplier);
    CPy_XDecRef(cpy_r_result_value);
    CPy_DecRef(cpy_r_d_number);
    CPy_DecRef(cpy_r_unit_value);
    CPy_DecRef(cpy_r_r98);
    CPy_DecRef(cpy_r_r101);
    CPy_DecRef(cpy_r_r134.f0);
    CPy_DecRef(cpy_r_r134.f1);
    CPy_DecRef(cpy_r_r134.f2);
    goto CPyL74;
CPyL174: ;
    CPyTagged_XDecRef(cpy_r_multiplier);
    CPy_XDecRef(cpy_r_result_value);
    CPy_DecRef(cpy_r_d_number);
    CPy_DecRef(cpy_r_unit_value);
    CPy_DecRef(cpy_r_r98);
    CPy_DecRef(cpy_r_r101);
    goto CPyL77;
CPyL175: ;
    CPy_DECREF(cpy_r_r98);
    CPy_DECREF(cpy_r_r101);
    goto CPyL83;
CPyL176: ;
    CPyTagged_XDecRef(cpy_r_multiplier);
    CPy_XDecRef(cpy_r_result_value);
    CPy_DecRef(cpy_r_d_number);
    CPy_DecRef(cpy_r_unit_value);
    CPy_DecRef(cpy_r_r98);
    goto CPyL86;
CPyL177: ;
    CPy_DECREF(cpy_r_r152);
    goto CPyL82;
CPyL178: ;
    CPyTagged_XDECREF(cpy_r_multiplier);
    CPy_XDECREF(cpy_r_result_value);
    CPy_DECREF(cpy_r_d_number);
    CPy_DECREF(cpy_r_unit_value);
    goto CPyL84;
CPyL179: ;
    CPy_XDECREF(cpy_r_r147.f0);
    CPy_XDECREF(cpy_r_r147.f1);
    CPy_XDECREF(cpy_r_r147.f2);
    goto CPyL85;
CPyL180: ;
    CPy_XDECREF(cpy_r_result_value);
    CPy_DECREF(cpy_r_d_number);
    CPy_DECREF(cpy_r_unit_value);
    goto CPyL91;
CPyL181: ;
    CPy_XDecRef(cpy_r_result_value);
    CPy_DecRef(cpy_r_d_number);
    CPy_DecRef(cpy_r_unit_value);
    goto CPyL152;
CPyL182: ;
    CPy_XDecRef(cpy_r_result_value);
    CPy_DecRef(cpy_r_d_number);
    goto CPyL152;
CPyL183: ;
    CPy_XDecRef(cpy_r_result_value);
    CPy_DecRef(cpy_r_d_number);
    CPy_DecRef(cpy_r_unit_value);
    CPy_DecRef(cpy_r_r162);
    CPy_DecRef(cpy_r_r163);
    goto CPyL152;
CPyL184: ;
    CPy_XDecRef(cpy_r_result_value);
    CPy_DecRef(cpy_r_d_number);
    CPy_DecRef(cpy_r_unit_value);
    CPy_DecRef(cpy_r_r162);
    CPy_DecRef(cpy_r_r165);
    goto CPyL152;
CPyL185: ;
    CPy_DecRef(cpy_r_d_number);
    CPy_DecRef(cpy_r_unit_value);
    CPy_DecRef(cpy_r_r170);
    goto CPyL107;
CPyL186: ;
    CPy_XDECREF(cpy_r_result_value);
    goto CPyL106;
CPyL187: ;
    CPy_DecRef(cpy_r_r186);
    CPy_DecRef(cpy_r_r187);
    CPy_DecRef(cpy_r_r188);
    goto CPyL113;
CPyL188: ;
    CPy_XDecRef(cpy_r_result_value);
    CPy_DecRef(cpy_r_r162);
    CPy_DecRef(cpy_r_r165);
    CPy_DecRef(cpy_r_r184.f0);
    CPy_DecRef(cpy_r_r184.f1);
    CPy_DecRef(cpy_r_r184.f2);
    goto CPyL111;
CPyL189: ;
    CPy_XDecRef(cpy_r_result_value);
    CPy_DecRef(cpy_r_r162);
    CPy_DecRef(cpy_r_r165);
    goto CPyL114;
CPyL190: ;
    CPy_DECREF(cpy_r_r162);
    CPy_DECREF(cpy_r_r165);
    goto CPyL120;
CPyL191: ;
    CPy_XDecRef(cpy_r_result_value);
    CPy_DecRef(cpy_r_r162);
    goto CPyL123;
CPyL192: ;
    CPy_DECREF(cpy_r_r202);
    goto CPyL119;
CPyL193: ;
    CPy_XDECREF(cpy_r_result_value);
    goto CPyL121;
CPyL194: ;
    CPy_XDECREF(cpy_r_r197.f0);
    CPy_XDECREF(cpy_r_r197.f1);
    CPy_XDECREF(cpy_r_r197.f2);
    goto CPyL122;
CPyL195: ;
    CPy_XDecRef(cpy_r_result_value);
    goto CPyL152;
CPyL196: ;
    CPy_XDECREF(cpy_r_result_value);
    goto CPyL139;
CPyL197: ;
    CPy_DECREF(cpy_r_r209);
    goto CPyL134;
CPyL198: ;
    CPy_DECREF(cpy_r_r224);
    goto CPyL148;
}

PyObject *CPyPy_currency___to_wei(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"number", "unit", 0};
    static CPyArg_Parser parser = {"OO:to_wei", kwlist, 0};
    PyObject *obj_number;
    PyObject *obj_unit;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_number, &obj_unit)) {
        return NULL;
    }
    PyObject *arg_number;
    if (PyLong_Check(obj_number))
        arg_number = obj_number;
    else {
        arg_number = NULL;
    }
    if (arg_number != NULL) goto __LL40;
    if (CPyFloat_Check(obj_number))
        arg_number = obj_number;
    else {
        arg_number = NULL;
    }
    if (arg_number != NULL) goto __LL40;
    if (PyUnicode_Check(obj_number))
        arg_number = obj_number;
    else {
        arg_number = NULL;
    }
    if (arg_number != NULL) goto __LL40;
    arg_number = obj_number;
    if (arg_number != NULL) goto __LL40;
    CPy_TypeError("union[int, float, str, object]", obj_number); 
    goto fail;
__LL40: ;
    PyObject *arg_unit;
    if (likely(PyUnicode_Check(obj_unit)))
        arg_unit = obj_unit;
    else {
        CPy_TypeError("str", obj_unit); 
        goto fail;
    }
    CPyTagged retval = CPyDef_currency___to_wei(arg_number, arg_unit);
    if (retval == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = CPyTagged_StealAsObject(retval);
    return retbox;
fail: ;
    CPy_AddTraceback("faster_eth_utils/currency.py", "to_wei", 74, CPyStatic_currency___globals);
    return NULL;
}

char CPyDef_currency_____top_level__(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject **cpy_r_r5;
    void *cpy_r_r7;
    void *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    int32_t cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    int32_t cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject **cpy_r_r76;
    PyObject *cpy_r_r77;
    CPyTagged cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    int32_t cpy_r_r81;
    char cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject **cpy_r_r92;
    PyObject *cpy_r_r93;
    CPyTagged cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    int32_t cpy_r_r97;
    char cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject **cpy_r_r108;
    PyObject *cpy_r_r109;
    CPyTagged cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    int32_t cpy_r_r113;
    char cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject **cpy_r_r124;
    PyObject *cpy_r_r125;
    CPyTagged cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    int32_t cpy_r_r129;
    char cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject **cpy_r_r140;
    PyObject *cpy_r_r141;
    CPyTagged cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    int32_t cpy_r_r145;
    char cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject **cpy_r_r156;
    PyObject *cpy_r_r157;
    CPyTagged cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    int32_t cpy_r_r161;
    char cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    PyObject *cpy_r_r166;
    PyObject *cpy_r_r167;
    PyObject *cpy_r_r168;
    PyObject *cpy_r_r169;
    PyObject *cpy_r_r170;
    PyObject **cpy_r_r172;
    PyObject *cpy_r_r173;
    CPyTagged cpy_r_r174;
    PyObject *cpy_r_r175;
    PyObject *cpy_r_r176;
    int32_t cpy_r_r177;
    char cpy_r_r178;
    PyObject *cpy_r_r179;
    PyObject *cpy_r_r180;
    PyObject *cpy_r_r181;
    PyObject *cpy_r_r182;
    PyObject *cpy_r_r183;
    PyObject *cpy_r_r184;
    PyObject *cpy_r_r185;
    PyObject *cpy_r_r186;
    PyObject **cpy_r_r188;
    PyObject *cpy_r_r189;
    CPyTagged cpy_r_r190;
    PyObject *cpy_r_r191;
    PyObject *cpy_r_r192;
    int32_t cpy_r_r193;
    char cpy_r_r194;
    PyObject *cpy_r_r195;
    PyObject *cpy_r_r196;
    PyObject *cpy_r_r197;
    PyObject *cpy_r_r198;
    PyObject *cpy_r_r199;
    PyObject *cpy_r_r200;
    PyObject *cpy_r_r201;
    PyObject *cpy_r_r202;
    PyObject **cpy_r_r204;
    PyObject *cpy_r_r205;
    CPyTagged cpy_r_r206;
    PyObject *cpy_r_r207;
    PyObject *cpy_r_r208;
    int32_t cpy_r_r209;
    char cpy_r_r210;
    PyObject *cpy_r_r211;
    PyObject *cpy_r_r212;
    PyObject *cpy_r_r213;
    PyObject *cpy_r_r214;
    PyObject *cpy_r_r215;
    PyObject *cpy_r_r216;
    PyObject *cpy_r_r217;
    PyObject *cpy_r_r218;
    PyObject **cpy_r_r220;
    PyObject *cpy_r_r221;
    CPyTagged cpy_r_r222;
    PyObject *cpy_r_r223;
    PyObject *cpy_r_r224;
    int32_t cpy_r_r225;
    char cpy_r_r226;
    PyObject *cpy_r_r227;
    PyObject *cpy_r_r228;
    PyObject *cpy_r_r229;
    PyObject *cpy_r_r230;
    PyObject *cpy_r_r231;
    PyObject *cpy_r_r232;
    PyObject *cpy_r_r233;
    PyObject *cpy_r_r234;
    PyObject **cpy_r_r236;
    PyObject *cpy_r_r237;
    CPyTagged cpy_r_r238;
    PyObject *cpy_r_r239;
    PyObject *cpy_r_r240;
    int32_t cpy_r_r241;
    char cpy_r_r242;
    PyObject *cpy_r_r243;
    PyObject *cpy_r_r244;
    PyObject *cpy_r_r245;
    PyObject *cpy_r_r246;
    PyObject *cpy_r_r247;
    PyObject *cpy_r_r248;
    PyObject *cpy_r_r249;
    PyObject *cpy_r_r250;
    PyObject **cpy_r_r252;
    PyObject *cpy_r_r253;
    CPyTagged cpy_r_r254;
    PyObject *cpy_r_r255;
    PyObject *cpy_r_r256;
    int32_t cpy_r_r257;
    char cpy_r_r258;
    PyObject *cpy_r_r259;
    PyObject *cpy_r_r260;
    PyObject *cpy_r_r261;
    PyObject *cpy_r_r262;
    PyObject *cpy_r_r263;
    PyObject *cpy_r_r264;
    PyObject *cpy_r_r265;
    PyObject *cpy_r_r266;
    PyObject **cpy_r_r268;
    PyObject *cpy_r_r269;
    CPyTagged cpy_r_r270;
    PyObject *cpy_r_r271;
    PyObject *cpy_r_r272;
    int32_t cpy_r_r273;
    char cpy_r_r274;
    PyObject *cpy_r_r275;
    PyObject *cpy_r_r276;
    PyObject *cpy_r_r277;
    PyObject *cpy_r_r278;
    PyObject *cpy_r_r279;
    PyObject *cpy_r_r280;
    PyObject *cpy_r_r281;
    PyObject *cpy_r_r282;
    PyObject **cpy_r_r284;
    PyObject *cpy_r_r285;
    CPyTagged cpy_r_r286;
    PyObject *cpy_r_r287;
    PyObject *cpy_r_r288;
    int32_t cpy_r_r289;
    char cpy_r_r290;
    PyObject *cpy_r_r291;
    PyObject *cpy_r_r292;
    PyObject *cpy_r_r293;
    PyObject *cpy_r_r294;
    PyObject *cpy_r_r295;
    PyObject *cpy_r_r296;
    PyObject *cpy_r_r297;
    PyObject *cpy_r_r298;
    PyObject **cpy_r_r300;
    PyObject *cpy_r_r301;
    CPyTagged cpy_r_r302;
    PyObject *cpy_r_r303;
    PyObject *cpy_r_r304;
    int32_t cpy_r_r305;
    char cpy_r_r306;
    PyObject *cpy_r_r307;
    PyObject *cpy_r_r308;
    PyObject *cpy_r_r309;
    PyObject *cpy_r_r310;
    PyObject *cpy_r_r311;
    PyObject *cpy_r_r312;
    PyObject *cpy_r_r313;
    PyObject *cpy_r_r314;
    PyObject **cpy_r_r316;
    PyObject *cpy_r_r317;
    CPyTagged cpy_r_r318;
    PyObject *cpy_r_r319;
    PyObject *cpy_r_r320;
    int32_t cpy_r_r321;
    char cpy_r_r322;
    PyObject *cpy_r_r323;
    PyObject *cpy_r_r324;
    PyObject *cpy_r_r325;
    PyObject *cpy_r_r326;
    PyObject *cpy_r_r327;
    PyObject *cpy_r_r328;
    PyObject *cpy_r_r329;
    PyObject *cpy_r_r330;
    PyObject **cpy_r_r332;
    PyObject *cpy_r_r333;
    CPyTagged cpy_r_r334;
    PyObject *cpy_r_r335;
    PyObject *cpy_r_r336;
    int32_t cpy_r_r337;
    char cpy_r_r338;
    PyObject *cpy_r_r339;
    PyObject *cpy_r_r340;
    PyObject *cpy_r_r341;
    PyObject *cpy_r_r342;
    PyObject *cpy_r_r343;
    PyObject *cpy_r_r344;
    PyObject *cpy_r_r345;
    PyObject *cpy_r_r346;
    PyObject **cpy_r_r348;
    PyObject *cpy_r_r349;
    CPyTagged cpy_r_r350;
    PyObject *cpy_r_r351;
    PyObject *cpy_r_r352;
    int32_t cpy_r_r353;
    char cpy_r_r354;
    PyObject *cpy_r_r355;
    PyObject *cpy_r_r356;
    PyObject *cpy_r_r357;
    PyObject *cpy_r_r358;
    PyObject *cpy_r_r359;
    PyObject *cpy_r_r360;
    PyObject *cpy_r_r361;
    PyObject *cpy_r_r362;
    PyObject **cpy_r_r364;
    PyObject *cpy_r_r365;
    CPyTagged cpy_r_r366;
    PyObject *cpy_r_r367;
    PyObject *cpy_r_r368;
    int32_t cpy_r_r369;
    char cpy_r_r370;
    PyObject *cpy_r_r371;
    PyObject *cpy_r_r372;
    PyObject *cpy_r_r373;
    PyObject *cpy_r_r374;
    PyObject *cpy_r_r375;
    PyObject *cpy_r_r376;
    PyObject *cpy_r_r377;
    PyObject *cpy_r_r378;
    PyObject **cpy_r_r380;
    PyObject *cpy_r_r381;
    CPyTagged cpy_r_r382;
    PyObject *cpy_r_r383;
    PyObject *cpy_r_r384;
    int32_t cpy_r_r385;
    char cpy_r_r386;
    PyObject *cpy_r_r387;
    PyObject *cpy_r_r388;
    PyObject *cpy_r_r389;
    PyObject *cpy_r_r390;
    PyObject *cpy_r_r391;
    PyObject *cpy_r_r392;
    PyObject *cpy_r_r393;
    PyObject *cpy_r_r394;
    PyObject **cpy_r_r396;
    PyObject *cpy_r_r397;
    CPyTagged cpy_r_r398;
    PyObject *cpy_r_r399;
    PyObject *cpy_r_r400;
    int32_t cpy_r_r401;
    char cpy_r_r402;
    PyObject *cpy_r_r403;
    PyObject *cpy_r_r404;
    PyObject *cpy_r_r405;
    PyObject *cpy_r_r406;
    PyObject *cpy_r_r407;
    PyObject *cpy_r_r408;
    PyObject *cpy_r_r409;
    PyObject *cpy_r_r410;
    PyObject **cpy_r_r412;
    PyObject *cpy_r_r413;
    CPyTagged cpy_r_r414;
    PyObject *cpy_r_r415;
    PyObject *cpy_r_r416;
    int32_t cpy_r_r417;
    char cpy_r_r418;
    PyObject *cpy_r_r419;
    PyObject *cpy_r_r420;
    PyObject *cpy_r_r421;
    PyObject *cpy_r_r422;
    PyObject *cpy_r_r423;
    PyObject *cpy_r_r424;
    PyObject *cpy_r_r425;
    PyObject *cpy_r_r426;
    PyObject **cpy_r_r428;
    PyObject *cpy_r_r429;
    CPyTagged cpy_r_r430;
    PyObject *cpy_r_r431;
    PyObject *cpy_r_r432;
    int32_t cpy_r_r433;
    char cpy_r_r434;
    PyObject *cpy_r_r435;
    PyObject *cpy_r_r436;
    PyObject *cpy_r_r437;
    int32_t cpy_r_r438;
    char cpy_r_r439;
    CPyTagged cpy_r_r440;
    PyObject *cpy_r_r441;
    PyObject *cpy_r_r442;
    PyObject *cpy_r_r443;
    int32_t cpy_r_r444;
    char cpy_r_r445;
    char cpy_r_r446;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[18]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", -1, CPyStatic_currency___globals);
        goto CPyL154;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = (PyObject **)&CPyModule_decimal;
    PyObject **cpy_r_r6[1] = {cpy_r_r5};
    cpy_r_r7 = (void *)&cpy_r_r6;
    int64_t cpy_r_r8[1] = {1};
    cpy_r_r9 = (void *)&cpy_r_r8;
    cpy_r_r10 = CPyStatics[298]; /* (('decimal', 'decimal', 'decimal'),) */
    cpy_r_r11 = CPyStatic_currency___globals;
    cpy_r_r12 = CPyStatics[129]; /* 'faster_eth_utils/currency.py' */
    cpy_r_r13 = CPyStatics[38]; /* '<module>' */
    cpy_r_r14 = CPyImport_ImportMany(cpy_r_r10, cpy_r_r7, cpy_r_r11, cpy_r_r12, cpy_r_r13, cpy_r_r9);
    if (!cpy_r_r14) goto CPyL154;
    cpy_r_r15 = CPyStatics[299]; /* ('localcontext',) */
    cpy_r_r16 = CPyStatics[128]; /* 'decimal' */
    cpy_r_r17 = CPyStatic_currency___globals;
    cpy_r_r18 = CPyImport_ImportFromMany(cpy_r_r16, cpy_r_r15, cpy_r_r15, cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 2, CPyStatic_currency___globals);
        goto CPyL154;
    }
    CPyModule_decimal = cpy_r_r18;
    CPy_INCREF(CPyModule_decimal);
    CPy_DECREF(cpy_r_r18);
    cpy_r_r19 = CPyStatics[300]; /* ('Final', 'Union', 'final') */
    cpy_r_r20 = CPyStatics[21]; /* 'typing' */
    cpy_r_r21 = CPyStatic_currency___globals;
    cpy_r_r22 = CPyImport_ImportFromMany(cpy_r_r20, cpy_r_r19, cpy_r_r19, cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 5, CPyStatic_currency___globals);
        goto CPyL154;
    }
    CPyModule_typing = cpy_r_r22;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r23 = CPyStatics[301]; /* ('is_integer', 'is_string') */
    cpy_r_r24 = CPyStatics[57]; /* 'faster_eth_utils.types' */
    cpy_r_r25 = CPyStatic_currency___globals;
    cpy_r_r26 = CPyImport_ImportFromMany(cpy_r_r24, cpy_r_r23, cpy_r_r23, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 11, CPyStatic_currency___globals);
        goto CPyL154;
    }
    CPyModule_faster_eth_utils___types = cpy_r_r26;
    CPy_INCREF(CPyModule_faster_eth_utils___types);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r27 = CPyStatics[302]; /* ('units',) */
    cpy_r_r28 = CPyStatics[131]; /* 'faster_eth_utils.units' */
    cpy_r_r29 = CPyStatic_currency___globals;
    cpy_r_r30 = CPyImport_ImportFromMany(cpy_r_r28, cpy_r_r27, cpy_r_r27, cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 15, CPyStatic_currency___globals);
        goto CPyL154;
    }
    CPyModule_faster_eth_utils___units = cpy_r_r30;
    CPy_INCREF(CPyModule_faster_eth_utils___units);
    CPy_DECREF(cpy_r_r30);
    cpy_r_r31 = NULL;
    cpy_r_r32 = CPyStatics[132]; /* 'faster_eth_utils.currency' */
    cpy_r_r33 = (PyObject *)CPyType_currency___denoms_template;
    cpy_r_r34 = CPyType_FromTemplate(cpy_r_r33, cpy_r_r31, cpy_r_r32);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 21, CPyStatic_currency___globals);
        goto CPyL154;
    }
    cpy_r_r35 = CPyDef_currency___denoms_trait_vtable_setup();
    if (unlikely(cpy_r_r35 == 2)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", -1, CPyStatic_currency___globals);
        goto CPyL155;
    }
    cpy_r_r36 = CPyStatics[133]; /* '__mypyc_attrs__' */
    cpy_r_r37 = CPyStatics[91]; /* 'wei' */
    cpy_r_r38 = CPyStatics[92]; /* 'kwei' */
    cpy_r_r39 = CPyStatics[93]; /* 'babbage' */
    cpy_r_r40 = CPyStatics[94]; /* 'femtoether' */
    cpy_r_r41 = CPyStatics[95]; /* 'mwei' */
    cpy_r_r42 = CPyStatics[96]; /* 'lovelace' */
    cpy_r_r43 = CPyStatics[97]; /* 'picoether' */
    cpy_r_r44 = CPyStatics[98]; /* 'gwei' */
    cpy_r_r45 = CPyStatics[99]; /* 'shannon' */
    cpy_r_r46 = CPyStatics[100]; /* 'nanoether' */
    cpy_r_r47 = CPyStatics[101]; /* 'nano' */
    cpy_r_r48 = CPyStatics[102]; /* 'szabo' */
    cpy_r_r49 = CPyStatics[103]; /* 'microether' */
    cpy_r_r50 = CPyStatics[104]; /* 'micro' */
    cpy_r_r51 = CPyStatics[105]; /* 'finney' */
    cpy_r_r52 = CPyStatics[106]; /* 'milliether' */
    cpy_r_r53 = CPyStatics[107]; /* 'milli' */
    cpy_r_r54 = CPyStatics[108]; /* 'ether' */
    cpy_r_r55 = CPyStatics[109]; /* 'kether' */
    cpy_r_r56 = CPyStatics[110]; /* 'grand' */
    cpy_r_r57 = CPyStatics[111]; /* 'mether' */
    cpy_r_r58 = CPyStatics[112]; /* 'gether' */
    cpy_r_r59 = CPyStatics[113]; /* 'tether' */
    cpy_r_r60 = PyTuple_Pack(23, cpy_r_r37, cpy_r_r38, cpy_r_r39, cpy_r_r40, cpy_r_r41, cpy_r_r42, cpy_r_r43, cpy_r_r44, cpy_r_r45, cpy_r_r46, cpy_r_r47, cpy_r_r48, cpy_r_r49, cpy_r_r50, cpy_r_r51, cpy_r_r52, cpy_r_r53, cpy_r_r54, cpy_r_r55, cpy_r_r56, cpy_r_r57, cpy_r_r58, cpy_r_r59);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 21, CPyStatic_currency___globals);
        goto CPyL155;
    }
    cpy_r_r61 = PyObject_SetAttr(cpy_r_r34, cpy_r_r36, cpy_r_r60);
    CPy_DECREF(cpy_r_r60);
    cpy_r_r62 = cpy_r_r61 >= 0;
    if (unlikely(!cpy_r_r62)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 21, CPyStatic_currency___globals);
        goto CPyL155;
    }
    CPyType_currency___denoms = (PyTypeObject *)cpy_r_r34;
    CPy_INCREF(CPyType_currency___denoms);
    cpy_r_r63 = CPyStatic_currency___globals;
    cpy_r_r64 = CPyStatics[134]; /* 'denoms' */
    cpy_r_r65 = CPyDict_SetItem(cpy_r_r63, cpy_r_r64, cpy_r_r34);
    CPy_DECREF(cpy_r_r34);
    cpy_r_r66 = cpy_r_r65 >= 0;
    if (unlikely(!cpy_r_r66)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 21, CPyStatic_currency___globals);
        goto CPyL154;
    }
    cpy_r_r67 = (PyObject *)CPyType_currency___denoms;
    cpy_r_r68 = CPyStatic_currency___globals;
    cpy_r_r69 = CPyStatics[90]; /* 'units' */
    cpy_r_r70 = CPyDict_GetItem(cpy_r_r68, cpy_r_r69);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 22, CPyStatic_currency___globals);
        goto CPyL154;
    }
    if (likely(PyDict_Check(cpy_r_r70)))
        cpy_r_r71 = cpy_r_r70;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/currency.py", "<module>", 22, CPyStatic_currency___globals, "dict", cpy_r_r70);
        goto CPyL154;
    }
    cpy_r_r72 = CPyStatics[91]; /* 'wei' */
    cpy_r_r73 = CPyDict_GetItem(cpy_r_r71, cpy_r_r72);
    CPy_DECREF(cpy_r_r71);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 22, CPyStatic_currency___globals);
        goto CPyL154;
    }
    cpy_r_r74 = (PyObject *)&PyLong_Type;
    PyObject *cpy_r_r75[1] = {cpy_r_r73};
    cpy_r_r76 = (PyObject **)&cpy_r_r75;
    cpy_r_r77 = PyObject_Vectorcall(cpy_r_r74, cpy_r_r76, 1, 0);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 22, CPyStatic_currency___globals);
        goto CPyL156;
    }
    CPy_DECREF(cpy_r_r73);
    if (likely(PyLong_Check(cpy_r_r77)))
        cpy_r_r78 = CPyTagged_FromObject(cpy_r_r77);
    else {
        CPy_TypeError("int", cpy_r_r77); cpy_r_r78 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r77);
    if (unlikely(cpy_r_r78 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 22, CPyStatic_currency___globals);
        goto CPyL154;
    }
    cpy_r_r79 = CPyStatics[91]; /* 'wei' */
    CPyTagged_INCREF(cpy_r_r78);
    cpy_r_r80 = CPyTagged_StealAsObject(cpy_r_r78);
    cpy_r_r81 = PyObject_SetAttr(cpy_r_r67, cpy_r_r79, cpy_r_r80);
    CPy_DECREF(cpy_r_r80);
    cpy_r_r82 = cpy_r_r81 >= 0;
    if (unlikely(!cpy_r_r82)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 22, CPyStatic_currency___globals);
        goto CPyL157;
    }
    CPyStatic_currency___denoms___wei = cpy_r_r78;
    CPyTagged_INCREF(CPyStatic_currency___denoms___wei);
    CPyTagged_DECREF(cpy_r_r78);
    cpy_r_r83 = (PyObject *)CPyType_currency___denoms;
    cpy_r_r84 = CPyStatic_currency___globals;
    cpy_r_r85 = CPyStatics[90]; /* 'units' */
    cpy_r_r86 = CPyDict_GetItem(cpy_r_r84, cpy_r_r85);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 23, CPyStatic_currency___globals);
        goto CPyL154;
    }
    if (likely(PyDict_Check(cpy_r_r86)))
        cpy_r_r87 = cpy_r_r86;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/currency.py", "<module>", 23, CPyStatic_currency___globals, "dict", cpy_r_r86);
        goto CPyL154;
    }
    cpy_r_r88 = CPyStatics[92]; /* 'kwei' */
    cpy_r_r89 = CPyDict_GetItem(cpy_r_r87, cpy_r_r88);
    CPy_DECREF(cpy_r_r87);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 23, CPyStatic_currency___globals);
        goto CPyL154;
    }
    cpy_r_r90 = (PyObject *)&PyLong_Type;
    PyObject *cpy_r_r91[1] = {cpy_r_r89};
    cpy_r_r92 = (PyObject **)&cpy_r_r91;
    cpy_r_r93 = PyObject_Vectorcall(cpy_r_r90, cpy_r_r92, 1, 0);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 23, CPyStatic_currency___globals);
        goto CPyL158;
    }
    CPy_DECREF(cpy_r_r89);
    if (likely(PyLong_Check(cpy_r_r93)))
        cpy_r_r94 = CPyTagged_FromObject(cpy_r_r93);
    else {
        CPy_TypeError("int", cpy_r_r93); cpy_r_r94 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r93);
    if (unlikely(cpy_r_r94 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 23, CPyStatic_currency___globals);
        goto CPyL154;
    }
    cpy_r_r95 = CPyStatics[92]; /* 'kwei' */
    CPyTagged_INCREF(cpy_r_r94);
    cpy_r_r96 = CPyTagged_StealAsObject(cpy_r_r94);
    cpy_r_r97 = PyObject_SetAttr(cpy_r_r83, cpy_r_r95, cpy_r_r96);
    CPy_DECREF(cpy_r_r96);
    cpy_r_r98 = cpy_r_r97 >= 0;
    if (unlikely(!cpy_r_r98)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 23, CPyStatic_currency___globals);
        goto CPyL159;
    }
    CPyStatic_currency___denoms___kwei = cpy_r_r94;
    CPyTagged_INCREF(CPyStatic_currency___denoms___kwei);
    CPyTagged_DECREF(cpy_r_r94);
    cpy_r_r99 = (PyObject *)CPyType_currency___denoms;
    cpy_r_r100 = CPyStatic_currency___globals;
    cpy_r_r101 = CPyStatics[90]; /* 'units' */
    cpy_r_r102 = CPyDict_GetItem(cpy_r_r100, cpy_r_r101);
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 24, CPyStatic_currency___globals);
        goto CPyL154;
    }
    if (likely(PyDict_Check(cpy_r_r102)))
        cpy_r_r103 = cpy_r_r102;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/currency.py", "<module>", 24, CPyStatic_currency___globals, "dict", cpy_r_r102);
        goto CPyL154;
    }
    cpy_r_r104 = CPyStatics[93]; /* 'babbage' */
    cpy_r_r105 = CPyDict_GetItem(cpy_r_r103, cpy_r_r104);
    CPy_DECREF(cpy_r_r103);
    if (unlikely(cpy_r_r105 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 24, CPyStatic_currency___globals);
        goto CPyL154;
    }
    cpy_r_r106 = (PyObject *)&PyLong_Type;
    PyObject *cpy_r_r107[1] = {cpy_r_r105};
    cpy_r_r108 = (PyObject **)&cpy_r_r107;
    cpy_r_r109 = PyObject_Vectorcall(cpy_r_r106, cpy_r_r108, 1, 0);
    if (unlikely(cpy_r_r109 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 24, CPyStatic_currency___globals);
        goto CPyL160;
    }
    CPy_DECREF(cpy_r_r105);
    if (likely(PyLong_Check(cpy_r_r109)))
        cpy_r_r110 = CPyTagged_FromObject(cpy_r_r109);
    else {
        CPy_TypeError("int", cpy_r_r109); cpy_r_r110 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r109);
    if (unlikely(cpy_r_r110 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 24, CPyStatic_currency___globals);
        goto CPyL154;
    }
    cpy_r_r111 = CPyStatics[93]; /* 'babbage' */
    CPyTagged_INCREF(cpy_r_r110);
    cpy_r_r112 = CPyTagged_StealAsObject(cpy_r_r110);
    cpy_r_r113 = PyObject_SetAttr(cpy_r_r99, cpy_r_r111, cpy_r_r112);
    CPy_DECREF(cpy_r_r112);
    cpy_r_r114 = cpy_r_r113 >= 0;
    if (unlikely(!cpy_r_r114)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 24, CPyStatic_currency___globals);
        goto CPyL161;
    }
    CPyStatic_currency___denoms___babbage = cpy_r_r110;
    CPyTagged_INCREF(CPyStatic_currency___denoms___babbage);
    CPyTagged_DECREF(cpy_r_r110);
    cpy_r_r115 = (PyObject *)CPyType_currency___denoms;
    cpy_r_r116 = CPyStatic_currency___globals;
    cpy_r_r117 = CPyStatics[90]; /* 'units' */
    cpy_r_r118 = CPyDict_GetItem(cpy_r_r116, cpy_r_r117);
    if (unlikely(cpy_r_r118 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 25, CPyStatic_currency___globals);
        goto CPyL154;
    }
    if (likely(PyDict_Check(cpy_r_r118)))
        cpy_r_r119 = cpy_r_r118;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/currency.py", "<module>", 25, CPyStatic_currency___globals, "dict", cpy_r_r118);
        goto CPyL154;
    }
    cpy_r_r120 = CPyStatics[94]; /* 'femtoether' */
    cpy_r_r121 = CPyDict_GetItem(cpy_r_r119, cpy_r_r120);
    CPy_DECREF(cpy_r_r119);
    if (unlikely(cpy_r_r121 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 25, CPyStatic_currency___globals);
        goto CPyL154;
    }
    cpy_r_r122 = (PyObject *)&PyLong_Type;
    PyObject *cpy_r_r123[1] = {cpy_r_r121};
    cpy_r_r124 = (PyObject **)&cpy_r_r123;
    cpy_r_r125 = PyObject_Vectorcall(cpy_r_r122, cpy_r_r124, 1, 0);
    if (unlikely(cpy_r_r125 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 25, CPyStatic_currency___globals);
        goto CPyL162;
    }
    CPy_DECREF(cpy_r_r121);
    if (likely(PyLong_Check(cpy_r_r125)))
        cpy_r_r126 = CPyTagged_FromObject(cpy_r_r125);
    else {
        CPy_TypeError("int", cpy_r_r125); cpy_r_r126 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r125);
    if (unlikely(cpy_r_r126 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 25, CPyStatic_currency___globals);
        goto CPyL154;
    }
    cpy_r_r127 = CPyStatics[94]; /* 'femtoether' */
    CPyTagged_INCREF(cpy_r_r126);
    cpy_r_r128 = CPyTagged_StealAsObject(cpy_r_r126);
    cpy_r_r129 = PyObject_SetAttr(cpy_r_r115, cpy_r_r127, cpy_r_r128);
    CPy_DECREF(cpy_r_r128);
    cpy_r_r130 = cpy_r_r129 >= 0;
    if (unlikely(!cpy_r_r130)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 25, CPyStatic_currency___globals);
        goto CPyL163;
    }
    CPyStatic_currency___denoms___femtoether = cpy_r_r126;
    CPyTagged_INCREF(CPyStatic_currency___denoms___femtoether);
    CPyTagged_DECREF(cpy_r_r126);
    cpy_r_r131 = (PyObject *)CPyType_currency___denoms;
    cpy_r_r132 = CPyStatic_currency___globals;
    cpy_r_r133 = CPyStatics[90]; /* 'units' */
    cpy_r_r134 = CPyDict_GetItem(cpy_r_r132, cpy_r_r133);
    if (unlikely(cpy_r_r134 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 26, CPyStatic_currency___globals);
        goto CPyL154;
    }
    if (likely(PyDict_Check(cpy_r_r134)))
        cpy_r_r135 = cpy_r_r134;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/currency.py", "<module>", 26, CPyStatic_currency___globals, "dict", cpy_r_r134);
        goto CPyL154;
    }
    cpy_r_r136 = CPyStatics[95]; /* 'mwei' */
    cpy_r_r137 = CPyDict_GetItem(cpy_r_r135, cpy_r_r136);
    CPy_DECREF(cpy_r_r135);
    if (unlikely(cpy_r_r137 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 26, CPyStatic_currency___globals);
        goto CPyL154;
    }
    cpy_r_r138 = (PyObject *)&PyLong_Type;
    PyObject *cpy_r_r139[1] = {cpy_r_r137};
    cpy_r_r140 = (PyObject **)&cpy_r_r139;
    cpy_r_r141 = PyObject_Vectorcall(cpy_r_r138, cpy_r_r140, 1, 0);
    if (unlikely(cpy_r_r141 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 26, CPyStatic_currency___globals);
        goto CPyL164;
    }
    CPy_DECREF(cpy_r_r137);
    if (likely(PyLong_Check(cpy_r_r141)))
        cpy_r_r142 = CPyTagged_FromObject(cpy_r_r141);
    else {
        CPy_TypeError("int", cpy_r_r141); cpy_r_r142 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r141);
    if (unlikely(cpy_r_r142 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 26, CPyStatic_currency___globals);
        goto CPyL154;
    }
    cpy_r_r143 = CPyStatics[95]; /* 'mwei' */
    CPyTagged_INCREF(cpy_r_r142);
    cpy_r_r144 = CPyTagged_StealAsObject(cpy_r_r142);
    cpy_r_r145 = PyObject_SetAttr(cpy_r_r131, cpy_r_r143, cpy_r_r144);
    CPy_DECREF(cpy_r_r144);
    cpy_r_r146 = cpy_r_r145 >= 0;
    if (unlikely(!cpy_r_r146)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 26, CPyStatic_currency___globals);
        goto CPyL165;
    }
    CPyStatic_currency___denoms___mwei = cpy_r_r142;
    CPyTagged_INCREF(CPyStatic_currency___denoms___mwei);
    CPyTagged_DECREF(cpy_r_r142);
    cpy_r_r147 = (PyObject *)CPyType_currency___denoms;
    cpy_r_r148 = CPyStatic_currency___globals;
    cpy_r_r149 = CPyStatics[90]; /* 'units' */
    cpy_r_r150 = CPyDict_GetItem(cpy_r_r148, cpy_r_r149);
    if (unlikely(cpy_r_r150 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 27, CPyStatic_currency___globals);
        goto CPyL154;
    }
    if (likely(PyDict_Check(cpy_r_r150)))
        cpy_r_r151 = cpy_r_r150;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/currency.py", "<module>", 27, CPyStatic_currency___globals, "dict", cpy_r_r150);
        goto CPyL154;
    }
    cpy_r_r152 = CPyStatics[96]; /* 'lovelace' */
    cpy_r_r153 = CPyDict_GetItem(cpy_r_r151, cpy_r_r152);
    CPy_DECREF(cpy_r_r151);
    if (unlikely(cpy_r_r153 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 27, CPyStatic_currency___globals);
        goto CPyL154;
    }
    cpy_r_r154 = (PyObject *)&PyLong_Type;
    PyObject *cpy_r_r155[1] = {cpy_r_r153};
    cpy_r_r156 = (PyObject **)&cpy_r_r155;
    cpy_r_r157 = PyObject_Vectorcall(cpy_r_r154, cpy_r_r156, 1, 0);
    if (unlikely(cpy_r_r157 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 27, CPyStatic_currency___globals);
        goto CPyL166;
    }
    CPy_DECREF(cpy_r_r153);
    if (likely(PyLong_Check(cpy_r_r157)))
        cpy_r_r158 = CPyTagged_FromObject(cpy_r_r157);
    else {
        CPy_TypeError("int", cpy_r_r157); cpy_r_r158 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r157);
    if (unlikely(cpy_r_r158 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 27, CPyStatic_currency___globals);
        goto CPyL154;
    }
    cpy_r_r159 = CPyStatics[96]; /* 'lovelace' */
    CPyTagged_INCREF(cpy_r_r158);
    cpy_r_r160 = CPyTagged_StealAsObject(cpy_r_r158);
    cpy_r_r161 = PyObject_SetAttr(cpy_r_r147, cpy_r_r159, cpy_r_r160);
    CPy_DECREF(cpy_r_r160);
    cpy_r_r162 = cpy_r_r161 >= 0;
    if (unlikely(!cpy_r_r162)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 27, CPyStatic_currency___globals);
        goto CPyL167;
    }
    CPyStatic_currency___denoms___lovelace = cpy_r_r158;
    CPyTagged_INCREF(CPyStatic_currency___denoms___lovelace);
    CPyTagged_DECREF(cpy_r_r158);
    cpy_r_r163 = (PyObject *)CPyType_currency___denoms;
    cpy_r_r164 = CPyStatic_currency___globals;
    cpy_r_r165 = CPyStatics[90]; /* 'units' */
    cpy_r_r166 = CPyDict_GetItem(cpy_r_r164, cpy_r_r165);
    if (unlikely(cpy_r_r166 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 28, CPyStatic_currency___globals);
        goto CPyL154;
    }
    if (likely(PyDict_Check(cpy_r_r166)))
        cpy_r_r167 = cpy_r_r166;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/currency.py", "<module>", 28, CPyStatic_currency___globals, "dict", cpy_r_r166);
        goto CPyL154;
    }
    cpy_r_r168 = CPyStatics[97]; /* 'picoether' */
    cpy_r_r169 = CPyDict_GetItem(cpy_r_r167, cpy_r_r168);
    CPy_DECREF(cpy_r_r167);
    if (unlikely(cpy_r_r169 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 28, CPyStatic_currency___globals);
        goto CPyL154;
    }
    cpy_r_r170 = (PyObject *)&PyLong_Type;
    PyObject *cpy_r_r171[1] = {cpy_r_r169};
    cpy_r_r172 = (PyObject **)&cpy_r_r171;
    cpy_r_r173 = PyObject_Vectorcall(cpy_r_r170, cpy_r_r172, 1, 0);
    if (unlikely(cpy_r_r173 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 28, CPyStatic_currency___globals);
        goto CPyL168;
    }
    CPy_DECREF(cpy_r_r169);
    if (likely(PyLong_Check(cpy_r_r173)))
        cpy_r_r174 = CPyTagged_FromObject(cpy_r_r173);
    else {
        CPy_TypeError("int", cpy_r_r173); cpy_r_r174 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r173);
    if (unlikely(cpy_r_r174 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 28, CPyStatic_currency___globals);
        goto CPyL154;
    }
    cpy_r_r175 = CPyStatics[97]; /* 'picoether' */
    CPyTagged_INCREF(cpy_r_r174);
    cpy_r_r176 = CPyTagged_StealAsObject(cpy_r_r174);
    cpy_r_r177 = PyObject_SetAttr(cpy_r_r163, cpy_r_r175, cpy_r_r176);
    CPy_DECREF(cpy_r_r176);
    cpy_r_r178 = cpy_r_r177 >= 0;
    if (unlikely(!cpy_r_r178)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 28, CPyStatic_currency___globals);
        goto CPyL169;
    }
    CPyStatic_currency___denoms___picoether = cpy_r_r174;
    CPyTagged_INCREF(CPyStatic_currency___denoms___picoether);
    CPyTagged_DECREF(cpy_r_r174);
    cpy_r_r179 = (PyObject *)CPyType_currency___denoms;
    cpy_r_r180 = CPyStatic_currency___globals;
    cpy_r_r181 = CPyStatics[90]; /* 'units' */
    cpy_r_r182 = CPyDict_GetItem(cpy_r_r180, cpy_r_r181);
    if (unlikely(cpy_r_r182 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 29, CPyStatic_currency___globals);
        goto CPyL154;
    }
    if (likely(PyDict_Check(cpy_r_r182)))
        cpy_r_r183 = cpy_r_r182;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/currency.py", "<module>", 29, CPyStatic_currency___globals, "dict", cpy_r_r182);
        goto CPyL154;
    }
    cpy_r_r184 = CPyStatics[98]; /* 'gwei' */
    cpy_r_r185 = CPyDict_GetItem(cpy_r_r183, cpy_r_r184);
    CPy_DECREF(cpy_r_r183);
    if (unlikely(cpy_r_r185 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 29, CPyStatic_currency___globals);
        goto CPyL154;
    }
    cpy_r_r186 = (PyObject *)&PyLong_Type;
    PyObject *cpy_r_r187[1] = {cpy_r_r185};
    cpy_r_r188 = (PyObject **)&cpy_r_r187;
    cpy_r_r189 = PyObject_Vectorcall(cpy_r_r186, cpy_r_r188, 1, 0);
    if (unlikely(cpy_r_r189 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 29, CPyStatic_currency___globals);
        goto CPyL170;
    }
    CPy_DECREF(cpy_r_r185);
    if (likely(PyLong_Check(cpy_r_r189)))
        cpy_r_r190 = CPyTagged_FromObject(cpy_r_r189);
    else {
        CPy_TypeError("int", cpy_r_r189); cpy_r_r190 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r189);
    if (unlikely(cpy_r_r190 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 29, CPyStatic_currency___globals);
        goto CPyL154;
    }
    cpy_r_r191 = CPyStatics[98]; /* 'gwei' */
    CPyTagged_INCREF(cpy_r_r190);
    cpy_r_r192 = CPyTagged_StealAsObject(cpy_r_r190);
    cpy_r_r193 = PyObject_SetAttr(cpy_r_r179, cpy_r_r191, cpy_r_r192);
    CPy_DECREF(cpy_r_r192);
    cpy_r_r194 = cpy_r_r193 >= 0;
    if (unlikely(!cpy_r_r194)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 29, CPyStatic_currency___globals);
        goto CPyL171;
    }
    CPyStatic_currency___denoms___gwei = cpy_r_r190;
    CPyTagged_INCREF(CPyStatic_currency___denoms___gwei);
    CPyTagged_DECREF(cpy_r_r190);
    cpy_r_r195 = (PyObject *)CPyType_currency___denoms;
    cpy_r_r196 = CPyStatic_currency___globals;
    cpy_r_r197 = CPyStatics[90]; /* 'units' */
    cpy_r_r198 = CPyDict_GetItem(cpy_r_r196, cpy_r_r197);
    if (unlikely(cpy_r_r198 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 30, CPyStatic_currency___globals);
        goto CPyL154;
    }
    if (likely(PyDict_Check(cpy_r_r198)))
        cpy_r_r199 = cpy_r_r198;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/currency.py", "<module>", 30, CPyStatic_currency___globals, "dict", cpy_r_r198);
        goto CPyL154;
    }
    cpy_r_r200 = CPyStatics[99]; /* 'shannon' */
    cpy_r_r201 = CPyDict_GetItem(cpy_r_r199, cpy_r_r200);
    CPy_DECREF(cpy_r_r199);
    if (unlikely(cpy_r_r201 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 30, CPyStatic_currency___globals);
        goto CPyL154;
    }
    cpy_r_r202 = (PyObject *)&PyLong_Type;
    PyObject *cpy_r_r203[1] = {cpy_r_r201};
    cpy_r_r204 = (PyObject **)&cpy_r_r203;
    cpy_r_r205 = PyObject_Vectorcall(cpy_r_r202, cpy_r_r204, 1, 0);
    if (unlikely(cpy_r_r205 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 30, CPyStatic_currency___globals);
        goto CPyL172;
    }
    CPy_DECREF(cpy_r_r201);
    if (likely(PyLong_Check(cpy_r_r205)))
        cpy_r_r206 = CPyTagged_FromObject(cpy_r_r205);
    else {
        CPy_TypeError("int", cpy_r_r205); cpy_r_r206 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r205);
    if (unlikely(cpy_r_r206 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 30, CPyStatic_currency___globals);
        goto CPyL154;
    }
    cpy_r_r207 = CPyStatics[99]; /* 'shannon' */
    CPyTagged_INCREF(cpy_r_r206);
    cpy_r_r208 = CPyTagged_StealAsObject(cpy_r_r206);
    cpy_r_r209 = PyObject_SetAttr(cpy_r_r195, cpy_r_r207, cpy_r_r208);
    CPy_DECREF(cpy_r_r208);
    cpy_r_r210 = cpy_r_r209 >= 0;
    if (unlikely(!cpy_r_r210)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 30, CPyStatic_currency___globals);
        goto CPyL173;
    }
    CPyStatic_currency___denoms___shannon = cpy_r_r206;
    CPyTagged_INCREF(CPyStatic_currency___denoms___shannon);
    CPyTagged_DECREF(cpy_r_r206);
    cpy_r_r211 = (PyObject *)CPyType_currency___denoms;
    cpy_r_r212 = CPyStatic_currency___globals;
    cpy_r_r213 = CPyStatics[90]; /* 'units' */
    cpy_r_r214 = CPyDict_GetItem(cpy_r_r212, cpy_r_r213);
    if (unlikely(cpy_r_r214 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 31, CPyStatic_currency___globals);
        goto CPyL154;
    }
    if (likely(PyDict_Check(cpy_r_r214)))
        cpy_r_r215 = cpy_r_r214;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/currency.py", "<module>", 31, CPyStatic_currency___globals, "dict", cpy_r_r214);
        goto CPyL154;
    }
    cpy_r_r216 = CPyStatics[100]; /* 'nanoether' */
    cpy_r_r217 = CPyDict_GetItem(cpy_r_r215, cpy_r_r216);
    CPy_DECREF(cpy_r_r215);
    if (unlikely(cpy_r_r217 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 31, CPyStatic_currency___globals);
        goto CPyL154;
    }
    cpy_r_r218 = (PyObject *)&PyLong_Type;
    PyObject *cpy_r_r219[1] = {cpy_r_r217};
    cpy_r_r220 = (PyObject **)&cpy_r_r219;
    cpy_r_r221 = PyObject_Vectorcall(cpy_r_r218, cpy_r_r220, 1, 0);
    if (unlikely(cpy_r_r221 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 31, CPyStatic_currency___globals);
        goto CPyL174;
    }
    CPy_DECREF(cpy_r_r217);
    if (likely(PyLong_Check(cpy_r_r221)))
        cpy_r_r222 = CPyTagged_FromObject(cpy_r_r221);
    else {
        CPy_TypeError("int", cpy_r_r221); cpy_r_r222 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r221);
    if (unlikely(cpy_r_r222 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 31, CPyStatic_currency___globals);
        goto CPyL154;
    }
    cpy_r_r223 = CPyStatics[100]; /* 'nanoether' */
    CPyTagged_INCREF(cpy_r_r222);
    cpy_r_r224 = CPyTagged_StealAsObject(cpy_r_r222);
    cpy_r_r225 = PyObject_SetAttr(cpy_r_r211, cpy_r_r223, cpy_r_r224);
    CPy_DECREF(cpy_r_r224);
    cpy_r_r226 = cpy_r_r225 >= 0;
    if (unlikely(!cpy_r_r226)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 31, CPyStatic_currency___globals);
        goto CPyL175;
    }
    CPyStatic_currency___denoms___nanoether = cpy_r_r222;
    CPyTagged_INCREF(CPyStatic_currency___denoms___nanoether);
    CPyTagged_DECREF(cpy_r_r222);
    cpy_r_r227 = (PyObject *)CPyType_currency___denoms;
    cpy_r_r228 = CPyStatic_currency___globals;
    cpy_r_r229 = CPyStatics[90]; /* 'units' */
    cpy_r_r230 = CPyDict_GetItem(cpy_r_r228, cpy_r_r229);
    if (unlikely(cpy_r_r230 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 32, CPyStatic_currency___globals);
        goto CPyL154;
    }
    if (likely(PyDict_Check(cpy_r_r230)))
        cpy_r_r231 = cpy_r_r230;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/currency.py", "<module>", 32, CPyStatic_currency___globals, "dict", cpy_r_r230);
        goto CPyL154;
    }
    cpy_r_r232 = CPyStatics[101]; /* 'nano' */
    cpy_r_r233 = CPyDict_GetItem(cpy_r_r231, cpy_r_r232);
    CPy_DECREF(cpy_r_r231);
    if (unlikely(cpy_r_r233 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 32, CPyStatic_currency___globals);
        goto CPyL154;
    }
    cpy_r_r234 = (PyObject *)&PyLong_Type;
    PyObject *cpy_r_r235[1] = {cpy_r_r233};
    cpy_r_r236 = (PyObject **)&cpy_r_r235;
    cpy_r_r237 = PyObject_Vectorcall(cpy_r_r234, cpy_r_r236, 1, 0);
    if (unlikely(cpy_r_r237 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 32, CPyStatic_currency___globals);
        goto CPyL176;
    }
    CPy_DECREF(cpy_r_r233);
    if (likely(PyLong_Check(cpy_r_r237)))
        cpy_r_r238 = CPyTagged_FromObject(cpy_r_r237);
    else {
        CPy_TypeError("int", cpy_r_r237); cpy_r_r238 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r237);
    if (unlikely(cpy_r_r238 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 32, CPyStatic_currency___globals);
        goto CPyL154;
    }
    cpy_r_r239 = CPyStatics[101]; /* 'nano' */
    CPyTagged_INCREF(cpy_r_r238);
    cpy_r_r240 = CPyTagged_StealAsObject(cpy_r_r238);
    cpy_r_r241 = PyObject_SetAttr(cpy_r_r227, cpy_r_r239, cpy_r_r240);
    CPy_DECREF(cpy_r_r240);
    cpy_r_r242 = cpy_r_r241 >= 0;
    if (unlikely(!cpy_r_r242)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 32, CPyStatic_currency___globals);
        goto CPyL177;
    }
    CPyStatic_currency___denoms___nano = cpy_r_r238;
    CPyTagged_INCREF(CPyStatic_currency___denoms___nano);
    CPyTagged_DECREF(cpy_r_r238);
    cpy_r_r243 = (PyObject *)CPyType_currency___denoms;
    cpy_r_r244 = CPyStatic_currency___globals;
    cpy_r_r245 = CPyStatics[90]; /* 'units' */
    cpy_r_r246 = CPyDict_GetItem(cpy_r_r244, cpy_r_r245);
    if (unlikely(cpy_r_r246 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 33, CPyStatic_currency___globals);
        goto CPyL154;
    }
    if (likely(PyDict_Check(cpy_r_r246)))
        cpy_r_r247 = cpy_r_r246;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/currency.py", "<module>", 33, CPyStatic_currency___globals, "dict", cpy_r_r246);
        goto CPyL154;
    }
    cpy_r_r248 = CPyStatics[102]; /* 'szabo' */
    cpy_r_r249 = CPyDict_GetItem(cpy_r_r247, cpy_r_r248);
    CPy_DECREF(cpy_r_r247);
    if (unlikely(cpy_r_r249 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 33, CPyStatic_currency___globals);
        goto CPyL154;
    }
    cpy_r_r250 = (PyObject *)&PyLong_Type;
    PyObject *cpy_r_r251[1] = {cpy_r_r249};
    cpy_r_r252 = (PyObject **)&cpy_r_r251;
    cpy_r_r253 = PyObject_Vectorcall(cpy_r_r250, cpy_r_r252, 1, 0);
    if (unlikely(cpy_r_r253 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 33, CPyStatic_currency___globals);
        goto CPyL178;
    }
    CPy_DECREF(cpy_r_r249);
    if (likely(PyLong_Check(cpy_r_r253)))
        cpy_r_r254 = CPyTagged_FromObject(cpy_r_r253);
    else {
        CPy_TypeError("int", cpy_r_r253); cpy_r_r254 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r253);
    if (unlikely(cpy_r_r254 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 33, CPyStatic_currency___globals);
        goto CPyL154;
    }
    cpy_r_r255 = CPyStatics[102]; /* 'szabo' */
    CPyTagged_INCREF(cpy_r_r254);
    cpy_r_r256 = CPyTagged_StealAsObject(cpy_r_r254);
    cpy_r_r257 = PyObject_SetAttr(cpy_r_r243, cpy_r_r255, cpy_r_r256);
    CPy_DECREF(cpy_r_r256);
    cpy_r_r258 = cpy_r_r257 >= 0;
    if (unlikely(!cpy_r_r258)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 33, CPyStatic_currency___globals);
        goto CPyL179;
    }
    CPyStatic_currency___denoms___szabo = cpy_r_r254;
    CPyTagged_INCREF(CPyStatic_currency___denoms___szabo);
    CPyTagged_DECREF(cpy_r_r254);
    cpy_r_r259 = (PyObject *)CPyType_currency___denoms;
    cpy_r_r260 = CPyStatic_currency___globals;
    cpy_r_r261 = CPyStatics[90]; /* 'units' */
    cpy_r_r262 = CPyDict_GetItem(cpy_r_r260, cpy_r_r261);
    if (unlikely(cpy_r_r262 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 34, CPyStatic_currency___globals);
        goto CPyL154;
    }
    if (likely(PyDict_Check(cpy_r_r262)))
        cpy_r_r263 = cpy_r_r262;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/currency.py", "<module>", 34, CPyStatic_currency___globals, "dict", cpy_r_r262);
        goto CPyL154;
    }
    cpy_r_r264 = CPyStatics[103]; /* 'microether' */
    cpy_r_r265 = CPyDict_GetItem(cpy_r_r263, cpy_r_r264);
    CPy_DECREF(cpy_r_r263);
    if (unlikely(cpy_r_r265 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 34, CPyStatic_currency___globals);
        goto CPyL154;
    }
    cpy_r_r266 = (PyObject *)&PyLong_Type;
    PyObject *cpy_r_r267[1] = {cpy_r_r265};
    cpy_r_r268 = (PyObject **)&cpy_r_r267;
    cpy_r_r269 = PyObject_Vectorcall(cpy_r_r266, cpy_r_r268, 1, 0);
    if (unlikely(cpy_r_r269 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 34, CPyStatic_currency___globals);
        goto CPyL180;
    }
    CPy_DECREF(cpy_r_r265);
    if (likely(PyLong_Check(cpy_r_r269)))
        cpy_r_r270 = CPyTagged_FromObject(cpy_r_r269);
    else {
        CPy_TypeError("int", cpy_r_r269); cpy_r_r270 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r269);
    if (unlikely(cpy_r_r270 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 34, CPyStatic_currency___globals);
        goto CPyL154;
    }
    cpy_r_r271 = CPyStatics[103]; /* 'microether' */
    CPyTagged_INCREF(cpy_r_r270);
    cpy_r_r272 = CPyTagged_StealAsObject(cpy_r_r270);
    cpy_r_r273 = PyObject_SetAttr(cpy_r_r259, cpy_r_r271, cpy_r_r272);
    CPy_DECREF(cpy_r_r272);
    cpy_r_r274 = cpy_r_r273 >= 0;
    if (unlikely(!cpy_r_r274)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 34, CPyStatic_currency___globals);
        goto CPyL181;
    }
    CPyStatic_currency___denoms___microether = cpy_r_r270;
    CPyTagged_INCREF(CPyStatic_currency___denoms___microether);
    CPyTagged_DECREF(cpy_r_r270);
    cpy_r_r275 = (PyObject *)CPyType_currency___denoms;
    cpy_r_r276 = CPyStatic_currency___globals;
    cpy_r_r277 = CPyStatics[90]; /* 'units' */
    cpy_r_r278 = CPyDict_GetItem(cpy_r_r276, cpy_r_r277);
    if (unlikely(cpy_r_r278 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 35, CPyStatic_currency___globals);
        goto CPyL154;
    }
    if (likely(PyDict_Check(cpy_r_r278)))
        cpy_r_r279 = cpy_r_r278;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/currency.py", "<module>", 35, CPyStatic_currency___globals, "dict", cpy_r_r278);
        goto CPyL154;
    }
    cpy_r_r280 = CPyStatics[104]; /* 'micro' */
    cpy_r_r281 = CPyDict_GetItem(cpy_r_r279, cpy_r_r280);
    CPy_DECREF(cpy_r_r279);
    if (unlikely(cpy_r_r281 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 35, CPyStatic_currency___globals);
        goto CPyL154;
    }
    cpy_r_r282 = (PyObject *)&PyLong_Type;
    PyObject *cpy_r_r283[1] = {cpy_r_r281};
    cpy_r_r284 = (PyObject **)&cpy_r_r283;
    cpy_r_r285 = PyObject_Vectorcall(cpy_r_r282, cpy_r_r284, 1, 0);
    if (unlikely(cpy_r_r285 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 35, CPyStatic_currency___globals);
        goto CPyL182;
    }
    CPy_DECREF(cpy_r_r281);
    if (likely(PyLong_Check(cpy_r_r285)))
        cpy_r_r286 = CPyTagged_FromObject(cpy_r_r285);
    else {
        CPy_TypeError("int", cpy_r_r285); cpy_r_r286 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r285);
    if (unlikely(cpy_r_r286 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 35, CPyStatic_currency___globals);
        goto CPyL154;
    }
    cpy_r_r287 = CPyStatics[104]; /* 'micro' */
    CPyTagged_INCREF(cpy_r_r286);
    cpy_r_r288 = CPyTagged_StealAsObject(cpy_r_r286);
    cpy_r_r289 = PyObject_SetAttr(cpy_r_r275, cpy_r_r287, cpy_r_r288);
    CPy_DECREF(cpy_r_r288);
    cpy_r_r290 = cpy_r_r289 >= 0;
    if (unlikely(!cpy_r_r290)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 35, CPyStatic_currency___globals);
        goto CPyL183;
    }
    CPyStatic_currency___denoms___micro = cpy_r_r286;
    CPyTagged_INCREF(CPyStatic_currency___denoms___micro);
    CPyTagged_DECREF(cpy_r_r286);
    cpy_r_r291 = (PyObject *)CPyType_currency___denoms;
    cpy_r_r292 = CPyStatic_currency___globals;
    cpy_r_r293 = CPyStatics[90]; /* 'units' */
    cpy_r_r294 = CPyDict_GetItem(cpy_r_r292, cpy_r_r293);
    if (unlikely(cpy_r_r294 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 36, CPyStatic_currency___globals);
        goto CPyL154;
    }
    if (likely(PyDict_Check(cpy_r_r294)))
        cpy_r_r295 = cpy_r_r294;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/currency.py", "<module>", 36, CPyStatic_currency___globals, "dict", cpy_r_r294);
        goto CPyL154;
    }
    cpy_r_r296 = CPyStatics[105]; /* 'finney' */
    cpy_r_r297 = CPyDict_GetItem(cpy_r_r295, cpy_r_r296);
    CPy_DECREF(cpy_r_r295);
    if (unlikely(cpy_r_r297 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 36, CPyStatic_currency___globals);
        goto CPyL154;
    }
    cpy_r_r298 = (PyObject *)&PyLong_Type;
    PyObject *cpy_r_r299[1] = {cpy_r_r297};
    cpy_r_r300 = (PyObject **)&cpy_r_r299;
    cpy_r_r301 = PyObject_Vectorcall(cpy_r_r298, cpy_r_r300, 1, 0);
    if (unlikely(cpy_r_r301 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 36, CPyStatic_currency___globals);
        goto CPyL184;
    }
    CPy_DECREF(cpy_r_r297);
    if (likely(PyLong_Check(cpy_r_r301)))
        cpy_r_r302 = CPyTagged_FromObject(cpy_r_r301);
    else {
        CPy_TypeError("int", cpy_r_r301); cpy_r_r302 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r301);
    if (unlikely(cpy_r_r302 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 36, CPyStatic_currency___globals);
        goto CPyL154;
    }
    cpy_r_r303 = CPyStatics[105]; /* 'finney' */
    CPyTagged_INCREF(cpy_r_r302);
    cpy_r_r304 = CPyTagged_StealAsObject(cpy_r_r302);
    cpy_r_r305 = PyObject_SetAttr(cpy_r_r291, cpy_r_r303, cpy_r_r304);
    CPy_DECREF(cpy_r_r304);
    cpy_r_r306 = cpy_r_r305 >= 0;
    if (unlikely(!cpy_r_r306)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 36, CPyStatic_currency___globals);
        goto CPyL185;
    }
    CPyStatic_currency___denoms___finney = cpy_r_r302;
    CPyTagged_INCREF(CPyStatic_currency___denoms___finney);
    CPyTagged_DECREF(cpy_r_r302);
    cpy_r_r307 = (PyObject *)CPyType_currency___denoms;
    cpy_r_r308 = CPyStatic_currency___globals;
    cpy_r_r309 = CPyStatics[90]; /* 'units' */
    cpy_r_r310 = CPyDict_GetItem(cpy_r_r308, cpy_r_r309);
    if (unlikely(cpy_r_r310 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 37, CPyStatic_currency___globals);
        goto CPyL154;
    }
    if (likely(PyDict_Check(cpy_r_r310)))
        cpy_r_r311 = cpy_r_r310;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/currency.py", "<module>", 37, CPyStatic_currency___globals, "dict", cpy_r_r310);
        goto CPyL154;
    }
    cpy_r_r312 = CPyStatics[106]; /* 'milliether' */
    cpy_r_r313 = CPyDict_GetItem(cpy_r_r311, cpy_r_r312);
    CPy_DECREF(cpy_r_r311);
    if (unlikely(cpy_r_r313 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 37, CPyStatic_currency___globals);
        goto CPyL154;
    }
    cpy_r_r314 = (PyObject *)&PyLong_Type;
    PyObject *cpy_r_r315[1] = {cpy_r_r313};
    cpy_r_r316 = (PyObject **)&cpy_r_r315;
    cpy_r_r317 = PyObject_Vectorcall(cpy_r_r314, cpy_r_r316, 1, 0);
    if (unlikely(cpy_r_r317 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 37, CPyStatic_currency___globals);
        goto CPyL186;
    }
    CPy_DECREF(cpy_r_r313);
    if (likely(PyLong_Check(cpy_r_r317)))
        cpy_r_r318 = CPyTagged_FromObject(cpy_r_r317);
    else {
        CPy_TypeError("int", cpy_r_r317); cpy_r_r318 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r317);
    if (unlikely(cpy_r_r318 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 37, CPyStatic_currency___globals);
        goto CPyL154;
    }
    cpy_r_r319 = CPyStatics[106]; /* 'milliether' */
    CPyTagged_INCREF(cpy_r_r318);
    cpy_r_r320 = CPyTagged_StealAsObject(cpy_r_r318);
    cpy_r_r321 = PyObject_SetAttr(cpy_r_r307, cpy_r_r319, cpy_r_r320);
    CPy_DECREF(cpy_r_r320);
    cpy_r_r322 = cpy_r_r321 >= 0;
    if (unlikely(!cpy_r_r322)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 37, CPyStatic_currency___globals);
        goto CPyL187;
    }
    CPyStatic_currency___denoms___milliether = cpy_r_r318;
    CPyTagged_INCREF(CPyStatic_currency___denoms___milliether);
    CPyTagged_DECREF(cpy_r_r318);
    cpy_r_r323 = (PyObject *)CPyType_currency___denoms;
    cpy_r_r324 = CPyStatic_currency___globals;
    cpy_r_r325 = CPyStatics[90]; /* 'units' */
    cpy_r_r326 = CPyDict_GetItem(cpy_r_r324, cpy_r_r325);
    if (unlikely(cpy_r_r326 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 38, CPyStatic_currency___globals);
        goto CPyL154;
    }
    if (likely(PyDict_Check(cpy_r_r326)))
        cpy_r_r327 = cpy_r_r326;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/currency.py", "<module>", 38, CPyStatic_currency___globals, "dict", cpy_r_r326);
        goto CPyL154;
    }
    cpy_r_r328 = CPyStatics[107]; /* 'milli' */
    cpy_r_r329 = CPyDict_GetItem(cpy_r_r327, cpy_r_r328);
    CPy_DECREF(cpy_r_r327);
    if (unlikely(cpy_r_r329 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 38, CPyStatic_currency___globals);
        goto CPyL154;
    }
    cpy_r_r330 = (PyObject *)&PyLong_Type;
    PyObject *cpy_r_r331[1] = {cpy_r_r329};
    cpy_r_r332 = (PyObject **)&cpy_r_r331;
    cpy_r_r333 = PyObject_Vectorcall(cpy_r_r330, cpy_r_r332, 1, 0);
    if (unlikely(cpy_r_r333 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 38, CPyStatic_currency___globals);
        goto CPyL188;
    }
    CPy_DECREF(cpy_r_r329);
    if (likely(PyLong_Check(cpy_r_r333)))
        cpy_r_r334 = CPyTagged_FromObject(cpy_r_r333);
    else {
        CPy_TypeError("int", cpy_r_r333); cpy_r_r334 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r333);
    if (unlikely(cpy_r_r334 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 38, CPyStatic_currency___globals);
        goto CPyL154;
    }
    cpy_r_r335 = CPyStatics[107]; /* 'milli' */
    CPyTagged_INCREF(cpy_r_r334);
    cpy_r_r336 = CPyTagged_StealAsObject(cpy_r_r334);
    cpy_r_r337 = PyObject_SetAttr(cpy_r_r323, cpy_r_r335, cpy_r_r336);
    CPy_DECREF(cpy_r_r336);
    cpy_r_r338 = cpy_r_r337 >= 0;
    if (unlikely(!cpy_r_r338)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 38, CPyStatic_currency___globals);
        goto CPyL189;
    }
    CPyStatic_currency___denoms___milli = cpy_r_r334;
    CPyTagged_INCREF(CPyStatic_currency___denoms___milli);
    CPyTagged_DECREF(cpy_r_r334);
    cpy_r_r339 = (PyObject *)CPyType_currency___denoms;
    cpy_r_r340 = CPyStatic_currency___globals;
    cpy_r_r341 = CPyStatics[90]; /* 'units' */
    cpy_r_r342 = CPyDict_GetItem(cpy_r_r340, cpy_r_r341);
    if (unlikely(cpy_r_r342 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 39, CPyStatic_currency___globals);
        goto CPyL154;
    }
    if (likely(PyDict_Check(cpy_r_r342)))
        cpy_r_r343 = cpy_r_r342;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/currency.py", "<module>", 39, CPyStatic_currency___globals, "dict", cpy_r_r342);
        goto CPyL154;
    }
    cpy_r_r344 = CPyStatics[108]; /* 'ether' */
    cpy_r_r345 = CPyDict_GetItem(cpy_r_r343, cpy_r_r344);
    CPy_DECREF(cpy_r_r343);
    if (unlikely(cpy_r_r345 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 39, CPyStatic_currency___globals);
        goto CPyL154;
    }
    cpy_r_r346 = (PyObject *)&PyLong_Type;
    PyObject *cpy_r_r347[1] = {cpy_r_r345};
    cpy_r_r348 = (PyObject **)&cpy_r_r347;
    cpy_r_r349 = PyObject_Vectorcall(cpy_r_r346, cpy_r_r348, 1, 0);
    if (unlikely(cpy_r_r349 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 39, CPyStatic_currency___globals);
        goto CPyL190;
    }
    CPy_DECREF(cpy_r_r345);
    if (likely(PyLong_Check(cpy_r_r349)))
        cpy_r_r350 = CPyTagged_FromObject(cpy_r_r349);
    else {
        CPy_TypeError("int", cpy_r_r349); cpy_r_r350 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r349);
    if (unlikely(cpy_r_r350 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 39, CPyStatic_currency___globals);
        goto CPyL154;
    }
    cpy_r_r351 = CPyStatics[108]; /* 'ether' */
    CPyTagged_INCREF(cpy_r_r350);
    cpy_r_r352 = CPyTagged_StealAsObject(cpy_r_r350);
    cpy_r_r353 = PyObject_SetAttr(cpy_r_r339, cpy_r_r351, cpy_r_r352);
    CPy_DECREF(cpy_r_r352);
    cpy_r_r354 = cpy_r_r353 >= 0;
    if (unlikely(!cpy_r_r354)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 39, CPyStatic_currency___globals);
        goto CPyL191;
    }
    CPyStatic_currency___denoms___ether = cpy_r_r350;
    CPyTagged_INCREF(CPyStatic_currency___denoms___ether);
    CPyTagged_DECREF(cpy_r_r350);
    cpy_r_r355 = (PyObject *)CPyType_currency___denoms;
    cpy_r_r356 = CPyStatic_currency___globals;
    cpy_r_r357 = CPyStatics[90]; /* 'units' */
    cpy_r_r358 = CPyDict_GetItem(cpy_r_r356, cpy_r_r357);
    if (unlikely(cpy_r_r358 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 40, CPyStatic_currency___globals);
        goto CPyL154;
    }
    if (likely(PyDict_Check(cpy_r_r358)))
        cpy_r_r359 = cpy_r_r358;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/currency.py", "<module>", 40, CPyStatic_currency___globals, "dict", cpy_r_r358);
        goto CPyL154;
    }
    cpy_r_r360 = CPyStatics[109]; /* 'kether' */
    cpy_r_r361 = CPyDict_GetItem(cpy_r_r359, cpy_r_r360);
    CPy_DECREF(cpy_r_r359);
    if (unlikely(cpy_r_r361 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 40, CPyStatic_currency___globals);
        goto CPyL154;
    }
    cpy_r_r362 = (PyObject *)&PyLong_Type;
    PyObject *cpy_r_r363[1] = {cpy_r_r361};
    cpy_r_r364 = (PyObject **)&cpy_r_r363;
    cpy_r_r365 = PyObject_Vectorcall(cpy_r_r362, cpy_r_r364, 1, 0);
    if (unlikely(cpy_r_r365 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 40, CPyStatic_currency___globals);
        goto CPyL192;
    }
    CPy_DECREF(cpy_r_r361);
    if (likely(PyLong_Check(cpy_r_r365)))
        cpy_r_r366 = CPyTagged_FromObject(cpy_r_r365);
    else {
        CPy_TypeError("int", cpy_r_r365); cpy_r_r366 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r365);
    if (unlikely(cpy_r_r366 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 40, CPyStatic_currency___globals);
        goto CPyL154;
    }
    cpy_r_r367 = CPyStatics[109]; /* 'kether' */
    CPyTagged_INCREF(cpy_r_r366);
    cpy_r_r368 = CPyTagged_StealAsObject(cpy_r_r366);
    cpy_r_r369 = PyObject_SetAttr(cpy_r_r355, cpy_r_r367, cpy_r_r368);
    CPy_DECREF(cpy_r_r368);
    cpy_r_r370 = cpy_r_r369 >= 0;
    if (unlikely(!cpy_r_r370)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 40, CPyStatic_currency___globals);
        goto CPyL193;
    }
    CPyStatic_currency___denoms___kether = cpy_r_r366;
    CPyTagged_INCREF(CPyStatic_currency___denoms___kether);
    CPyTagged_DECREF(cpy_r_r366);
    cpy_r_r371 = (PyObject *)CPyType_currency___denoms;
    cpy_r_r372 = CPyStatic_currency___globals;
    cpy_r_r373 = CPyStatics[90]; /* 'units' */
    cpy_r_r374 = CPyDict_GetItem(cpy_r_r372, cpy_r_r373);
    if (unlikely(cpy_r_r374 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 41, CPyStatic_currency___globals);
        goto CPyL154;
    }
    if (likely(PyDict_Check(cpy_r_r374)))
        cpy_r_r375 = cpy_r_r374;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/currency.py", "<module>", 41, CPyStatic_currency___globals, "dict", cpy_r_r374);
        goto CPyL154;
    }
    cpy_r_r376 = CPyStatics[110]; /* 'grand' */
    cpy_r_r377 = CPyDict_GetItem(cpy_r_r375, cpy_r_r376);
    CPy_DECREF(cpy_r_r375);
    if (unlikely(cpy_r_r377 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 41, CPyStatic_currency___globals);
        goto CPyL154;
    }
    cpy_r_r378 = (PyObject *)&PyLong_Type;
    PyObject *cpy_r_r379[1] = {cpy_r_r377};
    cpy_r_r380 = (PyObject **)&cpy_r_r379;
    cpy_r_r381 = PyObject_Vectorcall(cpy_r_r378, cpy_r_r380, 1, 0);
    if (unlikely(cpy_r_r381 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 41, CPyStatic_currency___globals);
        goto CPyL194;
    }
    CPy_DECREF(cpy_r_r377);
    if (likely(PyLong_Check(cpy_r_r381)))
        cpy_r_r382 = CPyTagged_FromObject(cpy_r_r381);
    else {
        CPy_TypeError("int", cpy_r_r381); cpy_r_r382 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r381);
    if (unlikely(cpy_r_r382 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 41, CPyStatic_currency___globals);
        goto CPyL154;
    }
    cpy_r_r383 = CPyStatics[110]; /* 'grand' */
    CPyTagged_INCREF(cpy_r_r382);
    cpy_r_r384 = CPyTagged_StealAsObject(cpy_r_r382);
    cpy_r_r385 = PyObject_SetAttr(cpy_r_r371, cpy_r_r383, cpy_r_r384);
    CPy_DECREF(cpy_r_r384);
    cpy_r_r386 = cpy_r_r385 >= 0;
    if (unlikely(!cpy_r_r386)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 41, CPyStatic_currency___globals);
        goto CPyL195;
    }
    CPyStatic_currency___denoms___grand = cpy_r_r382;
    CPyTagged_INCREF(CPyStatic_currency___denoms___grand);
    CPyTagged_DECREF(cpy_r_r382);
    cpy_r_r387 = (PyObject *)CPyType_currency___denoms;
    cpy_r_r388 = CPyStatic_currency___globals;
    cpy_r_r389 = CPyStatics[90]; /* 'units' */
    cpy_r_r390 = CPyDict_GetItem(cpy_r_r388, cpy_r_r389);
    if (unlikely(cpy_r_r390 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 42, CPyStatic_currency___globals);
        goto CPyL154;
    }
    if (likely(PyDict_Check(cpy_r_r390)))
        cpy_r_r391 = cpy_r_r390;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/currency.py", "<module>", 42, CPyStatic_currency___globals, "dict", cpy_r_r390);
        goto CPyL154;
    }
    cpy_r_r392 = CPyStatics[111]; /* 'mether' */
    cpy_r_r393 = CPyDict_GetItem(cpy_r_r391, cpy_r_r392);
    CPy_DECREF(cpy_r_r391);
    if (unlikely(cpy_r_r393 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 42, CPyStatic_currency___globals);
        goto CPyL154;
    }
    cpy_r_r394 = (PyObject *)&PyLong_Type;
    PyObject *cpy_r_r395[1] = {cpy_r_r393};
    cpy_r_r396 = (PyObject **)&cpy_r_r395;
    cpy_r_r397 = PyObject_Vectorcall(cpy_r_r394, cpy_r_r396, 1, 0);
    if (unlikely(cpy_r_r397 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 42, CPyStatic_currency___globals);
        goto CPyL196;
    }
    CPy_DECREF(cpy_r_r393);
    if (likely(PyLong_Check(cpy_r_r397)))
        cpy_r_r398 = CPyTagged_FromObject(cpy_r_r397);
    else {
        CPy_TypeError("int", cpy_r_r397); cpy_r_r398 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r397);
    if (unlikely(cpy_r_r398 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 42, CPyStatic_currency___globals);
        goto CPyL154;
    }
    cpy_r_r399 = CPyStatics[111]; /* 'mether' */
    CPyTagged_INCREF(cpy_r_r398);
    cpy_r_r400 = CPyTagged_StealAsObject(cpy_r_r398);
    cpy_r_r401 = PyObject_SetAttr(cpy_r_r387, cpy_r_r399, cpy_r_r400);
    CPy_DECREF(cpy_r_r400);
    cpy_r_r402 = cpy_r_r401 >= 0;
    if (unlikely(!cpy_r_r402)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 42, CPyStatic_currency___globals);
        goto CPyL197;
    }
    CPyStatic_currency___denoms___mether = cpy_r_r398;
    CPyTagged_INCREF(CPyStatic_currency___denoms___mether);
    CPyTagged_DECREF(cpy_r_r398);
    cpy_r_r403 = (PyObject *)CPyType_currency___denoms;
    cpy_r_r404 = CPyStatic_currency___globals;
    cpy_r_r405 = CPyStatics[90]; /* 'units' */
    cpy_r_r406 = CPyDict_GetItem(cpy_r_r404, cpy_r_r405);
    if (unlikely(cpy_r_r406 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 43, CPyStatic_currency___globals);
        goto CPyL154;
    }
    if (likely(PyDict_Check(cpy_r_r406)))
        cpy_r_r407 = cpy_r_r406;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/currency.py", "<module>", 43, CPyStatic_currency___globals, "dict", cpy_r_r406);
        goto CPyL154;
    }
    cpy_r_r408 = CPyStatics[112]; /* 'gether' */
    cpy_r_r409 = CPyDict_GetItem(cpy_r_r407, cpy_r_r408);
    CPy_DECREF(cpy_r_r407);
    if (unlikely(cpy_r_r409 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 43, CPyStatic_currency___globals);
        goto CPyL154;
    }
    cpy_r_r410 = (PyObject *)&PyLong_Type;
    PyObject *cpy_r_r411[1] = {cpy_r_r409};
    cpy_r_r412 = (PyObject **)&cpy_r_r411;
    cpy_r_r413 = PyObject_Vectorcall(cpy_r_r410, cpy_r_r412, 1, 0);
    if (unlikely(cpy_r_r413 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 43, CPyStatic_currency___globals);
        goto CPyL198;
    }
    CPy_DECREF(cpy_r_r409);
    if (likely(PyLong_Check(cpy_r_r413)))
        cpy_r_r414 = CPyTagged_FromObject(cpy_r_r413);
    else {
        CPy_TypeError("int", cpy_r_r413); cpy_r_r414 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r413);
    if (unlikely(cpy_r_r414 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 43, CPyStatic_currency___globals);
        goto CPyL154;
    }
    cpy_r_r415 = CPyStatics[112]; /* 'gether' */
    CPyTagged_INCREF(cpy_r_r414);
    cpy_r_r416 = CPyTagged_StealAsObject(cpy_r_r414);
    cpy_r_r417 = PyObject_SetAttr(cpy_r_r403, cpy_r_r415, cpy_r_r416);
    CPy_DECREF(cpy_r_r416);
    cpy_r_r418 = cpy_r_r417 >= 0;
    if (unlikely(!cpy_r_r418)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 43, CPyStatic_currency___globals);
        goto CPyL199;
    }
    CPyStatic_currency___denoms___gether = cpy_r_r414;
    CPyTagged_INCREF(CPyStatic_currency___denoms___gether);
    CPyTagged_DECREF(cpy_r_r414);
    cpy_r_r419 = (PyObject *)CPyType_currency___denoms;
    cpy_r_r420 = CPyStatic_currency___globals;
    cpy_r_r421 = CPyStatics[90]; /* 'units' */
    cpy_r_r422 = CPyDict_GetItem(cpy_r_r420, cpy_r_r421);
    if (unlikely(cpy_r_r422 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 44, CPyStatic_currency___globals);
        goto CPyL154;
    }
    if (likely(PyDict_Check(cpy_r_r422)))
        cpy_r_r423 = cpy_r_r422;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/currency.py", "<module>", 44, CPyStatic_currency___globals, "dict", cpy_r_r422);
        goto CPyL154;
    }
    cpy_r_r424 = CPyStatics[113]; /* 'tether' */
    cpy_r_r425 = CPyDict_GetItem(cpy_r_r423, cpy_r_r424);
    CPy_DECREF(cpy_r_r423);
    if (unlikely(cpy_r_r425 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 44, CPyStatic_currency___globals);
        goto CPyL154;
    }
    cpy_r_r426 = (PyObject *)&PyLong_Type;
    PyObject *cpy_r_r427[1] = {cpy_r_r425};
    cpy_r_r428 = (PyObject **)&cpy_r_r427;
    cpy_r_r429 = PyObject_Vectorcall(cpy_r_r426, cpy_r_r428, 1, 0);
    if (unlikely(cpy_r_r429 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 44, CPyStatic_currency___globals);
        goto CPyL200;
    }
    CPy_DECREF(cpy_r_r425);
    if (likely(PyLong_Check(cpy_r_r429)))
        cpy_r_r430 = CPyTagged_FromObject(cpy_r_r429);
    else {
        CPy_TypeError("int", cpy_r_r429); cpy_r_r430 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r429);
    if (unlikely(cpy_r_r430 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 44, CPyStatic_currency___globals);
        goto CPyL154;
    }
    cpy_r_r431 = CPyStatics[113]; /* 'tether' */
    CPyTagged_INCREF(cpy_r_r430);
    cpy_r_r432 = CPyTagged_StealAsObject(cpy_r_r430);
    cpy_r_r433 = PyObject_SetAttr(cpy_r_r419, cpy_r_r431, cpy_r_r432);
    CPy_DECREF(cpy_r_r432);
    cpy_r_r434 = cpy_r_r433 >= 0;
    if (unlikely(!cpy_r_r434)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 44, CPyStatic_currency___globals);
        goto CPyL201;
    }
    CPyStatic_currency___denoms___tether = cpy_r_r430;
    CPyTagged_INCREF(CPyStatic_currency___denoms___tether);
    CPyTagged_DECREF(cpy_r_r430);
    cpy_r_r435 = CPyStatic_currency___globals;
    cpy_r_r436 = CPyStatics[135]; /* 'MIN_WEI' */
    cpy_r_r437 = CPyStatics[265]; /* 0 */
    cpy_r_r438 = CPyDict_SetItem(cpy_r_r435, cpy_r_r436, cpy_r_r437);
    cpy_r_r439 = cpy_r_r438 >= 0;
    if (unlikely(!cpy_r_r439)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 47, CPyStatic_currency___globals);
        goto CPyL154;
    }
    cpy_r_r440 = (CPyTagged)CPyStatics[266] | 1; /* 115792089237316195423570985008687907853269984665640564039457584007913129639935 */
    cpy_r_r441 = CPyStatic_currency___globals;
    cpy_r_r442 = CPyStatics[136]; /* 'MAX_WEI' */
    CPyTagged_INCREF(cpy_r_r440);
    cpy_r_r443 = CPyTagged_StealAsObject(cpy_r_r440);
    cpy_r_r444 = CPyDict_SetItem(cpy_r_r441, cpy_r_r442, cpy_r_r443);
    CPy_DECREF(cpy_r_r443);
    cpy_r_r445 = cpy_r_r444 >= 0;
    if (unlikely(!cpy_r_r445)) {
        CPy_AddTraceback("faster_eth_utils/currency.py", "<module>", 48, CPyStatic_currency___globals);
        goto CPyL154;
    }
    return 1;
CPyL154: ;
    cpy_r_r446 = 2;
    return cpy_r_r446;
CPyL155: ;
    CPy_DecRef(cpy_r_r34);
    goto CPyL154;
CPyL156: ;
    CPy_DecRef(cpy_r_r73);
    goto CPyL154;
CPyL157: ;
    CPyTagged_DecRef(cpy_r_r78);
    goto CPyL154;
CPyL158: ;
    CPy_DecRef(cpy_r_r89);
    goto CPyL154;
CPyL159: ;
    CPyTagged_DecRef(cpy_r_r94);
    goto CPyL154;
CPyL160: ;
    CPy_DecRef(cpy_r_r105);
    goto CPyL154;
CPyL161: ;
    CPyTagged_DecRef(cpy_r_r110);
    goto CPyL154;
CPyL162: ;
    CPy_DecRef(cpy_r_r121);
    goto CPyL154;
CPyL163: ;
    CPyTagged_DecRef(cpy_r_r126);
    goto CPyL154;
CPyL164: ;
    CPy_DecRef(cpy_r_r137);
    goto CPyL154;
CPyL165: ;
    CPyTagged_DecRef(cpy_r_r142);
    goto CPyL154;
CPyL166: ;
    CPy_DecRef(cpy_r_r153);
    goto CPyL154;
CPyL167: ;
    CPyTagged_DecRef(cpy_r_r158);
    goto CPyL154;
CPyL168: ;
    CPy_DecRef(cpy_r_r169);
    goto CPyL154;
CPyL169: ;
    CPyTagged_DecRef(cpy_r_r174);
    goto CPyL154;
CPyL170: ;
    CPy_DecRef(cpy_r_r185);
    goto CPyL154;
CPyL171: ;
    CPyTagged_DecRef(cpy_r_r190);
    goto CPyL154;
CPyL172: ;
    CPy_DecRef(cpy_r_r201);
    goto CPyL154;
CPyL173: ;
    CPyTagged_DecRef(cpy_r_r206);
    goto CPyL154;
CPyL174: ;
    CPy_DecRef(cpy_r_r217);
    goto CPyL154;
CPyL175: ;
    CPyTagged_DecRef(cpy_r_r222);
    goto CPyL154;
CPyL176: ;
    CPy_DecRef(cpy_r_r233);
    goto CPyL154;
CPyL177: ;
    CPyTagged_DecRef(cpy_r_r238);
    goto CPyL154;
CPyL178: ;
    CPy_DecRef(cpy_r_r249);
    goto CPyL154;
CPyL179: ;
    CPyTagged_DecRef(cpy_r_r254);
    goto CPyL154;
CPyL180: ;
    CPy_DecRef(cpy_r_r265);
    goto CPyL154;
CPyL181: ;
    CPyTagged_DecRef(cpy_r_r270);
    goto CPyL154;
CPyL182: ;
    CPy_DecRef(cpy_r_r281);
    goto CPyL154;
CPyL183: ;
    CPyTagged_DecRef(cpy_r_r286);
    goto CPyL154;
CPyL184: ;
    CPy_DecRef(cpy_r_r297);
    goto CPyL154;
CPyL185: ;
    CPyTagged_DecRef(cpy_r_r302);
    goto CPyL154;
CPyL186: ;
    CPy_DecRef(cpy_r_r313);
    goto CPyL154;
CPyL187: ;
    CPyTagged_DecRef(cpy_r_r318);
    goto CPyL154;
CPyL188: ;
    CPy_DecRef(cpy_r_r329);
    goto CPyL154;
CPyL189: ;
    CPyTagged_DecRef(cpy_r_r334);
    goto CPyL154;
CPyL190: ;
    CPy_DecRef(cpy_r_r345);
    goto CPyL154;
CPyL191: ;
    CPyTagged_DecRef(cpy_r_r350);
    goto CPyL154;
CPyL192: ;
    CPy_DecRef(cpy_r_r361);
    goto CPyL154;
CPyL193: ;
    CPyTagged_DecRef(cpy_r_r366);
    goto CPyL154;
CPyL194: ;
    CPy_DecRef(cpy_r_r377);
    goto CPyL154;
CPyL195: ;
    CPyTagged_DecRef(cpy_r_r382);
    goto CPyL154;
CPyL196: ;
    CPy_DecRef(cpy_r_r393);
    goto CPyL154;
CPyL197: ;
    CPyTagged_DecRef(cpy_r_r398);
    goto CPyL154;
CPyL198: ;
    CPy_DecRef(cpy_r_r409);
    goto CPyL154;
CPyL199: ;
    CPyTagged_DecRef(cpy_r_r414);
    goto CPyL154;
CPyL200: ;
    CPy_DecRef(cpy_r_r425);
    goto CPyL154;
CPyL201: ;
    CPyTagged_DecRef(cpy_r_r430);
    goto CPyL154;
}
static PyMethodDef debugmodule_methods[] = {
    {"pip_freeze", (PyCFunction)CPyPy_debug___pip_freeze, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"python_version", (PyCFunction)CPyPy_debug___python_version, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"platform_info", (PyCFunction)CPyPy_debug___platform_info, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"get_environment_summary", (PyCFunction)CPyPy_debug___get_environment_summary, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef debugmodule = {
    PyModuleDef_HEAD_INIT,
    "faster_eth_utils.debug",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    debugmodule_methods
};

PyObject *CPyInit_faster_eth_utils___debug(void)
{
    PyObject* modname = NULL;
    if (CPyModule_faster_eth_utils___debug_internal) {
        Py_INCREF(CPyModule_faster_eth_utils___debug_internal);
        return CPyModule_faster_eth_utils___debug_internal;
    }
    CPyModule_faster_eth_utils___debug_internal = PyModule_Create(&debugmodule);
    if (unlikely(CPyModule_faster_eth_utils___debug_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_faster_eth_utils___debug_internal, "__name__");
    CPyStatic_debug___globals = PyModule_GetDict(CPyModule_faster_eth_utils___debug_internal);
    if (unlikely(CPyStatic_debug___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_debug_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_faster_eth_utils___debug_internal;
    fail:
    Py_CLEAR(CPyModule_faster_eth_utils___debug_internal);
    Py_CLEAR(modname);
    return NULL;
}

PyObject *CPyDef_debug___pip_freeze(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyTagged cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject **cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    cpy_r_r0 = CPyStatics[137]; /* 'python -m pip freeze' */
    cpy_r_r1 = PyUnicode_Split(cpy_r_r0, NULL, -1);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/debug.py", "pip_freeze", 7, CPyStatic_debug___globals);
        goto CPyL10;
    }
    cpy_r_r2 = CPyModule_subprocess;
    cpy_r_r3 = CPyStatics[138]; /* 'PIPE' */
    cpy_r_r4 = CPyObject_GetAttr(cpy_r_r2, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/debug.py", "pip_freeze", 7, CPyStatic_debug___globals);
        goto CPyL11;
    }
    if (likely(PyLong_Check(cpy_r_r4)))
        cpy_r_r5 = CPyTagged_FromObject(cpy_r_r4);
    else {
        CPy_TypeError("int", cpy_r_r4); cpy_r_r5 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_eth_utils/debug.py", "pip_freeze", 7, CPyStatic_debug___globals);
        goto CPyL11;
    }
    cpy_r_r6 = CPyModule_subprocess;
    cpy_r_r7 = CPyStatics[139]; /* 'run' */
    cpy_r_r8 = CPyObject_GetAttr(cpy_r_r6, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/debug.py", "pip_freeze", 7, CPyStatic_debug___globals);
        goto CPyL12;
    }
    cpy_r_r9 = CPyTagged_StealAsObject(cpy_r_r5);
    PyObject *cpy_r_r10[2] = {cpy_r_r1, cpy_r_r9};
    cpy_r_r11 = (PyObject **)&cpy_r_r10;
    cpy_r_r12 = CPyStatics[303]; /* ('stdout',) */
    cpy_r_r13 = PyObject_Vectorcall(cpy_r_r8, cpy_r_r11, 1, cpy_r_r12);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/debug.py", "pip_freeze", 7, CPyStatic_debug___globals);
        goto CPyL13;
    }
    CPy_DECREF_NO_IMM(cpy_r_r1);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r14 = CPyStatics[141]; /* 'python -m pip freeze result:\n' */
    cpy_r_r15 = CPyStatics[140]; /* 'stdout' */
    cpy_r_r16 = CPyObject_GetAttr(cpy_r_r13, cpy_r_r15);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/debug.py", "pip_freeze", 8, CPyStatic_debug___globals);
        goto CPyL10;
    }
    if (likely(PyBytes_Check(cpy_r_r16) || PyByteArray_Check(cpy_r_r16)))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/debug.py", "pip_freeze", 8, CPyStatic_debug___globals, "bytes", cpy_r_r16);
        goto CPyL10;
    }
    cpy_r_r18 = CPy_Decode(cpy_r_r17, NULL, NULL);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/debug.py", "pip_freeze", 8, CPyStatic_debug___globals);
        goto CPyL10;
    }
    cpy_r_r19 = CPyStr_Build(2, cpy_r_r14, cpy_r_r18);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/debug.py", "pip_freeze", 8, CPyStatic_debug___globals);
        goto CPyL10;
    }
    return cpy_r_r19;
CPyL10: ;
    cpy_r_r20 = NULL;
    return cpy_r_r20;
CPyL11: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL10;
CPyL12: ;
    CPy_DecRef(cpy_r_r1);
    CPyTagged_DecRef(cpy_r_r5);
    goto CPyL10;
CPyL13: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r9);
    goto CPyL10;
}

PyObject *CPyPy_debug___pip_freeze(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":pip_freeze", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *retval = CPyDef_debug___pip_freeze();
    return retval;
fail: ;
    CPy_AddTraceback("faster_eth_utils/debug.py", "pip_freeze", 6, CPyStatic_debug___globals);
    return NULL;
}

PyObject *CPyDef_debug___python_version(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    cpy_r_r0 = CPyStatics[142]; /* 'Python version:\n' */
    cpy_r_r1 = CPyModule_sys;
    cpy_r_r2 = CPyStatics[143]; /* 'version' */
    cpy_r_r3 = CPyObject_GetAttr(cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/debug.py", "python_version", 12, CPyStatic_debug___globals);
        goto CPyL4;
    }
    if (likely(PyUnicode_Check(cpy_r_r3)))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/debug.py", "python_version", 12, CPyStatic_debug___globals, "str", cpy_r_r3);
        goto CPyL4;
    }
    cpy_r_r5 = CPyStr_Build(2, cpy_r_r0, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/debug.py", "python_version", 12, CPyStatic_debug___globals);
        goto CPyL4;
    }
    return cpy_r_r5;
CPyL4: ;
    cpy_r_r6 = NULL;
    return cpy_r_r6;
}

PyObject *CPyPy_debug___python_version(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":python_version", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *retval = CPyDef_debug___python_version();
    return retval;
fail: ;
    CPy_AddTraceback("faster_eth_utils/debug.py", "python_version", 11, CPyStatic_debug___globals);
    return NULL;
}

PyObject *CPyDef_debug___platform_info(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = CPyStatics[144]; /* 'Operating System: ' */
    cpy_r_r1 = CPyModule_platform;
    cpy_r_r2 = CPyStatics[145]; /* 'platform' */
    cpy_r_r3 = CPyObject_GetAttr(cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/debug.py", "platform_info", 16, CPyStatic_debug___globals);
        goto CPyL5;
    }
    cpy_r_r4 = PyObject_Vectorcall(cpy_r_r3, 0, 0, 0);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/debug.py", "platform_info", 16, CPyStatic_debug___globals);
        goto CPyL5;
    }
    if (likely(PyUnicode_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/debug.py", "platform_info", 16, CPyStatic_debug___globals, "str", cpy_r_r4);
        goto CPyL5;
    }
    cpy_r_r6 = CPyStr_Build(2, cpy_r_r0, cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/debug.py", "platform_info", 16, CPyStatic_debug___globals);
        goto CPyL5;
    }
    return cpy_r_r6;
CPyL5: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
}

PyObject *CPyPy_debug___platform_info(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":platform_info", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *retval = CPyDef_debug___platform_info();
    return retval;
fail: ;
    CPy_AddTraceback("faster_eth_utils/debug.py", "platform_info", 15, CPyStatic_debug___globals);
    return NULL;
}

PyObject *CPyDef_debug___get_environment_summary(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyPtr cpy_r_r5;
    CPyPtr cpy_r_r6;
    CPyPtr cpy_r_r7;
    CPyPtr cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    cpy_r_r0 = CPyStatics[146]; /* '\n\n' */
    cpy_r_r1 = CPyDef_debug___python_version();
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/debug.py", "get_environment_summary", 20, CPyStatic_debug___globals);
        goto CPyL6;
    }
    cpy_r_r2 = CPyDef_debug___platform_info();
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/debug.py", "get_environment_summary", 20, CPyStatic_debug___globals);
        goto CPyL7;
    }
    cpy_r_r3 = CPyDef_debug___pip_freeze();
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/debug.py", "get_environment_summary", 20, CPyStatic_debug___globals);
        goto CPyL8;
    }
    cpy_r_r4 = PyList_New(3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/debug.py", "get_environment_summary", 20, CPyStatic_debug___globals);
        goto CPyL9;
    }
    cpy_r_r5 = (CPyPtr)&((PyListObject *)cpy_r_r4)->ob_item;
    cpy_r_r6 = *(CPyPtr *)cpy_r_r5;
    *(PyObject * *)cpy_r_r6 = cpy_r_r1;
    cpy_r_r7 = cpy_r_r6 + 8;
    *(PyObject * *)cpy_r_r7 = cpy_r_r2;
    cpy_r_r8 = cpy_r_r6 + 16;
    *(PyObject * *)cpy_r_r8 = cpy_r_r3;
    cpy_r_r9 = PyUnicode_Join(cpy_r_r0, cpy_r_r4);
    CPy_DECREF_NO_IMM(cpy_r_r4);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/debug.py", "get_environment_summary", 20, CPyStatic_debug___globals);
        goto CPyL6;
    }
    return cpy_r_r9;
CPyL6: ;
    cpy_r_r10 = NULL;
    return cpy_r_r10;
CPyL7: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL6;
CPyL8: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    goto CPyL6;
CPyL9: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r3);
    goto CPyL6;
}

PyObject *CPyPy_debug___get_environment_summary(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":get_environment_summary", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *retval = CPyDef_debug___get_environment_summary();
    return retval;
fail: ;
    CPy_AddTraceback("faster_eth_utils/debug.py", "get_environment_summary", 19, CPyStatic_debug___globals);
    return NULL;
}

char CPyDef_debug_____top_level__(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject **cpy_r_r5;
    PyObject **cpy_r_r6;
    PyObject **cpy_r_r7;
    void *cpy_r_r9;
    void *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[18]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/debug.py", "<module>", -1, CPyStatic_debug___globals);
        goto CPyL5;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = (PyObject **)&CPyModule_platform;
    cpy_r_r6 = (PyObject **)&CPyModule_subprocess;
    cpy_r_r7 = (PyObject **)&CPyModule_sys;
    PyObject **cpy_r_r8[3] = {cpy_r_r5, cpy_r_r6, cpy_r_r7};
    cpy_r_r9 = (void *)&cpy_r_r8;
    int64_t cpy_r_r10[3] = {1, 2, 3};
    cpy_r_r11 = (void *)&cpy_r_r10;
    cpy_r_r12 = CPyStatics[307]; /* (('platform', 'platform', 'platform'),
                                    ('subprocess', 'subprocess', 'subprocess'),
                                    ('sys', 'sys', 'sys')) */
    cpy_r_r13 = CPyStatic_debug___globals;
    cpy_r_r14 = CPyStatics[149]; /* 'faster_eth_utils/debug.py' */
    cpy_r_r15 = CPyStatics[38]; /* '<module>' */
    cpy_r_r16 = CPyImport_ImportMany(cpy_r_r12, cpy_r_r9, cpy_r_r13, cpy_r_r14, cpy_r_r15, cpy_r_r11);
    if (!cpy_r_r16) goto CPyL5;
    return 1;
CPyL5: ;
    cpy_r_r17 = 2;
    return cpy_r_r17;
}

static PyObject *CPyDunder___get__decorators___combomethod(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_decorators___combomethod_____get__(self, instance, owner);
}
static int
decorators___combomethod_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *decorators___combomethod_setup(PyTypeObject *type);
PyObject *CPyDef_decorators___combomethod(PyObject *cpy_r_method);

static PyObject *
decorators___combomethod_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_decorators___combomethod) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = decorators___combomethod_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_decorators___combomethod_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
decorators___combomethod_traverse(faster_eth_utils___decorators___combomethodObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_method);
    return 0;
}

static int
decorators___combomethod_clear(faster_eth_utils___decorators___combomethodObject *self)
{
    Py_CLEAR(self->_method);
    return 0;
}

static void
decorators___combomethod_dealloc(faster_eth_utils___decorators___combomethodObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, decorators___combomethod_dealloc)
    decorators___combomethod_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem decorators___combomethod_vtable[2];
static bool
CPyDef_decorators___combomethod_trait_vtable_setup(void)
{
    CPyVTableItem decorators___combomethod_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_decorators___combomethod_____init__,
        (CPyVTableItem)CPyDef_decorators___combomethod_____get__,
    };
    memcpy(decorators___combomethod_vtable, decorators___combomethod_vtable_scratch, sizeof(decorators___combomethod_vtable));
    return 1;
}

static PyObject *
decorators___combomethod_get_method(faster_eth_utils___decorators___combomethodObject *self, void *closure);
static int
decorators___combomethod_set_method(faster_eth_utils___decorators___combomethodObject *self, PyObject *value, void *closure);

static PyGetSetDef decorators___combomethod_getseters[] = {
    {"method",
     (getter)decorators___combomethod_get_method, (setter)decorators___combomethod_set_method,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef decorators___combomethod_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_decorators___combomethod_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_decorators___combomethod_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_decorators___combomethod_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "combomethod",
    .tp_new = decorators___combomethod_new,
    .tp_dealloc = (destructor)decorators___combomethod_dealloc,
    .tp_traverse = (traverseproc)decorators___combomethod_traverse,
    .tp_clear = (inquiry)decorators___combomethod_clear,
    .tp_getset = decorators___combomethod_getseters,
    .tp_methods = decorators___combomethod_methods,
    .tp_descr_get = CPyDunder___get__decorators___combomethod,
    .tp_init = decorators___combomethod_init,
    .tp_basicsize = sizeof(faster_eth_utils___decorators___combomethodObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_decorators___combomethod_template = &CPyType_decorators___combomethod_template_;

static PyObject *
decorators___combomethod_setup(PyTypeObject *type)
{
    faster_eth_utils___decorators___combomethodObject *self;
    self = (faster_eth_utils___decorators___combomethodObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = decorators___combomethod_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_decorators___combomethod(PyObject *cpy_r_method)
{
    PyObject *self = decorators___combomethod_setup(CPyType_decorators___combomethod);
    if (self == NULL)
        return NULL;
    char res = CPyDef_decorators___combomethod_____init__(self, cpy_r_method);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
decorators___combomethod_get_method(faster_eth_utils___decorators___combomethodObject *self, void *closure)
{
    if (unlikely(self->_method == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'method' of 'combomethod' undefined");
        return NULL;
    }
    CPy_INCREF(self->_method);
    PyObject *retval = self->_method;
    return retval;
}

static int
decorators___combomethod_set_method(faster_eth_utils___decorators___combomethodObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'combomethod' object attribute 'method' cannot be deleted");
        return -1;
    }
    if (self->_method != NULL) {
        CPy_DECREF(self->_method);
    }
    PyObject *tmp = value;
    CPy_INCREF(tmp);
    self->_method = tmp;
    return 0;
}

static PyObject *decorators_____get___3_combomethod_env_setup(PyTypeObject *type);
PyObject *CPyDef_decorators_____get___3_combomethod_env(void);

static PyObject *
decorators_____get___3_combomethod_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_decorators_____get___3_combomethod_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return decorators_____get___3_combomethod_env_setup(type);
}

static int
decorators_____get___3_combomethod_env_traverse(faster_eth_utils___decorators_____get___3_combomethod_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_self);
    Py_VISIT(self->_obj);
    Py_VISIT(self->_objtype);
    Py_VISIT(self->__wrapper);
    return 0;
}

static int
decorators_____get___3_combomethod_env_clear(faster_eth_utils___decorators_____get___3_combomethod_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_self);
    Py_CLEAR(self->_obj);
    Py_CLEAR(self->_objtype);
    Py_CLEAR(self->__wrapper);
    return 0;
}

static void
decorators_____get___3_combomethod_env_dealloc(faster_eth_utils___decorators_____get___3_combomethod_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, decorators_____get___3_combomethod_env_dealloc)
    decorators_____get___3_combomethod_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem decorators_____get___3_combomethod_env_vtable[1];
static bool
CPyDef_decorators_____get___3_combomethod_env_trait_vtable_setup(void)
{
    CPyVTableItem decorators_____get___3_combomethod_env_vtable_scratch[] = {
        NULL
    };
    memcpy(decorators_____get___3_combomethod_env_vtable, decorators_____get___3_combomethod_env_vtable_scratch, sizeof(decorators_____get___3_combomethod_env_vtable));
    return 1;
}

static PyMethodDef decorators_____get___3_combomethod_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_decorators_____get___3_combomethod_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__get___combomethod_env",
    .tp_new = decorators_____get___3_combomethod_env_new,
    .tp_dealloc = (destructor)decorators_____get___3_combomethod_env_dealloc,
    .tp_traverse = (traverseproc)decorators_____get___3_combomethod_env_traverse,
    .tp_clear = (inquiry)decorators_____get___3_combomethod_env_clear,
    .tp_methods = decorators_____get___3_combomethod_env_methods,
    .tp_basicsize = sizeof(faster_eth_utils___decorators_____get___3_combomethod_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_decorators_____get___3_combomethod_env_template = &CPyType_decorators_____get___3_combomethod_env_template_;

static PyObject *
decorators_____get___3_combomethod_env_setup(PyTypeObject *type)
{
    faster_eth_utils___decorators_____get___3_combomethod_envObject *self;
    self = (faster_eth_utils___decorators_____get___3_combomethod_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = decorators_____get___3_combomethod_env_vtable;
    self->_None = 2;
    return (PyObject *)self;
}

PyObject *CPyDef_decorators_____get___3_combomethod_env(void)
{
    PyObject *self = decorators_____get___3_combomethod_env_setup(CPyType_decorators_____get___3_combomethod_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__decorators____wrapper___3_get___3_combomethod_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_decorators____wrapper___3_get___3_combomethod_obj_____get__(self, instance, owner);
}
static PyObject *decorators____wrapper___3_get___3_combomethod_obj_setup(PyTypeObject *type);
PyObject *CPyDef_decorators____wrapper___3_get___3_combomethod_obj(void);

static PyObject *
decorators____wrapper___3_get___3_combomethod_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_decorators____wrapper___3_get___3_combomethod_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return decorators____wrapper___3_get___3_combomethod_obj_setup(type);
}

static int
decorators____wrapper___3_get___3_combomethod_obj_traverse(faster_eth_utils___decorators____wrapper___3_get___3_combomethod_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    PyObject_VisitManagedDict((PyObject *)self, visit, arg);
    return 0;
}

static int
decorators____wrapper___3_get___3_combomethod_obj_clear(faster_eth_utils___decorators____wrapper___3_get___3_combomethod_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    PyObject_ClearManagedDict((PyObject *)self);
    return 0;
}

static void
decorators____wrapper___3_get___3_combomethod_obj_dealloc(faster_eth_utils___decorators____wrapper___3_get___3_combomethod_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, decorators____wrapper___3_get___3_combomethod_obj_dealloc)
    decorators____wrapper___3_get___3_combomethod_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem decorators____wrapper___3_get___3_combomethod_obj_vtable[2];
static bool
CPyDef_decorators____wrapper___3_get___3_combomethod_obj_trait_vtable_setup(void)
{
    CPyVTableItem decorators____wrapper___3_get___3_combomethod_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_decorators____wrapper___3_get___3_combomethod_obj_____call__,
        (CPyVTableItem)CPyDef_decorators____wrapper___3_get___3_combomethod_obj_____get__,
    };
    memcpy(decorators____wrapper___3_get___3_combomethod_obj_vtable, decorators____wrapper___3_get___3_combomethod_obj_vtable_scratch, sizeof(decorators____wrapper___3_get___3_combomethod_obj_vtable));
    return 1;
}

static PyObject *
decorators____wrapper___3_get___3_combomethod_obj_get___3_mypyc_env__(faster_eth_utils___decorators____wrapper___3_get___3_combomethod_objObject *self, void *closure);
static int
decorators____wrapper___3_get___3_combomethod_obj_set___3_mypyc_env__(faster_eth_utils___decorators____wrapper___3_get___3_combomethod_objObject *self, PyObject *value, void *closure);

static PyGetSetDef decorators____wrapper___3_get___3_combomethod_obj_getseters[] = {
    {"__mypyc_env__",
     (getter)decorators____wrapper___3_get___3_combomethod_obj_get___3_mypyc_env__, (setter)decorators____wrapper___3_get___3_combomethod_obj_set___3_mypyc_env__,
     NULL, NULL},
    {"__dict__", PyObject_GenericGetDict, PyObject_GenericSetDict},
    {NULL}  /* Sentinel */
};

static PyMethodDef decorators____wrapper___3_get___3_combomethod_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_decorators____wrapper___3_get___3_combomethod_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_decorators____wrapper___3_get___3_combomethod_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_decorators____wrapper___3_get___3_combomethod_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "_wrapper___get___combomethod_obj",
    .tp_new = decorators____wrapper___3_get___3_combomethod_obj_new,
    .tp_dealloc = (destructor)decorators____wrapper___3_get___3_combomethod_obj_dealloc,
    .tp_traverse = (traverseproc)decorators____wrapper___3_get___3_combomethod_obj_traverse,
    .tp_clear = (inquiry)decorators____wrapper___3_get___3_combomethod_obj_clear,
    .tp_getset = decorators____wrapper___3_get___3_combomethod_obj_getseters,
    .tp_methods = decorators____wrapper___3_get___3_combomethod_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__decorators____wrapper___3_get___3_combomethod_obj,
    .tp_basicsize = sizeof(faster_eth_utils___decorators____wrapper___3_get___3_combomethod_objObject),
    .tp_vectorcall_offset = offsetof(faster_eth_utils___decorators____wrapper___3_get___3_combomethod_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL | Py_TPFLAGS_MANAGED_DICT,
};
static PyTypeObject *CPyType_decorators____wrapper___3_get___3_combomethod_obj_template = &CPyType_decorators____wrapper___3_get___3_combomethod_obj_template_;

static PyObject *
decorators____wrapper___3_get___3_combomethod_obj_setup(PyTypeObject *type)
{
    faster_eth_utils___decorators____wrapper___3_get___3_combomethod_objObject *self;
    self = (faster_eth_utils___decorators____wrapper___3_get___3_combomethod_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = decorators____wrapper___3_get___3_combomethod_obj_vtable;
    self->vectorcall = CPyPy_decorators____wrapper___3_get___3_combomethod_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_decorators____wrapper___3_get___3_combomethod_obj(void)
{
    PyObject *self = decorators____wrapper___3_get___3_combomethod_obj_setup(CPyType_decorators____wrapper___3_get___3_combomethod_obj);
    if (self == NULL)
        return NULL;
    return self;
}

static PyObject *
decorators____wrapper___3_get___3_combomethod_obj_get___3_mypyc_env__(faster_eth_utils___decorators____wrapper___3_get___3_combomethod_objObject *self, void *closure)
{
    if (unlikely(self->___mypyc_env__ == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '__mypyc_env__' of '_wrapper___get___combomethod_obj' undefined");
        return NULL;
    }
    CPy_INCREF_NO_IMM(self->___mypyc_env__);
    PyObject *retval = self->___mypyc_env__;
    return retval;
}

static int
decorators____wrapper___3_get___3_combomethod_obj_set___3_mypyc_env__(faster_eth_utils___decorators____wrapper___3_get___3_combomethod_objObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'_wrapper___get___combomethod_obj' object attribute '__mypyc_env__' cannot be deleted");
        return -1;
    }
    if (self->___mypyc_env__ != NULL) {
        CPy_DECREF_NO_IMM(self->___mypyc_env__);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_decorators_____get___3_combomethod_env))
        tmp = value;
    else {
        CPy_TypeError("faster_eth_utils.decorators.__get___combomethod_env", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF_NO_IMM(tmp);
    self->___mypyc_env__ = tmp;
    return 0;
}

static PyObject *decorators___return_arg_type_env_setup(PyTypeObject *type);
PyObject *CPyDef_decorators___return_arg_type_env(void);

static PyObject *
decorators___return_arg_type_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_decorators___return_arg_type_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return decorators___return_arg_type_env_setup(type);
}

static int
decorators___return_arg_type_env_traverse(faster_eth_utils___decorators___return_arg_type_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    if (CPyTagged_CheckLong(self->_at_position)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_at_position));
    }
    Py_VISIT(self->_decorator);
    return 0;
}

static int
decorators___return_arg_type_env_clear(faster_eth_utils___decorators___return_arg_type_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    if (CPyTagged_CheckLong(self->_at_position)) {
        CPyTagged __tmp = self->_at_position;
        self->_at_position = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_decorator);
    return 0;
}

static void
decorators___return_arg_type_env_dealloc(faster_eth_utils___decorators___return_arg_type_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, decorators___return_arg_type_env_dealloc)
    decorators___return_arg_type_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem decorators___return_arg_type_env_vtable[1];
static bool
CPyDef_decorators___return_arg_type_env_trait_vtable_setup(void)
{
    CPyVTableItem decorators___return_arg_type_env_vtable_scratch[] = {
        NULL
    };
    memcpy(decorators___return_arg_type_env_vtable, decorators___return_arg_type_env_vtable_scratch, sizeof(decorators___return_arg_type_env_vtable));
    return 1;
}

static PyMethodDef decorators___return_arg_type_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_decorators___return_arg_type_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "return_arg_type_env",
    .tp_new = decorators___return_arg_type_env_new,
    .tp_dealloc = (destructor)decorators___return_arg_type_env_dealloc,
    .tp_traverse = (traverseproc)decorators___return_arg_type_env_traverse,
    .tp_clear = (inquiry)decorators___return_arg_type_env_clear,
    .tp_methods = decorators___return_arg_type_env_methods,
    .tp_basicsize = sizeof(faster_eth_utils___decorators___return_arg_type_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_decorators___return_arg_type_env_template = &CPyType_decorators___return_arg_type_env_template_;

static PyObject *
decorators___return_arg_type_env_setup(PyTypeObject *type)
{
    faster_eth_utils___decorators___return_arg_type_envObject *self;
    self = (faster_eth_utils___decorators___return_arg_type_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = decorators___return_arg_type_env_vtable;
    self->_at_position = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_decorators___return_arg_type_env(void)
{
    PyObject *self = decorators___return_arg_type_env_setup(CPyType_decorators___return_arg_type_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *decorators___decorator_return_arg_type_env_setup(PyTypeObject *type);
PyObject *CPyDef_decorators___decorator_return_arg_type_env(void);

static PyObject *
decorators___decorator_return_arg_type_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_decorators___decorator_return_arg_type_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return decorators___decorator_return_arg_type_env_setup(type);
}

static int
decorators___decorator_return_arg_type_env_traverse(faster_eth_utils___decorators___decorator_return_arg_type_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(self->_to_wrap);
    Py_VISIT(self->_wrapper);
    if (CPyTagged_CheckLong(self->_at_position)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_at_position));
    }
    Py_VISIT(self->_decorator);
    return 0;
}

static int
decorators___decorator_return_arg_type_env_clear(faster_eth_utils___decorators___decorator_return_arg_type_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(self->_to_wrap);
    Py_CLEAR(self->_wrapper);
    if (CPyTagged_CheckLong(self->_at_position)) {
        CPyTagged __tmp = self->_at_position;
        self->_at_position = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_decorator);
    return 0;
}

static void
decorators___decorator_return_arg_type_env_dealloc(faster_eth_utils___decorators___decorator_return_arg_type_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, decorators___decorator_return_arg_type_env_dealloc)
    decorators___decorator_return_arg_type_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem decorators___decorator_return_arg_type_env_vtable[1];
static bool
CPyDef_decorators___decorator_return_arg_type_env_trait_vtable_setup(void)
{
    CPyVTableItem decorators___decorator_return_arg_type_env_vtable_scratch[] = {
        NULL
    };
    memcpy(decorators___decorator_return_arg_type_env_vtable, decorators___decorator_return_arg_type_env_vtable_scratch, sizeof(decorators___decorator_return_arg_type_env_vtable));
    return 1;
}

static PyMethodDef decorators___decorator_return_arg_type_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_decorators___decorator_return_arg_type_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "decorator_return_arg_type_env",
    .tp_new = decorators___decorator_return_arg_type_env_new,
    .tp_dealloc = (destructor)decorators___decorator_return_arg_type_env_dealloc,
    .tp_traverse = (traverseproc)decorators___decorator_return_arg_type_env_traverse,
    .tp_clear = (inquiry)decorators___decorator_return_arg_type_env_clear,
    .tp_methods = decorators___decorator_return_arg_type_env_methods,
    .tp_basicsize = sizeof(faster_eth_utils___decorators___decorator_return_arg_type_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_decorators___decorator_return_arg_type_env_template = &CPyType_decorators___decorator_return_arg_type_env_template_;

static PyObject *
decorators___decorator_return_arg_type_env_setup(PyTypeObject *type)
{
    faster_eth_utils___decorators___decorator_return_arg_type_envObject *self;
    self = (faster_eth_utils___decorators___decorator_return_arg_type_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = decorators___decorator_return_arg_type_env_vtable;
    self->_at_position = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_decorators___decorator_return_arg_type_env(void)
{
    PyObject *self = decorators___decorator_return_arg_type_env_setup(CPyType_decorators___decorator_return_arg_type_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__decorators___decorator_return_arg_type_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_decorators___decorator_return_arg_type_obj_____get__(self, instance, owner);
}
static PyObject *decorators___decorator_return_arg_type_obj_setup(PyTypeObject *type);
PyObject *CPyDef_decorators___decorator_return_arg_type_obj(void);

static PyObject *
decorators___decorator_return_arg_type_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_decorators___decorator_return_arg_type_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return decorators___decorator_return_arg_type_obj_setup(type);
}

static int
decorators___decorator_return_arg_type_obj_traverse(faster_eth_utils___decorators___decorator_return_arg_type_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    PyObject_VisitManagedDict((PyObject *)self, visit, arg);
    return 0;
}

static int
decorators___decorator_return_arg_type_obj_clear(faster_eth_utils___decorators___decorator_return_arg_type_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    PyObject_ClearManagedDict((PyObject *)self);
    return 0;
}

static void
decorators___decorator_return_arg_type_obj_dealloc(faster_eth_utils___decorators___decorator_return_arg_type_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, decorators___decorator_return_arg_type_obj_dealloc)
    decorators___decorator_return_arg_type_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem decorators___decorator_return_arg_type_obj_vtable[2];
static bool
CPyDef_decorators___decorator_return_arg_type_obj_trait_vtable_setup(void)
{
    CPyVTableItem decorators___decorator_return_arg_type_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_decorators___decorator_return_arg_type_obj_____call__,
        (CPyVTableItem)CPyDef_decorators___decorator_return_arg_type_obj_____get__,
    };
    memcpy(decorators___decorator_return_arg_type_obj_vtable, decorators___decorator_return_arg_type_obj_vtable_scratch, sizeof(decorators___decorator_return_arg_type_obj_vtable));
    return 1;
}

static PyObject *
decorators___decorator_return_arg_type_obj_get___3_mypyc_env__(faster_eth_utils___decorators___decorator_return_arg_type_objObject *self, void *closure);
static int
decorators___decorator_return_arg_type_obj_set___3_mypyc_env__(faster_eth_utils___decorators___decorator_return_arg_type_objObject *self, PyObject *value, void *closure);

static PyGetSetDef decorators___decorator_return_arg_type_obj_getseters[] = {
    {"__mypyc_env__",
     (getter)decorators___decorator_return_arg_type_obj_get___3_mypyc_env__, (setter)decorators___decorator_return_arg_type_obj_set___3_mypyc_env__,
     NULL, NULL},
    {"__dict__", PyObject_GenericGetDict, PyObject_GenericSetDict},
    {NULL}  /* Sentinel */
};

static PyMethodDef decorators___decorator_return_arg_type_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_decorators___decorator_return_arg_type_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_decorators___decorator_return_arg_type_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_decorators___decorator_return_arg_type_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "decorator_return_arg_type_obj",
    .tp_new = decorators___decorator_return_arg_type_obj_new,
    .tp_dealloc = (destructor)decorators___decorator_return_arg_type_obj_dealloc,
    .tp_traverse = (traverseproc)decorators___decorator_return_arg_type_obj_traverse,
    .tp_clear = (inquiry)decorators___decorator_return_arg_type_obj_clear,
    .tp_getset = decorators___decorator_return_arg_type_obj_getseters,
    .tp_methods = decorators___decorator_return_arg_type_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__decorators___decorator_return_arg_type_obj,
    .tp_basicsize = sizeof(faster_eth_utils___decorators___decorator_return_arg_type_objObject),
    .tp_vectorcall_offset = offsetof(faster_eth_utils___decorators___decorator_return_arg_type_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL | Py_TPFLAGS_MANAGED_DICT,
};
static PyTypeObject *CPyType_decorators___decorator_return_arg_type_obj_template = &CPyType_decorators___decorator_return_arg_type_obj_template_;

static PyObject *
decorators___decorator_return_arg_type_obj_setup(PyTypeObject *type)
{
    faster_eth_utils___decorators___decorator_return_arg_type_objObject *self;
    self = (faster_eth_utils___decorators___decorator_return_arg_type_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = decorators___decorator_return_arg_type_obj_vtable;
    self->vectorcall = CPyPy_decorators___decorator_return_arg_type_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_decorators___decorator_return_arg_type_obj(void)
{
    PyObject *self = decorators___decorator_return_arg_type_obj_setup(CPyType_decorators___decorator_return_arg_type_obj);
    if (self == NULL)
        return NULL;
    return self;
}

static PyObject *
decorators___decorator_return_arg_type_obj_get___3_mypyc_env__(faster_eth_utils___decorators___decorator_return_arg_type_objObject *self, void *closure)
{
    if (unlikely(self->___mypyc_env__ == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '__mypyc_env__' of 'decorator_return_arg_type_obj' undefined");
        return NULL;
    }
    CPy_INCREF_NO_IMM(self->___mypyc_env__);
    PyObject *retval = self->___mypyc_env__;
    return retval;
}

static int
decorators___decorator_return_arg_type_obj_set___3_mypyc_env__(faster_eth_utils___decorators___decorator_return_arg_type_objObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'decorator_return_arg_type_obj' object attribute '__mypyc_env__' cannot be deleted");
        return -1;
    }
    if (self->___mypyc_env__ != NULL) {
        CPy_DECREF_NO_IMM(self->___mypyc_env__);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_decorators___return_arg_type_env))
        tmp = value;
    else {
        CPy_TypeError("faster_eth_utils.decorators.return_arg_type_env", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF_NO_IMM(tmp);
    self->___mypyc_env__ = tmp;
    return 0;
}

static PyObject *CPyDunder___get__decorators___wrapper_return_arg_type_decorator_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_decorators___wrapper_return_arg_type_decorator_obj_____get__(self, instance, owner);
}
static PyObject *decorators___wrapper_return_arg_type_decorator_obj_setup(PyTypeObject *type);
PyObject *CPyDef_decorators___wrapper_return_arg_type_decorator_obj(void);

static PyObject *
decorators___wrapper_return_arg_type_decorator_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_decorators___wrapper_return_arg_type_decorator_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return decorators___wrapper_return_arg_type_decorator_obj_setup(type);
}

static int
decorators___wrapper_return_arg_type_decorator_obj_traverse(faster_eth_utils___decorators___wrapper_return_arg_type_decorator_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    PyObject_VisitManagedDict((PyObject *)self, visit, arg);
    return 0;
}

static int
decorators___wrapper_return_arg_type_decorator_obj_clear(faster_eth_utils___decorators___wrapper_return_arg_type_decorator_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    PyObject_ClearManagedDict((PyObject *)self);
    return 0;
}

static void
decorators___wrapper_return_arg_type_decorator_obj_dealloc(faster_eth_utils___decorators___wrapper_return_arg_type_decorator_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, decorators___wrapper_return_arg_type_decorator_obj_dealloc)
    decorators___wrapper_return_arg_type_decorator_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem decorators___wrapper_return_arg_type_decorator_obj_vtable[2];
static bool
CPyDef_decorators___wrapper_return_arg_type_decorator_obj_trait_vtable_setup(void)
{
    CPyVTableItem decorators___wrapper_return_arg_type_decorator_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_decorators___wrapper_return_arg_type_decorator_obj_____call__,
        (CPyVTableItem)CPyDef_decorators___wrapper_return_arg_type_decorator_obj_____get__,
    };
    memcpy(decorators___wrapper_return_arg_type_decorator_obj_vtable, decorators___wrapper_return_arg_type_decorator_obj_vtable_scratch, sizeof(decorators___wrapper_return_arg_type_decorator_obj_vtable));
    return 1;
}

static PyObject *
decorators___wrapper_return_arg_type_decorator_obj_get___3_mypyc_env__(faster_eth_utils___decorators___wrapper_return_arg_type_decorator_objObject *self, void *closure);
static int
decorators___wrapper_return_arg_type_decorator_obj_set___3_mypyc_env__(faster_eth_utils___decorators___wrapper_return_arg_type_decorator_objObject *self, PyObject *value, void *closure);

static PyGetSetDef decorators___wrapper_return_arg_type_decorator_obj_getseters[] = {
    {"__mypyc_env__",
     (getter)decorators___wrapper_return_arg_type_decorator_obj_get___3_mypyc_env__, (setter)decorators___wrapper_return_arg_type_decorator_obj_set___3_mypyc_env__,
     NULL, NULL},
    {"__dict__", PyObject_GenericGetDict, PyObject_GenericSetDict},
    {NULL}  /* Sentinel */
};

static PyMethodDef decorators___wrapper_return_arg_type_decorator_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_decorators___wrapper_return_arg_type_decorator_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_decorators___wrapper_return_arg_type_decorator_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_decorators___wrapper_return_arg_type_decorator_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "wrapper_return_arg_type_decorator_obj",
    .tp_new = decorators___wrapper_return_arg_type_decorator_obj_new,
    .tp_dealloc = (destructor)decorators___wrapper_return_arg_type_decorator_obj_dealloc,
    .tp_traverse = (traverseproc)decorators___wrapper_return_arg_type_decorator_obj_traverse,
    .tp_clear = (inquiry)decorators___wrapper_return_arg_type_decorator_obj_clear,
    .tp_getset = decorators___wrapper_return_arg_type_decorator_obj_getseters,
    .tp_methods = decorators___wrapper_return_arg_type_decorator_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__decorators___wrapper_return_arg_type_decorator_obj,
    .tp_basicsize = sizeof(faster_eth_utils___decorators___wrapper_return_arg_type_decorator_objObject),
    .tp_vectorcall_offset = offsetof(faster_eth_utils___decorators___wrapper_return_arg_type_decorator_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL | Py_TPFLAGS_MANAGED_DICT,
};
static PyTypeObject *CPyType_decorators___wrapper_return_arg_type_decorator_obj_template = &CPyType_decorators___wrapper_return_arg_type_decorator_obj_template_;

static PyObject *
decorators___wrapper_return_arg_type_decorator_obj_setup(PyTypeObject *type)
{
    faster_eth_utils___decorators___wrapper_return_arg_type_decorator_objObject *self;
    self = (faster_eth_utils___decorators___wrapper_return_arg_type_decorator_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = decorators___wrapper_return_arg_type_decorator_obj_vtable;
    self->vectorcall = CPyPy_decorators___wrapper_return_arg_type_decorator_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_decorators___wrapper_return_arg_type_decorator_obj(void)
{
    PyObject *self = decorators___wrapper_return_arg_type_decorator_obj_setup(CPyType_decorators___wrapper_return_arg_type_decorator_obj);
    if (self == NULL)
        return NULL;
    return self;
}

static PyObject *
decorators___wrapper_return_arg_type_decorator_obj_get___3_mypyc_env__(faster_eth_utils___decorators___wrapper_return_arg_type_decorator_objObject *self, void *closure)
{
    if (unlikely(self->___mypyc_env__ == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '__mypyc_env__' of 'wrapper_return_arg_type_decorator_obj' undefined");
        return NULL;
    }
    CPy_INCREF_NO_IMM(self->___mypyc_env__);
    PyObject *retval = self->___mypyc_env__;
    return retval;
}

static int
decorators___wrapper_return_arg_type_decorator_obj_set___3_mypyc_env__(faster_eth_utils___decorators___wrapper_return_arg_type_decorator_objObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'wrapper_return_arg_type_decorator_obj' object attribute '__mypyc_env__' cannot be deleted");
        return -1;
    }
    if (self->___mypyc_env__ != NULL) {
        CPy_DECREF_NO_IMM(self->___mypyc_env__);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_decorators___decorator_return_arg_type_env))
        tmp = value;
    else {
        CPy_TypeError("faster_eth_utils.decorators.decorator_return_arg_type_env", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF_NO_IMM(tmp);
    self->___mypyc_env__ = tmp;
    return 0;
}

static PyObject *decorators___replace_exceptions_env_setup(PyTypeObject *type);
PyObject *CPyDef_decorators___replace_exceptions_env(void);

static PyObject *
decorators___replace_exceptions_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_decorators___replace_exceptions_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return decorators___replace_exceptions_env_setup(type);
}

static int
decorators___replace_exceptions_env_traverse(faster_eth_utils___decorators___replace_exceptions_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_old_to_new_exceptions);
    Py_VISIT(self->_old_exceptions);
    Py_VISIT(self->_decorator);
    return 0;
}

static int
decorators___replace_exceptions_env_clear(faster_eth_utils___decorators___replace_exceptions_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_old_to_new_exceptions);
    Py_CLEAR(self->_old_exceptions);
    Py_CLEAR(self->_decorator);
    return 0;
}

static void
decorators___replace_exceptions_env_dealloc(faster_eth_utils___decorators___replace_exceptions_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, decorators___replace_exceptions_env_dealloc)
    decorators___replace_exceptions_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem decorators___replace_exceptions_env_vtable[1];
static bool
CPyDef_decorators___replace_exceptions_env_trait_vtable_setup(void)
{
    CPyVTableItem decorators___replace_exceptions_env_vtable_scratch[] = {
        NULL
    };
    memcpy(decorators___replace_exceptions_env_vtable, decorators___replace_exceptions_env_vtable_scratch, sizeof(decorators___replace_exceptions_env_vtable));
    return 1;
}

static PyMethodDef decorators___replace_exceptions_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_decorators___replace_exceptions_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "replace_exceptions_env",
    .tp_new = decorators___replace_exceptions_env_new,
    .tp_dealloc = (destructor)decorators___replace_exceptions_env_dealloc,
    .tp_traverse = (traverseproc)decorators___replace_exceptions_env_traverse,
    .tp_clear = (inquiry)decorators___replace_exceptions_env_clear,
    .tp_methods = decorators___replace_exceptions_env_methods,
    .tp_basicsize = sizeof(faster_eth_utils___decorators___replace_exceptions_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_decorators___replace_exceptions_env_template = &CPyType_decorators___replace_exceptions_env_template_;

static PyObject *
decorators___replace_exceptions_env_setup(PyTypeObject *type)
{
    faster_eth_utils___decorators___replace_exceptions_envObject *self;
    self = (faster_eth_utils___decorators___replace_exceptions_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = decorators___replace_exceptions_env_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_decorators___replace_exceptions_env(void)
{
    PyObject *self = decorators___replace_exceptions_env_setup(CPyType_decorators___replace_exceptions_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *decorators___decorator_replace_exceptions_env_setup(PyTypeObject *type);
PyObject *CPyDef_decorators___decorator_replace_exceptions_env(void);

static PyObject *
decorators___decorator_replace_exceptions_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_decorators___decorator_replace_exceptions_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return decorators___decorator_replace_exceptions_env_setup(type);
}

static int
decorators___decorator_replace_exceptions_env_traverse(faster_eth_utils___decorators___decorator_replace_exceptions_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(self->_to_wrap);
    Py_VISIT(self->_wrapped);
    Py_VISIT(self->_old_to_new_exceptions);
    Py_VISIT(self->_old_exceptions);
    Py_VISIT(self->_decorator);
    return 0;
}

static int
decorators___decorator_replace_exceptions_env_clear(faster_eth_utils___decorators___decorator_replace_exceptions_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(self->_to_wrap);
    Py_CLEAR(self->_wrapped);
    Py_CLEAR(self->_old_to_new_exceptions);
    Py_CLEAR(self->_old_exceptions);
    Py_CLEAR(self->_decorator);
    return 0;
}

static void
decorators___decorator_replace_exceptions_env_dealloc(faster_eth_utils___decorators___decorator_replace_exceptions_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, decorators___decorator_replace_exceptions_env_dealloc)
    decorators___decorator_replace_exceptions_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem decorators___decorator_replace_exceptions_env_vtable[1];
static bool
CPyDef_decorators___decorator_replace_exceptions_env_trait_vtable_setup(void)
{
    CPyVTableItem decorators___decorator_replace_exceptions_env_vtable_scratch[] = {
        NULL
    };
    memcpy(decorators___decorator_replace_exceptions_env_vtable, decorators___decorator_replace_exceptions_env_vtable_scratch, sizeof(decorators___decorator_replace_exceptions_env_vtable));
    return 1;
}

static PyMethodDef decorators___decorator_replace_exceptions_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_decorators___decorator_replace_exceptions_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "decorator_replace_exceptions_env",
    .tp_new = decorators___decorator_replace_exceptions_env_new,
    .tp_dealloc = (destructor)decorators___decorator_replace_exceptions_env_dealloc,
    .tp_traverse = (traverseproc)decorators___decorator_replace_exceptions_env_traverse,
    .tp_clear = (inquiry)decorators___decorator_replace_exceptions_env_clear,
    .tp_methods = decorators___decorator_replace_exceptions_env_methods,
    .tp_basicsize = sizeof(faster_eth_utils___decorators___decorator_replace_exceptions_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_decorators___decorator_replace_exceptions_env_template = &CPyType_decorators___decorator_replace_exceptions_env_template_;

static PyObject *
decorators___decorator_replace_exceptions_env_setup(PyTypeObject *type)
{
    faster_eth_utils___decorators___decorator_replace_exceptions_envObject *self;
    self = (faster_eth_utils___decorators___decorator_replace_exceptions_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = decorators___decorator_replace_exceptions_env_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_decorators___decorator_replace_exceptions_env(void)
{
    PyObject *self = decorators___decorator_replace_exceptions_env_setup(CPyType_decorators___decorator_replace_exceptions_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__decorators___decorator_replace_exceptions_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_decorators___decorator_replace_exceptions_obj_____get__(self, instance, owner);
}
static PyObject *decorators___decorator_replace_exceptions_obj_setup(PyTypeObject *type);
PyObject *CPyDef_decorators___decorator_replace_exceptions_obj(void);

static PyObject *
decorators___decorator_replace_exceptions_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_decorators___decorator_replace_exceptions_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return decorators___decorator_replace_exceptions_obj_setup(type);
}

static int
decorators___decorator_replace_exceptions_obj_traverse(faster_eth_utils___decorators___decorator_replace_exceptions_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    PyObject_VisitManagedDict((PyObject *)self, visit, arg);
    return 0;
}

static int
decorators___decorator_replace_exceptions_obj_clear(faster_eth_utils___decorators___decorator_replace_exceptions_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    PyObject_ClearManagedDict((PyObject *)self);
    return 0;
}

static void
decorators___decorator_replace_exceptions_obj_dealloc(faster_eth_utils___decorators___decorator_replace_exceptions_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, decorators___decorator_replace_exceptions_obj_dealloc)
    decorators___decorator_replace_exceptions_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem decorators___decorator_replace_exceptions_obj_vtable[2];
static bool
CPyDef_decorators___decorator_replace_exceptions_obj_trait_vtable_setup(void)
{
    CPyVTableItem decorators___decorator_replace_exceptions_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_decorators___decorator_replace_exceptions_obj_____call__,
        (CPyVTableItem)CPyDef_decorators___decorator_replace_exceptions_obj_____get__,
    };
    memcpy(decorators___decorator_replace_exceptions_obj_vtable, decorators___decorator_replace_exceptions_obj_vtable_scratch, sizeof(decorators___decorator_replace_exceptions_obj_vtable));
    return 1;
}

static PyObject *
decorators___decorator_replace_exceptions_obj_get___3_mypyc_env__(faster_eth_utils___decorators___decorator_replace_exceptions_objObject *self, void *closure);
static int
decorators___decorator_replace_exceptions_obj_set___3_mypyc_env__(faster_eth_utils___decorators___decorator_replace_exceptions_objObject *self, PyObject *value, void *closure);

static PyGetSetDef decorators___decorator_replace_exceptions_obj_getseters[] = {
    {"__mypyc_env__",
     (getter)decorators___decorator_replace_exceptions_obj_get___3_mypyc_env__, (setter)decorators___decorator_replace_exceptions_obj_set___3_mypyc_env__,
     NULL, NULL},
    {"__dict__", PyObject_GenericGetDict, PyObject_GenericSetDict},
    {NULL}  /* Sentinel */
};

static PyMethodDef decorators___decorator_replace_exceptions_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_decorators___decorator_replace_exceptions_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_decorators___decorator_replace_exceptions_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_decorators___decorator_replace_exceptions_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "decorator_replace_exceptions_obj",
    .tp_new = decorators___decorator_replace_exceptions_obj_new,
    .tp_dealloc = (destructor)decorators___decorator_replace_exceptions_obj_dealloc,
    .tp_traverse = (traverseproc)decorators___decorator_replace_exceptions_obj_traverse,
    .tp_clear = (inquiry)decorators___decorator_replace_exceptions_obj_clear,
    .tp_getset = decorators___decorator_replace_exceptions_obj_getseters,
    .tp_methods = decorators___decorator_replace_exceptions_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__decorators___decorator_replace_exceptions_obj,
    .tp_basicsize = sizeof(faster_eth_utils___decorators___decorator_replace_exceptions_objObject),
    .tp_vectorcall_offset = offsetof(faster_eth_utils___decorators___decorator_replace_exceptions_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL | Py_TPFLAGS_MANAGED_DICT,
};
static PyTypeObject *CPyType_decorators___decorator_replace_exceptions_obj_template = &CPyType_decorators___decorator_replace_exceptions_obj_template_;

static PyObject *
decorators___decorator_replace_exceptions_obj_setup(PyTypeObject *type)
{
    faster_eth_utils___decorators___decorator_replace_exceptions_objObject *self;
    self = (faster_eth_utils___decorators___decorator_replace_exceptions_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = decorators___decorator_replace_exceptions_obj_vtable;
    self->vectorcall = CPyPy_decorators___decorator_replace_exceptions_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_decorators___decorator_replace_exceptions_obj(void)
{
    PyObject *self = decorators___decorator_replace_exceptions_obj_setup(CPyType_decorators___decorator_replace_exceptions_obj);
    if (self == NULL)
        return NULL;
    return self;
}

static PyObject *
decorators___decorator_replace_exceptions_obj_get___3_mypyc_env__(faster_eth_utils___decorators___decorator_replace_exceptions_objObject *self, void *closure)
{
    if (unlikely(self->___mypyc_env__ == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '__mypyc_env__' of 'decorator_replace_exceptions_obj' undefined");
        return NULL;
    }
    CPy_INCREF_NO_IMM(self->___mypyc_env__);
    PyObject *retval = self->___mypyc_env__;
    return retval;
}

static int
decorators___decorator_replace_exceptions_obj_set___3_mypyc_env__(faster_eth_utils___decorators___decorator_replace_exceptions_objObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'decorator_replace_exceptions_obj' object attribute '__mypyc_env__' cannot be deleted");
        return -1;
    }
    if (self->___mypyc_env__ != NULL) {
        CPy_DECREF_NO_IMM(self->___mypyc_env__);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_decorators___replace_exceptions_env))
        tmp = value;
    else {
        CPy_TypeError("faster_eth_utils.decorators.replace_exceptions_env", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF_NO_IMM(tmp);
    self->___mypyc_env__ = tmp;
    return 0;
}

static PyObject *CPyDunder___get__decorators___wrapped_replace_exceptions_decorator_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_decorators___wrapped_replace_exceptions_decorator_obj_____get__(self, instance, owner);
}
static PyObject *decorators___wrapped_replace_exceptions_decorator_obj_setup(PyTypeObject *type);
PyObject *CPyDef_decorators___wrapped_replace_exceptions_decorator_obj(void);

static PyObject *
decorators___wrapped_replace_exceptions_decorator_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_decorators___wrapped_replace_exceptions_decorator_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return decorators___wrapped_replace_exceptions_decorator_obj_setup(type);
}

static int
decorators___wrapped_replace_exceptions_decorator_obj_traverse(faster_eth_utils___decorators___wrapped_replace_exceptions_decorator_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    PyObject_VisitManagedDict((PyObject *)self, visit, arg);
    return 0;
}

static int
decorators___wrapped_replace_exceptions_decorator_obj_clear(faster_eth_utils___decorators___wrapped_replace_exceptions_decorator_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    PyObject_ClearManagedDict((PyObject *)self);
    return 0;
}

static void
decorators___wrapped_replace_exceptions_decorator_obj_dealloc(faster_eth_utils___decorators___wrapped_replace_exceptions_decorator_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, decorators___wrapped_replace_exceptions_decorator_obj_dealloc)
    decorators___wrapped_replace_exceptions_decorator_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem decorators___wrapped_replace_exceptions_decorator_obj_vtable[2];
static bool
CPyDef_decorators___wrapped_replace_exceptions_decorator_obj_trait_vtable_setup(void)
{
    CPyVTableItem decorators___wrapped_replace_exceptions_decorator_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_decorators___wrapped_replace_exceptions_decorator_obj_____call__,
        (CPyVTableItem)CPyDef_decorators___wrapped_replace_exceptions_decorator_obj_____get__,
    };
    memcpy(decorators___wrapped_replace_exceptions_decorator_obj_vtable, decorators___wrapped_replace_exceptions_decorator_obj_vtable_scratch, sizeof(decorators___wrapped_replace_exceptions_decorator_obj_vtable));
    return 1;
}

static PyObject *
decorators___wrapped_replace_exceptions_decorator_obj_get___3_mypyc_env__(faster_eth_utils___decorators___wrapped_replace_exceptions_decorator_objObject *self, void *closure);
static int
decorators___wrapped_replace_exceptions_decorator_obj_set___3_mypyc_env__(faster_eth_utils___decorators___wrapped_replace_exceptions_decorator_objObject *self, PyObject *value, void *closure);

static PyGetSetDef decorators___wrapped_replace_exceptions_decorator_obj_getseters[] = {
    {"__mypyc_env__",
     (getter)decorators___wrapped_replace_exceptions_decorator_obj_get___3_mypyc_env__, (setter)decorators___wrapped_replace_exceptions_decorator_obj_set___3_mypyc_env__,
     NULL, NULL},
    {"__dict__", PyObject_GenericGetDict, PyObject_GenericSetDict},
    {NULL}  /* Sentinel */
};

static PyMethodDef decorators___wrapped_replace_exceptions_decorator_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_decorators___wrapped_replace_exceptions_decorator_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_decorators___wrapped_replace_exceptions_decorator_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_decorators___wrapped_replace_exceptions_decorator_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "wrapped_replace_exceptions_decorator_obj",
    .tp_new = decorators___wrapped_replace_exceptions_decorator_obj_new,
    .tp_dealloc = (destructor)decorators___wrapped_replace_exceptions_decorator_obj_dealloc,
    .tp_traverse = (traverseproc)decorators___wrapped_replace_exceptions_decorator_obj_traverse,
    .tp_clear = (inquiry)decorators___wrapped_replace_exceptions_decorator_obj_clear,
    .tp_getset = decorators___wrapped_replace_exceptions_decorator_obj_getseters,
    .tp_methods = decorators___wrapped_replace_exceptions_decorator_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__decorators___wrapped_replace_exceptions_decorator_obj,
    .tp_basicsize = sizeof(faster_eth_utils___decorators___wrapped_replace_exceptions_decorator_objObject),
    .tp_vectorcall_offset = offsetof(faster_eth_utils___decorators___wrapped_replace_exceptions_decorator_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL | Py_TPFLAGS_MANAGED_DICT,
};
static PyTypeObject *CPyType_decorators___wrapped_replace_exceptions_decorator_obj_template = &CPyType_decorators___wrapped_replace_exceptions_decorator_obj_template_;

static PyObject *
decorators___wrapped_replace_exceptions_decorator_obj_setup(PyTypeObject *type)
{
    faster_eth_utils___decorators___wrapped_replace_exceptions_decorator_objObject *self;
    self = (faster_eth_utils___decorators___wrapped_replace_exceptions_decorator_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = decorators___wrapped_replace_exceptions_decorator_obj_vtable;
    self->vectorcall = CPyPy_decorators___wrapped_replace_exceptions_decorator_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_decorators___wrapped_replace_exceptions_decorator_obj(void)
{
    PyObject *self = decorators___wrapped_replace_exceptions_decorator_obj_setup(CPyType_decorators___wrapped_replace_exceptions_decorator_obj);
    if (self == NULL)
        return NULL;
    return self;
}

static PyObject *
decorators___wrapped_replace_exceptions_decorator_obj_get___3_mypyc_env__(faster_eth_utils___decorators___wrapped_replace_exceptions_decorator_objObject *self, void *closure)
{
    if (unlikely(self->___mypyc_env__ == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '__mypyc_env__' of 'wrapped_replace_exceptions_decorator_obj' undefined");
        return NULL;
    }
    CPy_INCREF_NO_IMM(self->___mypyc_env__);
    PyObject *retval = self->___mypyc_env__;
    return retval;
}

static int
decorators___wrapped_replace_exceptions_decorator_obj_set___3_mypyc_env__(faster_eth_utils___decorators___wrapped_replace_exceptions_decorator_objObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'wrapped_replace_exceptions_decorator_obj' object attribute '__mypyc_env__' cannot be deleted");
        return -1;
    }
    if (self->___mypyc_env__ != NULL) {
        CPy_DECREF_NO_IMM(self->___mypyc_env__);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_decorators___decorator_replace_exceptions_env))
        tmp = value;
    else {
        CPy_TypeError("faster_eth_utils.decorators.decorator_replace_exceptions_env", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF_NO_IMM(tmp);
    self->___mypyc_env__ = tmp;
    return 0;
}
static PyMethodDef decoratorsmodule_methods[] = {
    {"return_arg_type", (PyCFunction)CPyPy_decorators___return_arg_type, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"replace_exceptions", (PyCFunction)CPyPy_decorators___replace_exceptions, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef decoratorsmodule = {
    PyModuleDef_HEAD_INIT,
    "faster_eth_utils.decorators",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    decoratorsmodule_methods
};

PyObject *CPyInit_faster_eth_utils___decorators(void)
{
    PyObject* modname = NULL;
    if (CPyModule_faster_eth_utils___decorators_internal) {
        Py_INCREF(CPyModule_faster_eth_utils___decorators_internal);
        return CPyModule_faster_eth_utils___decorators_internal;
    }
    CPyModule_faster_eth_utils___decorators_internal = PyModule_Create(&decoratorsmodule);
    if (unlikely(CPyModule_faster_eth_utils___decorators_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_faster_eth_utils___decorators_internal, "__name__");
    CPyStatic_decorators___globals = PyModule_GetDict(CPyModule_faster_eth_utils___decorators_internal);
    if (unlikely(CPyStatic_decorators___globals == NULL))
        goto fail;
    CPyType_decorators_____get___3_combomethod_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_decorators_____get___3_combomethod_env_template, NULL, modname);
    if (unlikely(!CPyType_decorators_____get___3_combomethod_env))
        goto fail;
    CPyType_decorators____wrapper___3_get___3_combomethod_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_decorators____wrapper___3_get___3_combomethod_obj_template, NULL, modname);
    if (unlikely(!CPyType_decorators____wrapper___3_get___3_combomethod_obj))
        goto fail;
    CPyType_decorators___return_arg_type_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_decorators___return_arg_type_env_template, NULL, modname);
    if (unlikely(!CPyType_decorators___return_arg_type_env))
        goto fail;
    CPyType_decorators___decorator_return_arg_type_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_decorators___decorator_return_arg_type_env_template, NULL, modname);
    if (unlikely(!CPyType_decorators___decorator_return_arg_type_env))
        goto fail;
    CPyType_decorators___decorator_return_arg_type_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_decorators___decorator_return_arg_type_obj_template, NULL, modname);
    if (unlikely(!CPyType_decorators___decorator_return_arg_type_obj))
        goto fail;
    CPyType_decorators___wrapper_return_arg_type_decorator_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_decorators___wrapper_return_arg_type_decorator_obj_template, NULL, modname);
    if (unlikely(!CPyType_decorators___wrapper_return_arg_type_decorator_obj))
        goto fail;
    CPyType_decorators___replace_exceptions_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_decorators___replace_exceptions_env_template, NULL, modname);
    if (unlikely(!CPyType_decorators___replace_exceptions_env))
        goto fail;
    CPyType_decorators___decorator_replace_exceptions_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_decorators___decorator_replace_exceptions_env_template, NULL, modname);
    if (unlikely(!CPyType_decorators___decorator_replace_exceptions_env))
        goto fail;
    CPyType_decorators___decorator_replace_exceptions_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_decorators___decorator_replace_exceptions_obj_template, NULL, modname);
    if (unlikely(!CPyType_decorators___decorator_replace_exceptions_obj))
        goto fail;
    CPyType_decorators___wrapped_replace_exceptions_decorator_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_decorators___wrapped_replace_exceptions_decorator_obj_template, NULL, modname);
    if (unlikely(!CPyType_decorators___wrapped_replace_exceptions_decorator_obj))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_decorators_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_faster_eth_utils___decorators_internal;
    fail:
    Py_CLEAR(CPyModule_faster_eth_utils___decorators_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_decorators___combomethod);
    Py_CLEAR(CPyType_decorators_____get___3_combomethod_env);
    Py_CLEAR(CPyType_decorators____wrapper___3_get___3_combomethod_obj);
    Py_CLEAR(CPyType_decorators___return_arg_type_env);
    Py_CLEAR(CPyType_decorators___decorator_return_arg_type_env);
    Py_CLEAR(CPyType_decorators___decorator_return_arg_type_obj);
    Py_CLEAR(CPyType_decorators___wrapper_return_arg_type_decorator_obj);
    Py_CLEAR(CPyType_decorators___replace_exceptions_env);
    Py_CLEAR(CPyType_decorators___decorator_replace_exceptions_env);
    Py_CLEAR(CPyType_decorators___decorator_replace_exceptions_obj);
    Py_CLEAR(CPyType_decorators___wrapped_replace_exceptions_decorator_obj);
    return NULL;
}

char CPyDef_decorators___combomethod_____init__(PyObject *cpy_r_self, PyObject *cpy_r_method) {
    CPy_INCREF(cpy_r_method);
    ((faster_eth_utils___decorators___combomethodObject *)cpy_r_self)->_method = cpy_r_method;
    return 1;
}

PyObject *CPyPy_decorators___combomethod_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"method", 0};
    PyObject *obj_method;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O", "__init__", kwlist, &obj_method)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_decorators___combomethod))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_eth_utils.decorators.combomethod", obj_self); 
        goto fail;
    }
    PyObject *arg_method = obj_method;
    char retval = CPyDef_decorators___combomethod_____init__(arg_self, arg_method);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("faster_eth_utils/decorators.py", "__init__", 23, CPyStatic_decorators___globals);
    return NULL;
}

PyObject *CPyDef_decorators____wrapper___3_get___3_combomethod_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_instance == cpy_r_r0;
    if (!cpy_r_r1) goto CPyL2;
    CPy_INCREF(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
CPyL2: ;
    cpy_r_r2 = PyMethod_New(cpy_r___mypyc_self__, cpy_r_instance);
    if (cpy_r_r2 == NULL) goto CPyL4;
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_decorators____wrapper___3_get___3_combomethod_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"instance", "owner", 0};
    static CPyArg_Parser parser = {"OO:__get__", kwlist, 0};
    PyObject *obj_instance;
    PyObject *obj_owner;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_instance, &obj_owner)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_instance = obj_instance;
    PyObject *arg_owner = obj_owner;
    PyObject *retval = CPyDef_decorators____wrapper___3_get___3_combomethod_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("faster_eth_utils/decorators.py", "__get__", -1, CPyStatic_decorators___globals);
    return NULL;
}

PyObject *CPyDef_decorators____wrapper___3_get___3_combomethod_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_args, PyObject *cpy_r_kwargs) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyPtr cpy_r_r9;
    CPyPtr cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    int32_t cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    CPyPtr cpy_r_r22;
    CPyPtr cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    int32_t cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    cpy_r_r0 = ((faster_eth_utils___decorators____wrapper___3_get___3_combomethod_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("faster_eth_utils/decorators.py", "_wrapper", "_wrapper___get___combomethod_obj", "__mypyc_env__", 30, CPyStatic_decorators___globals);
        goto CPyL23;
    }
    CPy_INCREF_NO_IMM(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((faster_eth_utils___decorators_____get___3_combomethod_envObject *)cpy_r_r0)->_obj;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("faster_eth_utils/decorators.py", "_wrapper", "__get___combomethod_env", "obj", 31, CPyStatic_decorators___globals);
        goto CPyL24;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_r1 != cpy_r_r2;
    CPy_DECREF(cpy_r_r1);
    if (!cpy_r_r3) goto CPyL13;
    cpy_r_r4 = ((faster_eth_utils___decorators_____get___3_combomethod_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("faster_eth_utils/decorators.py", "_wrapper", "__get___combomethod_env", "self", 32, CPyStatic_decorators___globals);
        goto CPyL24;
    }
    CPy_INCREF_NO_IMM(cpy_r_r4);
CPyL4: ;
    cpy_r_r5 = ((faster_eth_utils___decorators_____get___3_combomethod_envObject *)cpy_r_r0)->_obj;
    if (unlikely(cpy_r_r5 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'obj' of '__get___combomethod_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r5);
    }
    CPy_DECREF_NO_IMM(cpy_r_r0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "_wrapper", 32, CPyStatic_decorators___globals);
        goto CPyL25;
    }
CPyL5: ;
    cpy_r_r6 = CPyStatics[150]; /* 'method' */
    cpy_r_r7 = CPyObject_GetAttr(cpy_r_r4, cpy_r_r6);
    CPy_DECREF_NO_IMM(cpy_r_r4);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "_wrapper", 32, CPyStatic_decorators___globals);
        goto CPyL26;
    }
    cpy_r_r8 = PyList_New(1);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "_wrapper", 32, CPyStatic_decorators___globals);
        goto CPyL27;
    }
    cpy_r_r9 = (CPyPtr)&((PyListObject *)cpy_r_r8)->ob_item;
    cpy_r_r10 = *(CPyPtr *)cpy_r_r9;
    *(PyObject * *)cpy_r_r10 = cpy_r_r5;
    cpy_r_r11 = CPyList_Extend(cpy_r_r8, cpy_r_args);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "_wrapper", 32, CPyStatic_decorators___globals);
        goto CPyL28;
    } else
        goto CPyL29;
CPyL8: ;
    cpy_r_r12 = PyDict_New();
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "_wrapper", 32, CPyStatic_decorators___globals);
        goto CPyL28;
    }
    cpy_r_r13 = CPyDict_UpdateInDisplay(cpy_r_r12, cpy_r_kwargs);
    cpy_r_r14 = cpy_r_r13 >= 0;
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "_wrapper", 32, CPyStatic_decorators___globals);
        goto CPyL30;
    }
    cpy_r_r15 = PyList_AsTuple(cpy_r_r8);
    CPy_DECREF_NO_IMM(cpy_r_r8);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "_wrapper", 32, CPyStatic_decorators___globals);
        goto CPyL31;
    }
    cpy_r_r16 = PyObject_Call(cpy_r_r7, cpy_r_r15, cpy_r_r12);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "_wrapper", 32, CPyStatic_decorators___globals);
        goto CPyL23;
    }
    return cpy_r_r16;
CPyL13: ;
    cpy_r_r17 = ((faster_eth_utils___decorators_____get___3_combomethod_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AttributeError("faster_eth_utils/decorators.py", "_wrapper", "__get___combomethod_env", "self", 34, CPyStatic_decorators___globals);
        goto CPyL24;
    }
    CPy_INCREF_NO_IMM(cpy_r_r17);
CPyL14: ;
    cpy_r_r18 = ((faster_eth_utils___decorators_____get___3_combomethod_envObject *)cpy_r_r0)->_objtype;
    if (unlikely(cpy_r_r18 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'objtype' of '__get___combomethod_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r18);
    }
    CPy_DECREF_NO_IMM(cpy_r_r0);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "_wrapper", 34, CPyStatic_decorators___globals);
        goto CPyL32;
    }
CPyL15: ;
    cpy_r_r19 = CPyStatics[150]; /* 'method' */
    cpy_r_r20 = CPyObject_GetAttr(cpy_r_r17, cpy_r_r19);
    CPy_DECREF_NO_IMM(cpy_r_r17);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "_wrapper", 34, CPyStatic_decorators___globals);
        goto CPyL33;
    }
    cpy_r_r21 = PyList_New(1);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "_wrapper", 34, CPyStatic_decorators___globals);
        goto CPyL34;
    }
    cpy_r_r22 = (CPyPtr)&((PyListObject *)cpy_r_r21)->ob_item;
    cpy_r_r23 = *(CPyPtr *)cpy_r_r22;
    *(PyObject * *)cpy_r_r23 = cpy_r_r18;
    cpy_r_r24 = CPyList_Extend(cpy_r_r21, cpy_r_args);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "_wrapper", 34, CPyStatic_decorators___globals);
        goto CPyL35;
    } else
        goto CPyL36;
CPyL18: ;
    cpy_r_r25 = PyDict_New();
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "_wrapper", 34, CPyStatic_decorators___globals);
        goto CPyL35;
    }
    cpy_r_r26 = CPyDict_UpdateInDisplay(cpy_r_r25, cpy_r_kwargs);
    cpy_r_r27 = cpy_r_r26 >= 0;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "_wrapper", 34, CPyStatic_decorators___globals);
        goto CPyL37;
    }
    cpy_r_r28 = PyList_AsTuple(cpy_r_r21);
    CPy_DECREF_NO_IMM(cpy_r_r21);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "_wrapper", 34, CPyStatic_decorators___globals);
        goto CPyL38;
    }
    cpy_r_r29 = PyObject_Call(cpy_r_r20, cpy_r_r28, cpy_r_r25);
    CPy_DECREF(cpy_r_r20);
    CPy_DECREF(cpy_r_r28);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "_wrapper", 34, CPyStatic_decorators___globals);
        goto CPyL23;
    }
    return cpy_r_r29;
CPyL23: ;
    cpy_r_r30 = NULL;
    return cpy_r_r30;
CPyL24: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL23;
CPyL25: ;
    CPy_DecRef(cpy_r_r4);
    goto CPyL23;
CPyL26: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL23;
CPyL27: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r7);
    goto CPyL23;
CPyL28: ;
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    goto CPyL23;
CPyL29: ;
    CPy_DECREF(cpy_r_r11);
    goto CPyL8;
CPyL30: ;
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r12);
    goto CPyL23;
CPyL31: ;
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r12);
    goto CPyL23;
CPyL32: ;
    CPy_DecRef(cpy_r_r17);
    goto CPyL23;
CPyL33: ;
    CPy_DecRef(cpy_r_r18);
    goto CPyL23;
CPyL34: ;
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r20);
    goto CPyL23;
CPyL35: ;
    CPy_DecRef(cpy_r_r20);
    CPy_DecRef(cpy_r_r21);
    goto CPyL23;
CPyL36: ;
    CPy_DECREF(cpy_r_r24);
    goto CPyL18;
CPyL37: ;
    CPy_DecRef(cpy_r_r20);
    CPy_DecRef(cpy_r_r21);
    CPy_DecRef(cpy_r_r25);
    goto CPyL23;
CPyL38: ;
    CPy_DecRef(cpy_r_r20);
    CPy_DecRef(cpy_r_r25);
    goto CPyL23;
}

PyObject *CPyPy_decorators____wrapper___3_get___3_combomethod_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {"%:__call__", kwlist, 0};
    PyObject *obj_args;
    PyObject *obj_kwargs;
    if (!CPyArg_ParseStackAndKeywords(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_args, &obj_kwargs)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_args = obj_args;
    PyObject *arg_kwargs = obj_kwargs;
    PyObject *retval = CPyDef_decorators____wrapper___3_get___3_combomethod_obj_____call__(arg___mypyc_self__, arg_args, arg_kwargs);
    CPy_DECREF(obj_args);
    CPy_DECREF(obj_kwargs);
    return retval;
fail: ;
    CPy_DECREF(obj_args);
    CPy_DECREF(obj_kwargs);
    CPy_AddTraceback("faster_eth_utils/decorators.py", "_wrapper", 30, CPyStatic_decorators___globals);
    return NULL;
}

PyObject *CPyDef_decorators___combomethod_____get__(PyObject *cpy_r_self, PyObject *cpy_r_obj, PyObject *cpy_r_objtype) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject **cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject **cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    int32_t cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    if (cpy_r_obj != NULL) goto CPyL17;
    cpy_r_r0 = Py_None;
    cpy_r_obj = cpy_r_r0;
CPyL2: ;
    if (cpy_r_objtype != NULL) goto CPyL18;
    cpy_r_r1 = Py_None;
    cpy_r_objtype = cpy_r_r1;
CPyL4: ;
    cpy_r_r2 = CPyDef_decorators_____get___3_combomethod_env();
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "__get__", 26, CPyStatic_decorators___globals);
        goto CPyL19;
    }
    CPy_INCREF_NO_IMM(cpy_r_self);
    if (((faster_eth_utils___decorators_____get___3_combomethod_envObject *)cpy_r_r2)->_self != NULL) {
        CPy_DECREF_NO_IMM(((faster_eth_utils___decorators_____get___3_combomethod_envObject *)cpy_r_r2)->_self);
    }
    ((faster_eth_utils___decorators_____get___3_combomethod_envObject *)cpy_r_r2)->_self = cpy_r_self;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "__get__", 26, CPyStatic_decorators___globals);
        goto CPyL20;
    }
    if (((faster_eth_utils___decorators_____get___3_combomethod_envObject *)cpy_r_r2)->_obj != NULL) {
        CPy_DECREF(((faster_eth_utils___decorators_____get___3_combomethod_envObject *)cpy_r_r2)->_obj);
    }
    ((faster_eth_utils___decorators_____get___3_combomethod_envObject *)cpy_r_r2)->_obj = cpy_r_obj;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "__get__", 26, CPyStatic_decorators___globals);
        goto CPyL21;
    }
    if (((faster_eth_utils___decorators_____get___3_combomethod_envObject *)cpy_r_r2)->_objtype != NULL) {
        CPy_DECREF(((faster_eth_utils___decorators_____get___3_combomethod_envObject *)cpy_r_r2)->_objtype);
    }
    ((faster_eth_utils___decorators_____get___3_combomethod_envObject *)cpy_r_r2)->_objtype = cpy_r_objtype;
    cpy_r_r5 = 1;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "__get__", 26, CPyStatic_decorators___globals);
        goto CPyL22;
    }
    cpy_r_r6 = CPyDef_decorators____wrapper___3_get___3_combomethod_obj();
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "__get__", 30, CPyStatic_decorators___globals);
        goto CPyL22;
    }
    CPy_INCREF_NO_IMM(cpy_r_r2);
    if (((faster_eth_utils___decorators____wrapper___3_get___3_combomethod_objObject *)cpy_r_r6)->___mypyc_env__ != NULL) {
        CPy_DECREF_NO_IMM(((faster_eth_utils___decorators____wrapper___3_get___3_combomethod_objObject *)cpy_r_r6)->___mypyc_env__);
    }
    ((faster_eth_utils___decorators____wrapper___3_get___3_combomethod_objObject *)cpy_r_r6)->___mypyc_env__ = cpy_r_r2;
    cpy_r_r7 = 1;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "__get__", 30, CPyStatic_decorators___globals);
        goto CPyL23;
    }
    cpy_r_r8 = ((faster_eth_utils___decorators_____get___3_combomethod_envObject *)cpy_r_r2)->_self;
    if (unlikely(cpy_r_r8 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'self' of '__get___combomethod_env' undefined");
    } else {
        CPy_INCREF_NO_IMM(cpy_r_r8);
    }
    CPy_DECREF_NO_IMM(cpy_r_r2);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "__get__", 29, CPyStatic_decorators___globals);
        goto CPyL24;
    }
CPyL11: ;
    cpy_r_r9 = ((faster_eth_utils___decorators___combomethodObject *)cpy_r_r8)->_method;
    CPy_INCREF(cpy_r_r9);
    CPy_DECREF_NO_IMM(cpy_r_r8);
    cpy_r_r10 = CPyModule_functools;
    cpy_r_r11 = CPyStatics[151]; /* 'wraps' */
    cpy_r_r12 = CPyObject_GetAttr(cpy_r_r10, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "__get__", 29, CPyStatic_decorators___globals);
        goto CPyL25;
    }
    PyObject *cpy_r_r13[1] = {cpy_r_r9};
    cpy_r_r14 = (PyObject **)&cpy_r_r13;
    cpy_r_r15 = PyObject_Vectorcall(cpy_r_r12, cpy_r_r14, 1, 0);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "__get__", 29, CPyStatic_decorators___globals);
        goto CPyL25;
    }
    CPy_DECREF(cpy_r_r9);
    PyObject *cpy_r_r16[1] = {cpy_r_r6};
    cpy_r_r17 = (PyObject **)&cpy_r_r16;
    cpy_r_r18 = PyObject_Vectorcall(cpy_r_r15, cpy_r_r17, 1, 0);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "__get__", 30, CPyStatic_decorators___globals);
        goto CPyL24;
    }
    CPy_DECREF_NO_IMM(cpy_r_r6);
    CPy_INCREF(cpy_r_r18);
    cpy_r_r19 = CPyStatic_decorators___globals;
    cpy_r_r20 = CPyStatics[152]; /* '_wrapper' */
    cpy_r_r21 = CPyDict_SetItem(cpy_r_r19, cpy_r_r20, cpy_r_r18);
    CPy_DECREF(cpy_r_r18);
    cpy_r_r22 = cpy_r_r21 >= 0;
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "__get__", 30, CPyStatic_decorators___globals);
        goto CPyL26;
    }
    return cpy_r_r18;
CPyL16: ;
    cpy_r_r23 = NULL;
    return cpy_r_r23;
CPyL17: ;
    CPy_INCREF(cpy_r_obj);
    goto CPyL2;
CPyL18: ;
    CPy_INCREF(cpy_r_objtype);
    goto CPyL4;
CPyL19: ;
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_objtype);
    goto CPyL16;
CPyL20: ;
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_objtype);
    CPy_DecRef(cpy_r_r2);
    goto CPyL16;
CPyL21: ;
    CPy_DecRef(cpy_r_objtype);
    CPy_DecRef(cpy_r_r2);
    goto CPyL16;
CPyL22: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL16;
CPyL23: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r6);
    goto CPyL16;
CPyL24: ;
    CPy_DecRef(cpy_r_r6);
    goto CPyL16;
CPyL25: ;
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r9);
    goto CPyL16;
CPyL26: ;
    CPy_DecRef(cpy_r_r18);
    goto CPyL16;
}

PyObject *CPyPy_decorators___combomethod_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"obj", "objtype", 0};
    static CPyArg_Parser parser = {"|OO:__get__", kwlist, 0};
    PyObject *obj_obj = NULL;
    PyObject *obj_objtype = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_obj, &obj_objtype)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_decorators___combomethod))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_eth_utils.decorators.combomethod", obj_self); 
        goto fail;
    }
    PyObject *arg_obj;
    if (obj_obj == NULL) {
        arg_obj = NULL;
        goto __LL41;
    }
    arg_obj = obj_obj;
    if (arg_obj != NULL) goto __LL41;
    if (obj_obj == Py_None)
        arg_obj = obj_obj;
    else {
        arg_obj = NULL;
    }
    if (arg_obj != NULL) goto __LL41;
    CPy_TypeError("object or None", obj_obj); 
    goto fail;
__LL41: ;
    PyObject *arg_objtype;
    if (obj_objtype == NULL) {
        arg_objtype = NULL;
        goto __LL42;
    }
    arg_objtype = obj_objtype;
    if (arg_objtype != NULL) goto __LL42;
    if (obj_objtype == Py_None)
        arg_objtype = obj_objtype;
    else {
        arg_objtype = NULL;
    }
    if (arg_objtype != NULL) goto __LL42;
    CPy_TypeError("object or None", obj_objtype); 
    goto fail;
__LL42: ;
    PyObject *retval = CPyDef_decorators___combomethod_____get__(arg_self, arg_obj, arg_objtype);
    return retval;
fail: ;
    CPy_AddTraceback("faster_eth_utils/decorators.py", "__get__", 26, CPyStatic_decorators___globals);
    return NULL;
}

PyObject *CPyDef_decorators___wrapper_return_arg_type_decorator_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_instance == cpy_r_r0;
    if (!cpy_r_r1) goto CPyL2;
    CPy_INCREF(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
CPyL2: ;
    cpy_r_r2 = PyMethod_New(cpy_r___mypyc_self__, cpy_r_instance);
    if (cpy_r_r2 == NULL) goto CPyL4;
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_decorators___wrapper_return_arg_type_decorator_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"instance", "owner", 0};
    static CPyArg_Parser parser = {"OO:__get__", kwlist, 0};
    PyObject *obj_instance;
    PyObject *obj_owner;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_instance, &obj_owner)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_instance = obj_instance;
    PyObject *arg_owner = obj_owner;
    PyObject *retval = CPyDef_decorators___wrapper_return_arg_type_decorator_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("faster_eth_utils/decorators.py", "__get__", -1, CPyStatic_decorators___globals);
    return NULL;
}

PyObject *CPyDef_decorators___wrapper_return_arg_type_decorator_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_args, PyObject *cpy_r_kwargs) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    int32_t cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyTagged cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject **cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    cpy_r_r0 = ((faster_eth_utils___decorators___wrapper_return_arg_type_decorator_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("faster_eth_utils/decorators.py", "wrapper", "wrapper_return_arg_type_decorator_obj", "__mypyc_env__", 46, CPyStatic_decorators___globals);
        goto CPyL13;
    }
    CPy_INCREF_NO_IMM(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((faster_eth_utils___decorators___decorator_return_arg_type_envObject *)cpy_r_r0)->___mypyc_env__;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("faster_eth_utils/decorators.py", "wrapper", "decorator_return_arg_type_env", "__mypyc_env__", 46, CPyStatic_decorators___globals);
        goto CPyL14;
    }
    CPy_INCREF_NO_IMM(cpy_r_r1);
CPyL2: ;
    cpy_r_r2 = ((faster_eth_utils___decorators___decorator_return_arg_type_envObject *)cpy_r_r0)->_to_wrap;
    if (unlikely(cpy_r_r2 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'to_wrap' of 'decorator_return_arg_type_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r2);
    }
    CPy_DECREF_NO_IMM(cpy_r_r0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "wrapper", 47, CPyStatic_decorators___globals);
        goto CPyL15;
    }
CPyL3: ;
    cpy_r_r3 = PyList_New(0);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "wrapper", 47, CPyStatic_decorators___globals);
        goto CPyL16;
    }
    cpy_r_r4 = CPyList_Extend(cpy_r_r3, cpy_r_args);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "wrapper", 47, CPyStatic_decorators___globals);
        goto CPyL17;
    } else
        goto CPyL18;
CPyL5: ;
    cpy_r_r5 = PyDict_New();
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "wrapper", 47, CPyStatic_decorators___globals);
        goto CPyL17;
    }
    cpy_r_r6 = CPyDict_UpdateInDisplay(cpy_r_r5, cpy_r_kwargs);
    cpy_r_r7 = cpy_r_r6 >= 0;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "wrapper", 47, CPyStatic_decorators___globals);
        goto CPyL19;
    }
    cpy_r_r8 = PyList_AsTuple(cpy_r_r3);
    CPy_DECREF_NO_IMM(cpy_r_r3);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "wrapper", 47, CPyStatic_decorators___globals);
        goto CPyL20;
    }
    cpy_r_r9 = PyObject_Call(cpy_r_r2, cpy_r_r8, cpy_r_r5);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "wrapper", 47, CPyStatic_decorators___globals);
        goto CPyL15;
    }
    cpy_r_r10 = ((faster_eth_utils___decorators___return_arg_type_envObject *)cpy_r_r1)->_at_position;
    if (unlikely(cpy_r_r10 == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'at_position' of 'return_arg_type_env' undefined");
    } else {
        CPyTagged_INCREF(cpy_r_r10);
    }
    CPy_DECREF_NO_IMM(cpy_r_r1);
    if (unlikely(cpy_r_r10 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "wrapper", 48, CPyStatic_decorators___globals);
        goto CPyL21;
    }
CPyL10: ;
    cpy_r_r11 = CPySequenceTuple_GetItem(cpy_r_args, cpy_r_r10);
    CPyTagged_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "wrapper", 48, CPyStatic_decorators___globals);
        goto CPyL21;
    }
    cpy_r_r12 = PyObject_Type(cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    PyObject *cpy_r_r13[1] = {cpy_r_r9};
    cpy_r_r14 = (PyObject **)&cpy_r_r13;
    cpy_r_r15 = PyObject_Vectorcall(cpy_r_r12, cpy_r_r14, 1, 0);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "wrapper", 49, CPyStatic_decorators___globals);
        goto CPyL21;
    }
    CPy_DECREF(cpy_r_r9);
    return cpy_r_r15;
CPyL13: ;
    cpy_r_r16 = NULL;
    return cpy_r_r16;
CPyL14: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL13;
CPyL15: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL13;
CPyL16: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    goto CPyL13;
CPyL17: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r3);
    goto CPyL13;
CPyL18: ;
    CPy_DECREF(cpy_r_r4);
    goto CPyL5;
CPyL19: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r5);
    goto CPyL13;
CPyL20: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r5);
    goto CPyL13;
CPyL21: ;
    CPy_DecRef(cpy_r_r9);
    goto CPyL13;
}

PyObject *CPyPy_decorators___wrapper_return_arg_type_decorator_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {"%:__call__", kwlist, 0};
    PyObject *obj_args;
    PyObject *obj_kwargs;
    if (!CPyArg_ParseStackAndKeywords(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_args, &obj_kwargs)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_args = obj_args;
    PyObject *arg_kwargs = obj_kwargs;
    PyObject *retval = CPyDef_decorators___wrapper_return_arg_type_decorator_obj_____call__(arg___mypyc_self__, arg_args, arg_kwargs);
    CPy_DECREF(obj_args);
    CPy_DECREF(obj_kwargs);
    return retval;
fail: ;
    CPy_DECREF(obj_args);
    CPy_DECREF(obj_kwargs);
    CPy_AddTraceback("faster_eth_utils/decorators.py", "wrapper", 46, CPyStatic_decorators___globals);
    return NULL;
}

PyObject *CPyDef_decorators___decorator_return_arg_type_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_instance == cpy_r_r0;
    if (!cpy_r_r1) goto CPyL2;
    CPy_INCREF(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
CPyL2: ;
    cpy_r_r2 = PyMethod_New(cpy_r___mypyc_self__, cpy_r_instance);
    if (cpy_r_r2 == NULL) goto CPyL4;
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_decorators___decorator_return_arg_type_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"instance", "owner", 0};
    static CPyArg_Parser parser = {"OO:__get__", kwlist, 0};
    PyObject *obj_instance;
    PyObject *obj_owner;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_instance, &obj_owner)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_instance = obj_instance;
    PyObject *arg_owner = obj_owner;
    PyObject *retval = CPyDef_decorators___decorator_return_arg_type_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("faster_eth_utils/decorators.py", "__get__", -1, CPyStatic_decorators___globals);
    return NULL;
}

PyObject *CPyDef_decorators___decorator_return_arg_type_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_to_wrap) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject **cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject **cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    int32_t cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    cpy_r_r0 = ((faster_eth_utils___decorators___decorator_return_arg_type_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("faster_eth_utils/decorators.py", "decorator", "decorator_return_arg_type_obj", "__mypyc_env__", 44, CPyStatic_decorators___globals);
        goto CPyL12;
    }
    CPy_INCREF_NO_IMM(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_decorators___decorator_return_arg_type_env();
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "decorator", 44, CPyStatic_decorators___globals);
        goto CPyL13;
    }
    if (((faster_eth_utils___decorators___decorator_return_arg_type_envObject *)cpy_r_r1)->___mypyc_env__ != NULL) {
        CPy_DECREF_NO_IMM(((faster_eth_utils___decorators___decorator_return_arg_type_envObject *)cpy_r_r1)->___mypyc_env__);
    }
    ((faster_eth_utils___decorators___decorator_return_arg_type_envObject *)cpy_r_r1)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "decorator", 44, CPyStatic_decorators___globals);
        goto CPyL14;
    }
    CPy_INCREF(cpy_r_to_wrap);
    if (((faster_eth_utils___decorators___decorator_return_arg_type_envObject *)cpy_r_r1)->_to_wrap != NULL) {
        CPy_DECREF(((faster_eth_utils___decorators___decorator_return_arg_type_envObject *)cpy_r_r1)->_to_wrap);
    }
    ((faster_eth_utils___decorators___decorator_return_arg_type_envObject *)cpy_r_r1)->_to_wrap = cpy_r_to_wrap;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "decorator", 44, CPyStatic_decorators___globals);
        goto CPyL14;
    }
    cpy_r_r4 = CPyDef_decorators___wrapper_return_arg_type_decorator_obj();
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "decorator", 46, CPyStatic_decorators___globals);
        goto CPyL14;
    }
    CPy_INCREF_NO_IMM(cpy_r_r1);
    if (((faster_eth_utils___decorators___wrapper_return_arg_type_decorator_objObject *)cpy_r_r4)->___mypyc_env__ != NULL) {
        CPy_DECREF_NO_IMM(((faster_eth_utils___decorators___wrapper_return_arg_type_decorator_objObject *)cpy_r_r4)->___mypyc_env__);
    }
    ((faster_eth_utils___decorators___wrapper_return_arg_type_decorator_objObject *)cpy_r_r4)->___mypyc_env__ = cpy_r_r1;
    cpy_r_r5 = 1;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "decorator", 46, CPyStatic_decorators___globals);
        goto CPyL15;
    }
    cpy_r_r6 = ((faster_eth_utils___decorators___decorator_return_arg_type_envObject *)cpy_r_r1)->_to_wrap;
    if (unlikely(cpy_r_r6 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'to_wrap' of 'decorator_return_arg_type_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r6);
    }
    CPy_DECREF_NO_IMM(cpy_r_r1);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "decorator", 45, CPyStatic_decorators___globals);
        goto CPyL16;
    }
CPyL7: ;
    cpy_r_r7 = CPyModule_functools;
    cpy_r_r8 = CPyStatics[151]; /* 'wraps' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_r7, cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "decorator", 45, CPyStatic_decorators___globals);
        goto CPyL17;
    }
    PyObject *cpy_r_r10[1] = {cpy_r_r6};
    cpy_r_r11 = (PyObject **)&cpy_r_r10;
    cpy_r_r12 = PyObject_Vectorcall(cpy_r_r9, cpy_r_r11, 1, 0);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "decorator", 45, CPyStatic_decorators___globals);
        goto CPyL17;
    }
    CPy_DECREF(cpy_r_r6);
    PyObject *cpy_r_r13[1] = {cpy_r_r4};
    cpy_r_r14 = (PyObject **)&cpy_r_r13;
    cpy_r_r15 = PyObject_Vectorcall(cpy_r_r12, cpy_r_r14, 1, 0);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "decorator", 46, CPyStatic_decorators___globals);
        goto CPyL16;
    }
    CPy_DECREF_NO_IMM(cpy_r_r4);
    CPy_INCREF(cpy_r_r15);
    cpy_r_r16 = CPyStatic_decorators___globals;
    cpy_r_r17 = CPyStatics[153]; /* 'wrapper' */
    cpy_r_r18 = CPyDict_SetItem(cpy_r_r16, cpy_r_r17, cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r19 = cpy_r_r18 >= 0;
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "decorator", 46, CPyStatic_decorators___globals);
        goto CPyL18;
    }
    return cpy_r_r15;
CPyL12: ;
    cpy_r_r20 = NULL;
    return cpy_r_r20;
CPyL13: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL12;
CPyL14: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL12;
CPyL15: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r4);
    goto CPyL12;
CPyL16: ;
    CPy_DecRef(cpy_r_r4);
    goto CPyL12;
CPyL17: ;
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r6);
    goto CPyL12;
CPyL18: ;
    CPy_DecRef(cpy_r_r15);
    goto CPyL12;
}

PyObject *CPyPy_decorators___decorator_return_arg_type_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"to_wrap", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_to_wrap;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_to_wrap)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_to_wrap = obj_to_wrap;
    PyObject *retval = CPyDef_decorators___decorator_return_arg_type_obj_____call__(arg___mypyc_self__, arg_to_wrap);
    return retval;
fail: ;
    CPy_AddTraceback("faster_eth_utils/decorators.py", "decorator", 44, CPyStatic_decorators___globals);
    return NULL;
}

PyObject *CPyDef_decorators___return_arg_type(CPyTagged cpy_r_at_position) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_decorator;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyDef_decorators___return_arg_type_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "return_arg_type", 39, CPyStatic_decorators___globals);
        goto CPyL5;
    }
    CPyTagged_INCREF(cpy_r_at_position);
    if (((faster_eth_utils___decorators___return_arg_type_envObject *)cpy_r_r0)->_at_position != CPY_INT_TAG) {
        CPyTagged_DECREF(((faster_eth_utils___decorators___return_arg_type_envObject *)cpy_r_r0)->_at_position);
    }
    ((faster_eth_utils___decorators___return_arg_type_envObject *)cpy_r_r0)->_at_position = cpy_r_at_position;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "return_arg_type", 39, CPyStatic_decorators___globals);
        goto CPyL6;
    }
    cpy_r_r2 = CPyDef_decorators___decorator_return_arg_type_obj();
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "return_arg_type", 44, CPyStatic_decorators___globals);
        goto CPyL6;
    }
    if (((faster_eth_utils___decorators___decorator_return_arg_type_objObject *)cpy_r_r2)->___mypyc_env__ != NULL) {
        CPy_DECREF_NO_IMM(((faster_eth_utils___decorators___decorator_return_arg_type_objObject *)cpy_r_r2)->___mypyc_env__);
    }
    ((faster_eth_utils___decorators___decorator_return_arg_type_objObject *)cpy_r_r2)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "return_arg_type", 44, CPyStatic_decorators___globals);
        goto CPyL7;
    }
    cpy_r_decorator = cpy_r_r2;
    return cpy_r_decorator;
CPyL5: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
CPyL6: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL5;
CPyL7: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL5;
}

PyObject *CPyPy_decorators___return_arg_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"at_position", 0};
    static CPyArg_Parser parser = {"O:return_arg_type", kwlist, 0};
    PyObject *obj_at_position;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_at_position)) {
        return NULL;
    }
    CPyTagged arg_at_position;
    if (likely(PyLong_Check(obj_at_position)))
        arg_at_position = CPyTagged_BorrowFromObject(obj_at_position);
    else {
        CPy_TypeError("int", obj_at_position); goto fail;
    }
    PyObject *retval = CPyDef_decorators___return_arg_type(arg_at_position);
    return retval;
fail: ;
    CPy_AddTraceback("faster_eth_utils/decorators.py", "return_arg_type", 39, CPyStatic_decorators___globals);
    return NULL;
}

PyObject *CPyDef_decorators___wrapped_replace_exceptions_decorator_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_instance == cpy_r_r0;
    if (!cpy_r_r1) goto CPyL2;
    CPy_INCREF(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
CPyL2: ;
    cpy_r_r2 = PyMethod_New(cpy_r___mypyc_self__, cpy_r_instance);
    if (cpy_r_r2 == NULL) goto CPyL4;
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_decorators___wrapped_replace_exceptions_decorator_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"instance", "owner", 0};
    static CPyArg_Parser parser = {"OO:__get__", kwlist, 0};
    PyObject *obj_instance;
    PyObject *obj_owner;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_instance, &obj_owner)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_instance = obj_instance;
    PyObject *arg_owner = obj_owner;
    PyObject *retval = CPyDef_decorators___wrapped_replace_exceptions_decorator_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("faster_eth_utils/decorators.py", "__get__", -1, CPyStatic_decorators___globals);
    return NULL;
}

PyObject *CPyDef_decorators___wrapped_replace_exceptions_decorator_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_args, PyObject *cpy_r_kwargs) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    int32_t cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    tuple_T3OOO cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject **cpy_r_r18;
    PyObject *cpy_r_r19;
    tuple_T3OOO cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject **cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    cpy_r_r0 = ((faster_eth_utils___decorators___wrapped_replace_exceptions_decorator_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("faster_eth_utils/decorators.py", "wrapped", "wrapped_replace_exceptions_decorator_obj", "__mypyc_env__", 66, CPyStatic_decorators___globals);
        goto CPyL34;
    }
    CPy_INCREF_NO_IMM(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((faster_eth_utils___decorators___decorator_replace_exceptions_envObject *)cpy_r_r0)->___mypyc_env__;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("faster_eth_utils/decorators.py", "wrapped", "decorator_replace_exceptions_env", "__mypyc_env__", 66, CPyStatic_decorators___globals);
        goto CPyL35;
    }
    CPy_INCREF_NO_IMM(cpy_r_r1);
CPyL2: ;
    cpy_r_r2 = ((faster_eth_utils___decorators___decorator_replace_exceptions_envObject *)cpy_r_r0)->_to_wrap;
    if (unlikely(cpy_r_r2 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'to_wrap' of 'decorator_replace_exceptions_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r2);
    }
    CPy_DECREF_NO_IMM(cpy_r_r0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "wrapped", 68, CPyStatic_decorators___globals);
        goto CPyL10;
    }
CPyL3: ;
    cpy_r_r3 = PyList_New(0);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "wrapped", 68, CPyStatic_decorators___globals);
        goto CPyL36;
    }
    cpy_r_r4 = CPyList_Extend(cpy_r_r3, cpy_r_args);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "wrapped", 68, CPyStatic_decorators___globals);
        goto CPyL37;
    } else
        goto CPyL38;
CPyL5: ;
    cpy_r_r5 = PyDict_New();
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "wrapped", 68, CPyStatic_decorators___globals);
        goto CPyL37;
    }
    cpy_r_r6 = CPyDict_UpdateInDisplay(cpy_r_r5, cpy_r_kwargs);
    cpy_r_r7 = cpy_r_r6 >= 0;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "wrapped", 68, CPyStatic_decorators___globals);
        goto CPyL39;
    }
    cpy_r_r8 = PyList_AsTuple(cpy_r_r3);
    CPy_DECREF_NO_IMM(cpy_r_r3);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "wrapped", 68, CPyStatic_decorators___globals);
        goto CPyL40;
    }
    cpy_r_r9 = PyObject_Call(cpy_r_r2, cpy_r_r8, cpy_r_r5);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "wrapped", 68, CPyStatic_decorators___globals);
        goto CPyL10;
    } else
        goto CPyL41;
CPyL9: ;
    return cpy_r_r9;
CPyL10: ;
    cpy_r_r10 = CPy_CatchError();
    cpy_r_r11 = ((faster_eth_utils___decorators___replace_exceptions_envObject *)cpy_r_r1)->_old_exceptions;
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AttributeError("faster_eth_utils/decorators.py", "wrapped", "replace_exceptions_env", "old_exceptions", 69, CPyStatic_decorators___globals);
        goto CPyL42;
    }
    CPy_INCREF(cpy_r_r11);
CPyL11: ;
    cpy_r_r12 = CPy_ExceptionMatches(cpy_r_r11);
    CPy_DecRef(cpy_r_r11);
    if (!cpy_r_r12) goto CPyL43;
    cpy_r_r13 = CPy_GetExcValue();
    cpy_r_r14 = ((faster_eth_utils___decorators___replace_exceptions_envObject *)cpy_r_r1)->_old_to_new_exceptions;
    if (unlikely(cpy_r_r14 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'old_to_new_exceptions' of 'replace_exceptions_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r14);
    }
    CPy_DecRef(cpy_r_r1);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "wrapped", 71, CPyStatic_decorators___globals);
        goto CPyL18;
    }
CPyL14: ;
    cpy_r_r15 = PyObject_Type(cpy_r_r13);
    cpy_r_r16 = CPyDict_GetItem(cpy_r_r14, cpy_r_r15);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "wrapped", 71, CPyStatic_decorators___globals);
        goto CPyL18;
    }
    PyObject *cpy_r_r17[1] = {cpy_r_r13};
    cpy_r_r18 = (PyObject **)&cpy_r_r17;
    cpy_r_r19 = PyObject_Vectorcall(cpy_r_r16, cpy_r_r18, 1, 0);
    CPy_DecRef(cpy_r_r16);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "wrapped", 71, CPyStatic_decorators___globals);
        goto CPyL18;
    }
    CPy_Raise(cpy_r_r19);
    CPy_DecRef(cpy_r_r19);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "wrapped", 71, CPyStatic_decorators___globals);
        goto CPyL18;
    } else
        goto CPyL44;
CPyL17: ;
    CPy_Unreachable();
CPyL18: ;
    cpy_r_r20 = CPy_CatchError();
    cpy_r_r21 = CPyModule_builtins;
    cpy_r_r22 = CPyStatics[154]; /* 'KeyError' */
    cpy_r_r23 = CPyObject_GetAttr(cpy_r_r21, cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "wrapped", 72, CPyStatic_decorators___globals);
        goto CPyL45;
    }
    cpy_r_r24 = CPy_ExceptionMatches(cpy_r_r23);
    CPy_DecRef(cpy_r_r23);
    if (!cpy_r_r24) goto CPyL46;
    cpy_r_r25 = CPyStatics[155]; /* 'could not look up new exception to use for ' */
    cpy_r_r26 = PyObject_Repr(cpy_r_r13);
    CPy_DecRef(cpy_r_r13);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "wrapped", 74, CPyStatic_decorators___globals);
        goto CPyL28;
    }
    cpy_r_r27 = CPyStr_Build(2, cpy_r_r25, cpy_r_r26);
    CPy_DecRef(cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "wrapped", 74, CPyStatic_decorators___globals);
        goto CPyL28;
    }
    cpy_r_r28 = CPyModule_builtins;
    cpy_r_r29 = CPyStatics[6]; /* 'TypeError' */
    cpy_r_r30 = CPyObject_GetAttr(cpy_r_r28, cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "wrapped", 73, CPyStatic_decorators___globals);
        goto CPyL47;
    }
    PyObject *cpy_r_r31[1] = {cpy_r_r27};
    cpy_r_r32 = (PyObject **)&cpy_r_r31;
    cpy_r_r33 = PyObject_Vectorcall(cpy_r_r30, cpy_r_r32, 1, 0);
    CPy_DecRef(cpy_r_r30);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "wrapped", 73, CPyStatic_decorators___globals);
        goto CPyL47;
    }
    CPy_DecRef(cpy_r_r27);
    CPy_Raise(cpy_r_r33);
    CPy_DecRef(cpy_r_r33);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "wrapped", 73, CPyStatic_decorators___globals);
        goto CPyL28;
    } else
        goto CPyL48;
CPyL25: ;
    CPy_Unreachable();
CPyL26: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL28;
    } else
        goto CPyL49;
CPyL27: ;
    CPy_Unreachable();
CPyL28: ;
    CPy_RestoreExcInfo(cpy_r_r20);
    CPy_DecRef(cpy_r_r20.f0);
    CPy_DecRef(cpy_r_r20.f1);
    CPy_DecRef(cpy_r_r20.f2);
    cpy_r_r34 = CPy_KeepPropagating();
    if (!cpy_r_r34) {
        goto CPyL32;
    } else
        goto CPyL50;
CPyL29: ;
    CPy_Unreachable();
CPyL30: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL32;
    } else
        goto CPyL51;
CPyL31: ;
    CPy_Unreachable();
CPyL32: ;
    CPy_RestoreExcInfo(cpy_r_r10);
    CPy_DecRef(cpy_r_r10.f0);
    CPy_DecRef(cpy_r_r10.f1);
    CPy_DecRef(cpy_r_r10.f2);
    cpy_r_r35 = CPy_KeepPropagating();
    if (!cpy_r_r35) goto CPyL34;
    CPy_Unreachable();
CPyL34: ;
    cpy_r_r36 = NULL;
    return cpy_r_r36;
CPyL35: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL34;
CPyL36: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL10;
CPyL37: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r3);
    goto CPyL10;
CPyL38: ;
    CPy_DECREF(cpy_r_r4);
    goto CPyL5;
CPyL39: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r5);
    goto CPyL10;
CPyL40: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r5);
    goto CPyL10;
CPyL41: ;
    CPy_DECREF_NO_IMM(cpy_r_r1);
    goto CPyL9;
CPyL42: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL32;
CPyL43: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL30;
CPyL44: ;
    CPy_DecRef(cpy_r_r10.f0);
    CPy_DecRef(cpy_r_r10.f1);
    CPy_DecRef(cpy_r_r10.f2);
    CPy_DecRef(cpy_r_r13);
    goto CPyL17;
CPyL45: ;
    CPy_DecRef(cpy_r_r13);
    goto CPyL28;
CPyL46: ;
    CPy_DecRef(cpy_r_r13);
    goto CPyL26;
CPyL47: ;
    CPy_DecRef(cpy_r_r27);
    goto CPyL28;
CPyL48: ;
    CPy_DecRef(cpy_r_r10.f0);
    CPy_DecRef(cpy_r_r10.f1);
    CPy_DecRef(cpy_r_r10.f2);
    CPy_DecRef(cpy_r_r20.f0);
    CPy_DecRef(cpy_r_r20.f1);
    CPy_DecRef(cpy_r_r20.f2);
    goto CPyL25;
CPyL49: ;
    CPy_DecRef(cpy_r_r10.f0);
    CPy_DecRef(cpy_r_r10.f1);
    CPy_DecRef(cpy_r_r10.f2);
    CPy_DecRef(cpy_r_r20.f0);
    CPy_DecRef(cpy_r_r20.f1);
    CPy_DecRef(cpy_r_r20.f2);
    goto CPyL27;
CPyL50: ;
    CPy_DecRef(cpy_r_r10.f0);
    CPy_DecRef(cpy_r_r10.f1);
    CPy_DecRef(cpy_r_r10.f2);
    goto CPyL29;
CPyL51: ;
    CPy_DecRef(cpy_r_r10.f0);
    CPy_DecRef(cpy_r_r10.f1);
    CPy_DecRef(cpy_r_r10.f2);
    goto CPyL31;
}

PyObject *CPyPy_decorators___wrapped_replace_exceptions_decorator_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {"%:__call__", kwlist, 0};
    PyObject *obj_args;
    PyObject *obj_kwargs;
    if (!CPyArg_ParseStackAndKeywords(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_args, &obj_kwargs)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_args = obj_args;
    PyObject *arg_kwargs = obj_kwargs;
    PyObject *retval = CPyDef_decorators___wrapped_replace_exceptions_decorator_obj_____call__(arg___mypyc_self__, arg_args, arg_kwargs);
    CPy_DECREF(obj_args);
    CPy_DECREF(obj_kwargs);
    return retval;
fail: ;
    CPy_DECREF(obj_args);
    CPy_DECREF(obj_kwargs);
    CPy_AddTraceback("faster_eth_utils/decorators.py", "wrapped", 66, CPyStatic_decorators___globals);
    return NULL;
}

PyObject *CPyDef_decorators___decorator_replace_exceptions_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_instance == cpy_r_r0;
    if (!cpy_r_r1) goto CPyL2;
    CPy_INCREF(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
CPyL2: ;
    cpy_r_r2 = PyMethod_New(cpy_r___mypyc_self__, cpy_r_instance);
    if (cpy_r_r2 == NULL) goto CPyL4;
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_decorators___decorator_replace_exceptions_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"instance", "owner", 0};
    static CPyArg_Parser parser = {"OO:__get__", kwlist, 0};
    PyObject *obj_instance;
    PyObject *obj_owner;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_instance, &obj_owner)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_instance = obj_instance;
    PyObject *arg_owner = obj_owner;
    PyObject *retval = CPyDef_decorators___decorator_replace_exceptions_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("faster_eth_utils/decorators.py", "__get__", -1, CPyStatic_decorators___globals);
    return NULL;
}

PyObject *CPyDef_decorators___decorator_replace_exceptions_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_to_wrap) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject **cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject **cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    int32_t cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    cpy_r_r0 = ((faster_eth_utils___decorators___decorator_replace_exceptions_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("faster_eth_utils/decorators.py", "decorator", "decorator_replace_exceptions_obj", "__mypyc_env__", 64, CPyStatic_decorators___globals);
        goto CPyL12;
    }
    CPy_INCREF_NO_IMM(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef_decorators___decorator_replace_exceptions_env();
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "decorator", 64, CPyStatic_decorators___globals);
        goto CPyL13;
    }
    if (((faster_eth_utils___decorators___decorator_replace_exceptions_envObject *)cpy_r_r1)->___mypyc_env__ != NULL) {
        CPy_DECREF_NO_IMM(((faster_eth_utils___decorators___decorator_replace_exceptions_envObject *)cpy_r_r1)->___mypyc_env__);
    }
    ((faster_eth_utils___decorators___decorator_replace_exceptions_envObject *)cpy_r_r1)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "decorator", 64, CPyStatic_decorators___globals);
        goto CPyL14;
    }
    CPy_INCREF(cpy_r_to_wrap);
    if (((faster_eth_utils___decorators___decorator_replace_exceptions_envObject *)cpy_r_r1)->_to_wrap != NULL) {
        CPy_DECREF(((faster_eth_utils___decorators___decorator_replace_exceptions_envObject *)cpy_r_r1)->_to_wrap);
    }
    ((faster_eth_utils___decorators___decorator_replace_exceptions_envObject *)cpy_r_r1)->_to_wrap = cpy_r_to_wrap;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "decorator", 64, CPyStatic_decorators___globals);
        goto CPyL14;
    }
    cpy_r_r4 = CPyDef_decorators___wrapped_replace_exceptions_decorator_obj();
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "decorator", 66, CPyStatic_decorators___globals);
        goto CPyL14;
    }
    CPy_INCREF_NO_IMM(cpy_r_r1);
    if (((faster_eth_utils___decorators___wrapped_replace_exceptions_decorator_objObject *)cpy_r_r4)->___mypyc_env__ != NULL) {
        CPy_DECREF_NO_IMM(((faster_eth_utils___decorators___wrapped_replace_exceptions_decorator_objObject *)cpy_r_r4)->___mypyc_env__);
    }
    ((faster_eth_utils___decorators___wrapped_replace_exceptions_decorator_objObject *)cpy_r_r4)->___mypyc_env__ = cpy_r_r1;
    cpy_r_r5 = 1;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "decorator", 66, CPyStatic_decorators___globals);
        goto CPyL15;
    }
    cpy_r_r6 = ((faster_eth_utils___decorators___decorator_replace_exceptions_envObject *)cpy_r_r1)->_to_wrap;
    if (unlikely(cpy_r_r6 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'to_wrap' of 'decorator_replace_exceptions_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r6);
    }
    CPy_DECREF_NO_IMM(cpy_r_r1);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "decorator", 65, CPyStatic_decorators___globals);
        goto CPyL16;
    }
CPyL7: ;
    cpy_r_r7 = CPyModule_functools;
    cpy_r_r8 = CPyStatics[151]; /* 'wraps' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_r7, cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "decorator", 65, CPyStatic_decorators___globals);
        goto CPyL17;
    }
    PyObject *cpy_r_r10[1] = {cpy_r_r6};
    cpy_r_r11 = (PyObject **)&cpy_r_r10;
    cpy_r_r12 = PyObject_Vectorcall(cpy_r_r9, cpy_r_r11, 1, 0);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "decorator", 65, CPyStatic_decorators___globals);
        goto CPyL17;
    }
    CPy_DECREF(cpy_r_r6);
    PyObject *cpy_r_r13[1] = {cpy_r_r4};
    cpy_r_r14 = (PyObject **)&cpy_r_r13;
    cpy_r_r15 = PyObject_Vectorcall(cpy_r_r12, cpy_r_r14, 1, 0);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "decorator", 66, CPyStatic_decorators___globals);
        goto CPyL16;
    }
    CPy_DECREF_NO_IMM(cpy_r_r4);
    CPy_INCREF(cpy_r_r15);
    cpy_r_r16 = CPyStatic_decorators___globals;
    cpy_r_r17 = CPyStatics[156]; /* 'wrapped' */
    cpy_r_r18 = CPyDict_SetItem(cpy_r_r16, cpy_r_r17, cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r19 = cpy_r_r18 >= 0;
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "decorator", 66, CPyStatic_decorators___globals);
        goto CPyL18;
    }
    return cpy_r_r15;
CPyL12: ;
    cpy_r_r20 = NULL;
    return cpy_r_r20;
CPyL13: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL12;
CPyL14: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL12;
CPyL15: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r4);
    goto CPyL12;
CPyL16: ;
    CPy_DecRef(cpy_r_r4);
    goto CPyL12;
CPyL17: ;
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r6);
    goto CPyL12;
CPyL18: ;
    CPy_DecRef(cpy_r_r15);
    goto CPyL12;
}

PyObject *CPyPy_decorators___decorator_replace_exceptions_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"to_wrap", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_to_wrap;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_to_wrap)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_to_wrap = obj_to_wrap;
    PyObject *retval = CPyDef_decorators___decorator_replace_exceptions_obj_____call__(arg___mypyc_self__, arg_to_wrap);
    return retval;
fail: ;
    CPy_AddTraceback("faster_eth_utils/decorators.py", "decorator", 64, CPyStatic_decorators___globals);
    return NULL;
}

PyObject *CPyDef_decorators___replace_exceptions(PyObject *cpy_r_old_to_new_exceptions) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_decorator;
    PyObject *cpy_r_r8;
    cpy_r_r0 = CPyDef_decorators___replace_exceptions_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "replace_exceptions", 56, CPyStatic_decorators___globals);
        goto CPyL9;
    }
    CPy_INCREF(cpy_r_old_to_new_exceptions);
    if (((faster_eth_utils___decorators___replace_exceptions_envObject *)cpy_r_r0)->_old_to_new_exceptions != NULL) {
        CPy_DECREF(((faster_eth_utils___decorators___replace_exceptions_envObject *)cpy_r_r0)->_old_to_new_exceptions);
    }
    ((faster_eth_utils___decorators___replace_exceptions_envObject *)cpy_r_r0)->_old_to_new_exceptions = cpy_r_old_to_new_exceptions;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "replace_exceptions", 56, CPyStatic_decorators___globals);
        goto CPyL10;
    }
    cpy_r_r2 = ((faster_eth_utils___decorators___replace_exceptions_envObject *)cpy_r_r0)->_old_to_new_exceptions;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("faster_eth_utils/decorators.py", "replace_exceptions", "replace_exceptions_env", "old_to_new_exceptions", 62, CPyStatic_decorators___globals);
        goto CPyL10;
    }
    CPy_INCREF(cpy_r_r2);
CPyL3: ;
    cpy_r_r3 = CPyDict_KeysView(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "replace_exceptions", 62, CPyStatic_decorators___globals);
        goto CPyL10;
    }
    cpy_r_r4 = PySequence_Tuple(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "replace_exceptions", 62, CPyStatic_decorators___globals);
        goto CPyL10;
    }
    if (((faster_eth_utils___decorators___replace_exceptions_envObject *)cpy_r_r0)->_old_exceptions != NULL) {
        CPy_DECREF(((faster_eth_utils___decorators___replace_exceptions_envObject *)cpy_r_r0)->_old_exceptions);
    }
    ((faster_eth_utils___decorators___replace_exceptions_envObject *)cpy_r_r0)->_old_exceptions = cpy_r_r4;
    cpy_r_r5 = 1;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "replace_exceptions", 62, CPyStatic_decorators___globals);
        goto CPyL10;
    }
    cpy_r_r6 = CPyDef_decorators___decorator_replace_exceptions_obj();
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "replace_exceptions", 64, CPyStatic_decorators___globals);
        goto CPyL10;
    }
    if (((faster_eth_utils___decorators___decorator_replace_exceptions_objObject *)cpy_r_r6)->___mypyc_env__ != NULL) {
        CPy_DECREF_NO_IMM(((faster_eth_utils___decorators___decorator_replace_exceptions_objObject *)cpy_r_r6)->___mypyc_env__);
    }
    ((faster_eth_utils___decorators___decorator_replace_exceptions_objObject *)cpy_r_r6)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r7 = 1;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "replace_exceptions", 64, CPyStatic_decorators___globals);
        goto CPyL11;
    }
    cpy_r_decorator = cpy_r_r6;
    return cpy_r_decorator;
CPyL9: ;
    cpy_r_r8 = NULL;
    return cpy_r_r8;
CPyL10: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL9;
CPyL11: ;
    CPy_DecRef(cpy_r_r6);
    goto CPyL9;
}

PyObject *CPyPy_decorators___replace_exceptions(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"old_to_new_exceptions", 0};
    static CPyArg_Parser parser = {"O:replace_exceptions", kwlist, 0};
    PyObject *obj_old_to_new_exceptions;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_old_to_new_exceptions)) {
        return NULL;
    }
    PyObject *arg_old_to_new_exceptions;
    if (likely(PyDict_Check(obj_old_to_new_exceptions)))
        arg_old_to_new_exceptions = obj_old_to_new_exceptions;
    else {
        CPy_TypeError("dict", obj_old_to_new_exceptions); 
        goto fail;
    }
    PyObject *retval = CPyDef_decorators___replace_exceptions(arg_old_to_new_exceptions);
    return retval;
fail: ;
    CPy_AddTraceback("faster_eth_utils/decorators.py", "replace_exceptions", 56, CPyStatic_decorators___globals);
    return NULL;
}

char CPyDef_decorators_____top_level__(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject **cpy_r_r5;
    PyObject **cpy_r_r6;
    PyObject **cpy_r_r7;
    void *cpy_r_r9;
    void *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject **cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    int32_t cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    int32_t cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    int32_t cpy_r_r48;
    char cpy_r_r49;
    char cpy_r_r50;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[18]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "<module>", -1, CPyStatic_decorators___globals);
        goto CPyL15;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = (PyObject **)&CPyModule_functools;
    cpy_r_r6 = (PyObject **)&CPyModule_itertools;
    cpy_r_r7 = (PyObject **)&CPyModule_os;
    PyObject **cpy_r_r8[3] = {cpy_r_r5, cpy_r_r6, cpy_r_r7};
    cpy_r_r9 = (void *)&cpy_r_r8;
    int64_t cpy_r_r10[3] = {1, 2, 3};
    cpy_r_r11 = (void *)&cpy_r_r10;
    cpy_r_r12 = CPyStatics[311]; /* (('functools', 'functools', 'functools'),
                                    ('itertools', 'itertools', 'itertools'),
                                    ('os', 'os', 'os')) */
    cpy_r_r13 = CPyStatic_decorators___globals;
    cpy_r_r14 = CPyStatics[160]; /* 'faster_eth_utils/decorators.py' */
    cpy_r_r15 = CPyStatics[38]; /* '<module>' */
    cpy_r_r16 = CPyImport_ImportMany(cpy_r_r12, cpy_r_r9, cpy_r_r13, cpy_r_r14, cpy_r_r15, cpy_r_r11);
    if (!cpy_r_r16) goto CPyL15;
    cpy_r_r17 = CPyStatics[312]; /* ('Any', 'Callable', 'Dict', 'Optional', 'Type', 'TypeVar',
                                    'final') */
    cpy_r_r18 = CPyStatics[21]; /* 'typing' */
    cpy_r_r19 = CPyStatic_decorators___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "<module>", 4, CPyStatic_decorators___globals);
        goto CPyL15;
    }
    CPyModule_typing = cpy_r_r20;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[313]; /* ('is_text',) */
    cpy_r_r22 = CPyStatics[57]; /* 'faster_eth_utils.types' */
    cpy_r_r23 = CPyStatic_decorators___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "<module>", 14, CPyStatic_decorators___globals);
        goto CPyL15;
    }
    CPyModule_faster_eth_utils___types = cpy_r_r24;
    CPy_INCREF(CPyModule_faster_eth_utils___types);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = CPyStatics[89]; /* 'T' */
    cpy_r_r26 = CPyStatic_decorators___globals;
    cpy_r_r27 = CPyStatics[80]; /* 'TypeVar' */
    cpy_r_r28 = CPyDict_GetItem(cpy_r_r26, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "<module>", 18, CPyStatic_decorators___globals);
        goto CPyL15;
    }
    PyObject *cpy_r_r29[1] = {cpy_r_r25};
    cpy_r_r30 = (PyObject **)&cpy_r_r29;
    cpy_r_r31 = PyObject_Vectorcall(cpy_r_r28, cpy_r_r30, 1, 0);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "<module>", 18, CPyStatic_decorators___globals);
        goto CPyL15;
    }
    cpy_r_r32 = CPyStatic_decorators___globals;
    cpy_r_r33 = CPyStatics[89]; /* 'T' */
    cpy_r_r34 = CPyDict_SetItem(cpy_r_r32, cpy_r_r33, cpy_r_r31);
    CPy_DECREF(cpy_r_r31);
    cpy_r_r35 = cpy_r_r34 >= 0;
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "<module>", 18, CPyStatic_decorators___globals);
        goto CPyL15;
    }
    cpy_r_r36 = NULL;
    cpy_r_r37 = CPyStatics[162]; /* 'faster_eth_utils.decorators' */
    cpy_r_r38 = (PyObject *)CPyType_decorators___combomethod_template;
    cpy_r_r39 = CPyType_FromTemplate(cpy_r_r38, cpy_r_r36, cpy_r_r37);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "<module>", 22, CPyStatic_decorators___globals);
        goto CPyL15;
    }
    cpy_r_r40 = CPyDef_decorators___combomethod_trait_vtable_setup();
    if (unlikely(cpy_r_r40 == 2)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "<module>", -1, CPyStatic_decorators___globals);
        goto CPyL16;
    }
    cpy_r_r41 = CPyStatics[133]; /* '__mypyc_attrs__' */
    cpy_r_r42 = CPyStatics[150]; /* 'method' */
    cpy_r_r43 = PyTuple_Pack(1, cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "<module>", 22, CPyStatic_decorators___globals);
        goto CPyL16;
    }
    cpy_r_r44 = PyObject_SetAttr(cpy_r_r39, cpy_r_r41, cpy_r_r43);
    CPy_DECREF(cpy_r_r43);
    cpy_r_r45 = cpy_r_r44 >= 0;
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "<module>", 22, CPyStatic_decorators___globals);
        goto CPyL16;
    }
    CPyType_decorators___combomethod = (PyTypeObject *)cpy_r_r39;
    CPy_INCREF(CPyType_decorators___combomethod);
    cpy_r_r46 = CPyStatic_decorators___globals;
    cpy_r_r47 = CPyStatics[163]; /* 'combomethod' */
    cpy_r_r48 = CPyDict_SetItem(cpy_r_r46, cpy_r_r47, cpy_r_r39);
    CPy_DECREF(cpy_r_r39);
    cpy_r_r49 = cpy_r_r48 >= 0;
    if (unlikely(!cpy_r_r49)) {
        CPy_AddTraceback("faster_eth_utils/decorators.py", "<module>", 22, CPyStatic_decorators___globals);
        goto CPyL15;
    }
    return 1;
CPyL15: ;
    cpy_r_r50 = 2;
    return cpy_r_r50;
CPyL16: ;
    CPy_DecRef(cpy_r_r39);
    goto CPyL15;
}
static PyMethodDef encodingmodule_methods[] = {
    {"int_to_big_endian", (PyCFunction)CPyPy_encoding___int_to_big_endian, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"big_endian_to_int", (PyCFunction)CPyPy_encoding___big_endian_to_int, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef encodingmodule = {
    PyModuleDef_HEAD_INIT,
    "faster_eth_utils.encoding",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    encodingmodule_methods
};

PyObject *CPyInit_faster_eth_utils___encoding(void)
{
    PyObject* modname = NULL;
    if (CPyModule_faster_eth_utils___encoding_internal) {
        Py_INCREF(CPyModule_faster_eth_utils___encoding_internal);
        return CPyModule_faster_eth_utils___encoding_internal;
    }
    CPyModule_faster_eth_utils___encoding_internal = PyModule_Create(&encodingmodule);
    if (unlikely(CPyModule_faster_eth_utils___encoding_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_faster_eth_utils___encoding_internal, "__name__");
    CPyStatic_encoding___globals = PyModule_GetDict(CPyModule_faster_eth_utils___encoding_internal);
    if (unlikely(CPyStatic_encoding___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_encoding_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_faster_eth_utils___encoding_internal;
    fail:
    Py_CLEAR(CPyModule_faster_eth_utils___encoding_internal);
    Py_CLEAR(modname);
    return NULL;
}

PyObject *CPyDef_encoding___int_to_big_endian(CPyTagged cpy_r_value) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject **cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyTagged cpy_r_r5;
    CPyTagged cpy_r_r6;
    CPyTagged cpy_r_r7;
    char cpy_r_r8;
    CPyTagged cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject **cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    cpy_r_r0 = CPyStatics[164]; /* 'bit_length' */
    CPyTagged_INCREF(cpy_r_value);
    cpy_r_r1 = CPyTagged_StealAsObject(cpy_r_value);
    PyObject *cpy_r_r2[1] = {cpy_r_r1};
    cpy_r_r3 = (PyObject **)&cpy_r_r2;
    cpy_r_r4 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r3, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/encoding.py", "int_to_big_endian", 2, CPyStatic_encoding___globals);
        goto CPyL10;
    }
    CPy_DECREF(cpy_r_r1);
    if (likely(PyLong_Check(cpy_r_r4)))
        cpy_r_r5 = CPyTagged_FromObject(cpy_r_r4);
    else {
        CPy_TypeError("int", cpy_r_r4); cpy_r_r5 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_eth_utils/encoding.py", "int_to_big_endian", 2, CPyStatic_encoding___globals);
        goto CPyL9;
    }
    cpy_r_r6 = CPyTagged_Add(cpy_r_r5, 14);
    CPyTagged_DECREF(cpy_r_r5);
    cpy_r_r7 = CPyTagged_Rshift(cpy_r_r6, 6);
    CPyTagged_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_eth_utils/encoding.py", "int_to_big_endian", -1, CPyStatic_encoding___globals);
        goto CPyL9;
    }
    cpy_r_r8 = cpy_r_r7 != 0;
    if (!cpy_r_r8) goto CPyL11;
    cpy_r_r9 = cpy_r_r7;
    goto CPyL6;
CPyL5: ;
    cpy_r_r9 = 2;
CPyL6: ;
    cpy_r_r10 = CPyStatics[165]; /* 'big' */
    cpy_r_r11 = CPyStatics[166]; /* 'to_bytes' */
    CPyTagged_INCREF(cpy_r_value);
    cpy_r_r12 = CPyTagged_StealAsObject(cpy_r_value);
    cpy_r_r13 = CPyTagged_StealAsObject(cpy_r_r9);
    PyObject *cpy_r_r14[3] = {cpy_r_r12, cpy_r_r13, cpy_r_r10};
    cpy_r_r15 = (PyObject **)&cpy_r_r14;
    cpy_r_r16 = PyObject_VectorcallMethod(cpy_r_r11, cpy_r_r15, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/encoding.py", "int_to_big_endian", 2, CPyStatic_encoding___globals);
        goto CPyL12;
    }
    CPy_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r13);
    if (likely(PyBytes_Check(cpy_r_r16) || PyByteArray_Check(cpy_r_r16)))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/encoding.py", "int_to_big_endian", 2, CPyStatic_encoding___globals, "bytes", cpy_r_r16);
        goto CPyL9;
    }
    return cpy_r_r17;
CPyL9: ;
    cpy_r_r18 = NULL;
    return cpy_r_r18;
CPyL10: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL9;
CPyL11: ;
    CPyTagged_DECREF(cpy_r_r7);
    goto CPyL5;
CPyL12: ;
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r13);
    goto CPyL9;
}

PyObject *CPyPy_encoding___int_to_big_endian(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"value", 0};
    static CPyArg_Parser parser = {"O:int_to_big_endian", kwlist, 0};
    PyObject *obj_value;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_value)) {
        return NULL;
    }
    CPyTagged arg_value;
    if (likely(PyLong_Check(obj_value)))
        arg_value = CPyTagged_BorrowFromObject(obj_value);
    else {
        CPy_TypeError("int", obj_value); goto fail;
    }
    PyObject *retval = CPyDef_encoding___int_to_big_endian(arg_value);
    return retval;
fail: ;
    CPy_AddTraceback("faster_eth_utils/encoding.py", "int_to_big_endian", 1, CPyStatic_encoding___globals);
    return NULL;
}

CPyTagged CPyDef_encoding___big_endian_to_int(PyObject *cpy_r_value) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject **cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyTagged cpy_r_r6;
    CPyTagged cpy_r_r7;
    cpy_r_r0 = (PyObject *)&PyLong_Type;
    cpy_r_r1 = CPyStatics[165]; /* 'big' */
    cpy_r_r2 = CPyStatics[167]; /* 'from_bytes' */
    PyObject *cpy_r_r3[3] = {cpy_r_r0, cpy_r_value, cpy_r_r1};
    cpy_r_r4 = (PyObject **)&cpy_r_r3;
    cpy_r_r5 = PyObject_VectorcallMethod(cpy_r_r2, cpy_r_r4, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/encoding.py", "big_endian_to_int", 6, CPyStatic_encoding___globals);
        goto CPyL3;
    }
    if (likely(PyLong_Check(cpy_r_r5)))
        cpy_r_r6 = CPyTagged_FromObject(cpy_r_r5);
    else {
        CPy_TypeError("int", cpy_r_r5); cpy_r_r6 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_eth_utils/encoding.py", "big_endian_to_int", 6, CPyStatic_encoding___globals);
        goto CPyL3;
    }
    return cpy_r_r6;
CPyL3: ;
    cpy_r_r7 = CPY_INT_TAG;
    return cpy_r_r7;
}

PyObject *CPyPy_encoding___big_endian_to_int(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"value", 0};
    static CPyArg_Parser parser = {"O:big_endian_to_int", kwlist, 0};
    PyObject *obj_value;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_value)) {
        return NULL;
    }
    PyObject *arg_value;
    if (likely(PyBytes_Check(obj_value) || PyByteArray_Check(obj_value)))
        arg_value = obj_value;
    else {
        CPy_TypeError("bytes", obj_value); 
        goto fail;
    }
    CPyTagged retval = CPyDef_encoding___big_endian_to_int(arg_value);
    if (retval == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = CPyTagged_StealAsObject(retval);
    return retbox;
fail: ;
    CPy_AddTraceback("faster_eth_utils/encoding.py", "big_endian_to_int", 5, CPyStatic_encoding___globals);
    return NULL;
}

char CPyDef_encoding_____top_level__(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[18]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/encoding.py", "<module>", -1, CPyStatic_encoding___globals);
        goto CPyL4;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    return 1;
CPyL4: ;
    cpy_r_r5 = 2;
    return cpy_r_r5;
}

PyMemberDef exceptions___ValidationError_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(PyBaseExceptionObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(PyBaseExceptionObject) + sizeof(PyObject *), 0, NULL},
    {0}
};

static PyGetSetDef exceptions___ValidationError_getseters[] = {
    {"__dict__", PyObject_GenericGetDict, PyObject_GenericSetDict},
    {NULL}  /* Sentinel */
};

static PyMethodDef exceptions___ValidationError_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_exceptions___ValidationError_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "ValidationError",
    .tp_getset = exceptions___ValidationError_getseters,
    .tp_methods = exceptions___ValidationError_methods,
    .tp_members = exceptions___ValidationError_members,
    .tp_basicsize = sizeof(PyBaseExceptionObject) + 2*sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE,
};
static PyTypeObject *CPyType_exceptions___ValidationError_template = &CPyType_exceptions___ValidationError_template_;

static PyMethodDef exceptionsmodule_methods[] = {
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef exceptionsmodule = {
    PyModuleDef_HEAD_INIT,
    "faster_eth_utils.exceptions",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    exceptionsmodule_methods
};

PyObject *CPyInit_faster_eth_utils___exceptions(void)
{
    PyObject* modname = NULL;
    if (CPyModule_faster_eth_utils___exceptions_internal) {
        Py_INCREF(CPyModule_faster_eth_utils___exceptions_internal);
        return CPyModule_faster_eth_utils___exceptions_internal;
    }
    CPyModule_faster_eth_utils___exceptions_internal = PyModule_Create(&exceptionsmodule);
    if (unlikely(CPyModule_faster_eth_utils___exceptions_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_faster_eth_utils___exceptions_internal, "__name__");
    CPyStatic_exceptions___globals = PyModule_GetDict(CPyModule_faster_eth_utils___exceptions_internal);
    if (unlikely(CPyStatic_exceptions___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_exceptions_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_faster_eth_utils___exceptions_internal;
    fail:
    Py_CLEAR(CPyModule_faster_eth_utils___exceptions_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_exceptions___ValidationError);
    return NULL;
}

char CPyDef_exceptions_____top_level__(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    int32_t cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    int32_t cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[18]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/exceptions.py", "<module>", -1, CPyStatic_exceptions___globals);
        goto CPyL10;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyModule_builtins;
    cpy_r_r6 = CPyStatics[168]; /* 'Exception' */
    cpy_r_r7 = CPyObject_GetAttr(cpy_r_r5, cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/exceptions.py", "<module>", 1, CPyStatic_exceptions___globals);
        goto CPyL10;
    }
    cpy_r_r8 = PyTuple_Pack(1, cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/exceptions.py", "<module>", 1, CPyStatic_exceptions___globals);
        goto CPyL10;
    }
    cpy_r_r9 = CPyStatics[169]; /* 'faster_eth_utils.exceptions' */
    cpy_r_r10 = (PyObject *)CPyType_exceptions___ValidationError_template;
    cpy_r_r11 = CPyType_FromTemplate(cpy_r_r10, cpy_r_r8, cpy_r_r9);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/exceptions.py", "<module>", 1, CPyStatic_exceptions___globals);
        goto CPyL10;
    }
    cpy_r_r12 = CPyStatics[133]; /* '__mypyc_attrs__' */
    cpy_r_r13 = CPyStatics[170]; /* '__dict__' */
    cpy_r_r14 = PyTuple_Pack(1, cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/exceptions.py", "<module>", 1, CPyStatic_exceptions___globals);
        goto CPyL11;
    }
    cpy_r_r15 = PyObject_SetAttr(cpy_r_r11, cpy_r_r12, cpy_r_r14);
    CPy_DECREF(cpy_r_r14);
    cpy_r_r16 = cpy_r_r15 >= 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("faster_eth_utils/exceptions.py", "<module>", 1, CPyStatic_exceptions___globals);
        goto CPyL11;
    }
    CPyType_exceptions___ValidationError = (PyTypeObject *)cpy_r_r11;
    CPy_INCREF(CPyType_exceptions___ValidationError);
    cpy_r_r17 = CPyStatic_exceptions___globals;
    cpy_r_r18 = CPyStatics[171]; /* 'ValidationError' */
    cpy_r_r19 = CPyDict_SetItem(cpy_r_r17, cpy_r_r18, cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    cpy_r_r20 = cpy_r_r19 >= 0;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("faster_eth_utils/exceptions.py", "<module>", 1, CPyStatic_exceptions___globals);
        goto CPyL10;
    }
    return 1;
CPyL10: ;
    cpy_r_r21 = 2;
    return cpy_r_r21;
CPyL11: ;
    CPy_DecRef(cpy_r_r11);
    goto CPyL10;
}
static PyMethodDef hexadecimalmodule_methods[] = {
    {"decode_hex", (PyCFunction)CPyPy_hexadecimal___decode_hex, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"encode_hex", (PyCFunction)CPyPy_hexadecimal___encode_hex, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_0x_prefixed", (PyCFunction)CPyPy_hexadecimal___is_0x_prefixed, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"remove_0x_prefix", (PyCFunction)CPyPy_hexadecimal___remove_0x_prefix, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"add_0x_prefix", (PyCFunction)CPyPy_hexadecimal___add_0x_prefix, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_hexstr", (PyCFunction)CPyPy_hexadecimal___is_hexstr, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_hex", (PyCFunction)CPyPy_hexadecimal___is_hex, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef hexadecimalmodule = {
    PyModuleDef_HEAD_INIT,
    "faster_eth_utils.hexadecimal",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    hexadecimalmodule_methods
};

PyObject *CPyInit_faster_eth_utils___hexadecimal(void)
{
    PyObject* modname = NULL;
    if (CPyModule_faster_eth_utils___hexadecimal_internal) {
        Py_INCREF(CPyModule_faster_eth_utils___hexadecimal_internal);
        return CPyModule_faster_eth_utils___hexadecimal_internal;
    }
    CPyModule_faster_eth_utils___hexadecimal_internal = PyModule_Create(&hexadecimalmodule);
    if (unlikely(CPyModule_faster_eth_utils___hexadecimal_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_faster_eth_utils___hexadecimal_internal, "__name__");
    CPyStatic_hexadecimal___globals = PyModule_GetDict(CPyModule_faster_eth_utils___hexadecimal_internal);
    if (unlikely(CPyStatic_hexadecimal___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_hexadecimal_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_faster_eth_utils___hexadecimal_internal;
    fail:
    Py_CLEAR(CPyModule_faster_eth_utils___hexadecimal_internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_hexadecimal____HEX_REGEXP);
    CPyStatic_hexadecimal____HEX_REGEXP = NULL;
    return NULL;
}

PyObject *CPyDef_hexadecimal___decode_hex(PyObject *cpy_r_value) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject **cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject **cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject **cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    cpy_r_r0 = CPyDef_types___is_text(cpy_r_value);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("faster_eth_utils/hexadecimal.py", "decode_hex", 24, CPyStatic_hexadecimal___globals);
        goto CPyL13;
    }
    if (cpy_r_r0) goto CPyL6;
    cpy_r_r1 = CPyStatics[172]; /* 'Value must be an instance of str' */
    cpy_r_r2 = CPyModule_builtins;
    cpy_r_r3 = CPyStatics[6]; /* 'TypeError' */
    cpy_r_r4 = CPyObject_GetAttr(cpy_r_r2, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/hexadecimal.py", "decode_hex", 25, CPyStatic_hexadecimal___globals);
        goto CPyL13;
    }
    PyObject *cpy_r_r5[1] = {cpy_r_r1};
    cpy_r_r6 = (PyObject **)&cpy_r_r5;
    cpy_r_r7 = PyObject_Vectorcall(cpy_r_r4, cpy_r_r6, 1, 0);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/hexadecimal.py", "decode_hex", 25, CPyStatic_hexadecimal___globals);
        goto CPyL13;
    }
    CPy_Raise(cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_eth_utils/hexadecimal.py", "decode_hex", 25, CPyStatic_hexadecimal___globals);
        goto CPyL13;
    }
    CPy_Unreachable();
CPyL6: ;
    cpy_r_r8 = CPyDef_hexadecimal___remove_0x_prefix(cpy_r_value);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/hexadecimal.py", "decode_hex", 26, CPyStatic_hexadecimal___globals);
        goto CPyL13;
    }
    cpy_r_r9 = CPyStatics[173]; /* 'ascii' */
    cpy_r_r10 = CPyStatics[174]; /* 'encode' */
    PyObject *cpy_r_r11[2] = {cpy_r_r8, cpy_r_r9};
    cpy_r_r12 = (PyObject **)&cpy_r_r11;
    cpy_r_r13 = PyObject_VectorcallMethod(cpy_r_r10, cpy_r_r12, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/hexadecimal.py", "decode_hex", 28, CPyStatic_hexadecimal___globals);
        goto CPyL14;
    }
    CPy_DECREF(cpy_r_r8);
    if (likely(PyBytes_Check(cpy_r_r13) || PyByteArray_Check(cpy_r_r13)))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/hexadecimal.py", "decode_hex", 28, CPyStatic_hexadecimal___globals, "bytes", cpy_r_r13);
        goto CPyL13;
    }
    cpy_r_r15 = CPyModule_binascii;
    cpy_r_r16 = CPyStatics[175]; /* 'unhexlify' */
    cpy_r_r17 = CPyObject_GetAttr(cpy_r_r15, cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/hexadecimal.py", "decode_hex", 29, CPyStatic_hexadecimal___globals);
        goto CPyL15;
    }
    PyObject *cpy_r_r18[1] = {cpy_r_r14};
    cpy_r_r19 = (PyObject **)&cpy_r_r18;
    cpy_r_r20 = PyObject_Vectorcall(cpy_r_r17, cpy_r_r19, 1, 0);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/hexadecimal.py", "decode_hex", 29, CPyStatic_hexadecimal___globals);
        goto CPyL15;
    }
    CPy_DECREF(cpy_r_r14);
    if (likely(PyBytes_Check(cpy_r_r20) || PyByteArray_Check(cpy_r_r20)))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/hexadecimal.py", "decode_hex", 29, CPyStatic_hexadecimal___globals, "bytes", cpy_r_r20);
        goto CPyL13;
    }
    return cpy_r_r21;
CPyL13: ;
    cpy_r_r22 = NULL;
    return cpy_r_r22;
CPyL14: ;
    CPy_DecRef(cpy_r_r8);
    goto CPyL13;
CPyL15: ;
    CPy_DecRef(cpy_r_r14);
    goto CPyL13;
}

PyObject *CPyPy_hexadecimal___decode_hex(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"value", 0};
    static CPyArg_Parser parser = {"O:decode_hex", kwlist, 0};
    PyObject *obj_value;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_value)) {
        return NULL;
    }
    PyObject *arg_value;
    if (likely(PyUnicode_Check(obj_value)))
        arg_value = obj_value;
    else {
        CPy_TypeError("str", obj_value); 
        goto fail;
    }
    PyObject *retval = CPyDef_hexadecimal___decode_hex(arg_value);
    return retval;
fail: ;
    CPy_AddTraceback("faster_eth_utils/hexadecimal.py", "decode_hex", 23, CPyStatic_hexadecimal___globals);
    return NULL;
}

PyObject *CPyDef_hexadecimal___encode_hex(PyObject *cpy_r_value) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject **cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    tuple_T2OO cpy_r_r12;
    PyObject *cpy_r_r13;
    int32_t cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_ascii_bytes;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject **cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject **cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    cpy_r_r0 = CPyDef_types___is_string(cpy_r_value);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("faster_eth_utils/hexadecimal.py", "encode_hex", 33, CPyStatic_hexadecimal___globals);
        goto CPyL18;
    }
    if (cpy_r_r0) goto CPyL6;
    cpy_r_r1 = CPyStatics[176]; /* 'Value must be an instance of str or unicode' */
    cpy_r_r2 = CPyModule_builtins;
    cpy_r_r3 = CPyStatics[6]; /* 'TypeError' */
    cpy_r_r4 = CPyObject_GetAttr(cpy_r_r2, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/hexadecimal.py", "encode_hex", 34, CPyStatic_hexadecimal___globals);
        goto CPyL18;
    }
    PyObject *cpy_r_r5[1] = {cpy_r_r1};
    cpy_r_r6 = (PyObject **)&cpy_r_r5;
    cpy_r_r7 = PyObject_Vectorcall(cpy_r_r4, cpy_r_r6, 1, 0);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/hexadecimal.py", "encode_hex", 34, CPyStatic_hexadecimal___globals);
        goto CPyL18;
    }
    CPy_Raise(cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_eth_utils/hexadecimal.py", "encode_hex", 34, CPyStatic_hexadecimal___globals);
        goto CPyL18;
    }
    CPy_Unreachable();
CPyL6: ;
    cpy_r_r8 = (PyObject *)&PyBytes_Type;
    cpy_r_r9 = CPyModule_builtins;
    cpy_r_r10 = CPyStatics[65]; /* 'bytearray' */
    cpy_r_r11 = CPyObject_GetAttr(cpy_r_r9, cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/hexadecimal.py", "encode_hex", 35, CPyStatic_hexadecimal___globals);
        goto CPyL18;
    }
    CPy_INCREF(cpy_r_r8);
    cpy_r_r12.f0 = cpy_r_r8;
    cpy_r_r12.f1 = cpy_r_r11;
    cpy_r_r13 = PyTuple_New(2);
    if (unlikely(cpy_r_r13 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp43 = cpy_r_r12.f0;
    PyTuple_SET_ITEM(cpy_r_r13, 0, __tmp43);
    PyObject *__tmp44 = cpy_r_r12.f1;
    PyTuple_SET_ITEM(cpy_r_r13, 1, __tmp44);
    cpy_r_r14 = PyObject_IsInstance(cpy_r_value, cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    cpy_r_r15 = cpy_r_r14 >= 0;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("faster_eth_utils/hexadecimal.py", "encode_hex", 35, CPyStatic_hexadecimal___globals);
        goto CPyL18;
    }
    cpy_r_r16 = cpy_r_r14;
    if (!cpy_r_r16) goto CPyL10;
    CPy_INCREF(cpy_r_value);
    cpy_r_ascii_bytes = cpy_r_value;
    goto CPyL12;
CPyL10: ;
    cpy_r_r17 = CPyStatics[173]; /* 'ascii' */
    cpy_r_r18 = CPyStatics[174]; /* 'encode' */
    PyObject *cpy_r_r19[2] = {cpy_r_value, cpy_r_r17};
    cpy_r_r20 = (PyObject **)&cpy_r_r19;
    cpy_r_r21 = PyObject_VectorcallMethod(cpy_r_r18, cpy_r_r20, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/hexadecimal.py", "encode_hex", 38, CPyStatic_hexadecimal___globals);
        goto CPyL18;
    }
    cpy_r_ascii_bytes = cpy_r_r21;
CPyL12: ;
    cpy_r_r22 = CPyModule_binascii;
    cpy_r_r23 = CPyStatics[177]; /* 'hexlify' */
    cpy_r_r24 = CPyObject_GetAttr(cpy_r_r22, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/hexadecimal.py", "encode_hex", 40, CPyStatic_hexadecimal___globals);
        goto CPyL19;
    }
    PyObject *cpy_r_r25[1] = {cpy_r_ascii_bytes};
    cpy_r_r26 = (PyObject **)&cpy_r_r25;
    cpy_r_r27 = PyObject_Vectorcall(cpy_r_r24, cpy_r_r26, 1, 0);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/hexadecimal.py", "encode_hex", 40, CPyStatic_hexadecimal___globals);
        goto CPyL19;
    }
    CPy_DECREF(cpy_r_ascii_bytes);
    if (likely(PyBytes_Check(cpy_r_r27) || PyByteArray_Check(cpy_r_r27)))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/hexadecimal.py", "encode_hex", 40, CPyStatic_hexadecimal___globals, "bytes", cpy_r_r27);
        goto CPyL18;
    }
    cpy_r_r29 = CPyStatics[173]; /* 'ascii' */
    cpy_r_r30 = CPy_Decode(cpy_r_r28, cpy_r_r29, NULL);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/hexadecimal.py", "encode_hex", 41, CPyStatic_hexadecimal___globals);
        goto CPyL18;
    }
    cpy_r_r31 = CPyDef_hexadecimal___add_0x_prefix(cpy_r_r30);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/hexadecimal.py", "encode_hex", 41, CPyStatic_hexadecimal___globals);
        goto CPyL18;
    }
    return cpy_r_r31;
CPyL18: ;
    cpy_r_r32 = NULL;
    return cpy_r_r32;
CPyL19: ;
    CPy_DecRef(cpy_r_ascii_bytes);
    goto CPyL18;
}

PyObject *CPyPy_hexadecimal___encode_hex(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"value", 0};
    static CPyArg_Parser parser = {"O:encode_hex", kwlist, 0};
    PyObject *obj_value;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_value)) {
        return NULL;
    }
    PyObject *arg_value = obj_value;
    PyObject *retval = CPyDef_hexadecimal___encode_hex(arg_value);
    return retval;
fail: ;
    CPy_AddTraceback("faster_eth_utils/hexadecimal.py", "encode_hex", 32, CPyStatic_hexadecimal___globals);
    return NULL;
}

char CPyDef_hexadecimal___is_0x_prefixed(PyObject *cpy_r_value) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject **cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    tuple_T2OO cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    cpy_r_r0 = CPyDef_types___is_text(cpy_r_value);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("faster_eth_utils/hexadecimal.py", "is_0x_prefixed", 45, CPyStatic_hexadecimal___globals);
        goto CPyL10;
    }
    if (cpy_r_r0) goto CPyL8;
    cpy_r_r1 = CPyStatics[178]; /* 'is_0x_prefixed requires text typed arguments. Got: ' */
    cpy_r_r2 = PyObject_Repr(cpy_r_value);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/hexadecimal.py", "is_0x_prefixed", 47, CPyStatic_hexadecimal___globals);
        goto CPyL10;
    }
    cpy_r_r3 = CPyStr_Build(2, cpy_r_r1, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/hexadecimal.py", "is_0x_prefixed", 47, CPyStatic_hexadecimal___globals);
        goto CPyL10;
    }
    cpy_r_r4 = CPyModule_builtins;
    cpy_r_r5 = CPyStatics[6]; /* 'TypeError' */
    cpy_r_r6 = CPyObject_GetAttr(cpy_r_r4, cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/hexadecimal.py", "is_0x_prefixed", 46, CPyStatic_hexadecimal___globals);
        goto CPyL11;
    }
    PyObject *cpy_r_r7[1] = {cpy_r_r3};
    cpy_r_r8 = (PyObject **)&cpy_r_r7;
    cpy_r_r9 = PyObject_Vectorcall(cpy_r_r6, cpy_r_r8, 1, 0);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/hexadecimal.py", "is_0x_prefixed", 46, CPyStatic_hexadecimal___globals);
        goto CPyL11;
    }
    CPy_DECREF(cpy_r_r3);
    CPy_Raise(cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_eth_utils/hexadecimal.py", "is_0x_prefixed", 46, CPyStatic_hexadecimal___globals);
        goto CPyL10;
    }
    CPy_Unreachable();
CPyL8: ;
    cpy_r_r10 = CPyStatics[179]; /* '0x' */
    cpy_r_r11 = CPyStatics[180]; /* '0X' */
    CPy_INCREF(cpy_r_r10);
    CPy_INCREF(cpy_r_r11);
    cpy_r_r12.f0 = cpy_r_r10;
    cpy_r_r12.f1 = cpy_r_r11;
    cpy_r_r13 = PyTuple_New(2);
    if (unlikely(cpy_r_r13 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp45 = cpy_r_r12.f0;
    PyTuple_SET_ITEM(cpy_r_r13, 0, __tmp45);
    PyObject *__tmp46 = cpy_r_r12.f1;
    PyTuple_SET_ITEM(cpy_r_r13, 1, __tmp46);
    cpy_r_r14 = CPyStr_Startswith(cpy_r_value, cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == 2)) {
        CPy_AddTraceback("faster_eth_utils/hexadecimal.py", "is_0x_prefixed", 49, CPyStatic_hexadecimal___globals);
        goto CPyL10;
    }
    return cpy_r_r14;
CPyL10: ;
    cpy_r_r15 = 2;
    return cpy_r_r15;
CPyL11: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL10;
}

PyObject *CPyPy_hexadecimal___is_0x_prefixed(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"value", 0};
    static CPyArg_Parser parser = {"O:is_0x_prefixed", kwlist, 0};
    PyObject *obj_value;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_value)) {
        return NULL;
    }
    PyObject *arg_value;
    if (likely(PyUnicode_Check(obj_value)))
        arg_value = obj_value;
    else {
        CPy_TypeError("str", obj_value); 
        goto fail;
    }
    char retval = CPyDef_hexadecimal___is_0x_prefixed(arg_value);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("faster_eth_utils/hexadecimal.py", "is_0x_prefixed", 44, CPyStatic_hexadecimal___globals);
    return NULL;
}

PyObject *CPyDef_hexadecimal___remove_0x_prefix(PyObject *cpy_r_value) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    CPy_INCREF(cpy_r_value);
    if (likely(PyUnicode_Check(cpy_r_value)))
        cpy_r_r0 = cpy_r_value;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/hexadecimal.py", "remove_0x_prefix", 53, CPyStatic_hexadecimal___globals, "str", cpy_r_value);
        goto CPyL8;
    }
    cpy_r_r1 = CPyDef_hexadecimal___is_0x_prefixed(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("faster_eth_utils/hexadecimal.py", "remove_0x_prefix", 53, CPyStatic_hexadecimal___globals);
        goto CPyL8;
    }
    if (!cpy_r_r1) goto CPyL7;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = CPyStatics[270]; /* 2 */
    cpy_r_r5 = PySlice_New(cpy_r_r4, cpy_r_r2, cpy_r_r3);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/hexadecimal.py", "remove_0x_prefix", 54, CPyStatic_hexadecimal___globals);
        goto CPyL8;
    }
    cpy_r_r6 = PyObject_GetItem(cpy_r_value, cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/hexadecimal.py", "remove_0x_prefix", 54, CPyStatic_hexadecimal___globals);
        goto CPyL8;
    }
    if (likely(PyUnicode_Check(cpy_r_r6)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/hexadecimal.py", "remove_0x_prefix", 54, CPyStatic_hexadecimal___globals, "str", cpy_r_r6);
        goto CPyL8;
    }
    return cpy_r_r7;
CPyL7: ;
    CPy_INCREF(cpy_r_value);
    return cpy_r_value;
CPyL8: ;
    cpy_r_r8 = NULL;
    return cpy_r_r8;
}

PyObject *CPyPy_hexadecimal___remove_0x_prefix(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"value", 0};
    static CPyArg_Parser parser = {"O:remove_0x_prefix", kwlist, 0};
    PyObject *obj_value;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_value)) {
        return NULL;
    }
    PyObject *arg_value = obj_value;
    PyObject *retval = CPyDef_hexadecimal___remove_0x_prefix(arg_value);
    return retval;
fail: ;
    CPy_AddTraceback("faster_eth_utils/hexadecimal.py", "remove_0x_prefix", 52, CPyStatic_hexadecimal___globals);
    return NULL;
}

PyObject *CPyDef_hexadecimal___add_0x_prefix(PyObject *cpy_r_value) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    CPy_INCREF(cpy_r_value);
    if (likely(PyUnicode_Check(cpy_r_value)))
        cpy_r_r0 = cpy_r_value;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/hexadecimal.py", "add_0x_prefix", 59, CPyStatic_hexadecimal___globals, "str", cpy_r_value);
        goto CPyL7;
    }
    cpy_r_r1 = CPyDef_hexadecimal___is_0x_prefixed(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("faster_eth_utils/hexadecimal.py", "add_0x_prefix", 59, CPyStatic_hexadecimal___globals);
        goto CPyL7;
    }
    if (!cpy_r_r1) goto CPyL4;
    CPy_INCREF(cpy_r_value);
    return cpy_r_value;
CPyL4: ;
    cpy_r_r2 = CPyStatics[179]; /* '0x' */
    cpy_r_r3 = PyNumber_Add(cpy_r_r2, cpy_r_value);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/hexadecimal.py", "add_0x_prefix", 61, CPyStatic_hexadecimal___globals);
        goto CPyL7;
    }
    if (likely(PyUnicode_Check(cpy_r_r3)))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/hexadecimal.py", "add_0x_prefix", 61, CPyStatic_hexadecimal___globals, "str", cpy_r_r3);
        goto CPyL7;
    }
    return cpy_r_r4;
CPyL7: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
}

PyObject *CPyPy_hexadecimal___add_0x_prefix(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"value", 0};
    static CPyArg_Parser parser = {"O:add_0x_prefix", kwlist, 0};
    PyObject *obj_value;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_value)) {
        return NULL;
    }
    PyObject *arg_value = obj_value;
    PyObject *retval = CPyDef_hexadecimal___add_0x_prefix(arg_value);
    return retval;
fail: ;
    CPy_AddTraceback("faster_eth_utils/hexadecimal.py", "add_0x_prefix", 58, CPyStatic_hexadecimal___globals);
    return NULL;
}

char CPyDef_hexadecimal___is_hexstr(PyObject *cpy_r_value) {
    char cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject **cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    cpy_r_r0 = CPyDef_types___is_text(cpy_r_value);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("faster_eth_utils/hexadecimal.py", "is_hexstr", 65, CPyStatic_hexadecimal___globals);
        goto CPyL10;
    }
    if (!cpy_r_r0) goto CPyL4;
    cpy_r_r1 = PyObject_IsTrue(cpy_r_value);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("faster_eth_utils/hexadecimal.py", "is_hexstr", 64, CPyStatic_hexadecimal___globals);
        goto CPyL10;
    }
    cpy_r_r3 = cpy_r_r1;
    if (cpy_r_r3) goto CPyL5;
CPyL4: ;
    return 0;
CPyL5: ;
    cpy_r_r4 = CPyStatic_hexadecimal____HEX_REGEXP;
    if (likely(cpy_r_r4 != NULL)) goto CPyL8;
    PyErr_SetString(PyExc_NameError, "value for final name \"_HEX_REGEXP\" was not set");
    cpy_r_r5 = 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("faster_eth_utils/hexadecimal.py", "is_hexstr", 67, CPyStatic_hexadecimal___globals);
        goto CPyL10;
    }
    CPy_Unreachable();
CPyL8: ;
    cpy_r_r6 = CPyStatics[23]; /* 'fullmatch' */
    PyObject *cpy_r_r7[2] = {cpy_r_r4, cpy_r_value};
    cpy_r_r8 = (PyObject **)&cpy_r_r7;
    cpy_r_r9 = PyObject_VectorcallMethod(cpy_r_r6, cpy_r_r8, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/hexadecimal.py", "is_hexstr", 67, CPyStatic_hexadecimal___globals);
        goto CPyL10;
    }
    cpy_r_r10 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r11 = cpy_r_r9 != cpy_r_r10;
    CPy_DECREF(cpy_r_r9);
    return cpy_r_r11;
CPyL10: ;
    cpy_r_r12 = 2;
    return cpy_r_r12;
}

PyObject *CPyPy_hexadecimal___is_hexstr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"value", 0};
    static CPyArg_Parser parser = {"O:is_hexstr", kwlist, 0};
    PyObject *obj_value;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_value)) {
        return NULL;
    }
    PyObject *arg_value = obj_value;
    char retval = CPyDef_hexadecimal___is_hexstr(arg_value);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("faster_eth_utils/hexadecimal.py", "is_hexstr", 64, CPyStatic_hexadecimal___globals);
    return NULL;
}

char CPyDef_hexadecimal___is_hex(PyObject *cpy_r_value) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject **cpy_r_r8;
    PyObject *cpy_r_r9;
    int32_t cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject **cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    cpy_r_r0 = CPyDef_types___is_text(cpy_r_value);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("faster_eth_utils/hexadecimal.py", "is_hex", 71, CPyStatic_hexadecimal___globals);
        goto CPyL16;
    }
    if (cpy_r_r0) goto CPyL8;
    cpy_r_r1 = CPyStatics[181]; /* 'is_hex requires text typed arguments. Got: ' */
    cpy_r_r2 = PyObject_Repr(cpy_r_value);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/hexadecimal.py", "is_hex", 72, CPyStatic_hexadecimal___globals);
        goto CPyL16;
    }
    cpy_r_r3 = CPyStr_Build(2, cpy_r_r1, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/hexadecimal.py", "is_hex", 72, CPyStatic_hexadecimal___globals);
        goto CPyL16;
    }
    cpy_r_r4 = CPyModule_builtins;
    cpy_r_r5 = CPyStatics[6]; /* 'TypeError' */
    cpy_r_r6 = CPyObject_GetAttr(cpy_r_r4, cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/hexadecimal.py", "is_hex", 72, CPyStatic_hexadecimal___globals);
        goto CPyL17;
    }
    PyObject *cpy_r_r7[1] = {cpy_r_r3};
    cpy_r_r8 = (PyObject **)&cpy_r_r7;
    cpy_r_r9 = PyObject_Vectorcall(cpy_r_r6, cpy_r_r8, 1, 0);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/hexadecimal.py", "is_hex", 72, CPyStatic_hexadecimal___globals);
        goto CPyL17;
    }
    CPy_DECREF(cpy_r_r3);
    CPy_Raise(cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_eth_utils/hexadecimal.py", "is_hex", 72, CPyStatic_hexadecimal___globals);
        goto CPyL16;
    }
    CPy_Unreachable();
CPyL8: ;
    cpy_r_r10 = PyObject_IsTrue(cpy_r_value);
    cpy_r_r11 = cpy_r_r10 >= 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("faster_eth_utils/hexadecimal.py", "is_hex", 70, CPyStatic_hexadecimal___globals);
        goto CPyL16;
    }
    cpy_r_r12 = cpy_r_r10;
    if (cpy_r_r12) goto CPyL11;
    return 0;
CPyL11: ;
    cpy_r_r13 = CPyStatic_hexadecimal____HEX_REGEXP;
    if (likely(cpy_r_r13 != NULL)) goto CPyL14;
    PyErr_SetString(PyExc_NameError, "value for final name \"_HEX_REGEXP\" was not set");
    cpy_r_r14 = 0;
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("faster_eth_utils/hexadecimal.py", "is_hex", 75, CPyStatic_hexadecimal___globals);
        goto CPyL16;
    }
    CPy_Unreachable();
CPyL14: ;
    cpy_r_r15 = CPyStatics[23]; /* 'fullmatch' */
    PyObject *cpy_r_r16[2] = {cpy_r_r13, cpy_r_value};
    cpy_r_r17 = (PyObject **)&cpy_r_r16;
    cpy_r_r18 = PyObject_VectorcallMethod(cpy_r_r15, cpy_r_r17, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/hexadecimal.py", "is_hex", 75, CPyStatic_hexadecimal___globals);
        goto CPyL16;
    }
    cpy_r_r19 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r20 = cpy_r_r18 != cpy_r_r19;
    CPy_DECREF(cpy_r_r18);
    return cpy_r_r20;
CPyL16: ;
    cpy_r_r21 = 2;
    return cpy_r_r21;
CPyL17: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL16;
}

PyObject *CPyPy_hexadecimal___is_hex(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"value", 0};
    static CPyArg_Parser parser = {"O:is_hex", kwlist, 0};
    PyObject *obj_value;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_value)) {
        return NULL;
    }
    PyObject *arg_value = obj_value;
    char retval = CPyDef_hexadecimal___is_hex(arg_value);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("faster_eth_utils/hexadecimal.py", "is_hex", 70, CPyStatic_hexadecimal___globals);
    return NULL;
}

char CPyDef_hexadecimal_____top_level__(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject **cpy_r_r5;
    PyObject **cpy_r_r6;
    void *cpy_r_r8;
    void *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject **cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    int32_t cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[18]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/hexadecimal.py", "<module>", -1, CPyStatic_hexadecimal___globals);
        goto CPyL11;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = (PyObject **)&CPyModule_binascii;
    cpy_r_r6 = (PyObject **)&CPyModule_re;
    PyObject **cpy_r_r7[2] = {cpy_r_r5, cpy_r_r6};
    cpy_r_r8 = (void *)&cpy_r_r7;
    int64_t cpy_r_r9[2] = {3, 4};
    cpy_r_r10 = (void *)&cpy_r_r9;
    cpy_r_r11 = CPyStatics[315]; /* (('binascii', 'binascii', 'binascii'), ('re', 're', 're')) */
    cpy_r_r12 = CPyStatic_hexadecimal___globals;
    cpy_r_r13 = CPyStatics[183]; /* 'faster_eth_utils/hexadecimal.py' */
    cpy_r_r14 = CPyStatics[38]; /* '<module>' */
    cpy_r_r15 = CPyImport_ImportMany(cpy_r_r11, cpy_r_r8, cpy_r_r12, cpy_r_r13, cpy_r_r14, cpy_r_r10);
    if (!cpy_r_r15) goto CPyL11;
    cpy_r_r16 = CPyStatics[316]; /* ('Any', 'AnyStr', 'Final') */
    cpy_r_r17 = CPyStatics[21]; /* 'typing' */
    cpy_r_r18 = CPyStatic_hexadecimal___globals;
    cpy_r_r19 = CPyImport_ImportFromMany(cpy_r_r17, cpy_r_r16, cpy_r_r16, cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/hexadecimal.py", "<module>", 5, CPyStatic_hexadecimal___globals);
        goto CPyL11;
    }
    CPyModule_typing = cpy_r_r19;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r19);
    cpy_r_r20 = CPyStatics[317]; /* ('HexStr',) */
    cpy_r_r21 = CPyStatics[47]; /* 'eth_typing' */
    cpy_r_r22 = CPyStatic_hexadecimal___globals;
    cpy_r_r23 = CPyImport_ImportFromMany(cpy_r_r21, cpy_r_r20, cpy_r_r20, cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/hexadecimal.py", "<module>", 11, CPyStatic_hexadecimal___globals);
        goto CPyL11;
    }
    CPyModule_eth_typing = cpy_r_r23;
    CPy_INCREF(CPyModule_eth_typing);
    CPy_DECREF(cpy_r_r23);
    cpy_r_r24 = CPyStatics[318]; /* ('is_string', 'is_text') */
    cpy_r_r25 = CPyStatics[57]; /* 'faster_eth_utils.types' */
    cpy_r_r26 = CPyStatic_hexadecimal___globals;
    cpy_r_r27 = CPyImport_ImportFromMany(cpy_r_r25, cpy_r_r24, cpy_r_r24, cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/hexadecimal.py", "<module>", 15, CPyStatic_hexadecimal___globals);
        goto CPyL11;
    }
    CPyModule_faster_eth_utils___types = cpy_r_r27;
    CPy_INCREF(CPyModule_faster_eth_utils___types);
    CPy_DECREF(cpy_r_r27);
    cpy_r_r28 = CPyStatics[185]; /* '(0[xX])?[0-9a-fA-F]*' */
    cpy_r_r29 = CPyModule_re;
    cpy_r_r30 = CPyStatics[61]; /* 'compile' */
    cpy_r_r31 = CPyObject_GetAttr(cpy_r_r29, cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/hexadecimal.py", "<module>", 20, CPyStatic_hexadecimal___globals);
        goto CPyL11;
    }
    PyObject *cpy_r_r32[1] = {cpy_r_r28};
    cpy_r_r33 = (PyObject **)&cpy_r_r32;
    cpy_r_r34 = PyObject_Vectorcall(cpy_r_r31, cpy_r_r33, 1, 0);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/hexadecimal.py", "<module>", 20, CPyStatic_hexadecimal___globals);
        goto CPyL11;
    }
    CPyStatic_hexadecimal____HEX_REGEXP = cpy_r_r34;
    CPy_INCREF(CPyStatic_hexadecimal____HEX_REGEXP);
    cpy_r_r35 = CPyStatic_hexadecimal___globals;
    cpy_r_r36 = CPyStatics[186]; /* '_HEX_REGEXP' */
    cpy_r_r37 = CPyDict_SetItem(cpy_r_r35, cpy_r_r36, cpy_r_r34);
    CPy_DECREF(cpy_r_r34);
    cpy_r_r38 = cpy_r_r37 >= 0;
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("faster_eth_utils/hexadecimal.py", "<module>", 20, CPyStatic_hexadecimal___globals);
        goto CPyL11;
    }
    return 1;
CPyL11: ;
    cpy_r_r39 = 2;
    return cpy_r_r39;
}

static PyObject *humanize____consume_leading_zero_units_env_setup(PyTypeObject *type);
PyObject *CPyDef_humanize____consume_leading_zero_units_env(void);

static PyObject *
humanize____consume_leading_zero_units_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_humanize____consume_leading_zero_units_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return humanize____consume_leading_zero_units_env_setup(type);
}

static int
humanize____consume_leading_zero_units_env_traverse(faster_eth_utils___humanize____consume_leading_zero_units_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_units_iter);
    Py_VISIT(self->_type);
    Py_VISIT(self->_value);
    Py_VISIT(self->_traceback);
    Py_VISIT(self->_arg);
    if (CPyTagged_CheckLong(self->___mypyc_next_label__)) {
        Py_VISIT(CPyTagged_LongAsObject(self->___mypyc_next_label__));
    }
    Py_VISIT(self->___mypyc_temp__0);
    Py_VISIT(self->___mypyc_temp__1);
    if (CPyTagged_CheckLong(self->_amount)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_amount));
    }
    Py_VISIT(self->_unit);
    Py_VISIT(self->___mypyc_temp__2);
    Py_VISIT(self->___mypyc_temp__3.f0);
    Py_VISIT(self->___mypyc_temp__3.f1);
    Py_VISIT(self->___mypyc_temp__3.f2);
    return 0;
}

static int
humanize____consume_leading_zero_units_env_clear(faster_eth_utils___humanize____consume_leading_zero_units_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_units_iter);
    Py_CLEAR(self->_type);
    Py_CLEAR(self->_value);
    Py_CLEAR(self->_traceback);
    Py_CLEAR(self->_arg);
    if (CPyTagged_CheckLong(self->___mypyc_next_label__)) {
        CPyTagged __tmp = self->___mypyc_next_label__;
        self->___mypyc_next_label__ = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->___mypyc_temp__0);
    Py_CLEAR(self->___mypyc_temp__1);
    if (CPyTagged_CheckLong(self->_amount)) {
        CPyTagged __tmp = self->_amount;
        self->_amount = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_unit);
    Py_CLEAR(self->___mypyc_temp__2);
    Py_CLEAR(self->___mypyc_temp__3.f0);
    Py_CLEAR(self->___mypyc_temp__3.f1);
    Py_CLEAR(self->___mypyc_temp__3.f2);
    return 0;
}

static void
humanize____consume_leading_zero_units_env_dealloc(faster_eth_utils___humanize____consume_leading_zero_units_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, humanize____consume_leading_zero_units_env_dealloc)
    humanize____consume_leading_zero_units_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem humanize____consume_leading_zero_units_env_vtable[1];
static bool
CPyDef_humanize____consume_leading_zero_units_env_trait_vtable_setup(void)
{
    CPyVTableItem humanize____consume_leading_zero_units_env_vtable_scratch[] = {
        NULL
    };
    memcpy(humanize____consume_leading_zero_units_env_vtable, humanize____consume_leading_zero_units_env_vtable_scratch, sizeof(humanize____consume_leading_zero_units_env_vtable));
    return 1;
}

static PyMethodDef humanize____consume_leading_zero_units_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_humanize____consume_leading_zero_units_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "_consume_leading_zero_units_env",
    .tp_new = humanize____consume_leading_zero_units_env_new,
    .tp_dealloc = (destructor)humanize____consume_leading_zero_units_env_dealloc,
    .tp_traverse = (traverseproc)humanize____consume_leading_zero_units_env_traverse,
    .tp_clear = (inquiry)humanize____consume_leading_zero_units_env_clear,
    .tp_methods = humanize____consume_leading_zero_units_env_methods,
    .tp_basicsize = sizeof(faster_eth_utils___humanize____consume_leading_zero_units_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_humanize____consume_leading_zero_units_env_template = &CPyType_humanize____consume_leading_zero_units_env_template_;

static PyObject *
humanize____consume_leading_zero_units_env_setup(PyTypeObject *type)
{
    faster_eth_utils___humanize____consume_leading_zero_units_envObject *self;
    self = (faster_eth_utils___humanize____consume_leading_zero_units_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = humanize____consume_leading_zero_units_env_vtable;
    self->___mypyc_next_label__ = CPY_INT_TAG;
    self->_amount = CPY_INT_TAG;
    self->___mypyc_temp__3 = (tuple_T3OOO) { NULL, NULL, NULL };
    return (PyObject *)self;
}

PyObject *CPyDef_humanize____consume_leading_zero_units_env(void)
{
    PyObject *self = humanize____consume_leading_zero_units_env_setup(CPyType_humanize____consume_leading_zero_units_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *humanize____consume_leading_zero_units_gen_setup(PyTypeObject *type);
PyObject *CPyDef_humanize____consume_leading_zero_units_gen(void);

static PyObject *
humanize____consume_leading_zero_units_gen_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_humanize____consume_leading_zero_units_gen) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return humanize____consume_leading_zero_units_gen_setup(type);
}

static int
humanize____consume_leading_zero_units_gen_traverse(faster_eth_utils___humanize____consume_leading_zero_units_genObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    return 0;
}

static int
humanize____consume_leading_zero_units_gen_clear(faster_eth_utils___humanize____consume_leading_zero_units_genObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    return 0;
}

static void
humanize____consume_leading_zero_units_gen_dealloc(faster_eth_utils___humanize____consume_leading_zero_units_genObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, humanize____consume_leading_zero_units_gen_dealloc)
    humanize____consume_leading_zero_units_gen_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem humanize____consume_leading_zero_units_gen_vtable[6];
static bool
CPyDef_humanize____consume_leading_zero_units_gen_trait_vtable_setup(void)
{
    CPyVTableItem humanize____consume_leading_zero_units_gen_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_humanize____consume_leading_zero_units_gen_____mypyc_generator_helper__,
        (CPyVTableItem)CPyDef_humanize____consume_leading_zero_units_gen_____next__,
        (CPyVTableItem)CPyDef_humanize____consume_leading_zero_units_gen___send,
        (CPyVTableItem)CPyDef_humanize____consume_leading_zero_units_gen_____iter__,
        (CPyVTableItem)CPyDef_humanize____consume_leading_zero_units_gen___throw,
        (CPyVTableItem)CPyDef_humanize____consume_leading_zero_units_gen___close,
    };
    memcpy(humanize____consume_leading_zero_units_gen_vtable, humanize____consume_leading_zero_units_gen_vtable_scratch, sizeof(humanize____consume_leading_zero_units_gen_vtable));
    return 1;
}

static PyMethodDef humanize____consume_leading_zero_units_gen_methods[] = {
    {"__mypyc_generator_helper__",
     (PyCFunction)CPyPy_humanize____consume_leading_zero_units_gen_____mypyc_generator_helper__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__next__",
     (PyCFunction)CPyPy_humanize____consume_leading_zero_units_gen_____next__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"send",
     (PyCFunction)CPyPy_humanize____consume_leading_zero_units_gen___send,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__iter__",
     (PyCFunction)CPyPy_humanize____consume_leading_zero_units_gen_____iter__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"throw",
     (PyCFunction)CPyPy_humanize____consume_leading_zero_units_gen___throw,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"close",
     (PyCFunction)CPyPy_humanize____consume_leading_zero_units_gen___close,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_humanize____consume_leading_zero_units_gen_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "_consume_leading_zero_units_gen",
    .tp_new = humanize____consume_leading_zero_units_gen_new,
    .tp_dealloc = (destructor)humanize____consume_leading_zero_units_gen_dealloc,
    .tp_traverse = (traverseproc)humanize____consume_leading_zero_units_gen_traverse,
    .tp_clear = (inquiry)humanize____consume_leading_zero_units_gen_clear,
    .tp_methods = humanize____consume_leading_zero_units_gen_methods,
    .tp_iter = CPyDef_humanize____consume_leading_zero_units_gen_____iter__,
    .tp_iternext = CPyDef_humanize____consume_leading_zero_units_gen_____next__,
    .tp_basicsize = sizeof(faster_eth_utils___humanize____consume_leading_zero_units_genObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_humanize____consume_leading_zero_units_gen_template = &CPyType_humanize____consume_leading_zero_units_gen_template_;

static PyObject *
humanize____consume_leading_zero_units_gen_setup(PyTypeObject *type)
{
    faster_eth_utils___humanize____consume_leading_zero_units_genObject *self;
    self = (faster_eth_utils___humanize____consume_leading_zero_units_genObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = humanize____consume_leading_zero_units_gen_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_humanize____consume_leading_zero_units_gen(void)
{
    PyObject *self = humanize____consume_leading_zero_units_gen_setup(CPyType_humanize____consume_leading_zero_units_gen);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *humanize____humanize_seconds_env_setup(PyTypeObject *type);
PyObject *CPyDef_humanize____humanize_seconds_env(void);

static PyObject *
humanize____humanize_seconds_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_humanize____humanize_seconds_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return humanize____humanize_seconds_env_setup(type);
}

static int
humanize____humanize_seconds_env_traverse(faster_eth_utils___humanize____humanize_seconds_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    if (CPyTagged_CheckLong(self->_seconds)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_seconds));
    }
    Py_VISIT(self->_type);
    Py_VISIT(self->_value);
    Py_VISIT(self->_traceback);
    Py_VISIT(self->_arg);
    if (CPyTagged_CheckLong(self->___mypyc_next_label__)) {
        Py_VISIT(CPyTagged_LongAsObject(self->___mypyc_next_label__));
    }
    if (CPyTagged_CheckLong(self->_remainder)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_remainder));
    }
    if (CPyTagged_CheckLong(self->___mypyc_temp__4.f0.f0)) {
        Py_VISIT(CPyTagged_LongAsObject(self->___mypyc_temp__4.f0.f0));
    }
    Py_VISIT(self->___mypyc_temp__4.f0.f1);
    if (CPyTagged_CheckLong(self->___mypyc_temp__4.f1.f0)) {
        Py_VISIT(CPyTagged_LongAsObject(self->___mypyc_temp__4.f1.f0));
    }
    Py_VISIT(self->___mypyc_temp__4.f1.f1);
    if (CPyTagged_CheckLong(self->___mypyc_temp__4.f2.f0)) {
        Py_VISIT(CPyTagged_LongAsObject(self->___mypyc_temp__4.f2.f0));
    }
    Py_VISIT(self->___mypyc_temp__4.f2.f1);
    if (CPyTagged_CheckLong(self->___mypyc_temp__4.f3.f0)) {
        Py_VISIT(CPyTagged_LongAsObject(self->___mypyc_temp__4.f3.f0));
    }
    Py_VISIT(self->___mypyc_temp__4.f3.f1);
    if (CPyTagged_CheckLong(self->___mypyc_temp__4.f4.f0)) {
        Py_VISIT(CPyTagged_LongAsObject(self->___mypyc_temp__4.f4.f0));
    }
    Py_VISIT(self->___mypyc_temp__4.f4.f1);
    if (CPyTagged_CheckLong(self->___mypyc_temp__4.f5.f0)) {
        Py_VISIT(CPyTagged_LongAsObject(self->___mypyc_temp__4.f5.f0));
    }
    Py_VISIT(self->___mypyc_temp__4.f5.f1);
    if (CPyTagged_CheckLong(self->___mypyc_temp__4.f6.f0)) {
        Py_VISIT(CPyTagged_LongAsObject(self->___mypyc_temp__4.f6.f0));
    }
    Py_VISIT(self->___mypyc_temp__4.f6.f1);
    Py_VISIT(self->___mypyc_temp__5);
    if (CPyTagged_CheckLong(self->_duration)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_duration));
    }
    Py_VISIT(self->_unit);
    if (CPyTagged_CheckLong(self->_num)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_num));
    }
    return 0;
}

static int
humanize____humanize_seconds_env_clear(faster_eth_utils___humanize____humanize_seconds_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    if (CPyTagged_CheckLong(self->_seconds)) {
        CPyTagged __tmp = self->_seconds;
        self->_seconds = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_type);
    Py_CLEAR(self->_value);
    Py_CLEAR(self->_traceback);
    Py_CLEAR(self->_arg);
    if (CPyTagged_CheckLong(self->___mypyc_next_label__)) {
        CPyTagged __tmp = self->___mypyc_next_label__;
        self->___mypyc_next_label__ = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    if (CPyTagged_CheckLong(self->_remainder)) {
        CPyTagged __tmp = self->_remainder;
        self->_remainder = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    if (CPyTagged_CheckLong(self->___mypyc_temp__4.f0.f0)) {
        CPyTagged __tmp = self->___mypyc_temp__4.f0.f0;
        self->___mypyc_temp__4.f0.f0 = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->___mypyc_temp__4.f0.f1);
    if (CPyTagged_CheckLong(self->___mypyc_temp__4.f1.f0)) {
        CPyTagged __tmp = self->___mypyc_temp__4.f1.f0;
        self->___mypyc_temp__4.f1.f0 = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->___mypyc_temp__4.f1.f1);
    if (CPyTagged_CheckLong(self->___mypyc_temp__4.f2.f0)) {
        CPyTagged __tmp = self->___mypyc_temp__4.f2.f0;
        self->___mypyc_temp__4.f2.f0 = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->___mypyc_temp__4.f2.f1);
    if (CPyTagged_CheckLong(self->___mypyc_temp__4.f3.f0)) {
        CPyTagged __tmp = self->___mypyc_temp__4.f3.f0;
        self->___mypyc_temp__4.f3.f0 = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->___mypyc_temp__4.f3.f1);
    if (CPyTagged_CheckLong(self->___mypyc_temp__4.f4.f0)) {
        CPyTagged __tmp = self->___mypyc_temp__4.f4.f0;
        self->___mypyc_temp__4.f4.f0 = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->___mypyc_temp__4.f4.f1);
    if (CPyTagged_CheckLong(self->___mypyc_temp__4.f5.f0)) {
        CPyTagged __tmp = self->___mypyc_temp__4.f5.f0;
        self->___mypyc_temp__4.f5.f0 = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->___mypyc_temp__4.f5.f1);
    if (CPyTagged_CheckLong(self->___mypyc_temp__4.f6.f0)) {
        CPyTagged __tmp = self->___mypyc_temp__4.f6.f0;
        self->___mypyc_temp__4.f6.f0 = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->___mypyc_temp__4.f6.f1);
    Py_CLEAR(self->___mypyc_temp__5);
    if (CPyTagged_CheckLong(self->_duration)) {
        CPyTagged __tmp = self->_duration;
        self->_duration = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_unit);
    if (CPyTagged_CheckLong(self->_num)) {
        CPyTagged __tmp = self->_num;
        self->_num = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    return 0;
}

static void
humanize____humanize_seconds_env_dealloc(faster_eth_utils___humanize____humanize_seconds_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, humanize____humanize_seconds_env_dealloc)
    humanize____humanize_seconds_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem humanize____humanize_seconds_env_vtable[1];
static bool
CPyDef_humanize____humanize_seconds_env_trait_vtable_setup(void)
{
    CPyVTableItem humanize____humanize_seconds_env_vtable_scratch[] = {
        NULL
    };
    memcpy(humanize____humanize_seconds_env_vtable, humanize____humanize_seconds_env_vtable_scratch, sizeof(humanize____humanize_seconds_env_vtable));
    return 1;
}

static PyMethodDef humanize____humanize_seconds_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_humanize____humanize_seconds_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "_humanize_seconds_env",
    .tp_new = humanize____humanize_seconds_env_new,
    .tp_dealloc = (destructor)humanize____humanize_seconds_env_dealloc,
    .tp_traverse = (traverseproc)humanize____humanize_seconds_env_traverse,
    .tp_clear = (inquiry)humanize____humanize_seconds_env_clear,
    .tp_methods = humanize____humanize_seconds_env_methods,
    .tp_basicsize = sizeof(faster_eth_utils___humanize____humanize_seconds_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_humanize____humanize_seconds_env_template = &CPyType_humanize____humanize_seconds_env_template_;

static PyObject *
humanize____humanize_seconds_env_setup(PyTypeObject *type)
{
    faster_eth_utils___humanize____humanize_seconds_envObject *self;
    self = (faster_eth_utils___humanize____humanize_seconds_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = humanize____humanize_seconds_env_vtable;
    self->_seconds = CPY_INT_TAG;
    self->___mypyc_next_label__ = CPY_INT_TAG;
    self->_remainder = CPY_INT_TAG;
    self->___mypyc_temp__4 = (tuple_T7T2IOT2IOT2IOT2IOT2IOT2IOT2IO) { { CPY_INT_TAG, NULL }, { CPY_INT_TAG, NULL }, { CPY_INT_TAG, NULL }, { CPY_INT_TAG, NULL }, { CPY_INT_TAG, NULL }, { CPY_INT_TAG, NULL }, { CPY_INT_TAG, NULL } };
    self->_duration = CPY_INT_TAG;
    self->_num = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_humanize____humanize_seconds_env(void)
{
    PyObject *self = humanize____humanize_seconds_env_setup(CPyType_humanize____humanize_seconds_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *humanize____humanize_seconds_gen_setup(PyTypeObject *type);
PyObject *CPyDef_humanize____humanize_seconds_gen(void);

static PyObject *
humanize____humanize_seconds_gen_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_humanize____humanize_seconds_gen) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return humanize____humanize_seconds_gen_setup(type);
}

static int
humanize____humanize_seconds_gen_traverse(faster_eth_utils___humanize____humanize_seconds_genObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    return 0;
}

static int
humanize____humanize_seconds_gen_clear(faster_eth_utils___humanize____humanize_seconds_genObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    return 0;
}

static void
humanize____humanize_seconds_gen_dealloc(faster_eth_utils___humanize____humanize_seconds_genObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, humanize____humanize_seconds_gen_dealloc)
    humanize____humanize_seconds_gen_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem humanize____humanize_seconds_gen_vtable[6];
static bool
CPyDef_humanize____humanize_seconds_gen_trait_vtable_setup(void)
{
    CPyVTableItem humanize____humanize_seconds_gen_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_humanize____humanize_seconds_gen_____mypyc_generator_helper__,
        (CPyVTableItem)CPyDef_humanize____humanize_seconds_gen_____next__,
        (CPyVTableItem)CPyDef_humanize____humanize_seconds_gen___send,
        (CPyVTableItem)CPyDef_humanize____humanize_seconds_gen_____iter__,
        (CPyVTableItem)CPyDef_humanize____humanize_seconds_gen___throw,
        (CPyVTableItem)CPyDef_humanize____humanize_seconds_gen___close,
    };
    memcpy(humanize____humanize_seconds_gen_vtable, humanize____humanize_seconds_gen_vtable_scratch, sizeof(humanize____humanize_seconds_gen_vtable));
    return 1;
}

static PyMethodDef humanize____humanize_seconds_gen_methods[] = {
    {"__mypyc_generator_helper__",
     (PyCFunction)CPyPy_humanize____humanize_seconds_gen_____mypyc_generator_helper__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__next__",
     (PyCFunction)CPyPy_humanize____humanize_seconds_gen_____next__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"send",
     (PyCFunction)CPyPy_humanize____humanize_seconds_gen___send,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__iter__",
     (PyCFunction)CPyPy_humanize____humanize_seconds_gen_____iter__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"throw",
     (PyCFunction)CPyPy_humanize____humanize_seconds_gen___throw,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"close",
     (PyCFunction)CPyPy_humanize____humanize_seconds_gen___close,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_humanize____humanize_seconds_gen_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "_humanize_seconds_gen",
    .tp_new = humanize____humanize_seconds_gen_new,
    .tp_dealloc = (destructor)humanize____humanize_seconds_gen_dealloc,
    .tp_traverse = (traverseproc)humanize____humanize_seconds_gen_traverse,
    .tp_clear = (inquiry)humanize____humanize_seconds_gen_clear,
    .tp_methods = humanize____humanize_seconds_gen_methods,
    .tp_iter = CPyDef_humanize____humanize_seconds_gen_____iter__,
    .tp_iternext = CPyDef_humanize____humanize_seconds_gen_____next__,
    .tp_basicsize = sizeof(faster_eth_utils___humanize____humanize_seconds_genObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_humanize____humanize_seconds_gen_template = &CPyType_humanize____humanize_seconds_gen_template_;

static PyObject *
humanize____humanize_seconds_gen_setup(PyTypeObject *type)
{
    faster_eth_utils___humanize____humanize_seconds_genObject *self;
    self = (faster_eth_utils___humanize____humanize_seconds_genObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = humanize____humanize_seconds_gen_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_humanize____humanize_seconds_gen(void)
{
    PyObject *self = humanize____humanize_seconds_gen_setup(CPyType_humanize____humanize_seconds_gen);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *humanize____find_breakpoints_env_setup(PyTypeObject *type);
PyObject *CPyDef_humanize____find_breakpoints_env(void);

static PyObject *
humanize____find_breakpoints_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_humanize____find_breakpoints_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return humanize____find_breakpoints_env_setup(type);
}

static int
humanize____find_breakpoints_env_traverse(faster_eth_utils___humanize____find_breakpoints_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_values);
    Py_VISIT(self->_type);
    Py_VISIT(self->_value);
    Py_VISIT(self->_traceback);
    Py_VISIT(self->_arg);
    if (CPyTagged_CheckLong(self->___mypyc_next_label__)) {
        Py_VISIT(CPyTagged_LongAsObject(self->___mypyc_next_label__));
    }
    Py_VISIT(self->___mypyc_temp__6);
    Py_VISIT(self->___mypyc_temp__7);
    if (CPyTagged_CheckLong(self->_index)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_index));
    }
    Py_VISIT(self->_left);
    Py_VISIT(self->_right);
    return 0;
}

static int
humanize____find_breakpoints_env_clear(faster_eth_utils___humanize____find_breakpoints_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_values);
    Py_CLEAR(self->_type);
    Py_CLEAR(self->_value);
    Py_CLEAR(self->_traceback);
    Py_CLEAR(self->_arg);
    if (CPyTagged_CheckLong(self->___mypyc_next_label__)) {
        CPyTagged __tmp = self->___mypyc_next_label__;
        self->___mypyc_next_label__ = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->___mypyc_temp__6);
    Py_CLEAR(self->___mypyc_temp__7);
    if (CPyTagged_CheckLong(self->_index)) {
        CPyTagged __tmp = self->_index;
        self->_index = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_left);
    Py_CLEAR(self->_right);
    return 0;
}

static void
humanize____find_breakpoints_env_dealloc(faster_eth_utils___humanize____find_breakpoints_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, humanize____find_breakpoints_env_dealloc)
    humanize____find_breakpoints_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem humanize____find_breakpoints_env_vtable[1];
static bool
CPyDef_humanize____find_breakpoints_env_trait_vtable_setup(void)
{
    CPyVTableItem humanize____find_breakpoints_env_vtable_scratch[] = {
        NULL
    };
    memcpy(humanize____find_breakpoints_env_vtable, humanize____find_breakpoints_env_vtable_scratch, sizeof(humanize____find_breakpoints_env_vtable));
    return 1;
}

static PyMethodDef humanize____find_breakpoints_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_humanize____find_breakpoints_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "_find_breakpoints_env",
    .tp_new = humanize____find_breakpoints_env_new,
    .tp_dealloc = (destructor)humanize____find_breakpoints_env_dealloc,
    .tp_traverse = (traverseproc)humanize____find_breakpoints_env_traverse,
    .tp_clear = (inquiry)humanize____find_breakpoints_env_clear,
    .tp_methods = humanize____find_breakpoints_env_methods,
    .tp_basicsize = sizeof(faster_eth_utils___humanize____find_breakpoints_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_humanize____find_breakpoints_env_template = &CPyType_humanize____find_breakpoints_env_template_;

static PyObject *
humanize____find_breakpoints_env_setup(PyTypeObject *type)
{
    faster_eth_utils___humanize____find_breakpoints_envObject *self;
    self = (faster_eth_utils___humanize____find_breakpoints_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = humanize____find_breakpoints_env_vtable;
    self->___mypyc_next_label__ = CPY_INT_TAG;
    self->_index = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_humanize____find_breakpoints_env(void)
{
    PyObject *self = humanize____find_breakpoints_env_setup(CPyType_humanize____find_breakpoints_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *humanize____find_breakpoints_gen_setup(PyTypeObject *type);
PyObject *CPyDef_humanize____find_breakpoints_gen(void);

static PyObject *
humanize____find_breakpoints_gen_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_humanize____find_breakpoints_gen) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return humanize____find_breakpoints_gen_setup(type);
}

static int
humanize____find_breakpoints_gen_traverse(faster_eth_utils___humanize____find_breakpoints_genObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    return 0;
}

static int
humanize____find_breakpoints_gen_clear(faster_eth_utils___humanize____find_breakpoints_genObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    return 0;
}

static void
humanize____find_breakpoints_gen_dealloc(faster_eth_utils___humanize____find_breakpoints_genObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, humanize____find_breakpoints_gen_dealloc)
    humanize____find_breakpoints_gen_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem humanize____find_breakpoints_gen_vtable[6];
static bool
CPyDef_humanize____find_breakpoints_gen_trait_vtable_setup(void)
{
    CPyVTableItem humanize____find_breakpoints_gen_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_humanize____find_breakpoints_gen_____mypyc_generator_helper__,
        (CPyVTableItem)CPyDef_humanize____find_breakpoints_gen_____next__,
        (CPyVTableItem)CPyDef_humanize____find_breakpoints_gen___send,
        (CPyVTableItem)CPyDef_humanize____find_breakpoints_gen_____iter__,
        (CPyVTableItem)CPyDef_humanize____find_breakpoints_gen___throw,
        (CPyVTableItem)CPyDef_humanize____find_breakpoints_gen___close,
    };
    memcpy(humanize____find_breakpoints_gen_vtable, humanize____find_breakpoints_gen_vtable_scratch, sizeof(humanize____find_breakpoints_gen_vtable));
    return 1;
}

static PyMethodDef humanize____find_breakpoints_gen_methods[] = {
    {"__mypyc_generator_helper__",
     (PyCFunction)CPyPy_humanize____find_breakpoints_gen_____mypyc_generator_helper__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__next__",
     (PyCFunction)CPyPy_humanize____find_breakpoints_gen_____next__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"send",
     (PyCFunction)CPyPy_humanize____find_breakpoints_gen___send,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__iter__",
     (PyCFunction)CPyPy_humanize____find_breakpoints_gen_____iter__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"throw",
     (PyCFunction)CPyPy_humanize____find_breakpoints_gen___throw,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"close",
     (PyCFunction)CPyPy_humanize____find_breakpoints_gen___close,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_humanize____find_breakpoints_gen_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "_find_breakpoints_gen",
    .tp_new = humanize____find_breakpoints_gen_new,
    .tp_dealloc = (destructor)humanize____find_breakpoints_gen_dealloc,
    .tp_traverse = (traverseproc)humanize____find_breakpoints_gen_traverse,
    .tp_clear = (inquiry)humanize____find_breakpoints_gen_clear,
    .tp_methods = humanize____find_breakpoints_gen_methods,
    .tp_iter = CPyDef_humanize____find_breakpoints_gen_____iter__,
    .tp_iternext = CPyDef_humanize____find_breakpoints_gen_____next__,
    .tp_basicsize = sizeof(faster_eth_utils___humanize____find_breakpoints_genObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_humanize____find_breakpoints_gen_template = &CPyType_humanize____find_breakpoints_gen_template_;

static PyObject *
humanize____find_breakpoints_gen_setup(PyTypeObject *type)
{
    faster_eth_utils___humanize____find_breakpoints_genObject *self;
    self = (faster_eth_utils___humanize____find_breakpoints_genObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = humanize____find_breakpoints_gen_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_humanize____find_breakpoints_gen(void)
{
    PyObject *self = humanize____find_breakpoints_gen_setup(CPyType_humanize____find_breakpoints_gen);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *humanize____extract_integer_ranges_env_setup(PyTypeObject *type);
PyObject *CPyDef_humanize____extract_integer_ranges_env(void);

static PyObject *
humanize____extract_integer_ranges_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_humanize____extract_integer_ranges_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return humanize____extract_integer_ranges_env_setup(type);
}

static int
humanize____extract_integer_ranges_env_traverse(faster_eth_utils___humanize____extract_integer_ranges_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_values);
    Py_VISIT(self->_type);
    Py_VISIT(self->_value);
    Py_VISIT(self->_traceback);
    Py_VISIT(self->_arg);
    if (CPyTagged_CheckLong(self->___mypyc_next_label__)) {
        Py_VISIT(CPyTagged_LongAsObject(self->___mypyc_next_label__));
    }
    Py_VISIT(self->___mypyc_temp__8);
    Py_VISIT(self->___mypyc_temp__9);
    Py_VISIT(self->_left);
    Py_VISIT(self->_right);
    Py_VISIT(self->_chunk);
    return 0;
}

static int
humanize____extract_integer_ranges_env_clear(faster_eth_utils___humanize____extract_integer_ranges_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_values);
    Py_CLEAR(self->_type);
    Py_CLEAR(self->_value);
    Py_CLEAR(self->_traceback);
    Py_CLEAR(self->_arg);
    if (CPyTagged_CheckLong(self->___mypyc_next_label__)) {
        CPyTagged __tmp = self->___mypyc_next_label__;
        self->___mypyc_next_label__ = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->___mypyc_temp__8);
    Py_CLEAR(self->___mypyc_temp__9);
    Py_CLEAR(self->_left);
    Py_CLEAR(self->_right);
    Py_CLEAR(self->_chunk);
    return 0;
}

static void
humanize____extract_integer_ranges_env_dealloc(faster_eth_utils___humanize____extract_integer_ranges_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, humanize____extract_integer_ranges_env_dealloc)
    humanize____extract_integer_ranges_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem humanize____extract_integer_ranges_env_vtable[1];
static bool
CPyDef_humanize____extract_integer_ranges_env_trait_vtable_setup(void)
{
    CPyVTableItem humanize____extract_integer_ranges_env_vtable_scratch[] = {
        NULL
    };
    memcpy(humanize____extract_integer_ranges_env_vtable, humanize____extract_integer_ranges_env_vtable_scratch, sizeof(humanize____extract_integer_ranges_env_vtable));
    return 1;
}

static PyMethodDef humanize____extract_integer_ranges_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_humanize____extract_integer_ranges_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "_extract_integer_ranges_env",
    .tp_new = humanize____extract_integer_ranges_env_new,
    .tp_dealloc = (destructor)humanize____extract_integer_ranges_env_dealloc,
    .tp_traverse = (traverseproc)humanize____extract_integer_ranges_env_traverse,
    .tp_clear = (inquiry)humanize____extract_integer_ranges_env_clear,
    .tp_methods = humanize____extract_integer_ranges_env_methods,
    .tp_basicsize = sizeof(faster_eth_utils___humanize____extract_integer_ranges_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_humanize____extract_integer_ranges_env_template = &CPyType_humanize____extract_integer_ranges_env_template_;

static PyObject *
humanize____extract_integer_ranges_env_setup(PyTypeObject *type)
{
    faster_eth_utils___humanize____extract_integer_ranges_envObject *self;
    self = (faster_eth_utils___humanize____extract_integer_ranges_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = humanize____extract_integer_ranges_env_vtable;
    self->___mypyc_next_label__ = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_humanize____extract_integer_ranges_env(void)
{
    PyObject *self = humanize____extract_integer_ranges_env_setup(CPyType_humanize____extract_integer_ranges_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *humanize____extract_integer_ranges_gen_setup(PyTypeObject *type);
PyObject *CPyDef_humanize____extract_integer_ranges_gen(void);

static PyObject *
humanize____extract_integer_ranges_gen_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_humanize____extract_integer_ranges_gen) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return humanize____extract_integer_ranges_gen_setup(type);
}

static int
humanize____extract_integer_ranges_gen_traverse(faster_eth_utils___humanize____extract_integer_ranges_genObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    return 0;
}

static int
humanize____extract_integer_ranges_gen_clear(faster_eth_utils___humanize____extract_integer_ranges_genObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    return 0;
}

static void
humanize____extract_integer_ranges_gen_dealloc(faster_eth_utils___humanize____extract_integer_ranges_genObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, humanize____extract_integer_ranges_gen_dealloc)
    humanize____extract_integer_ranges_gen_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem humanize____extract_integer_ranges_gen_vtable[6];
static bool
CPyDef_humanize____extract_integer_ranges_gen_trait_vtable_setup(void)
{
    CPyVTableItem humanize____extract_integer_ranges_gen_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_humanize____extract_integer_ranges_gen_____mypyc_generator_helper__,
        (CPyVTableItem)CPyDef_humanize____extract_integer_ranges_gen_____next__,
        (CPyVTableItem)CPyDef_humanize____extract_integer_ranges_gen___send,
        (CPyVTableItem)CPyDef_humanize____extract_integer_ranges_gen_____iter__,
        (CPyVTableItem)CPyDef_humanize____extract_integer_ranges_gen___throw,
        (CPyVTableItem)CPyDef_humanize____extract_integer_ranges_gen___close,
    };
    memcpy(humanize____extract_integer_ranges_gen_vtable, humanize____extract_integer_ranges_gen_vtable_scratch, sizeof(humanize____extract_integer_ranges_gen_vtable));
    return 1;
}

static PyMethodDef humanize____extract_integer_ranges_gen_methods[] = {
    {"__mypyc_generator_helper__",
     (PyCFunction)CPyPy_humanize____extract_integer_ranges_gen_____mypyc_generator_helper__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__next__",
     (PyCFunction)CPyPy_humanize____extract_integer_ranges_gen_____next__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"send",
     (PyCFunction)CPyPy_humanize____extract_integer_ranges_gen___send,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__iter__",
     (PyCFunction)CPyPy_humanize____extract_integer_ranges_gen_____iter__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"throw",
     (PyCFunction)CPyPy_humanize____extract_integer_ranges_gen___throw,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"close",
     (PyCFunction)CPyPy_humanize____extract_integer_ranges_gen___close,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_humanize____extract_integer_ranges_gen_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "_extract_integer_ranges_gen",
    .tp_new = humanize____extract_integer_ranges_gen_new,
    .tp_dealloc = (destructor)humanize____extract_integer_ranges_gen_dealloc,
    .tp_traverse = (traverseproc)humanize____extract_integer_ranges_gen_traverse,
    .tp_clear = (inquiry)humanize____extract_integer_ranges_gen_clear,
    .tp_methods = humanize____extract_integer_ranges_gen_methods,
    .tp_iter = CPyDef_humanize____extract_integer_ranges_gen_____iter__,
    .tp_iternext = CPyDef_humanize____extract_integer_ranges_gen_____next__,
    .tp_basicsize = sizeof(faster_eth_utils___humanize____extract_integer_ranges_genObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_humanize____extract_integer_ranges_gen_template = &CPyType_humanize____extract_integer_ranges_gen_template_;

static PyObject *
humanize____extract_integer_ranges_gen_setup(PyTypeObject *type)
{
    faster_eth_utils___humanize____extract_integer_ranges_genObject *self;
    self = (faster_eth_utils___humanize____extract_integer_ranges_genObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = humanize____extract_integer_ranges_gen_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_humanize____extract_integer_ranges_gen(void)
{
    PyObject *self = humanize____extract_integer_ranges_gen_setup(CPyType_humanize____extract_integer_ranges_gen);
    if (self == NULL)
        return NULL;
    return self;
}

static PyMethodDef humanizemodule_methods[] = {
    {"humanize_seconds", (PyCFunction)CPyPy_humanize___humanize_seconds, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"_consume_leading_zero_units", (PyCFunction)CPyPy_humanize____consume_leading_zero_units, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"_humanize_seconds", (PyCFunction)CPyPy_humanize____humanize_seconds, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"humanize_bytes", (PyCFunction)CPyPy_humanize___humanize_bytes, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"humanize_hash", (PyCFunction)CPyPy_humanize___humanize_hash, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"humanize_ipfs_uri", (PyCFunction)CPyPy_humanize___humanize_ipfs_uri, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_ipfs_uri", (PyCFunction)CPyPy_humanize___is_ipfs_uri, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"_is_CIDv0_ipfs_hash", (PyCFunction)CPyPy_humanize____is_CIDv0_ipfs_hash, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"_find_breakpoints", (PyCFunction)CPyPy_humanize____find_breakpoints, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"_extract_integer_ranges", (PyCFunction)CPyPy_humanize____extract_integer_ranges, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"_humanize_range", (PyCFunction)CPyPy_humanize____humanize_range, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"humanize_integer_sequence", (PyCFunction)CPyPy_humanize___humanize_integer_sequence, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"humanize_wei", (PyCFunction)CPyPy_humanize___humanize_wei, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef humanizemodule = {
    PyModuleDef_HEAD_INIT,
    "faster_eth_utils.humanize",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    humanizemodule_methods
};

PyObject *CPyInit_faster_eth_utils___humanize(void)
{
    PyObject* modname = NULL;
    if (CPyModule_faster_eth_utils___humanize_internal) {
        Py_INCREF(CPyModule_faster_eth_utils___humanize_internal);
        return CPyModule_faster_eth_utils___humanize_internal;
    }
    CPyModule_faster_eth_utils___humanize_internal = PyModule_Create(&humanizemodule);
    if (unlikely(CPyModule_faster_eth_utils___humanize_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_faster_eth_utils___humanize_internal, "__name__");
    CPyStatic_humanize___globals = PyModule_GetDict(CPyModule_faster_eth_utils___humanize_internal);
    if (unlikely(CPyStatic_humanize___globals == NULL))
        goto fail;
    CPyType_humanize____consume_leading_zero_units_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_humanize____consume_leading_zero_units_env_template, NULL, modname);
    if (unlikely(!CPyType_humanize____consume_leading_zero_units_env))
        goto fail;
    CPyType_humanize____consume_leading_zero_units_gen = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_humanize____consume_leading_zero_units_gen_template, NULL, modname);
    if (unlikely(!CPyType_humanize____consume_leading_zero_units_gen))
        goto fail;
    CPyType_humanize____humanize_seconds_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_humanize____humanize_seconds_env_template, NULL, modname);
    if (unlikely(!CPyType_humanize____humanize_seconds_env))
        goto fail;
    CPyType_humanize____humanize_seconds_gen = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_humanize____humanize_seconds_gen_template, NULL, modname);
    if (unlikely(!CPyType_humanize____humanize_seconds_gen))
        goto fail;
    CPyType_humanize____find_breakpoints_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_humanize____find_breakpoints_env_template, NULL, modname);
    if (unlikely(!CPyType_humanize____find_breakpoints_env))
        goto fail;
    CPyType_humanize____find_breakpoints_gen = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_humanize____find_breakpoints_gen_template, NULL, modname);
    if (unlikely(!CPyType_humanize____find_breakpoints_gen))
        goto fail;
    CPyType_humanize____extract_integer_ranges_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_humanize____extract_integer_ranges_env_template, NULL, modname);
    if (unlikely(!CPyType_humanize____extract_integer_ranges_env))
        goto fail;
    CPyType_humanize____extract_integer_ranges_gen = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_humanize____extract_integer_ranges_gen_template, NULL, modname);
    if (unlikely(!CPyType_humanize____extract_integer_ranges_gen))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_humanize_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_faster_eth_utils___humanize_internal;
    fail:
    Py_CLEAR(CPyModule_faster_eth_utils___humanize_internal);
    Py_CLEAR(modname);
    CPyTagged_XDECREF(CPyStatic_humanize___UNITS.f0.f0);
    CPy_XDECREF(CPyStatic_humanize___UNITS.f0.f1);
    CPyTagged_XDECREF(CPyStatic_humanize___UNITS.f1.f0);
    CPy_XDECREF(CPyStatic_humanize___UNITS.f1.f1);
    CPyTagged_XDECREF(CPyStatic_humanize___UNITS.f2.f0);
    CPy_XDECREF(CPyStatic_humanize___UNITS.f2.f1);
    CPyTagged_XDECREF(CPyStatic_humanize___UNITS.f3.f0);
    CPy_XDECREF(CPyStatic_humanize___UNITS.f3.f1);
    CPyTagged_XDECREF(CPyStatic_humanize___UNITS.f4.f0);
    CPy_XDECREF(CPyStatic_humanize___UNITS.f4.f1);
    CPyTagged_XDECREF(CPyStatic_humanize___UNITS.f5.f0);
    CPy_XDECREF(CPyStatic_humanize___UNITS.f5.f1);
    CPyTagged_XDECREF(CPyStatic_humanize___UNITS.f6.f0);
    CPy_XDECREF(CPyStatic_humanize___UNITS.f6.f1);
    CPyStatic_humanize___UNITS = (tuple_T7T2IOT2IOT2IOT2IOT2IOT2IOT2IO) { { CPY_INT_TAG, NULL }, { CPY_INT_TAG, NULL }, { CPY_INT_TAG, NULL }, { CPY_INT_TAG, NULL }, { CPY_INT_TAG, NULL }, { CPY_INT_TAG, NULL }, { CPY_INT_TAG, NULL } };
    Py_CLEAR(CPyType_humanize____consume_leading_zero_units_env);
    Py_CLEAR(CPyType_humanize____consume_leading_zero_units_gen);
    Py_CLEAR(CPyType_humanize____humanize_seconds_env);
    Py_CLEAR(CPyType_humanize____humanize_seconds_gen);
    Py_CLEAR(CPyType_humanize____find_breakpoints_env);
    Py_CLEAR(CPyType_humanize____find_breakpoints_gen);
    Py_CLEAR(CPyType_humanize____extract_integer_ranges_env);
    Py_CLEAR(CPyType_humanize____extract_integer_ranges_gen);
    return NULL;
}

PyObject *CPyDef_humanize___humanize_seconds(PyObject *cpy_r_seconds) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject **cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyTagged cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject **cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    int32_t cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    cpy_r_r0 = (PyObject *)&PyLong_Type;
    PyObject *cpy_r_r1[1] = {cpy_r_seconds};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_Vectorcall(cpy_r_r0, cpy_r_r2, 1, 0);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "humanize_seconds", 30, CPyStatic_humanize___globals);
        goto CPyL30;
    }
    if (likely(PyLong_Check(cpy_r_r3)))
        cpy_r_r4 = CPyTagged_FromObject(cpy_r_r3);
    else {
        CPy_TypeError("int", cpy_r_r3); cpy_r_r4 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "humanize_seconds", 30, CPyStatic_humanize___globals);
        goto CPyL30;
    }
    cpy_r_r5 = cpy_r_r4 == 0;
    CPyTagged_DECREF(cpy_r_r4);
    if (!cpy_r_r5) goto CPyL4;
    cpy_r_r6 = CPyStatics[187]; /* '0s' */
    CPy_INCREF(cpy_r_r6);
    return cpy_r_r6;
CPyL4: ;
    cpy_r_r7 = (PyObject *)&PyLong_Type;
    PyObject *cpy_r_r8[1] = {cpy_r_seconds};
    cpy_r_r9 = (PyObject **)&cpy_r_r8;
    cpy_r_r10 = PyObject_Vectorcall(cpy_r_r7, cpy_r_r9, 1, 0);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "humanize_seconds", 33, CPyStatic_humanize___globals);
        goto CPyL30;
    }
    if (likely(PyLong_Check(cpy_r_r10)))
        cpy_r_r11 = CPyTagged_FromObject(cpy_r_r10);
    else {
        CPy_TypeError("int", cpy_r_r10); cpy_r_r11 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "humanize_seconds", 33, CPyStatic_humanize___globals);
        goto CPyL30;
    }
    cpy_r_r12 = CPyDef_humanize____humanize_seconds(cpy_r_r11);
    CPyTagged_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "humanize_seconds", 33, CPyStatic_humanize___globals);
        goto CPyL30;
    }
    cpy_r_r13 = CPyDef_humanize____consume_leading_zero_units(cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "humanize_seconds", 33, CPyStatic_humanize___globals);
        goto CPyL30;
    }
    cpy_r_r14 = CPyStatics[15]; /* '' */
    cpy_r_r15 = PyList_New(0);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "humanize_seconds", 35, CPyStatic_humanize___globals);
        goto CPyL31;
    }
    cpy_r_r16 = CPyStatic_humanize___globals;
    cpy_r_r17 = CPyStatics[188]; /* 'take' */
    cpy_r_r18 = CPyDict_GetItem(cpy_r_r16, cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "humanize_seconds", 35, CPyStatic_humanize___globals);
        goto CPyL32;
    }
    cpy_r_r19 = CPyStatics[271]; /* 3 */
    PyObject *cpy_r_r20[2] = {cpy_r_r19, cpy_r_r13};
    cpy_r_r21 = (PyObject **)&cpy_r_r20;
    cpy_r_r22 = PyObject_Vectorcall(cpy_r_r18, cpy_r_r21, 2, 0);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "humanize_seconds", 35, CPyStatic_humanize___globals);
        goto CPyL32;
    }
    CPy_DECREF(cpy_r_r13);
    cpy_r_r23 = PyObject_GetIter(cpy_r_r22);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "humanize_seconds", 35, CPyStatic_humanize___globals);
        goto CPyL33;
    }
CPyL12: ;
    cpy_r_r24 = PyIter_Next(cpy_r_r23);
    if (cpy_r_r24 == NULL) goto CPyL34;
    cpy_r_r25 = PyObject_GetIter(cpy_r_r24);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "humanize_seconds", 35, CPyStatic_humanize___globals);
        goto CPyL35;
    }
    cpy_r_r26 = PyIter_Next(cpy_r_r25);
    if (cpy_r_r26 == NULL) {
        goto CPyL36;
    } else
        goto CPyL17;
CPyL15: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r27 = 0;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "humanize_seconds", 35, CPyStatic_humanize___globals);
        goto CPyL30;
    }
    CPy_Unreachable();
CPyL17: ;
    cpy_r_r28 = PyIter_Next(cpy_r_r25);
    if (cpy_r_r28 == NULL) {
        goto CPyL37;
    } else
        goto CPyL20;
CPyL18: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r29 = 0;
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "humanize_seconds", 35, CPyStatic_humanize___globals);
        goto CPyL30;
    }
    CPy_Unreachable();
CPyL20: ;
    cpy_r_r30 = PyIter_Next(cpy_r_r25);
    CPy_DECREF(cpy_r_r25);
    if (cpy_r_r30 == NULL) {
        goto CPyL23;
    } else
        goto CPyL38;
CPyL21: ;
    PyErr_SetString(PyExc_ValueError, "too many values to unpack");
    cpy_r_r31 = 0;
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "humanize_seconds", 35, CPyStatic_humanize___globals);
        goto CPyL30;
    }
    CPy_Unreachable();
CPyL23: ;
    cpy_r_r32 = PyObject_Str(cpy_r_r26);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "humanize_seconds", 35, CPyStatic_humanize___globals);
        goto CPyL39;
    }
    cpy_r_r33 = PyObject_Str(cpy_r_r28);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "humanize_seconds", 35, CPyStatic_humanize___globals);
        goto CPyL40;
    }
    cpy_r_r34 = CPyStr_Build(2, cpy_r_r32, cpy_r_r33);
    CPy_DECREF(cpy_r_r32);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "humanize_seconds", 35, CPyStatic_humanize___globals);
        goto CPyL35;
    }
    cpy_r_r35 = PyList_Append(cpy_r_r15, cpy_r_r34);
    CPy_DECREF(cpy_r_r34);
    cpy_r_r36 = cpy_r_r35 >= 0;
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "humanize_seconds", 35, CPyStatic_humanize___globals);
        goto CPyL35;
    } else
        goto CPyL12;
CPyL27: ;
    cpy_r_r37 = CPy_NoErrOccurred();
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "humanize_seconds", 35, CPyStatic_humanize___globals);
        goto CPyL33;
    }
    cpy_r_r38 = PyUnicode_Join(cpy_r_r14, cpy_r_r15);
    CPy_DECREF_NO_IMM(cpy_r_r15);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "humanize_seconds", 35, CPyStatic_humanize___globals);
        goto CPyL30;
    }
    return cpy_r_r38;
CPyL30: ;
    cpy_r_r39 = NULL;
    return cpy_r_r39;
CPyL31: ;
    CPy_DecRef(cpy_r_r13);
    goto CPyL30;
CPyL32: ;
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_r15);
    goto CPyL30;
CPyL33: ;
    CPy_DecRef(cpy_r_r15);
    goto CPyL30;
CPyL34: ;
    CPy_DECREF(cpy_r_r23);
    goto CPyL27;
CPyL35: ;
    CPy_DecRef(cpy_r_r15);
    CPy_DecRef(cpy_r_r23);
    goto CPyL30;
CPyL36: ;
    CPy_DECREF_NO_IMM(cpy_r_r15);
    CPy_DECREF(cpy_r_r23);
    CPy_DECREF(cpy_r_r25);
    goto CPyL15;
CPyL37: ;
    CPy_DECREF_NO_IMM(cpy_r_r15);
    CPy_DECREF(cpy_r_r23);
    CPy_DECREF(cpy_r_r25);
    CPy_DECREF(cpy_r_r26);
    goto CPyL18;
CPyL38: ;
    CPy_DECREF_NO_IMM(cpy_r_r15);
    CPy_DECREF(cpy_r_r23);
    CPy_DECREF(cpy_r_r26);
    CPy_DECREF(cpy_r_r28);
    CPy_DECREF(cpy_r_r30);
    goto CPyL21;
CPyL39: ;
    CPy_DecRef(cpy_r_r15);
    CPy_DecRef(cpy_r_r23);
    CPy_DecRef(cpy_r_r28);
    goto CPyL30;
CPyL40: ;
    CPy_DecRef(cpy_r_r15);
    CPy_DecRef(cpy_r_r23);
    CPy_DecRef(cpy_r_r32);
    goto CPyL30;
}

PyObject *CPyPy_humanize___humanize_seconds(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"seconds", 0};
    static CPyArg_Parser parser = {"O:humanize_seconds", kwlist, 0};
    PyObject *obj_seconds;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_seconds)) {
        return NULL;
    }
    PyObject *arg_seconds;
    if (CPyFloat_Check(obj_seconds))
        arg_seconds = obj_seconds;
    else {
        arg_seconds = NULL;
    }
    if (arg_seconds != NULL) goto __LL47;
    if (PyLong_Check(obj_seconds))
        arg_seconds = obj_seconds;
    else {
        arg_seconds = NULL;
    }
    if (arg_seconds != NULL) goto __LL47;
    CPy_TypeError("union[float, int]", obj_seconds); 
    goto fail;
__LL47: ;
    PyObject *retval = CPyDef_humanize___humanize_seconds(arg_seconds);
    return retval;
fail: ;
    CPy_AddTraceback("faster_eth_utils/humanize.py", "humanize_seconds", 29, CPyStatic_humanize___globals);
    return NULL;
}

PyObject *CPyDef_humanize____consume_leading_zero_units_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    tuple_T2IO cpy_r_r12;
    CPyTagged cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    CPyTagged cpy_r_r17;
    char cpy_r_r18;
    CPyTagged cpy_r_r19;
    PyObject *cpy_r_r20;
    tuple_T2IO cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    tuple_T3OOO cpy_r_r38;
    char cpy_r_r39;
    PyObject **cpy_r_r40;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    tuple_T3OOO cpy_r_r43;
    tuple_T3OOO cpy_r_r44;
    tuple_T3OOO cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    char cpy_r_r52;
    char cpy_r_r53;
    char cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    cpy_r_r0 = NULL;
    cpy_r_r1 = cpy_r_r0;
    cpy_r_r2 = ((faster_eth_utils___humanize____consume_leading_zero_units_genObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("faster_eth_utils/humanize.py", "_consume_leading_zero_units", "_consume_leading_zero_units_gen", "__mypyc_env__", 58, CPyStatic_humanize___globals);
        goto CPyL63;
    }
    CPy_INCREF_NO_IMM(cpy_r_r2);
CPyL1: ;
    cpy_r_r3 = ((faster_eth_utils___humanize____consume_leading_zero_units_envObject *)cpy_r_r2)->___mypyc_next_label__;
    if (unlikely(cpy_r_r3 == CPY_INT_TAG)) {
        CPy_AttributeError("faster_eth_utils/humanize.py", "_consume_leading_zero_units", "_consume_leading_zero_units_env", "__mypyc_next_label__", 58, CPyStatic_humanize___globals);
        goto CPyL64;
    }
    CPyTagged_INCREF(cpy_r_r3);
    goto CPyL57;
CPyL2: ;
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = cpy_r_type != cpy_r_r4;
    if (cpy_r_r5) {
        goto CPyL65;
    } else
        goto CPyL5;
CPyL3: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_consume_leading_zero_units", 58, CPyStatic_humanize___globals);
        goto CPyL62;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r6 = ((faster_eth_utils___humanize____consume_leading_zero_units_envObject *)cpy_r_r2)->_units_iter;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("faster_eth_utils/humanize.py", "_consume_leading_zero_units", "_consume_leading_zero_units_env", "units_iter", 61, CPyStatic_humanize___globals);
        goto CPyL64;
    }
    CPy_INCREF(cpy_r_r6);
CPyL6: ;
    cpy_r_r7 = PyObject_GetIter(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_consume_leading_zero_units", 61, CPyStatic_humanize___globals);
        goto CPyL66;
    }
    if (((faster_eth_utils___humanize____consume_leading_zero_units_envObject *)cpy_r_r2)->___mypyc_temp__0 != NULL) {
        CPy_DECREF(((faster_eth_utils___humanize____consume_leading_zero_units_envObject *)cpy_r_r2)->___mypyc_temp__0);
    }
    ((faster_eth_utils___humanize____consume_leading_zero_units_envObject *)cpy_r_r2)->___mypyc_temp__0 = cpy_r_r6;
    cpy_r_r8 = 1;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_consume_leading_zero_units", -1, CPyStatic_humanize___globals);
        goto CPyL67;
    }
    if (((faster_eth_utils___humanize____consume_leading_zero_units_envObject *)cpy_r_r2)->___mypyc_temp__1 != NULL) {
        CPy_DECREF(((faster_eth_utils___humanize____consume_leading_zero_units_envObject *)cpy_r_r2)->___mypyc_temp__1);
    }
    ((faster_eth_utils___humanize____consume_leading_zero_units_envObject *)cpy_r_r2)->___mypyc_temp__1 = cpy_r_r7;
    cpy_r_r9 = 1;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_consume_leading_zero_units", -1, CPyStatic_humanize___globals);
        goto CPyL64;
    }
CPyL9: ;
    cpy_r_r10 = ((faster_eth_utils___humanize____consume_leading_zero_units_envObject *)cpy_r_r2)->___mypyc_temp__1;
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AttributeError("faster_eth_utils/humanize.py", "_consume_leading_zero_units", "_consume_leading_zero_units_env", "__mypyc_temp__1", 61, CPyStatic_humanize___globals);
        goto CPyL64;
    }
    CPy_INCREF(cpy_r_r10);
CPyL10: ;
    cpy_r_r11 = PyIter_Next(cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    if (cpy_r_r11 == NULL) goto CPyL23;
    PyObject *__tmp48;
    if (unlikely(!(PyTuple_Check(cpy_r_r11) && PyTuple_GET_SIZE(cpy_r_r11) == 2))) {
        __tmp48 = NULL;
        goto __LL49;
    }
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r11, 0))))
        __tmp48 = PyTuple_GET_ITEM(cpy_r_r11, 0);
    else {
        __tmp48 = NULL;
    }
    if (__tmp48 == NULL) goto __LL49;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r11, 1))))
        __tmp48 = PyTuple_GET_ITEM(cpy_r_r11, 1);
    else {
        __tmp48 = NULL;
    }
    if (__tmp48 == NULL) goto __LL49;
    __tmp48 = cpy_r_r11;
__LL49: ;
    if (unlikely(__tmp48 == NULL)) {
        CPy_TypeError("tuple[int, str]", cpy_r_r11); cpy_r_r12 = (tuple_T2IO) { CPY_INT_TAG, NULL };
    } else {
        PyObject *__tmp50 = PyTuple_GET_ITEM(cpy_r_r11, 0);
        CPyTagged __tmp51;
        if (likely(PyLong_Check(__tmp50)))
            __tmp51 = CPyTagged_FromObject(__tmp50);
        else {
            CPy_TypeError("int", __tmp50); __tmp51 = CPY_INT_TAG;
        }
        cpy_r_r12.f0 = __tmp51;
        PyObject *__tmp52 = PyTuple_GET_ITEM(cpy_r_r11, 1);
        CPy_INCREF(__tmp52);
        PyObject *__tmp53;
        if (likely(PyUnicode_Check(__tmp52)))
            __tmp53 = __tmp52;
        else {
            CPy_TypeError("str", __tmp52); 
            __tmp53 = NULL;
        }
        cpy_r_r12.f1 = __tmp53;
    }
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12.f0 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_consume_leading_zero_units", 61, CPyStatic_humanize___globals);
        goto CPyL64;
    }
    cpy_r_r13 = cpy_r_r12.f0;
    CPyTagged_INCREF(cpy_r_r13);
    if (((faster_eth_utils___humanize____consume_leading_zero_units_envObject *)cpy_r_r2)->_amount != CPY_INT_TAG) {
        CPyTagged_DECREF(((faster_eth_utils___humanize____consume_leading_zero_units_envObject *)cpy_r_r2)->_amount);
    }
    ((faster_eth_utils___humanize____consume_leading_zero_units_envObject *)cpy_r_r2)->_amount = cpy_r_r13;
    cpy_r_r14 = 1;
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_consume_leading_zero_units", 61, CPyStatic_humanize___globals);
        goto CPyL68;
    }
    cpy_r_r15 = cpy_r_r12.f1;
    CPy_INCREF(cpy_r_r15);
    CPyTagged_DECREF(cpy_r_r12.f0);
    CPy_DECREF(cpy_r_r12.f1);
    if (((faster_eth_utils___humanize____consume_leading_zero_units_envObject *)cpy_r_r2)->_unit != NULL) {
        CPy_DECREF(((faster_eth_utils___humanize____consume_leading_zero_units_envObject *)cpy_r_r2)->_unit);
    }
    ((faster_eth_utils___humanize____consume_leading_zero_units_envObject *)cpy_r_r2)->_unit = cpy_r_r15;
    cpy_r_r16 = 1;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_consume_leading_zero_units", 61, CPyStatic_humanize___globals);
        goto CPyL64;
    }
    cpy_r_r17 = ((faster_eth_utils___humanize____consume_leading_zero_units_envObject *)cpy_r_r2)->_amount;
    if (unlikely(cpy_r_r17 == CPY_INT_TAG)) {
        CPy_AttributeError("faster_eth_utils/humanize.py", "_consume_leading_zero_units", "_consume_leading_zero_units_env", "amount", 62, CPyStatic_humanize___globals);
        goto CPyL64;
    }
    CPyTagged_INCREF(cpy_r_r17);
CPyL15: ;
    cpy_r_r18 = cpy_r_r17 == 0;
    CPyTagged_DECREF(cpy_r_r17);
    if (cpy_r_r18) {
        goto CPyL9;
    } else
        goto CPyL69;
CPyL16: ;
    cpy_r_r19 = ((faster_eth_utils___humanize____consume_leading_zero_units_envObject *)cpy_r_r2)->_amount;
    if (unlikely(cpy_r_r19 == CPY_INT_TAG)) {
        CPy_AttributeError("faster_eth_utils/humanize.py", "_consume_leading_zero_units", "_consume_leading_zero_units_env", "amount", 65, CPyStatic_humanize___globals);
        goto CPyL70;
    }
    CPyTagged_INCREF(cpy_r_r19);
CPyL17: ;
    cpy_r_r20 = ((faster_eth_utils___humanize____consume_leading_zero_units_envObject *)cpy_r_r2)->_unit;
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AttributeError("faster_eth_utils/humanize.py", "_consume_leading_zero_units", "_consume_leading_zero_units_env", "unit", 65, CPyStatic_humanize___globals);
        goto CPyL71;
    }
    CPy_INCREF(cpy_r_r20);
CPyL18: ;
    cpy_r_r21.f0 = cpy_r_r19;
    cpy_r_r21.f1 = cpy_r_r20;
    cpy_r_r22 = PyTuple_New(2);
    if (unlikely(cpy_r_r22 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp54 = CPyTagged_StealAsObject(cpy_r_r21.f0);
    PyTuple_SET_ITEM(cpy_r_r22, 0, __tmp54);
    PyObject *__tmp55 = cpy_r_r21.f1;
    PyTuple_SET_ITEM(cpy_r_r22, 1, __tmp55);
    if (((faster_eth_utils___humanize____consume_leading_zero_units_envObject *)cpy_r_r2)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((faster_eth_utils___humanize____consume_leading_zero_units_envObject *)cpy_r_r2)->___mypyc_next_label__);
    }
    ((faster_eth_utils___humanize____consume_leading_zero_units_envObject *)cpy_r_r2)->___mypyc_next_label__ = 2;
    cpy_r_r23 = 1;
    CPy_DECREF_NO_IMM(cpy_r_r2);
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_consume_leading_zero_units", 65, CPyStatic_humanize___globals);
        goto CPyL72;
    }
    return cpy_r_r22;
CPyL20: ;
    cpy_r_r24 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r25 = cpy_r_type != cpy_r_r24;
    if (cpy_r_r25) {
        goto CPyL73;
    } else
        goto CPyL24;
CPyL21: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_consume_leading_zero_units", 65, CPyStatic_humanize___globals);
        goto CPyL62;
    }
    CPy_Unreachable();
CPyL23: ;
    cpy_r_r26 = CPy_NoErrOccurred();
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_consume_leading_zero_units", 61, CPyStatic_humanize___globals);
        goto CPyL64;
    }
CPyL24: ;
    cpy_r_r27 = ((faster_eth_utils___humanize____consume_leading_zero_units_envObject *)cpy_r_r2)->_units_iter;
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AttributeError("faster_eth_utils/humanize.py", "_consume_leading_zero_units", "_consume_leading_zero_units_env", "units_iter", 68, CPyStatic_humanize___globals);
        goto CPyL64;
    }
    CPy_INCREF(cpy_r_r27);
CPyL25: ;
    cpy_r_r28 = PyObject_GetIter(cpy_r_r27);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_consume_leading_zero_units", 68, CPyStatic_humanize___globals);
        goto CPyL64;
    }
    if (((faster_eth_utils___humanize____consume_leading_zero_units_envObject *)cpy_r_r2)->___mypyc_temp__2 != NULL) {
        CPy_DECREF(((faster_eth_utils___humanize____consume_leading_zero_units_envObject *)cpy_r_r2)->___mypyc_temp__2);
    }
    ((faster_eth_utils___humanize____consume_leading_zero_units_envObject *)cpy_r_r2)->___mypyc_temp__2 = cpy_r_r28;
    cpy_r_r29 = 1;
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_consume_leading_zero_units", -1, CPyStatic_humanize___globals);
        goto CPyL64;
    }
    cpy_r_r30 = ((faster_eth_utils___humanize____consume_leading_zero_units_envObject *)cpy_r_r2)->___mypyc_temp__2;
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AttributeError("faster_eth_utils/humanize.py", "_consume_leading_zero_units", "_consume_leading_zero_units_env", "__mypyc_temp__2", -1, CPyStatic_humanize___globals);
        goto CPyL64;
    }
    CPy_INCREF(cpy_r_r30);
CPyL28: ;
    cpy_r_r31 = CPyIter_Next(cpy_r_r30);
    CPy_DECREF(cpy_r_r30);
    if (cpy_r_r31 == NULL) {
        goto CPyL74;
    } else
        goto CPyL31;
CPyL29: ;
    cpy_r_r32 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_consume_leading_zero_units", 68, CPyStatic_humanize___globals);
        goto CPyL70;
    }
    cpy_r_r33 = cpy_r_r32;
    CPy_DECREF(cpy_r_r33);
    goto CPyL54;
CPyL31: ;
    cpy_r_r34 = cpy_r_r31;
CPyL32: ;
    if (((faster_eth_utils___humanize____consume_leading_zero_units_envObject *)cpy_r_r2)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((faster_eth_utils___humanize____consume_leading_zero_units_envObject *)cpy_r_r2)->___mypyc_next_label__);
    }
    ((faster_eth_utils___humanize____consume_leading_zero_units_envObject *)cpy_r_r2)->___mypyc_next_label__ = 4;
    cpy_r_r35 = 1;
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_consume_leading_zero_units", 68, CPyStatic_humanize___globals);
        goto CPyL75;
    } else
        goto CPyL76;
CPyL33: ;
    return cpy_r_r34;
CPyL34: ;
    cpy_r_r36 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r37 = cpy_r_type != cpy_r_r36;
    if (!cpy_r_r37) goto CPyL37;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_consume_leading_zero_units", 68, CPyStatic_humanize___globals);
        goto CPyL38;
    } else
        goto CPyL77;
CPyL36: ;
    CPy_Unreachable();
CPyL37: ;
    CPy_INCREF(cpy_r_arg);
    goto CPyL49;
CPyL38: ;
    cpy_r_r38 = CPy_CatchError();
    if (((faster_eth_utils___humanize____consume_leading_zero_units_envObject *)cpy_r_r2)->___mypyc_temp__3.f0 != NULL) {
        CPy_DECREF(((faster_eth_utils___humanize____consume_leading_zero_units_envObject *)cpy_r_r2)->___mypyc_temp__3.f0);
        CPy_DECREF(((faster_eth_utils___humanize____consume_leading_zero_units_envObject *)cpy_r_r2)->___mypyc_temp__3.f1);
        CPy_DECREF(((faster_eth_utils___humanize____consume_leading_zero_units_envObject *)cpy_r_r2)->___mypyc_temp__3.f2);
    }
    ((faster_eth_utils___humanize____consume_leading_zero_units_envObject *)cpy_r_r2)->___mypyc_temp__3 = cpy_r_r38;
    cpy_r_r39 = 1;
    if (unlikely(!cpy_r_r39)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_consume_leading_zero_units", -1, CPyStatic_humanize___globals);
        goto CPyL78;
    }
    cpy_r_r40 = (PyObject **)&cpy_r_r1;
    cpy_r_r41 = ((faster_eth_utils___humanize____consume_leading_zero_units_envObject *)cpy_r_r2)->___mypyc_temp__2;
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AttributeError("faster_eth_utils/humanize.py", "_consume_leading_zero_units", "_consume_leading_zero_units_env", "__mypyc_temp__2", -1, CPyStatic_humanize___globals);
        goto CPyL78;
    }
    CPy_INCREF(cpy_r_r41);
CPyL40: ;
    cpy_r_r42 = CPy_YieldFromErrorHandle(cpy_r_r41, cpy_r_r40);
    CPy_DecRef(cpy_r_r41);
    if (unlikely(cpy_r_r42 == 2)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_consume_leading_zero_units", 68, CPyStatic_humanize___globals);
        goto CPyL78;
    }
    if (cpy_r_r42) goto CPyL44;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r34 = cpy_r_r1;
    cpy_r_r43 = ((faster_eth_utils___humanize____consume_leading_zero_units_envObject *)cpy_r_r2)->___mypyc_temp__3;
    if (unlikely(cpy_r_r43.f0 == NULL)) {
        CPy_AttributeError("faster_eth_utils/humanize.py", "_consume_leading_zero_units", "_consume_leading_zero_units_env", "__mypyc_temp__3", -1, CPyStatic_humanize___globals);
        goto CPyL79;
    }
    CPy_INCREF(cpy_r_r43.f0);
    CPy_INCREF(cpy_r_r43.f1);
    CPy_INCREF(cpy_r_r43.f2);
CPyL43: ;
    CPy_RestoreExcInfo(cpy_r_r43);
    CPy_DecRef(cpy_r_r43.f0);
    CPy_DecRef(cpy_r_r43.f1);
    CPy_DecRef(cpy_r_r43.f2);
    goto CPyL32;
CPyL44: ;
    cpy_r_r33 = cpy_r_r1;
    CPy_DecRef(cpy_r_r33);
    cpy_r_r44 = ((faster_eth_utils___humanize____consume_leading_zero_units_envObject *)cpy_r_r2)->___mypyc_temp__3;
    if (unlikely(cpy_r_r44.f0 == NULL)) {
        CPy_AttributeError("faster_eth_utils/humanize.py", "_consume_leading_zero_units", "_consume_leading_zero_units_env", "__mypyc_temp__3", -1, CPyStatic_humanize___globals);
        goto CPyL46;
    }
    CPy_INCREF(cpy_r_r44.f0);
    CPy_INCREF(cpy_r_r44.f1);
    CPy_INCREF(cpy_r_r44.f2);
CPyL45: ;
    CPy_RestoreExcInfo(cpy_r_r44);
    CPy_DecRef(cpy_r_r44.f0);
    CPy_DecRef(cpy_r_r44.f1);
    CPy_DecRef(cpy_r_r44.f2);
    goto CPyL54;
CPyL46: ;
    cpy_r_r45 = ((faster_eth_utils___humanize____consume_leading_zero_units_envObject *)cpy_r_r2)->___mypyc_temp__3;
    if (unlikely(cpy_r_r45.f0 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute '__mypyc_temp__3' of '_consume_leading_zero_units_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r45.f0);
        CPy_INCREF(cpy_r_r45.f1);
        CPy_INCREF(cpy_r_r45.f2);
    }
    CPy_DecRef(cpy_r_r2);
    if (unlikely(cpy_r_r45.f0 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_consume_leading_zero_units", -1, CPyStatic_humanize___globals);
        goto CPyL62;
    }
CPyL47: ;
    CPy_RestoreExcInfo(cpy_r_r45);
    CPy_DecRef(cpy_r_r45.f0);
    CPy_DecRef(cpy_r_r45.f1);
    CPy_DecRef(cpy_r_r45.f2);
    cpy_r_r46 = CPy_KeepPropagating();
    if (!cpy_r_r46) goto CPyL62;
    CPy_Unreachable();
CPyL49: ;
    cpy_r_r47 = ((faster_eth_utils___humanize____consume_leading_zero_units_envObject *)cpy_r_r2)->___mypyc_temp__2;
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AttributeError("faster_eth_utils/humanize.py", "_consume_leading_zero_units", "_consume_leading_zero_units_env", "__mypyc_temp__2", -1, CPyStatic_humanize___globals);
        goto CPyL80;
    }
    CPy_INCREF(cpy_r_r47);
CPyL50: ;
    cpy_r_r48 = CPyIter_Send(cpy_r_r47, cpy_r_arg);
    CPy_DECREF(cpy_r_r47);
    CPy_DECREF(cpy_r_arg);
    if (cpy_r_r48 == NULL) goto CPyL81;
    cpy_r_r34 = cpy_r_r48;
    goto CPyL32;
CPyL52: ;
    cpy_r_r49 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_consume_leading_zero_units", 68, CPyStatic_humanize___globals);
        goto CPyL70;
    }
    cpy_r_r33 = cpy_r_r49;
    CPy_DECREF(cpy_r_r33);
CPyL54: ;
    cpy_r_r50 = Py_None;
    if (((faster_eth_utils___humanize____consume_leading_zero_units_envObject *)cpy_r_r2)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((faster_eth_utils___humanize____consume_leading_zero_units_envObject *)cpy_r_r2)->___mypyc_next_label__);
    }
    ((faster_eth_utils___humanize____consume_leading_zero_units_envObject *)cpy_r_r2)->___mypyc_next_label__ = -2;
    cpy_r_r51 = 1;
    CPy_DECREF_NO_IMM(cpy_r_r2);
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_consume_leading_zero_units", 58, CPyStatic_humanize___globals);
        goto CPyL62;
    }
    CPyGen_SetStopIterationValue(cpy_r_r50);
    if (!0) goto CPyL62;
    CPy_Unreachable();
CPyL57: ;
    cpy_r_r52 = cpy_r_r3 == 0;
    if (cpy_r_r52) goto CPyL82;
    cpy_r_r53 = cpy_r_r3 == 2;
    if (cpy_r_r53) goto CPyL83;
    cpy_r_r54 = cpy_r_r3 == 4;
    CPyTagged_DECREF(cpy_r_r3);
    if (cpy_r_r54) {
        goto CPyL34;
    } else
        goto CPyL84;
CPyL60: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r55 = 0;
    if (unlikely(!cpy_r_r55)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_consume_leading_zero_units", 58, CPyStatic_humanize___globals);
        goto CPyL62;
    }
    CPy_Unreachable();
CPyL62: ;
    cpy_r_r56 = NULL;
    return cpy_r_r56;
CPyL63: ;
    CPy_XDecRef(cpy_r_r1);
    goto CPyL62;
CPyL64: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    goto CPyL62;
CPyL65: ;
    CPy_XDECREF(cpy_r_r1);
    CPy_DECREF_NO_IMM(cpy_r_r2);
    goto CPyL3;
CPyL66: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r6);
    goto CPyL62;
CPyL67: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r7);
    goto CPyL62;
CPyL68: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    CPyTagged_DecRef(cpy_r_r12.f0);
    CPy_DecRef(cpy_r_r12.f1);
    goto CPyL62;
CPyL69: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL16;
CPyL70: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL62;
CPyL71: ;
    CPy_DecRef(cpy_r_r2);
    CPyTagged_DecRef(cpy_r_r19);
    goto CPyL62;
CPyL72: ;
    CPy_DecRef(cpy_r_r22);
    goto CPyL62;
CPyL73: ;
    CPy_XDECREF(cpy_r_r1);
    CPy_DECREF_NO_IMM(cpy_r_r2);
    goto CPyL21;
CPyL74: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL29;
CPyL75: ;
    CPy_DecRef(cpy_r_r34);
    goto CPyL38;
CPyL76: ;
    CPy_XDECREF(cpy_r_r1);
    CPy_DECREF_NO_IMM(cpy_r_r2);
    goto CPyL33;
CPyL77: ;
    CPy_XDECREF(cpy_r_r1);
    CPy_DECREF_NO_IMM(cpy_r_r2);
    goto CPyL36;
CPyL78: ;
    CPy_XDecRef(cpy_r_r1);
    goto CPyL46;
CPyL79: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r34);
    goto CPyL46;
CPyL80: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_arg);
    goto CPyL62;
CPyL81: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL52;
CPyL82: ;
    CPyTagged_DECREF(cpy_r_r3);
    goto CPyL2;
CPyL83: ;
    CPyTagged_DECREF(cpy_r_r3);
    goto CPyL20;
CPyL84: ;
    CPy_XDECREF(cpy_r_r1);
    CPy_DECREF_NO_IMM(cpy_r_r2);
    goto CPyL60;
}

PyObject *CPyPy_humanize____consume_leading_zero_units_gen_____mypyc_generator_helper__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"type", "value", "traceback", "arg", 0};
    static CPyArg_Parser parser = {"OOOO:__mypyc_generator_helper__", kwlist, 0};
    PyObject *obj_type;
    PyObject *obj_value;
    PyObject *obj_traceback;
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_type, &obj_value, &obj_traceback, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_type = obj_type;
    PyObject *arg_value = obj_value;
    PyObject *arg_traceback = obj_traceback;
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_humanize____consume_leading_zero_units_gen_____mypyc_generator_helper__(arg___mypyc_self__, arg_type, arg_value, arg_traceback, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("faster_eth_utils/humanize.py", "_consume_leading_zero_units", 58, CPyStatic_humanize___globals);
    return NULL;
}

PyObject *CPyDef_humanize____consume_leading_zero_units_gen_____next__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_humanize____consume_leading_zero_units_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_r0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_humanize____consume_leading_zero_units_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__next__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_humanize____consume_leading_zero_units_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_eth_utils.humanize._consume_leading_zero_units_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_humanize____consume_leading_zero_units_gen_____next__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_eth_utils/humanize.py", "__next__", -1, CPyStatic_humanize___globals);
    return NULL;
}

PyObject *CPyDef_humanize____consume_leading_zero_units_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_humanize____consume_leading_zero_units_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_arg);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_humanize____consume_leading_zero_units_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"arg", 0};
    static CPyArg_Parser parser = {"O:send", kwlist, 0};
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_humanize____consume_leading_zero_units_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_eth_utils.humanize._consume_leading_zero_units_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_humanize____consume_leading_zero_units_gen___send(arg___mypyc_self__, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("faster_eth_utils/humanize.py", "send", -1, CPyStatic_humanize___globals);
    return NULL;
}

PyObject *CPyDef_humanize____consume_leading_zero_units_gen_____iter__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF_NO_IMM(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_humanize____consume_leading_zero_units_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__iter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_humanize____consume_leading_zero_units_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_eth_utils.humanize._consume_leading_zero_units_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_humanize____consume_leading_zero_units_gen_____iter__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_eth_utils/humanize.py", "__iter__", -1, CPyStatic_humanize___globals);
    return NULL;
}

PyObject *CPyDef_humanize____consume_leading_zero_units_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    if (cpy_r_value != NULL) goto CPyL7;
    CPy_INCREF(cpy_r_r0);
    cpy_r_value = cpy_r_r0;
CPyL2: ;
    if (cpy_r_traceback != NULL) goto CPyL8;
    CPy_INCREF(cpy_r_r0);
    cpy_r_traceback = cpy_r_r0;
CPyL4: ;
    cpy_r_r1 = CPyDef_humanize____consume_leading_zero_units_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_type, cpy_r_value, cpy_r_traceback, cpy_r_r0);
    CPy_DECREF(cpy_r_value);
    CPy_DECREF(cpy_r_traceback);
    if (cpy_r_r1 == NULL) goto CPyL6;
    return cpy_r_r1;
CPyL6: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
CPyL7: ;
    CPy_INCREF(cpy_r_value);
    goto CPyL2;
CPyL8: ;
    CPy_INCREF(cpy_r_traceback);
    goto CPyL4;
}

PyObject *CPyPy_humanize____consume_leading_zero_units_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"type", "value", "traceback", 0};
    static CPyArg_Parser parser = {"O|OO:throw", kwlist, 0};
    PyObject *obj_type;
    PyObject *obj_value = NULL;
    PyObject *obj_traceback = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_type, &obj_value, &obj_traceback)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_humanize____consume_leading_zero_units_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_eth_utils.humanize._consume_leading_zero_units_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_type = obj_type;
    PyObject *arg_value;
    if (obj_value == NULL) {
        arg_value = NULL;
    } else {
        arg_value = obj_value; 
    }
    PyObject *arg_traceback;
    if (obj_traceback == NULL) {
        arg_traceback = NULL;
    } else {
        arg_traceback = obj_traceback; 
    }
    PyObject *retval = CPyDef_humanize____consume_leading_zero_units_gen___throw(arg___mypyc_self__, arg_type, arg_value, arg_traceback);
    return retval;
fail: ;
    CPy_AddTraceback("faster_eth_utils/humanize.py", "throw", -1, CPyStatic_humanize___globals);
    return NULL;
}

PyObject *CPyDef_humanize____consume_leading_zero_units_gen___close(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    tuple_T3OOO cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    tuple_T2OO cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[189]; /* 'GeneratorExit' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (cpy_r_r2 == NULL) goto CPyL3;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = CPyDef_humanize____consume_leading_zero_units_gen___throw(cpy_r___mypyc_self__, cpy_r_r2, cpy_r_r3, cpy_r_r4);
    if (cpy_r_r5 != NULL) goto CPyL11;
CPyL3: ;
    cpy_r_r6 = CPy_CatchError();
    cpy_r_r7 = CPyModule_builtins;
    cpy_r_r8 = CPyStatics[190]; /* 'StopIteration' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_r7, cpy_r_r8);
    if (cpy_r_r9 == NULL) goto CPyL12;
    cpy_r_r10.f0 = cpy_r_r2;
    cpy_r_r10.f1 = cpy_r_r9;
    cpy_r_r11 = PyTuple_New(2);
    if (unlikely(cpy_r_r11 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp56 = cpy_r_r10.f0;
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp56);
    PyObject *__tmp57 = cpy_r_r10.f1;
    PyTuple_SET_ITEM(cpy_r_r11, 1, __tmp57);
    cpy_r_r12 = CPy_ExceptionMatches(cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    if (!cpy_r_r12) goto CPyL13;
    CPy_RestoreExcInfo(cpy_r_r6);
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    cpy_r_r13 = (PyObject *)&_Py_NoneStruct;
    CPy_INCREF(cpy_r_r13);
    return cpy_r_r13;
CPyL6: ;
    CPy_Reraise();
    if (!0) goto CPyL10;
    CPy_Unreachable();
CPyL8: ;
    PyErr_SetString(PyExc_RuntimeError, "generator ignored GeneratorExit");
    cpy_r_r14 = 0;
    if (!cpy_r_r14) goto CPyL10;
    CPy_Unreachable();
CPyL10: ;
    cpy_r_r15 = NULL;
    return cpy_r_r15;
CPyL11: ;
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r5);
    goto CPyL8;
CPyL12: ;
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    goto CPyL10;
CPyL13: ;
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    goto CPyL6;
}

PyObject *CPyPy_humanize____consume_leading_zero_units_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":close", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_humanize____consume_leading_zero_units_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_eth_utils.humanize._consume_leading_zero_units_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_humanize____consume_leading_zero_units_gen___close(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_eth_utils/humanize.py", "close", -1, CPyStatic_humanize___globals);
    return NULL;
}

PyObject *CPyDef_humanize____consume_leading_zero_units(PyObject *cpy_r_units_iter) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyDef_humanize____consume_leading_zero_units_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_consume_leading_zero_units", 58, CPyStatic_humanize___globals);
        goto CPyL6;
    }
    CPy_INCREF(cpy_r_units_iter);
    if (((faster_eth_utils___humanize____consume_leading_zero_units_envObject *)cpy_r_r0)->_units_iter != NULL) {
        CPy_DECREF(((faster_eth_utils___humanize____consume_leading_zero_units_envObject *)cpy_r_r0)->_units_iter);
    }
    ((faster_eth_utils___humanize____consume_leading_zero_units_envObject *)cpy_r_r0)->_units_iter = cpy_r_units_iter;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_consume_leading_zero_units", 58, CPyStatic_humanize___globals);
        goto CPyL7;
    }
    cpy_r_r2 = CPyDef_humanize____consume_leading_zero_units_gen();
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_consume_leading_zero_units", 58, CPyStatic_humanize___globals);
        goto CPyL7;
    }
    CPy_INCREF_NO_IMM(cpy_r_r0);
    if (((faster_eth_utils___humanize____consume_leading_zero_units_genObject *)cpy_r_r2)->___mypyc_env__ != NULL) {
        CPy_DECREF_NO_IMM(((faster_eth_utils___humanize____consume_leading_zero_units_genObject *)cpy_r_r2)->___mypyc_env__);
    }
    ((faster_eth_utils___humanize____consume_leading_zero_units_genObject *)cpy_r_r2)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_consume_leading_zero_units", 58, CPyStatic_humanize___globals);
        goto CPyL8;
    }
    if (((faster_eth_utils___humanize____consume_leading_zero_units_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((faster_eth_utils___humanize____consume_leading_zero_units_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((faster_eth_utils___humanize____consume_leading_zero_units_envObject *)cpy_r_r0)->___mypyc_next_label__ = 0;
    cpy_r_r4 = 1;
    CPy_DECREF_NO_IMM(cpy_r_r0);
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_consume_leading_zero_units", 58, CPyStatic_humanize___globals);
        goto CPyL9;
    }
    return cpy_r_r2;
CPyL6: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
CPyL7: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL6;
CPyL8: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    goto CPyL6;
CPyL9: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL6;
}

PyObject *CPyPy_humanize____consume_leading_zero_units(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"units_iter", 0};
    static CPyArg_Parser parser = {"O:_consume_leading_zero_units", kwlist, 0};
    PyObject *obj_units_iter;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_units_iter)) {
        return NULL;
    }
    PyObject *arg_units_iter = obj_units_iter;
    PyObject *retval = CPyDef_humanize____consume_leading_zero_units(arg_units_iter);
    return retval;
fail: ;
    CPy_AddTraceback("faster_eth_utils/humanize.py", "_consume_leading_zero_units", 58, CPyStatic_humanize___globals);
    return NULL;
}

PyObject *CPyDef_humanize____humanize_seconds_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    tuple_T7T2IOT2IOT2IOT2IOT2IOT2IOT2IO cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    tuple_T2IO cpy_r_r14;
    CPyTagged cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    CPyTagged cpy_r_r19;
    char cpy_r_r20;
    CPyTagged cpy_r_r21;
    CPyTagged cpy_r_r22;
    CPyTagged cpy_r_r23;
    char cpy_r_r24;
    CPyTagged cpy_r_r25;
    PyObject *cpy_r_r26;
    tuple_T2IO cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    CPyTagged cpy_r_r32;
    CPyTagged cpy_r_r33;
    CPyTagged cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    cpy_r_r0 = ((faster_eth_utils___humanize____humanize_seconds_genObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("faster_eth_utils/humanize.py", "_humanize_seconds", "_humanize_seconds_gen", "__mypyc_env__", 71, CPyStatic_humanize___globals);
        goto CPyL43;
    }
    CPy_INCREF_NO_IMM(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((faster_eth_utils___humanize____humanize_seconds_envObject *)cpy_r_r0)->___mypyc_next_label__;
    if (unlikely(cpy_r_r1 == CPY_INT_TAG)) {
        CPy_AttributeError("faster_eth_utils/humanize.py", "_humanize_seconds", "_humanize_seconds_env", "__mypyc_next_label__", 71, CPyStatic_humanize___globals);
        goto CPyL44;
    }
    CPyTagged_INCREF(cpy_r_r1);
    goto CPyL39;
CPyL2: ;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_type != cpy_r_r2;
    if (cpy_r_r3) {
        goto CPyL45;
    } else
        goto CPyL5;
CPyL3: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_humanize_seconds", 71, CPyStatic_humanize___globals);
        goto CPyL43;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r4 = ((faster_eth_utils___humanize____humanize_seconds_envObject *)cpy_r_r0)->_seconds;
    if (unlikely(cpy_r_r4 == CPY_INT_TAG)) {
        CPy_AttributeError("faster_eth_utils/humanize.py", "_humanize_seconds", "_humanize_seconds_env", "seconds", 72, CPyStatic_humanize___globals);
        goto CPyL44;
    }
    CPyTagged_INCREF(cpy_r_r4);
CPyL6: ;
    if (((faster_eth_utils___humanize____humanize_seconds_envObject *)cpy_r_r0)->_remainder != CPY_INT_TAG) {
        CPyTagged_DECREF(((faster_eth_utils___humanize____humanize_seconds_envObject *)cpy_r_r0)->_remainder);
    }
    ((faster_eth_utils___humanize____humanize_seconds_envObject *)cpy_r_r0)->_remainder = cpy_r_r4;
    cpy_r_r5 = 1;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_humanize_seconds", 72, CPyStatic_humanize___globals);
        goto CPyL44;
    }
    cpy_r_r6 = CPyStatic_humanize___UNITS;
    if (unlikely(cpy_r_r6.f0.f0 == CPY_INT_TAG)) {
        goto CPyL46;
    } else
        goto CPyL10;
CPyL8: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"UNITS\" was not set");
    cpy_r_r7 = 0;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_humanize_seconds", 74, CPyStatic_humanize___globals);
        goto CPyL43;
    }
    CPy_Unreachable();
CPyL10: ;
    CPyTagged_INCREF(cpy_r_r6.f0.f0);
    CPy_INCREF(cpy_r_r6.f0.f1);
    CPyTagged_INCREF(cpy_r_r6.f1.f0);
    CPy_INCREF(cpy_r_r6.f1.f1);
    CPyTagged_INCREF(cpy_r_r6.f2.f0);
    CPy_INCREF(cpy_r_r6.f2.f1);
    CPyTagged_INCREF(cpy_r_r6.f3.f0);
    CPy_INCREF(cpy_r_r6.f3.f1);
    CPyTagged_INCREF(cpy_r_r6.f4.f0);
    CPy_INCREF(cpy_r_r6.f4.f1);
    CPyTagged_INCREF(cpy_r_r6.f5.f0);
    CPy_INCREF(cpy_r_r6.f5.f1);
    CPyTagged_INCREF(cpy_r_r6.f6.f0);
    CPy_INCREF(cpy_r_r6.f6.f1);
    cpy_r_r8 = PyTuple_New(7);
    if (unlikely(cpy_r_r8 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp58 = PyTuple_New(2);
    if (unlikely(__tmp58 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp59 = CPyTagged_StealAsObject(cpy_r_r6.f0.f0);
    PyTuple_SET_ITEM(__tmp58, 0, __tmp59);
    PyObject *__tmp60 = cpy_r_r6.f0.f1;
    PyTuple_SET_ITEM(__tmp58, 1, __tmp60);
    PyTuple_SET_ITEM(cpy_r_r8, 0, __tmp58);
    PyObject *__tmp61 = PyTuple_New(2);
    if (unlikely(__tmp61 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp62 = CPyTagged_StealAsObject(cpy_r_r6.f1.f0);
    PyTuple_SET_ITEM(__tmp61, 0, __tmp62);
    PyObject *__tmp63 = cpy_r_r6.f1.f1;
    PyTuple_SET_ITEM(__tmp61, 1, __tmp63);
    PyTuple_SET_ITEM(cpy_r_r8, 1, __tmp61);
    PyObject *__tmp64 = PyTuple_New(2);
    if (unlikely(__tmp64 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp65 = CPyTagged_StealAsObject(cpy_r_r6.f2.f0);
    PyTuple_SET_ITEM(__tmp64, 0, __tmp65);
    PyObject *__tmp66 = cpy_r_r6.f2.f1;
    PyTuple_SET_ITEM(__tmp64, 1, __tmp66);
    PyTuple_SET_ITEM(cpy_r_r8, 2, __tmp64);
    PyObject *__tmp67 = PyTuple_New(2);
    if (unlikely(__tmp67 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp68 = CPyTagged_StealAsObject(cpy_r_r6.f3.f0);
    PyTuple_SET_ITEM(__tmp67, 0, __tmp68);
    PyObject *__tmp69 = cpy_r_r6.f3.f1;
    PyTuple_SET_ITEM(__tmp67, 1, __tmp69);
    PyTuple_SET_ITEM(cpy_r_r8, 3, __tmp67);
    PyObject *__tmp70 = PyTuple_New(2);
    if (unlikely(__tmp70 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp71 = CPyTagged_StealAsObject(cpy_r_r6.f4.f0);
    PyTuple_SET_ITEM(__tmp70, 0, __tmp71);
    PyObject *__tmp72 = cpy_r_r6.f4.f1;
    PyTuple_SET_ITEM(__tmp70, 1, __tmp72);
    PyTuple_SET_ITEM(cpy_r_r8, 4, __tmp70);
    PyObject *__tmp73 = PyTuple_New(2);
    if (unlikely(__tmp73 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp74 = CPyTagged_StealAsObject(cpy_r_r6.f5.f0);
    PyTuple_SET_ITEM(__tmp73, 0, __tmp74);
    PyObject *__tmp75 = cpy_r_r6.f5.f1;
    PyTuple_SET_ITEM(__tmp73, 1, __tmp75);
    PyTuple_SET_ITEM(cpy_r_r8, 5, __tmp73);
    PyObject *__tmp76 = PyTuple_New(2);
    if (unlikely(__tmp76 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp77 = CPyTagged_StealAsObject(cpy_r_r6.f6.f0);
    PyTuple_SET_ITEM(__tmp76, 0, __tmp77);
    PyObject *__tmp78 = cpy_r_r6.f6.f1;
    PyTuple_SET_ITEM(__tmp76, 1, __tmp78);
    PyTuple_SET_ITEM(cpy_r_r8, 6, __tmp76);
    cpy_r_r9 = PyObject_GetIter(cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_humanize_seconds", 74, CPyStatic_humanize___globals);
        goto CPyL44;
    }
    CPyTagged_INCREF(cpy_r_r6.f0.f0);
    CPy_INCREF(cpy_r_r6.f0.f1);
    CPyTagged_INCREF(cpy_r_r6.f1.f0);
    CPy_INCREF(cpy_r_r6.f1.f1);
    CPyTagged_INCREF(cpy_r_r6.f2.f0);
    CPy_INCREF(cpy_r_r6.f2.f1);
    CPyTagged_INCREF(cpy_r_r6.f3.f0);
    CPy_INCREF(cpy_r_r6.f3.f1);
    CPyTagged_INCREF(cpy_r_r6.f4.f0);
    CPy_INCREF(cpy_r_r6.f4.f1);
    CPyTagged_INCREF(cpy_r_r6.f5.f0);
    CPy_INCREF(cpy_r_r6.f5.f1);
    CPyTagged_INCREF(cpy_r_r6.f6.f0);
    CPy_INCREF(cpy_r_r6.f6.f1);
    if (((faster_eth_utils___humanize____humanize_seconds_envObject *)cpy_r_r0)->___mypyc_temp__4.f0.f0 != CPY_INT_TAG) {
        CPyTagged_DECREF(((faster_eth_utils___humanize____humanize_seconds_envObject *)cpy_r_r0)->___mypyc_temp__4.f0.f0);
        CPy_DECREF(((faster_eth_utils___humanize____humanize_seconds_envObject *)cpy_r_r0)->___mypyc_temp__4.f0.f1);
        CPyTagged_DECREF(((faster_eth_utils___humanize____humanize_seconds_envObject *)cpy_r_r0)->___mypyc_temp__4.f1.f0);
        CPy_DECREF(((faster_eth_utils___humanize____humanize_seconds_envObject *)cpy_r_r0)->___mypyc_temp__4.f1.f1);
        CPyTagged_DECREF(((faster_eth_utils___humanize____humanize_seconds_envObject *)cpy_r_r0)->___mypyc_temp__4.f2.f0);
        CPy_DECREF(((faster_eth_utils___humanize____humanize_seconds_envObject *)cpy_r_r0)->___mypyc_temp__4.f2.f1);
        CPyTagged_DECREF(((faster_eth_utils___humanize____humanize_seconds_envObject *)cpy_r_r0)->___mypyc_temp__4.f3.f0);
        CPy_DECREF(((faster_eth_utils___humanize____humanize_seconds_envObject *)cpy_r_r0)->___mypyc_temp__4.f3.f1);
        CPyTagged_DECREF(((faster_eth_utils___humanize____humanize_seconds_envObject *)cpy_r_r0)->___mypyc_temp__4.f4.f0);
        CPy_DECREF(((faster_eth_utils___humanize____humanize_seconds_envObject *)cpy_r_r0)->___mypyc_temp__4.f4.f1);
        CPyTagged_DECREF(((faster_eth_utils___humanize____humanize_seconds_envObject *)cpy_r_r0)->___mypyc_temp__4.f5.f0);
        CPy_DECREF(((faster_eth_utils___humanize____humanize_seconds_envObject *)cpy_r_r0)->___mypyc_temp__4.f5.f1);
        CPyTagged_DECREF(((faster_eth_utils___humanize____humanize_seconds_envObject *)cpy_r_r0)->___mypyc_temp__4.f6.f0);
        CPy_DECREF(((faster_eth_utils___humanize____humanize_seconds_envObject *)cpy_r_r0)->___mypyc_temp__4.f6.f1);
    }
    ((faster_eth_utils___humanize____humanize_seconds_envObject *)cpy_r_r0)->___mypyc_temp__4 = cpy_r_r6;
    cpy_r_r10 = 1;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_humanize_seconds", -1, CPyStatic_humanize___globals);
        goto CPyL47;
    }
    if (((faster_eth_utils___humanize____humanize_seconds_envObject *)cpy_r_r0)->___mypyc_temp__5 != NULL) {
        CPy_DECREF(((faster_eth_utils___humanize____humanize_seconds_envObject *)cpy_r_r0)->___mypyc_temp__5);
    }
    ((faster_eth_utils___humanize____humanize_seconds_envObject *)cpy_r_r0)->___mypyc_temp__5 = cpy_r_r9;
    cpy_r_r11 = 1;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_humanize_seconds", -1, CPyStatic_humanize___globals);
        goto CPyL44;
    }
CPyL13: ;
    cpy_r_r12 = ((faster_eth_utils___humanize____humanize_seconds_envObject *)cpy_r_r0)->___mypyc_temp__5;
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AttributeError("faster_eth_utils/humanize.py", "_humanize_seconds", "_humanize_seconds_env", "__mypyc_temp__5", 74, CPyStatic_humanize___globals);
        goto CPyL44;
    }
    CPy_INCREF(cpy_r_r12);
CPyL14: ;
    cpy_r_r13 = PyIter_Next(cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    if (cpy_r_r13 == NULL) goto CPyL35;
    PyObject *__tmp79;
    if (unlikely(!(PyTuple_Check(cpy_r_r13) && PyTuple_GET_SIZE(cpy_r_r13) == 2))) {
        __tmp79 = NULL;
        goto __LL80;
    }
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r13, 0))))
        __tmp79 = PyTuple_GET_ITEM(cpy_r_r13, 0);
    else {
        __tmp79 = NULL;
    }
    if (__tmp79 == NULL) goto __LL80;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r13, 1))))
        __tmp79 = PyTuple_GET_ITEM(cpy_r_r13, 1);
    else {
        __tmp79 = NULL;
    }
    if (__tmp79 == NULL) goto __LL80;
    __tmp79 = cpy_r_r13;
__LL80: ;
    if (unlikely(__tmp79 == NULL)) {
        CPy_TypeError("tuple[int, str]", cpy_r_r13); cpy_r_r14 = (tuple_T2IO) { CPY_INT_TAG, NULL };
    } else {
        PyObject *__tmp81 = PyTuple_GET_ITEM(cpy_r_r13, 0);
        CPyTagged __tmp82;
        if (likely(PyLong_Check(__tmp81)))
            __tmp82 = CPyTagged_FromObject(__tmp81);
        else {
            CPy_TypeError("int", __tmp81); __tmp82 = CPY_INT_TAG;
        }
        cpy_r_r14.f0 = __tmp82;
        PyObject *__tmp83 = PyTuple_GET_ITEM(cpy_r_r13, 1);
        CPy_INCREF(__tmp83);
        PyObject *__tmp84;
        if (likely(PyUnicode_Check(__tmp83)))
            __tmp84 = __tmp83;
        else {
            CPy_TypeError("str", __tmp83); 
            __tmp84 = NULL;
        }
        cpy_r_r14.f1 = __tmp84;
    }
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14.f0 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_humanize_seconds", 74, CPyStatic_humanize___globals);
        goto CPyL44;
    }
    cpy_r_r15 = cpy_r_r14.f0;
    CPyTagged_INCREF(cpy_r_r15);
    if (((faster_eth_utils___humanize____humanize_seconds_envObject *)cpy_r_r0)->_duration != CPY_INT_TAG) {
        CPyTagged_DECREF(((faster_eth_utils___humanize____humanize_seconds_envObject *)cpy_r_r0)->_duration);
    }
    ((faster_eth_utils___humanize____humanize_seconds_envObject *)cpy_r_r0)->_duration = cpy_r_r15;
    cpy_r_r16 = 1;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_humanize_seconds", 74, CPyStatic_humanize___globals);
        goto CPyL48;
    }
    cpy_r_r17 = cpy_r_r14.f1;
    CPy_INCREF(cpy_r_r17);
    CPyTagged_DECREF(cpy_r_r14.f0);
    CPy_DECREF(cpy_r_r14.f1);
    if (((faster_eth_utils___humanize____humanize_seconds_envObject *)cpy_r_r0)->_unit != NULL) {
        CPy_DECREF(((faster_eth_utils___humanize____humanize_seconds_envObject *)cpy_r_r0)->_unit);
    }
    ((faster_eth_utils___humanize____humanize_seconds_envObject *)cpy_r_r0)->_unit = cpy_r_r17;
    cpy_r_r18 = 1;
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_humanize_seconds", 74, CPyStatic_humanize___globals);
        goto CPyL44;
    }
    cpy_r_r19 = ((faster_eth_utils___humanize____humanize_seconds_envObject *)cpy_r_r0)->_remainder;
    if (unlikely(cpy_r_r19 == CPY_INT_TAG)) {
        CPy_AttributeError("faster_eth_utils/humanize.py", "_humanize_seconds", "_humanize_seconds_env", "remainder", 75, CPyStatic_humanize___globals);
        goto CPyL44;
    }
    CPyTagged_INCREF(cpy_r_r19);
CPyL19: ;
    cpy_r_r20 = cpy_r_r19 != 0;
    CPyTagged_DECREF(cpy_r_r19);
    if (!cpy_r_r20) goto CPyL36;
    cpy_r_r21 = ((faster_eth_utils___humanize____humanize_seconds_envObject *)cpy_r_r0)->_remainder;
    if (unlikely(cpy_r_r21 == CPY_INT_TAG)) {
        CPy_AttributeError("faster_eth_utils/humanize.py", "_humanize_seconds", "_humanize_seconds_env", "remainder", 78, CPyStatic_humanize___globals);
        goto CPyL44;
    }
    CPyTagged_INCREF(cpy_r_r21);
CPyL21: ;
    cpy_r_r22 = ((faster_eth_utils___humanize____humanize_seconds_envObject *)cpy_r_r0)->_duration;
    if (unlikely(cpy_r_r22 == CPY_INT_TAG)) {
        CPy_AttributeError("faster_eth_utils/humanize.py", "_humanize_seconds", "_humanize_seconds_env", "duration", 78, CPyStatic_humanize___globals);
        goto CPyL49;
    }
    CPyTagged_INCREF(cpy_r_r22);
CPyL22: ;
    cpy_r_r23 = CPyTagged_FloorDivide(cpy_r_r21, cpy_r_r22);
    CPyTagged_DECREF(cpy_r_r21);
    CPyTagged_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_humanize_seconds", 78, CPyStatic_humanize___globals);
        goto CPyL44;
    }
    if (((faster_eth_utils___humanize____humanize_seconds_envObject *)cpy_r_r0)->_num != CPY_INT_TAG) {
        CPyTagged_DECREF(((faster_eth_utils___humanize____humanize_seconds_envObject *)cpy_r_r0)->_num);
    }
    ((faster_eth_utils___humanize____humanize_seconds_envObject *)cpy_r_r0)->_num = cpy_r_r23;
    cpy_r_r24 = 1;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_humanize_seconds", 78, CPyStatic_humanize___globals);
        goto CPyL44;
    }
    cpy_r_r25 = ((faster_eth_utils___humanize____humanize_seconds_envObject *)cpy_r_r0)->_num;
    if (unlikely(cpy_r_r25 == CPY_INT_TAG)) {
        CPy_AttributeError("faster_eth_utils/humanize.py", "_humanize_seconds", "_humanize_seconds_env", "num", 79, CPyStatic_humanize___globals);
        goto CPyL44;
    }
    CPyTagged_INCREF(cpy_r_r25);
CPyL25: ;
    cpy_r_r26 = ((faster_eth_utils___humanize____humanize_seconds_envObject *)cpy_r_r0)->_unit;
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AttributeError("faster_eth_utils/humanize.py", "_humanize_seconds", "_humanize_seconds_env", "unit", 79, CPyStatic_humanize___globals);
        goto CPyL50;
    }
    CPy_INCREF(cpy_r_r26);
CPyL26: ;
    cpy_r_r27.f0 = cpy_r_r25;
    cpy_r_r27.f1 = cpy_r_r26;
    cpy_r_r28 = PyTuple_New(2);
    if (unlikely(cpy_r_r28 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp85 = CPyTagged_StealAsObject(cpy_r_r27.f0);
    PyTuple_SET_ITEM(cpy_r_r28, 0, __tmp85);
    PyObject *__tmp86 = cpy_r_r27.f1;
    PyTuple_SET_ITEM(cpy_r_r28, 1, __tmp86);
    if (((faster_eth_utils___humanize____humanize_seconds_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((faster_eth_utils___humanize____humanize_seconds_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((faster_eth_utils___humanize____humanize_seconds_envObject *)cpy_r_r0)->___mypyc_next_label__ = 2;
    cpy_r_r29 = 1;
    CPy_DECREF_NO_IMM(cpy_r_r0);
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_humanize_seconds", 79, CPyStatic_humanize___globals);
        goto CPyL51;
    }
    return cpy_r_r28;
CPyL28: ;
    cpy_r_r30 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r31 = cpy_r_type != cpy_r_r30;
    if (cpy_r_r31) {
        goto CPyL52;
    } else
        goto CPyL31;
CPyL29: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_humanize_seconds", 79, CPyStatic_humanize___globals);
        goto CPyL43;
    }
    CPy_Unreachable();
CPyL31: ;
    cpy_r_r32 = ((faster_eth_utils___humanize____humanize_seconds_envObject *)cpy_r_r0)->_remainder;
    if (unlikely(cpy_r_r32 == CPY_INT_TAG)) {
        CPy_AttributeError("faster_eth_utils/humanize.py", "_humanize_seconds", "_humanize_seconds_env", "remainder", 81, CPyStatic_humanize___globals);
        goto CPyL44;
    }
    CPyTagged_INCREF(cpy_r_r32);
CPyL32: ;
    cpy_r_r33 = ((faster_eth_utils___humanize____humanize_seconds_envObject *)cpy_r_r0)->_duration;
    if (unlikely(cpy_r_r33 == CPY_INT_TAG)) {
        CPy_AttributeError("faster_eth_utils/humanize.py", "_humanize_seconds", "_humanize_seconds_env", "duration", 81, CPyStatic_humanize___globals);
        goto CPyL53;
    }
    CPyTagged_INCREF(cpy_r_r33);
CPyL33: ;
    cpy_r_r34 = CPyTagged_Remainder(cpy_r_r32, cpy_r_r33);
    CPyTagged_DECREF(cpy_r_r32);
    CPyTagged_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r34 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_humanize_seconds", 81, CPyStatic_humanize___globals);
        goto CPyL44;
    }
    if (((faster_eth_utils___humanize____humanize_seconds_envObject *)cpy_r_r0)->_remainder != CPY_INT_TAG) {
        CPyTagged_DECREF(((faster_eth_utils___humanize____humanize_seconds_envObject *)cpy_r_r0)->_remainder);
    }
    ((faster_eth_utils___humanize____humanize_seconds_envObject *)cpy_r_r0)->_remainder = cpy_r_r34;
    cpy_r_r35 = 1;
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_humanize_seconds", 81, CPyStatic_humanize___globals);
        goto CPyL44;
    } else
        goto CPyL13;
CPyL35: ;
    cpy_r_r36 = CPy_NoErrOccurred();
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_humanize_seconds", 74, CPyStatic_humanize___globals);
        goto CPyL44;
    }
CPyL36: ;
    cpy_r_r37 = Py_None;
    if (((faster_eth_utils___humanize____humanize_seconds_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((faster_eth_utils___humanize____humanize_seconds_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((faster_eth_utils___humanize____humanize_seconds_envObject *)cpy_r_r0)->___mypyc_next_label__ = -2;
    cpy_r_r38 = 1;
    CPy_DECREF_NO_IMM(cpy_r_r0);
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_humanize_seconds", 71, CPyStatic_humanize___globals);
        goto CPyL43;
    }
    CPyGen_SetStopIterationValue(cpy_r_r37);
    if (!0) goto CPyL43;
    CPy_Unreachable();
CPyL39: ;
    cpy_r_r39 = cpy_r_r1 == 0;
    if (cpy_r_r39) goto CPyL54;
    cpy_r_r40 = cpy_r_r1 == 2;
    CPyTagged_DECREF(cpy_r_r1);
    if (cpy_r_r40) {
        goto CPyL28;
    } else
        goto CPyL55;
CPyL41: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r41 = 0;
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_humanize_seconds", 71, CPyStatic_humanize___globals);
        goto CPyL43;
    }
    CPy_Unreachable();
CPyL43: ;
    cpy_r_r42 = NULL;
    return cpy_r_r42;
CPyL44: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL43;
CPyL45: ;
    CPy_DECREF_NO_IMM(cpy_r_r0);
    goto CPyL3;
CPyL46: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL8;
CPyL47: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r9);
    goto CPyL43;
CPyL48: ;
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_r14.f0);
    CPy_DecRef(cpy_r_r14.f1);
    goto CPyL43;
CPyL49: ;
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_r21);
    goto CPyL43;
CPyL50: ;
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_r25);
    goto CPyL43;
CPyL51: ;
    CPy_DecRef(cpy_r_r28);
    goto CPyL43;
CPyL52: ;
    CPy_DECREF_NO_IMM(cpy_r_r0);
    goto CPyL29;
CPyL53: ;
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_r32);
    goto CPyL43;
CPyL54: ;
    CPyTagged_DECREF(cpy_r_r1);
    goto CPyL2;
CPyL55: ;
    CPy_DECREF_NO_IMM(cpy_r_r0);
    goto CPyL41;
}

PyObject *CPyPy_humanize____humanize_seconds_gen_____mypyc_generator_helper__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"type", "value", "traceback", "arg", 0};
    static CPyArg_Parser parser = {"OOOO:__mypyc_generator_helper__", kwlist, 0};
    PyObject *obj_type;
    PyObject *obj_value;
    PyObject *obj_traceback;
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_type, &obj_value, &obj_traceback, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_type = obj_type;
    PyObject *arg_value = obj_value;
    PyObject *arg_traceback = obj_traceback;
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_humanize____humanize_seconds_gen_____mypyc_generator_helper__(arg___mypyc_self__, arg_type, arg_value, arg_traceback, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("faster_eth_utils/humanize.py", "_humanize_seconds", 71, CPyStatic_humanize___globals);
    return NULL;
}

PyObject *CPyDef_humanize____humanize_seconds_gen_____next__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_humanize____humanize_seconds_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_r0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_humanize____humanize_seconds_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__next__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_humanize____humanize_seconds_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_eth_utils.humanize._humanize_seconds_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_humanize____humanize_seconds_gen_____next__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_eth_utils/humanize.py", "__next__", -1, CPyStatic_humanize___globals);
    return NULL;
}

PyObject *CPyDef_humanize____humanize_seconds_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_humanize____humanize_seconds_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_arg);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_humanize____humanize_seconds_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"arg", 0};
    static CPyArg_Parser parser = {"O:send", kwlist, 0};
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_humanize____humanize_seconds_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_eth_utils.humanize._humanize_seconds_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_humanize____humanize_seconds_gen___send(arg___mypyc_self__, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("faster_eth_utils/humanize.py", "send", -1, CPyStatic_humanize___globals);
    return NULL;
}

PyObject *CPyDef_humanize____humanize_seconds_gen_____iter__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF_NO_IMM(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_humanize____humanize_seconds_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__iter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_humanize____humanize_seconds_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_eth_utils.humanize._humanize_seconds_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_humanize____humanize_seconds_gen_____iter__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_eth_utils/humanize.py", "__iter__", -1, CPyStatic_humanize___globals);
    return NULL;
}

PyObject *CPyDef_humanize____humanize_seconds_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    if (cpy_r_value != NULL) goto CPyL7;
    CPy_INCREF(cpy_r_r0);
    cpy_r_value = cpy_r_r0;
CPyL2: ;
    if (cpy_r_traceback != NULL) goto CPyL8;
    CPy_INCREF(cpy_r_r0);
    cpy_r_traceback = cpy_r_r0;
CPyL4: ;
    cpy_r_r1 = CPyDef_humanize____humanize_seconds_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_type, cpy_r_value, cpy_r_traceback, cpy_r_r0);
    CPy_DECREF(cpy_r_value);
    CPy_DECREF(cpy_r_traceback);
    if (cpy_r_r1 == NULL) goto CPyL6;
    return cpy_r_r1;
CPyL6: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
CPyL7: ;
    CPy_INCREF(cpy_r_value);
    goto CPyL2;
CPyL8: ;
    CPy_INCREF(cpy_r_traceback);
    goto CPyL4;
}

PyObject *CPyPy_humanize____humanize_seconds_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"type", "value", "traceback", 0};
    static CPyArg_Parser parser = {"O|OO:throw", kwlist, 0};
    PyObject *obj_type;
    PyObject *obj_value = NULL;
    PyObject *obj_traceback = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_type, &obj_value, &obj_traceback)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_humanize____humanize_seconds_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_eth_utils.humanize._humanize_seconds_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_type = obj_type;
    PyObject *arg_value;
    if (obj_value == NULL) {
        arg_value = NULL;
    } else {
        arg_value = obj_value; 
    }
    PyObject *arg_traceback;
    if (obj_traceback == NULL) {
        arg_traceback = NULL;
    } else {
        arg_traceback = obj_traceback; 
    }
    PyObject *retval = CPyDef_humanize____humanize_seconds_gen___throw(arg___mypyc_self__, arg_type, arg_value, arg_traceback);
    return retval;
fail: ;
    CPy_AddTraceback("faster_eth_utils/humanize.py", "throw", -1, CPyStatic_humanize___globals);
    return NULL;
}

PyObject *CPyDef_humanize____humanize_seconds_gen___close(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    tuple_T3OOO cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    tuple_T2OO cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[189]; /* 'GeneratorExit' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (cpy_r_r2 == NULL) goto CPyL3;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = CPyDef_humanize____humanize_seconds_gen___throw(cpy_r___mypyc_self__, cpy_r_r2, cpy_r_r3, cpy_r_r4);
    if (cpy_r_r5 != NULL) goto CPyL11;
CPyL3: ;
    cpy_r_r6 = CPy_CatchError();
    cpy_r_r7 = CPyModule_builtins;
    cpy_r_r8 = CPyStatics[190]; /* 'StopIteration' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_r7, cpy_r_r8);
    if (cpy_r_r9 == NULL) goto CPyL12;
    cpy_r_r10.f0 = cpy_r_r2;
    cpy_r_r10.f1 = cpy_r_r9;
    cpy_r_r11 = PyTuple_New(2);
    if (unlikely(cpy_r_r11 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp87 = cpy_r_r10.f0;
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp87);
    PyObject *__tmp88 = cpy_r_r10.f1;
    PyTuple_SET_ITEM(cpy_r_r11, 1, __tmp88);
    cpy_r_r12 = CPy_ExceptionMatches(cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    if (!cpy_r_r12) goto CPyL13;
    CPy_RestoreExcInfo(cpy_r_r6);
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    cpy_r_r13 = (PyObject *)&_Py_NoneStruct;
    CPy_INCREF(cpy_r_r13);
    return cpy_r_r13;
CPyL6: ;
    CPy_Reraise();
    if (!0) goto CPyL10;
    CPy_Unreachable();
CPyL8: ;
    PyErr_SetString(PyExc_RuntimeError, "generator ignored GeneratorExit");
    cpy_r_r14 = 0;
    if (!cpy_r_r14) goto CPyL10;
    CPy_Unreachable();
CPyL10: ;
    cpy_r_r15 = NULL;
    return cpy_r_r15;
CPyL11: ;
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r5);
    goto CPyL8;
CPyL12: ;
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    goto CPyL10;
CPyL13: ;
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    goto CPyL6;
}

PyObject *CPyPy_humanize____humanize_seconds_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":close", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_humanize____humanize_seconds_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_eth_utils.humanize._humanize_seconds_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_humanize____humanize_seconds_gen___close(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_eth_utils/humanize.py", "close", -1, CPyStatic_humanize___globals);
    return NULL;
}

PyObject *CPyDef_humanize____humanize_seconds(CPyTagged cpy_r_seconds) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyDef_humanize____humanize_seconds_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_humanize_seconds", 71, CPyStatic_humanize___globals);
        goto CPyL6;
    }
    CPyTagged_INCREF(cpy_r_seconds);
    if (((faster_eth_utils___humanize____humanize_seconds_envObject *)cpy_r_r0)->_seconds != CPY_INT_TAG) {
        CPyTagged_DECREF(((faster_eth_utils___humanize____humanize_seconds_envObject *)cpy_r_r0)->_seconds);
    }
    ((faster_eth_utils___humanize____humanize_seconds_envObject *)cpy_r_r0)->_seconds = cpy_r_seconds;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_humanize_seconds", 71, CPyStatic_humanize___globals);
        goto CPyL7;
    }
    cpy_r_r2 = CPyDef_humanize____humanize_seconds_gen();
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_humanize_seconds", 71, CPyStatic_humanize___globals);
        goto CPyL7;
    }
    CPy_INCREF_NO_IMM(cpy_r_r0);
    if (((faster_eth_utils___humanize____humanize_seconds_genObject *)cpy_r_r2)->___mypyc_env__ != NULL) {
        CPy_DECREF_NO_IMM(((faster_eth_utils___humanize____humanize_seconds_genObject *)cpy_r_r2)->___mypyc_env__);
    }
    ((faster_eth_utils___humanize____humanize_seconds_genObject *)cpy_r_r2)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_humanize_seconds", 71, CPyStatic_humanize___globals);
        goto CPyL8;
    }
    if (((faster_eth_utils___humanize____humanize_seconds_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((faster_eth_utils___humanize____humanize_seconds_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((faster_eth_utils___humanize____humanize_seconds_envObject *)cpy_r_r0)->___mypyc_next_label__ = 0;
    cpy_r_r4 = 1;
    CPy_DECREF_NO_IMM(cpy_r_r0);
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_humanize_seconds", 71, CPyStatic_humanize___globals);
        goto CPyL9;
    }
    return cpy_r_r2;
CPyL6: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
CPyL7: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL6;
CPyL8: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    goto CPyL6;
CPyL9: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL6;
}

PyObject *CPyPy_humanize____humanize_seconds(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"seconds", 0};
    static CPyArg_Parser parser = {"O:_humanize_seconds", kwlist, 0};
    PyObject *obj_seconds;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_seconds)) {
        return NULL;
    }
    CPyTagged arg_seconds;
    if (likely(PyLong_Check(obj_seconds)))
        arg_seconds = CPyTagged_BorrowFromObject(obj_seconds);
    else {
        CPy_TypeError("int", obj_seconds); goto fail;
    }
    PyObject *retval = CPyDef_humanize____humanize_seconds(arg_seconds);
    return retval;
fail: ;
    CPy_AddTraceback("faster_eth_utils/humanize.py", "_humanize_seconds", 71, CPyStatic_humanize___globals);
    return NULL;
}

PyObject *CPyDef_humanize___humanize_bytes(PyObject *cpy_r_value) {
    CPyPtr cpy_r_r0;
    int64_t cpy_r_r1;
    CPyTagged cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject **cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject **cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    cpy_r_r0 = (CPyPtr)&((PyVarObject *)cpy_r_value)->ob_size;
    cpy_r_r1 = *(int64_t *)cpy_r_r0;
    cpy_r_r2 = cpy_r_r1 << 1;
    cpy_r_r3 = (Py_ssize_t)cpy_r_r2 <= (Py_ssize_t)10;
    if (!cpy_r_r3) goto CPyL4;
    cpy_r_r4 = CPyStatics[67]; /* 'hex' */
    PyObject *cpy_r_r5[1] = {cpy_r_value};
    cpy_r_r6 = (PyObject **)&cpy_r_r5;
    cpy_r_r7 = PyObject_VectorcallMethod(cpy_r_r4, cpy_r_r6, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "humanize_bytes", 89, CPyStatic_humanize___globals);
        goto CPyL12;
    }
    if (likely(PyUnicode_Check(cpy_r_r7)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/humanize.py", "humanize_bytes", 89, CPyStatic_humanize___globals, "str", cpy_r_r7);
        goto CPyL12;
    }
    return cpy_r_r8;
CPyL4: ;
    cpy_r_r9 = CPyStatics[67]; /* 'hex' */
    PyObject *cpy_r_r10[1] = {cpy_r_value};
    cpy_r_r11 = (PyObject **)&cpy_r_r10;
    cpy_r_r12 = PyObject_VectorcallMethod(cpy_r_r9, cpy_r_r11, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "humanize_bytes", 90, CPyStatic_humanize___globals);
        goto CPyL12;
    }
    if (likely(PyUnicode_Check(cpy_r_r12)))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/humanize.py", "humanize_bytes", 90, CPyStatic_humanize___globals, "str", cpy_r_r12);
        goto CPyL12;
    }
    cpy_r_r14 = CPyStr_GetSlice(cpy_r_r13, 0, 8);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "humanize_bytes", 91, CPyStatic_humanize___globals);
        goto CPyL13;
    }
    if (likely(PyUnicode_Check(cpy_r_r14)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/humanize.py", "humanize_bytes", 91, CPyStatic_humanize___globals, "str", cpy_r_r14);
        goto CPyL13;
    }
    cpy_r_r16 = CPyStr_GetSlice(cpy_r_r13, -8, 9223372036854775806LL);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "humanize_bytes", 92, CPyStatic_humanize___globals);
        goto CPyL14;
    }
    if (likely(PyUnicode_Check(cpy_r_r16)))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/humanize.py", "humanize_bytes", 92, CPyStatic_humanize___globals, "str", cpy_r_r16);
        goto CPyL14;
    }
    cpy_r_r18 = CPyStatics[191]; /* '..' */
    cpy_r_r19 = CPyStr_Build(3, cpy_r_r15, cpy_r_r18, cpy_r_r17);
    CPy_DECREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "humanize_bytes", 93, CPyStatic_humanize___globals);
        goto CPyL12;
    }
    return cpy_r_r19;
CPyL12: ;
    cpy_r_r20 = NULL;
    return cpy_r_r20;
CPyL13: ;
    CPy_DecRef(cpy_r_r13);
    goto CPyL12;
CPyL14: ;
    CPy_DecRef(cpy_r_r15);
    goto CPyL12;
}

PyObject *CPyPy_humanize___humanize_bytes(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"value", 0};
    static CPyArg_Parser parser = {"O:humanize_bytes", kwlist, 0};
    PyObject *obj_value;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_value)) {
        return NULL;
    }
    PyObject *arg_value;
    if (likely(PyBytes_Check(obj_value) || PyByteArray_Check(obj_value)))
        arg_value = obj_value;
    else {
        CPy_TypeError("bytes", obj_value); 
        goto fail;
    }
    PyObject *retval = CPyDef_humanize___humanize_bytes(arg_value);
    return retval;
fail: ;
    CPy_AddTraceback("faster_eth_utils/humanize.py", "humanize_bytes", 87, CPyStatic_humanize___globals);
    return NULL;
}

PyObject *CPyDef_humanize___humanize_hash(PyObject *cpy_r_value) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPy_INCREF(cpy_r_value);
    if (likely(PyBytes_Check(cpy_r_value) || PyByteArray_Check(cpy_r_value)))
        cpy_r_r0 = cpy_r_value;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/humanize.py", "humanize_hash", 97, CPyStatic_humanize___globals, "bytes", cpy_r_value);
        goto CPyL3;
    }
    cpy_r_r1 = CPyDef_humanize___humanize_bytes(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "humanize_hash", 97, CPyStatic_humanize___globals);
        goto CPyL3;
    }
    return cpy_r_r1;
CPyL3: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_humanize___humanize_hash(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"value", 0};
    static CPyArg_Parser parser = {"O:humanize_hash", kwlist, 0};
    PyObject *obj_value;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_value)) {
        return NULL;
    }
    PyObject *arg_value = obj_value;
    PyObject *retval = CPyDef_humanize___humanize_hash(arg_value);
    return retval;
fail: ;
    CPy_AddTraceback("faster_eth_utils/humanize.py", "humanize_hash", 96, CPyStatic_humanize___globals);
    return NULL;
}

PyObject *CPyDef_humanize___humanize_ipfs_uri(PyObject *cpy_r_uri) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject **cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject **cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    cpy_r_r0 = CPyDef_humanize___is_ipfs_uri(cpy_r_uri);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "humanize_ipfs_uri", 101, CPyStatic_humanize___globals);
        goto CPyL20;
    }
    if (cpy_r_r0) goto CPyL8;
    cpy_r_r1 = PyObject_Str(cpy_r_uri);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "humanize_ipfs_uri", 103, CPyStatic_humanize___globals);
        goto CPyL20;
    }
    cpy_r_r2 = CPyStatics[192]; /* (' does not look like a valid IPFS uri. Currently, only '
                                   'CIDv0 hash schemes are supported.') */
    cpy_r_r3 = CPyStr_Build(2, cpy_r_r1, cpy_r_r2);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "humanize_ipfs_uri", 103, CPyStatic_humanize___globals);
        goto CPyL20;
    }
    cpy_r_r4 = CPyModule_builtins;
    cpy_r_r5 = CPyStatics[6]; /* 'TypeError' */
    cpy_r_r6 = CPyObject_GetAttr(cpy_r_r4, cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "humanize_ipfs_uri", 102, CPyStatic_humanize___globals);
        goto CPyL21;
    }
    PyObject *cpy_r_r7[1] = {cpy_r_r3};
    cpy_r_r8 = (PyObject **)&cpy_r_r7;
    cpy_r_r9 = PyObject_Vectorcall(cpy_r_r6, cpy_r_r8, 1, 0);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "humanize_ipfs_uri", 102, CPyStatic_humanize___globals);
        goto CPyL21;
    }
    CPy_DECREF(cpy_r_r3);
    CPy_Raise(cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "humanize_ipfs_uri", 102, CPyStatic_humanize___globals);
        goto CPyL20;
    }
    CPy_Unreachable();
CPyL8: ;
    cpy_r_r10 = CPyStatic_humanize___globals;
    cpy_r_r11 = CPyStatics[193]; /* 'parse' */
    cpy_r_r12 = CPyDict_GetItem(cpy_r_r10, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "humanize_ipfs_uri", 107, CPyStatic_humanize___globals);
        goto CPyL20;
    }
    cpy_r_r13 = CPyStatics[194]; /* 'urlparse' */
    cpy_r_r14 = CPyObject_GetAttr(cpy_r_r12, cpy_r_r13);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "humanize_ipfs_uri", 107, CPyStatic_humanize___globals);
        goto CPyL20;
    }
    PyObject *cpy_r_r15[1] = {cpy_r_uri};
    cpy_r_r16 = (PyObject **)&cpy_r_r15;
    cpy_r_r17 = PyObject_Vectorcall(cpy_r_r14, cpy_r_r16, 1, 0);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "humanize_ipfs_uri", 107, CPyStatic_humanize___globals);
        goto CPyL20;
    }
    if (likely(PyTuple_Check(cpy_r_r17)))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/humanize.py", "humanize_ipfs_uri", 107, CPyStatic_humanize___globals, "tuple", cpy_r_r17);
        goto CPyL20;
    }
    cpy_r_r19 = CPyStatics[195]; /* 'netloc' */
    cpy_r_r20 = CPyObject_GetAttr(cpy_r_r18, cpy_r_r19);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "humanize_ipfs_uri", 108, CPyStatic_humanize___globals);
        goto CPyL20;
    }
    if (likely(PyUnicode_Check(cpy_r_r20)))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/humanize.py", "humanize_ipfs_uri", 108, CPyStatic_humanize___globals, "str", cpy_r_r20);
        goto CPyL20;
    }
    cpy_r_r22 = CPyStr_GetSlice(cpy_r_r21, 0, 8);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "humanize_ipfs_uri", 109, CPyStatic_humanize___globals);
        goto CPyL22;
    }
    if (likely(PyUnicode_Check(cpy_r_r22)))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/humanize.py", "humanize_ipfs_uri", 109, CPyStatic_humanize___globals, "str", cpy_r_r22);
        goto CPyL22;
    }
    cpy_r_r24 = CPyStr_GetSlice(cpy_r_r21, -8, 9223372036854775806LL);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "humanize_ipfs_uri", 110, CPyStatic_humanize___globals);
        goto CPyL23;
    }
    if (likely(PyUnicode_Check(cpy_r_r24)))
        cpy_r_r25 = cpy_r_r24;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/humanize.py", "humanize_ipfs_uri", 110, CPyStatic_humanize___globals, "str", cpy_r_r24);
        goto CPyL23;
    }
    cpy_r_r26 = CPyStatics[196]; /* 'ipfs://' */
    cpy_r_r27 = CPyStatics[191]; /* '..' */
    cpy_r_r28 = CPyStr_Build(4, cpy_r_r26, cpy_r_r23, cpy_r_r27, cpy_r_r25);
    CPy_DECREF(cpy_r_r23);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "humanize_ipfs_uri", 111, CPyStatic_humanize___globals);
        goto CPyL20;
    }
    return cpy_r_r28;
CPyL20: ;
    cpy_r_r29 = NULL;
    return cpy_r_r29;
CPyL21: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL20;
CPyL22: ;
    CPy_DecRef(cpy_r_r21);
    goto CPyL20;
CPyL23: ;
    CPy_DecRef(cpy_r_r23);
    goto CPyL20;
}

PyObject *CPyPy_humanize___humanize_ipfs_uri(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"uri", 0};
    static CPyArg_Parser parser = {"O:humanize_ipfs_uri", kwlist, 0};
    PyObject *obj_uri;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_uri)) {
        return NULL;
    }
    PyObject *arg_uri = obj_uri;
    PyObject *retval = CPyDef_humanize___humanize_ipfs_uri(arg_uri);
    return retval;
fail: ;
    CPy_AddTraceback("faster_eth_utils/humanize.py", "humanize_ipfs_uri", 100, CPyStatic_humanize___globals);
    return NULL;
}

char CPyDef_humanize___is_ipfs_uri(PyObject *cpy_r_value) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject **cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    int32_t cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    cpy_r_r0 = (PyObject *)&PyUnicode_Type;
    cpy_r_r1 = PyObject_IsInstance(cpy_r_value, cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "is_ipfs_uri", 115, CPyStatic_humanize___globals);
        goto CPyL22;
    }
    cpy_r_r3 = cpy_r_r1;
    if (cpy_r_r3) goto CPyL3;
    return 0;
CPyL3: ;
    CPy_INCREF(cpy_r_value);
    if (likely(PyUnicode_Check(cpy_r_value)))
        cpy_r_r4 = cpy_r_value;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/humanize.py", "is_ipfs_uri", 118, CPyStatic_humanize___globals, "str", cpy_r_value);
        goto CPyL22;
    }
    cpy_r_r5 = CPyStatic_humanize___globals;
    cpy_r_r6 = CPyStatics[193]; /* 'parse' */
    cpy_r_r7 = CPyDict_GetItem(cpy_r_r5, cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "is_ipfs_uri", 118, CPyStatic_humanize___globals);
        goto CPyL23;
    }
    cpy_r_r8 = CPyStatics[194]; /* 'urlparse' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_r7, cpy_r_r8);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "is_ipfs_uri", 118, CPyStatic_humanize___globals);
        goto CPyL23;
    }
    PyObject *cpy_r_r10[1] = {cpy_r_r4};
    cpy_r_r11 = (PyObject **)&cpy_r_r10;
    cpy_r_r12 = PyObject_Vectorcall(cpy_r_r9, cpy_r_r11, 1, 0);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "is_ipfs_uri", 118, CPyStatic_humanize___globals);
        goto CPyL23;
    }
    CPy_DECREF(cpy_r_r4);
    if (likely(PyTuple_Check(cpy_r_r12)))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/humanize.py", "is_ipfs_uri", 118, CPyStatic_humanize___globals, "tuple", cpy_r_r12);
        goto CPyL22;
    }
    cpy_r_r14 = CPyStatics[197]; /* 'scheme' */
    cpy_r_r15 = CPyObject_GetAttr(cpy_r_r13, cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "is_ipfs_uri", 119, CPyStatic_humanize___globals);
        goto CPyL24;
    }
    if (likely(PyUnicode_Check(cpy_r_r15)))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/humanize.py", "is_ipfs_uri", 119, CPyStatic_humanize___globals, "str", cpy_r_r15);
        goto CPyL24;
    }
    cpy_r_r17 = CPyStatics[198]; /* 'ipfs' */
    cpy_r_r18 = PyUnicode_Compare(cpy_r_r16, cpy_r_r17);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r19 = cpy_r_r18 == -1;
    if (!cpy_r_r19) goto CPyL13;
    cpy_r_r20 = PyErr_Occurred();
    cpy_r_r21 = cpy_r_r20 != NULL;
    if (!cpy_r_r21) goto CPyL13;
    cpy_r_r22 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "is_ipfs_uri", 119, CPyStatic_humanize___globals);
        goto CPyL24;
    }
CPyL13: ;
    cpy_r_r23 = cpy_r_r18 != 0;
    if (cpy_r_r23) goto CPyL25;
    cpy_r_r24 = CPyStatics[195]; /* 'netloc' */
    cpy_r_r25 = CPyObject_GetAttr(cpy_r_r13, cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "is_ipfs_uri", 119, CPyStatic_humanize___globals);
        goto CPyL24;
    }
    if (likely(PyUnicode_Check(cpy_r_r25)))
        cpy_r_r26 = cpy_r_r25;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/humanize.py", "is_ipfs_uri", 119, CPyStatic_humanize___globals, "str", cpy_r_r25);
        goto CPyL24;
    }
    cpy_r_r27 = CPyStr_IsTrue(cpy_r_r26);
    CPy_DECREF(cpy_r_r26);
    if (cpy_r_r27) {
        goto CPyL18;
    } else
        goto CPyL25;
CPyL17: ;
    return 0;
CPyL18: ;
    cpy_r_r28 = CPyStatics[195]; /* 'netloc' */
    cpy_r_r29 = CPyObject_GetAttr(cpy_r_r13, cpy_r_r28);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "is_ipfs_uri", 122, CPyStatic_humanize___globals);
        goto CPyL22;
    }
    if (likely(PyUnicode_Check(cpy_r_r29)))
        cpy_r_r30 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/humanize.py", "is_ipfs_uri", 122, CPyStatic_humanize___globals, "str", cpy_r_r29);
        goto CPyL22;
    }
    cpy_r_r31 = CPyDef_humanize____is_CIDv0_ipfs_hash(cpy_r_r30);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r31 == 2)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "is_ipfs_uri", 122, CPyStatic_humanize___globals);
        goto CPyL22;
    }
    return cpy_r_r31;
CPyL22: ;
    cpy_r_r32 = 2;
    return cpy_r_r32;
CPyL23: ;
    CPy_DecRef(cpy_r_r4);
    goto CPyL22;
CPyL24: ;
    CPy_DecRef(cpy_r_r13);
    goto CPyL22;
CPyL25: ;
    CPy_DECREF(cpy_r_r13);
    goto CPyL17;
}

PyObject *CPyPy_humanize___is_ipfs_uri(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"value", 0};
    static CPyArg_Parser parser = {"O:is_ipfs_uri", kwlist, 0};
    PyObject *obj_value;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_value)) {
        return NULL;
    }
    PyObject *arg_value = obj_value;
    char retval = CPyDef_humanize___is_ipfs_uri(arg_value);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("faster_eth_utils/humanize.py", "is_ipfs_uri", 114, CPyStatic_humanize___globals);
    return NULL;
}

char CPyDef_humanize____is_CIDv0_ipfs_hash(PyObject *cpy_r_ipfs_hash) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    int64_t cpy_r_r3;
    char cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    cpy_r_r0 = CPyStatics[199]; /* 'Qm' */
    cpy_r_r1 = CPyStr_Startswith(cpy_r_ipfs_hash, cpy_r_r0);
    cpy_r_r2 = cpy_r_r1;
    if (!cpy_r_r2) goto CPyL4;
    cpy_r_r3 = CPyStr_Size_size_t(cpy_r_ipfs_hash);
    cpy_r_r4 = cpy_r_r3 >= 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_is_CIDv0_ipfs_hash", 126, CPyStatic_humanize___globals);
        goto CPyL5;
    }
    cpy_r_r5 = cpy_r_r3 << 1;
    cpy_r_r6 = cpy_r_r5 == 92;
    if (!cpy_r_r6) goto CPyL4;
    return 1;
CPyL4: ;
    return 0;
CPyL5: ;
    cpy_r_r7 = 2;
    return cpy_r_r7;
}

PyObject *CPyPy_humanize____is_CIDv0_ipfs_hash(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"ipfs_hash", 0};
    static CPyArg_Parser parser = {"O:_is_CIDv0_ipfs_hash", kwlist, 0};
    PyObject *obj_ipfs_hash;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_ipfs_hash)) {
        return NULL;
    }
    PyObject *arg_ipfs_hash;
    if (likely(PyUnicode_Check(obj_ipfs_hash)))
        arg_ipfs_hash = obj_ipfs_hash;
    else {
        CPy_TypeError("str", obj_ipfs_hash); 
        goto fail;
    }
    char retval = CPyDef_humanize____is_CIDv0_ipfs_hash(arg_ipfs_hash);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("faster_eth_utils/humanize.py", "_is_CIDv0_ipfs_hash", 125, CPyStatic_humanize___globals);
    return NULL;
}

PyObject *CPyDef_humanize____find_breakpoints_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject **cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject **cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    tuple_T2IO cpy_r_r28;
    CPyTagged cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    int32_t cpy_r_r46;
    char cpy_r_r47;
    char cpy_r_r48;
    CPyTagged cpy_r_r49;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    char cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    CPyPtr cpy_r_r56;
    int64_t cpy_r_r57;
    CPyTagged cpy_r_r58;
    PyObject *cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    char cpy_r_r64;
    char cpy_r_r65;
    char cpy_r_r66;
    char cpy_r_r67;
    char cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    cpy_r_r0 = ((faster_eth_utils___humanize____find_breakpoints_genObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("faster_eth_utils/humanize.py", "_find_breakpoints", "_find_breakpoints_gen", "__mypyc_env__", 131, CPyStatic_humanize___globals);
        goto CPyL62;
    }
    CPy_INCREF_NO_IMM(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((faster_eth_utils___humanize____find_breakpoints_envObject *)cpy_r_r0)->___mypyc_next_label__;
    if (unlikely(cpy_r_r1 == CPY_INT_TAG)) {
        CPy_AttributeError("faster_eth_utils/humanize.py", "_find_breakpoints", "_find_breakpoints_env", "__mypyc_next_label__", 131, CPyStatic_humanize___globals);
        goto CPyL63;
    }
    CPyTagged_INCREF(cpy_r_r1);
    goto CPyL56;
CPyL2: ;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_type != cpy_r_r2;
    if (cpy_r_r3) {
        goto CPyL64;
    } else
        goto CPyL5;
CPyL3: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_find_breakpoints", 131, CPyStatic_humanize___globals);
        goto CPyL62;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r4 = CPyStatics[265]; /* 0 */
    if (((faster_eth_utils___humanize____find_breakpoints_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((faster_eth_utils___humanize____find_breakpoints_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((faster_eth_utils___humanize____find_breakpoints_envObject *)cpy_r_r0)->___mypyc_next_label__ = 2;
    cpy_r_r5 = 1;
    CPy_DECREF_NO_IMM(cpy_r_r0);
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_find_breakpoints", 132, CPyStatic_humanize___globals);
        goto CPyL62;
    }
    return cpy_r_r4;
CPyL7: ;
    cpy_r_r6 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r7 = cpy_r_type != cpy_r_r6;
    if (cpy_r_r7) {
        goto CPyL65;
    } else
        goto CPyL10;
CPyL8: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_find_breakpoints", 132, CPyStatic_humanize___globals);
        goto CPyL62;
    }
    CPy_Unreachable();
CPyL10: ;
    cpy_r_r8 = ((faster_eth_utils___humanize____find_breakpoints_envObject *)cpy_r_r0)->_values;
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AttributeError("faster_eth_utils/humanize.py", "_find_breakpoints", "_find_breakpoints_env", "values", 133, CPyStatic_humanize___globals);
        goto CPyL63;
    }
    CPy_INCREF(cpy_r_r8);
CPyL11: ;
    cpy_r_r9 = CPyStatic_humanize___globals;
    cpy_r_r10 = CPyStatics[200]; /* 'sliding_window' */
    cpy_r_r11 = CPyDict_GetItem(cpy_r_r9, cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_find_breakpoints", 133, CPyStatic_humanize___globals);
        goto CPyL66;
    }
    cpy_r_r12 = CPyStatics[270]; /* 2 */
    PyObject *cpy_r_r13[2] = {cpy_r_r12, cpy_r_r8};
    cpy_r_r14 = (PyObject **)&cpy_r_r13;
    cpy_r_r15 = PyObject_Vectorcall(cpy_r_r11, cpy_r_r14, 2, 0);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_find_breakpoints", 133, CPyStatic_humanize___globals);
        goto CPyL66;
    }
    CPy_DECREF(cpy_r_r8);
    cpy_r_r16 = CPyModule_builtins;
    cpy_r_r17 = CPyStatics[201]; /* 'enumerate' */
    cpy_r_r18 = CPyObject_GetAttr(cpy_r_r16, cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_find_breakpoints", 133, CPyStatic_humanize___globals);
        goto CPyL67;
    }
    cpy_r_r19 = CPyStatics[268]; /* 1 */
    PyObject *cpy_r_r20[2] = {cpy_r_r15, cpy_r_r19};
    cpy_r_r21 = (PyObject **)&cpy_r_r20;
    cpy_r_r22 = PyObject_Vectorcall(cpy_r_r18, cpy_r_r21, 2, 0);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_find_breakpoints", 133, CPyStatic_humanize___globals);
        goto CPyL67;
    }
    CPy_DECREF(cpy_r_r15);
    cpy_r_r23 = PyObject_GetIter(cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_find_breakpoints", 133, CPyStatic_humanize___globals);
        goto CPyL68;
    }
    if (((faster_eth_utils___humanize____find_breakpoints_envObject *)cpy_r_r0)->___mypyc_temp__6 != NULL) {
        CPy_DECREF(((faster_eth_utils___humanize____find_breakpoints_envObject *)cpy_r_r0)->___mypyc_temp__6);
    }
    ((faster_eth_utils___humanize____find_breakpoints_envObject *)cpy_r_r0)->___mypyc_temp__6 = cpy_r_r22;
    cpy_r_r24 = 1;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_find_breakpoints", -1, CPyStatic_humanize___globals);
        goto CPyL69;
    }
    if (((faster_eth_utils___humanize____find_breakpoints_envObject *)cpy_r_r0)->___mypyc_temp__7 != NULL) {
        CPy_DECREF(((faster_eth_utils___humanize____find_breakpoints_envObject *)cpy_r_r0)->___mypyc_temp__7);
    }
    ((faster_eth_utils___humanize____find_breakpoints_envObject *)cpy_r_r0)->___mypyc_temp__7 = cpy_r_r23;
    cpy_r_r25 = 1;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_find_breakpoints", -1, CPyStatic_humanize___globals);
        goto CPyL63;
    }
CPyL18: ;
    cpy_r_r26 = ((faster_eth_utils___humanize____find_breakpoints_envObject *)cpy_r_r0)->___mypyc_temp__7;
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AttributeError("faster_eth_utils/humanize.py", "_find_breakpoints", "_find_breakpoints_env", "__mypyc_temp__7", 133, CPyStatic_humanize___globals);
        goto CPyL63;
    }
    CPy_INCREF(cpy_r_r26);
CPyL19: ;
    cpy_r_r27 = PyIter_Next(cpy_r_r26);
    CPy_DECREF(cpy_r_r26);
    if (cpy_r_r27 == NULL) goto CPyL46;
    PyObject *__tmp89;
    if (unlikely(!(PyTuple_Check(cpy_r_r27) && PyTuple_GET_SIZE(cpy_r_r27) == 2))) {
        __tmp89 = NULL;
        goto __LL90;
    }
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r27, 0))))
        __tmp89 = PyTuple_GET_ITEM(cpy_r_r27, 0);
    else {
        __tmp89 = NULL;
    }
    if (__tmp89 == NULL) goto __LL90;
    __tmp89 = PyTuple_GET_ITEM(cpy_r_r27, 1);
    if (__tmp89 == NULL) goto __LL90;
    __tmp89 = cpy_r_r27;
__LL90: ;
    if (unlikely(__tmp89 == NULL)) {
        CPy_TypeError("tuple[int, object]", cpy_r_r27); cpy_r_r28 = (tuple_T2IO) { CPY_INT_TAG, NULL };
    } else {
        PyObject *__tmp91 = PyTuple_GET_ITEM(cpy_r_r27, 0);
        CPyTagged __tmp92;
        if (likely(PyLong_Check(__tmp91)))
            __tmp92 = CPyTagged_FromObject(__tmp91);
        else {
            CPy_TypeError("int", __tmp91); __tmp92 = CPY_INT_TAG;
        }
        cpy_r_r28.f0 = __tmp92;
        PyObject *__tmp93 = PyTuple_GET_ITEM(cpy_r_r27, 1);
        CPy_INCREF(__tmp93);
        PyObject *__tmp94;
        __tmp94 = __tmp93;
        cpy_r_r28.f1 = __tmp94;
    }
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28.f0 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_find_breakpoints", 133, CPyStatic_humanize___globals);
        goto CPyL63;
    }
    cpy_r_r29 = cpy_r_r28.f0;
    CPyTagged_INCREF(cpy_r_r29);
    if (((faster_eth_utils___humanize____find_breakpoints_envObject *)cpy_r_r0)->_index != CPY_INT_TAG) {
        CPyTagged_DECREF(((faster_eth_utils___humanize____find_breakpoints_envObject *)cpy_r_r0)->_index);
    }
    ((faster_eth_utils___humanize____find_breakpoints_envObject *)cpy_r_r0)->_index = cpy_r_r29;
    cpy_r_r30 = 1;
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_find_breakpoints", 133, CPyStatic_humanize___globals);
        goto CPyL70;
    }
    cpy_r_r31 = cpy_r_r28.f1;
    CPy_INCREF(cpy_r_r31);
    CPyTagged_DECREF(cpy_r_r28.f0);
    CPy_DECREF(cpy_r_r28.f1);
    cpy_r_r32 = PyObject_GetIter(cpy_r_r31);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_find_breakpoints", 133, CPyStatic_humanize___globals);
        goto CPyL63;
    }
    cpy_r_r33 = PyIter_Next(cpy_r_r32);
    if (cpy_r_r33 == NULL) {
        goto CPyL71;
    } else
        goto CPyL26;
CPyL24: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r34 = 0;
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_find_breakpoints", 133, CPyStatic_humanize___globals);
        goto CPyL62;
    }
    CPy_Unreachable();
CPyL26: ;
    if (((faster_eth_utils___humanize____find_breakpoints_envObject *)cpy_r_r0)->_left != NULL) {
        CPy_DECREF(((faster_eth_utils___humanize____find_breakpoints_envObject *)cpy_r_r0)->_left);
    }
    ((faster_eth_utils___humanize____find_breakpoints_envObject *)cpy_r_r0)->_left = cpy_r_r33;
    cpy_r_r35 = 1;
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_find_breakpoints", 133, CPyStatic_humanize___globals);
        goto CPyL72;
    }
    cpy_r_r36 = PyIter_Next(cpy_r_r32);
    if (cpy_r_r36 == NULL) {
        goto CPyL73;
    } else
        goto CPyL30;
CPyL28: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r37 = 0;
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_find_breakpoints", 133, CPyStatic_humanize___globals);
        goto CPyL62;
    }
    CPy_Unreachable();
CPyL30: ;
    if (((faster_eth_utils___humanize____find_breakpoints_envObject *)cpy_r_r0)->_right != NULL) {
        CPy_DECREF(((faster_eth_utils___humanize____find_breakpoints_envObject *)cpy_r_r0)->_right);
    }
    ((faster_eth_utils___humanize____find_breakpoints_envObject *)cpy_r_r0)->_right = cpy_r_r36;
    cpy_r_r38 = 1;
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_find_breakpoints", 133, CPyStatic_humanize___globals);
        goto CPyL72;
    }
    cpy_r_r39 = PyIter_Next(cpy_r_r32);
    CPy_DECREF(cpy_r_r32);
    if (cpy_r_r39 == NULL) {
        goto CPyL34;
    } else
        goto CPyL74;
CPyL32: ;
    PyErr_SetString(PyExc_ValueError, "too many values to unpack");
    cpy_r_r40 = 0;
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_find_breakpoints", 133, CPyStatic_humanize___globals);
        goto CPyL62;
    }
    CPy_Unreachable();
CPyL34: ;
    cpy_r_r41 = ((faster_eth_utils___humanize____find_breakpoints_envObject *)cpy_r_r0)->_left;
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AttributeError("faster_eth_utils/humanize.py", "_find_breakpoints", "_find_breakpoints_env", "left", 134, CPyStatic_humanize___globals);
        goto CPyL63;
    }
    CPy_INCREF(cpy_r_r41);
CPyL35: ;
    cpy_r_r42 = CPyStatics[268]; /* 1 */
    cpy_r_r43 = PyNumber_Add(cpy_r_r41, cpy_r_r42);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_find_breakpoints", 134, CPyStatic_humanize___globals);
        goto CPyL63;
    }
    cpy_r_r44 = ((faster_eth_utils___humanize____find_breakpoints_envObject *)cpy_r_r0)->_right;
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AttributeError("faster_eth_utils/humanize.py", "_find_breakpoints", "_find_breakpoints_env", "right", 134, CPyStatic_humanize___globals);
        goto CPyL75;
    }
    CPy_INCREF(cpy_r_r44);
CPyL37: ;
    cpy_r_r45 = PyObject_RichCompare(cpy_r_r43, cpy_r_r44, 2);
    CPy_DECREF(cpy_r_r43);
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_find_breakpoints", 134, CPyStatic_humanize___globals);
        goto CPyL63;
    }
    cpy_r_r46 = PyObject_IsTrue(cpy_r_r45);
    CPy_DECREF(cpy_r_r45);
    cpy_r_r47 = cpy_r_r46 >= 0;
    if (unlikely(!cpy_r_r47)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_find_breakpoints", 134, CPyStatic_humanize___globals);
        goto CPyL63;
    }
    cpy_r_r48 = cpy_r_r46;
    if (cpy_r_r48) goto CPyL18;
    cpy_r_r49 = ((faster_eth_utils___humanize____find_breakpoints_envObject *)cpy_r_r0)->_index;
    if (unlikely(cpy_r_r49 == CPY_INT_TAG)) {
        CPy_AttributeError("faster_eth_utils/humanize.py", "_find_breakpoints", "_find_breakpoints_env", "index", 137, CPyStatic_humanize___globals);
        goto CPyL63;
    }
    CPyTagged_INCREF(cpy_r_r49);
CPyL41: ;
    cpy_r_r50 = CPyTagged_StealAsObject(cpy_r_r49);
    if (((faster_eth_utils___humanize____find_breakpoints_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((faster_eth_utils___humanize____find_breakpoints_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((faster_eth_utils___humanize____find_breakpoints_envObject *)cpy_r_r0)->___mypyc_next_label__ = 4;
    cpy_r_r51 = 1;
    CPy_DECREF_NO_IMM(cpy_r_r0);
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_find_breakpoints", 137, CPyStatic_humanize___globals);
        goto CPyL76;
    }
    return cpy_r_r50;
CPyL43: ;
    cpy_r_r52 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r53 = cpy_r_type != cpy_r_r52;
    if (cpy_r_r53) {
        goto CPyL77;
    } else
        goto CPyL18;
CPyL44: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_find_breakpoints", 137, CPyStatic_humanize___globals);
        goto CPyL62;
    }
    CPy_Unreachable();
CPyL46: ;
    cpy_r_r54 = CPy_NoErrOccurred();
    if (unlikely(!cpy_r_r54)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_find_breakpoints", 133, CPyStatic_humanize___globals);
        goto CPyL63;
    }
    cpy_r_r55 = ((faster_eth_utils___humanize____find_breakpoints_envObject *)cpy_r_r0)->_values;
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AttributeError("faster_eth_utils/humanize.py", "_find_breakpoints", "_find_breakpoints_env", "values", 138, CPyStatic_humanize___globals);
        goto CPyL63;
    }
    CPy_INCREF(cpy_r_r55);
CPyL48: ;
    cpy_r_r56 = (CPyPtr)&((PyVarObject *)cpy_r_r55)->ob_size;
    cpy_r_r57 = *(int64_t *)cpy_r_r56;
    CPy_DECREF(cpy_r_r55);
    cpy_r_r58 = cpy_r_r57 << 1;
    cpy_r_r59 = CPyTagged_StealAsObject(cpy_r_r58);
    if (((faster_eth_utils___humanize____find_breakpoints_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((faster_eth_utils___humanize____find_breakpoints_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((faster_eth_utils___humanize____find_breakpoints_envObject *)cpy_r_r0)->___mypyc_next_label__ = 6;
    cpy_r_r60 = 1;
    CPy_DECREF_NO_IMM(cpy_r_r0);
    if (unlikely(!cpy_r_r60)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_find_breakpoints", 138, CPyStatic_humanize___globals);
        goto CPyL78;
    }
    return cpy_r_r59;
CPyL50: ;
    cpy_r_r61 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r62 = cpy_r_type != cpy_r_r61;
    if (cpy_r_r62) {
        goto CPyL79;
    } else
        goto CPyL53;
CPyL51: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_find_breakpoints", 138, CPyStatic_humanize___globals);
        goto CPyL62;
    }
    CPy_Unreachable();
CPyL53: ;
    cpy_r_r63 = Py_None;
    if (((faster_eth_utils___humanize____find_breakpoints_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((faster_eth_utils___humanize____find_breakpoints_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((faster_eth_utils___humanize____find_breakpoints_envObject *)cpy_r_r0)->___mypyc_next_label__ = -2;
    cpy_r_r64 = 1;
    CPy_DECREF_NO_IMM(cpy_r_r0);
    if (unlikely(!cpy_r_r64)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_find_breakpoints", 131, CPyStatic_humanize___globals);
        goto CPyL62;
    }
    CPyGen_SetStopIterationValue(cpy_r_r63);
    if (!0) goto CPyL62;
    CPy_Unreachable();
CPyL56: ;
    cpy_r_r65 = cpy_r_r1 == 0;
    if (cpy_r_r65) goto CPyL80;
    cpy_r_r66 = cpy_r_r1 == 2;
    if (cpy_r_r66) goto CPyL81;
    cpy_r_r67 = cpy_r_r1 == 4;
    if (cpy_r_r67) goto CPyL82;
    cpy_r_r68 = cpy_r_r1 == 6;
    CPyTagged_DECREF(cpy_r_r1);
    if (cpy_r_r68) {
        goto CPyL50;
    } else
        goto CPyL83;
CPyL60: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r69 = 0;
    if (unlikely(!cpy_r_r69)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_find_breakpoints", 131, CPyStatic_humanize___globals);
        goto CPyL62;
    }
    CPy_Unreachable();
CPyL62: ;
    cpy_r_r70 = NULL;
    return cpy_r_r70;
CPyL63: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL62;
CPyL64: ;
    CPy_DECREF_NO_IMM(cpy_r_r0);
    goto CPyL3;
CPyL65: ;
    CPy_DECREF_NO_IMM(cpy_r_r0);
    goto CPyL8;
CPyL66: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r8);
    goto CPyL62;
CPyL67: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r15);
    goto CPyL62;
CPyL68: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r22);
    goto CPyL62;
CPyL69: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r23);
    goto CPyL62;
CPyL70: ;
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_r28.f0);
    CPy_DecRef(cpy_r_r28.f1);
    goto CPyL62;
CPyL71: ;
    CPy_DECREF_NO_IMM(cpy_r_r0);
    CPy_DECREF(cpy_r_r32);
    goto CPyL24;
CPyL72: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r32);
    goto CPyL62;
CPyL73: ;
    CPy_DECREF_NO_IMM(cpy_r_r0);
    CPy_DECREF(cpy_r_r32);
    goto CPyL28;
CPyL74: ;
    CPy_DECREF_NO_IMM(cpy_r_r0);
    CPy_DECREF(cpy_r_r39);
    goto CPyL32;
CPyL75: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r43);
    goto CPyL62;
CPyL76: ;
    CPy_DecRef(cpy_r_r50);
    goto CPyL62;
CPyL77: ;
    CPy_DECREF_NO_IMM(cpy_r_r0);
    goto CPyL44;
CPyL78: ;
    CPy_DecRef(cpy_r_r59);
    goto CPyL62;
CPyL79: ;
    CPy_DECREF_NO_IMM(cpy_r_r0);
    goto CPyL51;
CPyL80: ;
    CPyTagged_DECREF(cpy_r_r1);
    goto CPyL2;
CPyL81: ;
    CPyTagged_DECREF(cpy_r_r1);
    goto CPyL7;
CPyL82: ;
    CPyTagged_DECREF(cpy_r_r1);
    goto CPyL43;
CPyL83: ;
    CPy_DECREF_NO_IMM(cpy_r_r0);
    goto CPyL60;
}

PyObject *CPyPy_humanize____find_breakpoints_gen_____mypyc_generator_helper__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"type", "value", "traceback", "arg", 0};
    static CPyArg_Parser parser = {"OOOO:__mypyc_generator_helper__", kwlist, 0};
    PyObject *obj_type;
    PyObject *obj_value;
    PyObject *obj_traceback;
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_type, &obj_value, &obj_traceback, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_type = obj_type;
    PyObject *arg_value = obj_value;
    PyObject *arg_traceback = obj_traceback;
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_humanize____find_breakpoints_gen_____mypyc_generator_helper__(arg___mypyc_self__, arg_type, arg_value, arg_traceback, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("faster_eth_utils/humanize.py", "_find_breakpoints", 131, CPyStatic_humanize___globals);
    return NULL;
}

PyObject *CPyDef_humanize____find_breakpoints_gen_____next__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_humanize____find_breakpoints_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_r0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_humanize____find_breakpoints_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__next__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_humanize____find_breakpoints_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_eth_utils.humanize._find_breakpoints_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_humanize____find_breakpoints_gen_____next__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_eth_utils/humanize.py", "__next__", -1, CPyStatic_humanize___globals);
    return NULL;
}

PyObject *CPyDef_humanize____find_breakpoints_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_humanize____find_breakpoints_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_arg);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_humanize____find_breakpoints_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"arg", 0};
    static CPyArg_Parser parser = {"O:send", kwlist, 0};
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_humanize____find_breakpoints_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_eth_utils.humanize._find_breakpoints_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_humanize____find_breakpoints_gen___send(arg___mypyc_self__, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("faster_eth_utils/humanize.py", "send", -1, CPyStatic_humanize___globals);
    return NULL;
}

PyObject *CPyDef_humanize____find_breakpoints_gen_____iter__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF_NO_IMM(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_humanize____find_breakpoints_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__iter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_humanize____find_breakpoints_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_eth_utils.humanize._find_breakpoints_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_humanize____find_breakpoints_gen_____iter__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_eth_utils/humanize.py", "__iter__", -1, CPyStatic_humanize___globals);
    return NULL;
}

PyObject *CPyDef_humanize____find_breakpoints_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    if (cpy_r_value != NULL) goto CPyL7;
    CPy_INCREF(cpy_r_r0);
    cpy_r_value = cpy_r_r0;
CPyL2: ;
    if (cpy_r_traceback != NULL) goto CPyL8;
    CPy_INCREF(cpy_r_r0);
    cpy_r_traceback = cpy_r_r0;
CPyL4: ;
    cpy_r_r1 = CPyDef_humanize____find_breakpoints_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_type, cpy_r_value, cpy_r_traceback, cpy_r_r0);
    CPy_DECREF(cpy_r_value);
    CPy_DECREF(cpy_r_traceback);
    if (cpy_r_r1 == NULL) goto CPyL6;
    return cpy_r_r1;
CPyL6: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
CPyL7: ;
    CPy_INCREF(cpy_r_value);
    goto CPyL2;
CPyL8: ;
    CPy_INCREF(cpy_r_traceback);
    goto CPyL4;
}

PyObject *CPyPy_humanize____find_breakpoints_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"type", "value", "traceback", 0};
    static CPyArg_Parser parser = {"O|OO:throw", kwlist, 0};
    PyObject *obj_type;
    PyObject *obj_value = NULL;
    PyObject *obj_traceback = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_type, &obj_value, &obj_traceback)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_humanize____find_breakpoints_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_eth_utils.humanize._find_breakpoints_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_type = obj_type;
    PyObject *arg_value;
    if (obj_value == NULL) {
        arg_value = NULL;
    } else {
        arg_value = obj_value; 
    }
    PyObject *arg_traceback;
    if (obj_traceback == NULL) {
        arg_traceback = NULL;
    } else {
        arg_traceback = obj_traceback; 
    }
    PyObject *retval = CPyDef_humanize____find_breakpoints_gen___throw(arg___mypyc_self__, arg_type, arg_value, arg_traceback);
    return retval;
fail: ;
    CPy_AddTraceback("faster_eth_utils/humanize.py", "throw", -1, CPyStatic_humanize___globals);
    return NULL;
}

PyObject *CPyDef_humanize____find_breakpoints_gen___close(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    tuple_T3OOO cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    tuple_T2OO cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[189]; /* 'GeneratorExit' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (cpy_r_r2 == NULL) goto CPyL3;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = CPyDef_humanize____find_breakpoints_gen___throw(cpy_r___mypyc_self__, cpy_r_r2, cpy_r_r3, cpy_r_r4);
    if (cpy_r_r5 != NULL) goto CPyL11;
CPyL3: ;
    cpy_r_r6 = CPy_CatchError();
    cpy_r_r7 = CPyModule_builtins;
    cpy_r_r8 = CPyStatics[190]; /* 'StopIteration' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_r7, cpy_r_r8);
    if (cpy_r_r9 == NULL) goto CPyL12;
    cpy_r_r10.f0 = cpy_r_r2;
    cpy_r_r10.f1 = cpy_r_r9;
    cpy_r_r11 = PyTuple_New(2);
    if (unlikely(cpy_r_r11 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp95 = cpy_r_r10.f0;
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp95);
    PyObject *__tmp96 = cpy_r_r10.f1;
    PyTuple_SET_ITEM(cpy_r_r11, 1, __tmp96);
    cpy_r_r12 = CPy_ExceptionMatches(cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    if (!cpy_r_r12) goto CPyL13;
    CPy_RestoreExcInfo(cpy_r_r6);
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    cpy_r_r13 = (PyObject *)&_Py_NoneStruct;
    CPy_INCREF(cpy_r_r13);
    return cpy_r_r13;
CPyL6: ;
    CPy_Reraise();
    if (!0) goto CPyL10;
    CPy_Unreachable();
CPyL8: ;
    PyErr_SetString(PyExc_RuntimeError, "generator ignored GeneratorExit");
    cpy_r_r14 = 0;
    if (!cpy_r_r14) goto CPyL10;
    CPy_Unreachable();
CPyL10: ;
    cpy_r_r15 = NULL;
    return cpy_r_r15;
CPyL11: ;
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r5);
    goto CPyL8;
CPyL12: ;
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    goto CPyL10;
CPyL13: ;
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    goto CPyL6;
}

PyObject *CPyPy_humanize____find_breakpoints_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":close", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_humanize____find_breakpoints_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_eth_utils.humanize._find_breakpoints_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_humanize____find_breakpoints_gen___close(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_eth_utils/humanize.py", "close", -1, CPyStatic_humanize___globals);
    return NULL;
}

PyObject *CPyDef_humanize____find_breakpoints(PyObject *cpy_r_values) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyDef_humanize____find_breakpoints_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_find_breakpoints", 131, CPyStatic_humanize___globals);
        goto CPyL6;
    }
    CPy_INCREF(cpy_r_values);
    if (((faster_eth_utils___humanize____find_breakpoints_envObject *)cpy_r_r0)->_values != NULL) {
        CPy_DECREF(((faster_eth_utils___humanize____find_breakpoints_envObject *)cpy_r_r0)->_values);
    }
    ((faster_eth_utils___humanize____find_breakpoints_envObject *)cpy_r_r0)->_values = cpy_r_values;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_find_breakpoints", 131, CPyStatic_humanize___globals);
        goto CPyL7;
    }
    cpy_r_r2 = CPyDef_humanize____find_breakpoints_gen();
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_find_breakpoints", 131, CPyStatic_humanize___globals);
        goto CPyL7;
    }
    CPy_INCREF_NO_IMM(cpy_r_r0);
    if (((faster_eth_utils___humanize____find_breakpoints_genObject *)cpy_r_r2)->___mypyc_env__ != NULL) {
        CPy_DECREF_NO_IMM(((faster_eth_utils___humanize____find_breakpoints_genObject *)cpy_r_r2)->___mypyc_env__);
    }
    ((faster_eth_utils___humanize____find_breakpoints_genObject *)cpy_r_r2)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_find_breakpoints", 131, CPyStatic_humanize___globals);
        goto CPyL8;
    }
    if (((faster_eth_utils___humanize____find_breakpoints_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((faster_eth_utils___humanize____find_breakpoints_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((faster_eth_utils___humanize____find_breakpoints_envObject *)cpy_r_r0)->___mypyc_next_label__ = 0;
    cpy_r_r4 = 1;
    CPy_DECREF_NO_IMM(cpy_r_r0);
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_find_breakpoints", 131, CPyStatic_humanize___globals);
        goto CPyL9;
    }
    return cpy_r_r2;
CPyL6: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
CPyL7: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL6;
CPyL8: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    goto CPyL6;
CPyL9: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL6;
}

PyObject *CPyPy_humanize____find_breakpoints(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {"%:_find_breakpoints", kwlist, 0};
    PyObject *obj_values;
    if (!CPyArg_ParseStackAndKeywords(args, nargs, kwnames, &parser, &obj_values, NULL)) {
        return NULL;
    }
    PyObject *arg_values = obj_values;
    PyObject *retval = CPyDef_humanize____find_breakpoints(arg_values);
    CPy_DECREF(obj_values);
    return retval;
fail: ;
    CPy_DECREF(obj_values);
    CPy_AddTraceback("faster_eth_utils/humanize.py", "_find_breakpoints", 131, CPyStatic_humanize___globals);
    return NULL;
}

PyObject *CPyDef_humanize____extract_integer_ranges_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject **cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    CPyTagged cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    CPyTagged cpy_r_r47;
    tuple_T2II cpy_r_r48;
    PyObject *cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    char cpy_r_r55;
    char cpy_r_r56;
    char cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    cpy_r_r0 = ((faster_eth_utils___humanize____extract_integer_ranges_genObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("faster_eth_utils/humanize.py", "_extract_integer_ranges", "_extract_integer_ranges_gen", "__mypyc_env__", 141, CPyStatic_humanize___globals);
        goto CPyL57;
    }
    CPy_INCREF_NO_IMM(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((faster_eth_utils___humanize____extract_integer_ranges_envObject *)cpy_r_r0)->___mypyc_next_label__;
    if (unlikely(cpy_r_r1 == CPY_INT_TAG)) {
        CPy_AttributeError("faster_eth_utils/humanize.py", "_extract_integer_ranges", "_extract_integer_ranges_env", "__mypyc_next_label__", 141, CPyStatic_humanize___globals);
        goto CPyL58;
    }
    CPyTagged_INCREF(cpy_r_r1);
    goto CPyL53;
CPyL2: ;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_type != cpy_r_r2;
    if (cpy_r_r3) {
        goto CPyL59;
    } else
        goto CPyL5;
CPyL3: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_extract_integer_ranges", 141, CPyStatic_humanize___globals);
        goto CPyL57;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r4 = ((faster_eth_utils___humanize____extract_integer_ranges_envObject *)cpy_r_r0)->_values;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("faster_eth_utils/humanize.py", "_extract_integer_ranges", "_extract_integer_ranges_env", "values", 151, CPyStatic_humanize___globals);
        goto CPyL58;
    }
    CPy_INCREF(cpy_r_r4);
CPyL6: ;
    cpy_r_r5 = CPyStatic_humanize___globals;
    cpy_r_r6 = CPyStatics[202]; /* '_find_breakpoints' */
    cpy_r_r7 = CPyDict_GetItem(cpy_r_r5, cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_extract_integer_ranges", 151, CPyStatic_humanize___globals);
        goto CPyL60;
    }
    cpy_r_r8 = PyList_New(0);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_extract_integer_ranges", 151, CPyStatic_humanize___globals);
        goto CPyL61;
    }
    cpy_r_r9 = CPyList_Extend(cpy_r_r8, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_extract_integer_ranges", 151, CPyStatic_humanize___globals);
        goto CPyL62;
    } else
        goto CPyL63;
CPyL9: ;
    cpy_r_r10 = PyList_AsTuple(cpy_r_r8);
    CPy_DECREF_NO_IMM(cpy_r_r8);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_extract_integer_ranges", 151, CPyStatic_humanize___globals);
        goto CPyL64;
    }
    cpy_r_r11 = PyDict_New();
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_extract_integer_ranges", 151, CPyStatic_humanize___globals);
        goto CPyL65;
    }
    cpy_r_r12 = PyObject_Call(cpy_r_r7, cpy_r_r10, cpy_r_r11);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_extract_integer_ranges", 151, CPyStatic_humanize___globals);
        goto CPyL58;
    }
    cpy_r_r13 = CPyStatic_humanize___globals;
    cpy_r_r14 = CPyStatics[200]; /* 'sliding_window' */
    cpy_r_r15 = CPyDict_GetItem(cpy_r_r13, cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_extract_integer_ranges", 151, CPyStatic_humanize___globals);
        goto CPyL66;
    }
    cpy_r_r16 = CPyStatics[270]; /* 2 */
    PyObject *cpy_r_r17[2] = {cpy_r_r16, cpy_r_r12};
    cpy_r_r18 = (PyObject **)&cpy_r_r17;
    cpy_r_r19 = PyObject_Vectorcall(cpy_r_r15, cpy_r_r18, 2, 0);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_extract_integer_ranges", 151, CPyStatic_humanize___globals);
        goto CPyL66;
    }
    CPy_DECREF(cpy_r_r12);
    cpy_r_r20 = PyObject_GetIter(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_extract_integer_ranges", 151, CPyStatic_humanize___globals);
        goto CPyL67;
    }
    if (((faster_eth_utils___humanize____extract_integer_ranges_envObject *)cpy_r_r0)->___mypyc_temp__8 != NULL) {
        CPy_DECREF(((faster_eth_utils___humanize____extract_integer_ranges_envObject *)cpy_r_r0)->___mypyc_temp__8);
    }
    ((faster_eth_utils___humanize____extract_integer_ranges_envObject *)cpy_r_r0)->___mypyc_temp__8 = cpy_r_r19;
    cpy_r_r21 = 1;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_extract_integer_ranges", -1, CPyStatic_humanize___globals);
        goto CPyL68;
    }
    if (((faster_eth_utils___humanize____extract_integer_ranges_envObject *)cpy_r_r0)->___mypyc_temp__9 != NULL) {
        CPy_DECREF(((faster_eth_utils___humanize____extract_integer_ranges_envObject *)cpy_r_r0)->___mypyc_temp__9);
    }
    ((faster_eth_utils___humanize____extract_integer_ranges_envObject *)cpy_r_r0)->___mypyc_temp__9 = cpy_r_r20;
    cpy_r_r22 = 1;
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_extract_integer_ranges", -1, CPyStatic_humanize___globals);
        goto CPyL58;
    }
CPyL17: ;
    cpy_r_r23 = ((faster_eth_utils___humanize____extract_integer_ranges_envObject *)cpy_r_r0)->___mypyc_temp__9;
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AttributeError("faster_eth_utils/humanize.py", "_extract_integer_ranges", "_extract_integer_ranges_env", "__mypyc_temp__9", 151, CPyStatic_humanize___globals);
        goto CPyL58;
    }
    CPy_INCREF(cpy_r_r23);
CPyL18: ;
    cpy_r_r24 = PyIter_Next(cpy_r_r23);
    CPy_DECREF(cpy_r_r23);
    if (cpy_r_r24 == NULL) goto CPyL49;
    cpy_r_r25 = PyObject_GetIter(cpy_r_r24);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_extract_integer_ranges", 151, CPyStatic_humanize___globals);
        goto CPyL58;
    }
    cpy_r_r26 = PyIter_Next(cpy_r_r25);
    if (cpy_r_r26 == NULL) {
        goto CPyL69;
    } else
        goto CPyL23;
CPyL21: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r27 = 0;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_extract_integer_ranges", 151, CPyStatic_humanize___globals);
        goto CPyL57;
    }
    CPy_Unreachable();
CPyL23: ;
    if (((faster_eth_utils___humanize____extract_integer_ranges_envObject *)cpy_r_r0)->_left != NULL) {
        CPy_DECREF(((faster_eth_utils___humanize____extract_integer_ranges_envObject *)cpy_r_r0)->_left);
    }
    ((faster_eth_utils___humanize____extract_integer_ranges_envObject *)cpy_r_r0)->_left = cpy_r_r26;
    cpy_r_r28 = 1;
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_extract_integer_ranges", 151, CPyStatic_humanize___globals);
        goto CPyL70;
    }
    cpy_r_r29 = PyIter_Next(cpy_r_r25);
    if (cpy_r_r29 == NULL) {
        goto CPyL71;
    } else
        goto CPyL27;
CPyL25: ;
    PyErr_SetString(PyExc_ValueError, "not enough values to unpack");
    cpy_r_r30 = 0;
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_extract_integer_ranges", 151, CPyStatic_humanize___globals);
        goto CPyL57;
    }
    CPy_Unreachable();
CPyL27: ;
    if (((faster_eth_utils___humanize____extract_integer_ranges_envObject *)cpy_r_r0)->_right != NULL) {
        CPy_DECREF(((faster_eth_utils___humanize____extract_integer_ranges_envObject *)cpy_r_r0)->_right);
    }
    ((faster_eth_utils___humanize____extract_integer_ranges_envObject *)cpy_r_r0)->_right = cpy_r_r29;
    cpy_r_r31 = 1;
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_extract_integer_ranges", 151, CPyStatic_humanize___globals);
        goto CPyL70;
    }
    cpy_r_r32 = PyIter_Next(cpy_r_r25);
    CPy_DECREF(cpy_r_r25);
    if (cpy_r_r32 == NULL) {
        goto CPyL31;
    } else
        goto CPyL72;
CPyL29: ;
    PyErr_SetString(PyExc_ValueError, "too many values to unpack");
    cpy_r_r33 = 0;
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_extract_integer_ranges", 151, CPyStatic_humanize___globals);
        goto CPyL57;
    }
    CPy_Unreachable();
CPyL31: ;
    cpy_r_r34 = ((faster_eth_utils___humanize____extract_integer_ranges_envObject *)cpy_r_r0)->_values;
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AttributeError("faster_eth_utils/humanize.py", "_extract_integer_ranges", "_extract_integer_ranges_env", "values", 152, CPyStatic_humanize___globals);
        goto CPyL58;
    }
    CPy_INCREF(cpy_r_r34);
CPyL32: ;
    cpy_r_r35 = ((faster_eth_utils___humanize____extract_integer_ranges_envObject *)cpy_r_r0)->_left;
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AttributeError("faster_eth_utils/humanize.py", "_extract_integer_ranges", "_extract_integer_ranges_env", "left", 152, CPyStatic_humanize___globals);
        goto CPyL73;
    }
    CPy_INCREF(cpy_r_r35);
CPyL33: ;
    cpy_r_r36 = ((faster_eth_utils___humanize____extract_integer_ranges_envObject *)cpy_r_r0)->_right;
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AttributeError("faster_eth_utils/humanize.py", "_extract_integer_ranges", "_extract_integer_ranges_env", "right", 152, CPyStatic_humanize___globals);
        goto CPyL74;
    }
    CPy_INCREF(cpy_r_r36);
CPyL34: ;
    cpy_r_r37 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r38 = PySlice_New(cpy_r_r35, cpy_r_r36, cpy_r_r37);
    CPy_DECREF(cpy_r_r35);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_extract_integer_ranges", 152, CPyStatic_humanize___globals);
        goto CPyL73;
    }
    cpy_r_r39 = PyObject_GetItem(cpy_r_r34, cpy_r_r38);
    CPy_DECREF(cpy_r_r34);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_extract_integer_ranges", 152, CPyStatic_humanize___globals);
        goto CPyL58;
    }
    if (likely(PyTuple_Check(cpy_r_r39)))
        cpy_r_r40 = cpy_r_r39;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/humanize.py", "_extract_integer_ranges", 152, CPyStatic_humanize___globals, "tuple", cpy_r_r39);
        goto CPyL58;
    }
    if (((faster_eth_utils___humanize____extract_integer_ranges_envObject *)cpy_r_r0)->_chunk != NULL) {
        CPy_DECREF(((faster_eth_utils___humanize____extract_integer_ranges_envObject *)cpy_r_r0)->_chunk);
    }
    ((faster_eth_utils___humanize____extract_integer_ranges_envObject *)cpy_r_r0)->_chunk = cpy_r_r40;
    cpy_r_r41 = 1;
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_extract_integer_ranges", 152, CPyStatic_humanize___globals);
        goto CPyL58;
    }
    cpy_r_r42 = ((faster_eth_utils___humanize____extract_integer_ranges_envObject *)cpy_r_r0)->_chunk;
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AttributeError("faster_eth_utils/humanize.py", "_extract_integer_ranges", "_extract_integer_ranges_env", "chunk", 153, CPyStatic_humanize___globals);
        goto CPyL58;
    }
    CPy_INCREF(cpy_r_r42);
CPyL39: ;
    cpy_r_r43 = CPySequenceTuple_GetItem(cpy_r_r42, 0);
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_extract_integer_ranges", 153, CPyStatic_humanize___globals);
        goto CPyL58;
    }
    if (likely(PyLong_Check(cpy_r_r43)))
        cpy_r_r44 = CPyTagged_FromObject(cpy_r_r43);
    else {
        CPy_TypeError("int", cpy_r_r43); cpy_r_r44 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r44 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_extract_integer_ranges", 153, CPyStatic_humanize___globals);
        goto CPyL58;
    }
    cpy_r_r45 = ((faster_eth_utils___humanize____extract_integer_ranges_envObject *)cpy_r_r0)->_chunk;
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AttributeError("faster_eth_utils/humanize.py", "_extract_integer_ranges", "_extract_integer_ranges_env", "chunk", 153, CPyStatic_humanize___globals);
        goto CPyL75;
    }
    CPy_INCREF(cpy_r_r45);
CPyL42: ;
    cpy_r_r46 = CPySequenceTuple_GetItem(cpy_r_r45, -2);
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_extract_integer_ranges", 153, CPyStatic_humanize___globals);
        goto CPyL75;
    }
    if (likely(PyLong_Check(cpy_r_r46)))
        cpy_r_r47 = CPyTagged_FromObject(cpy_r_r46);
    else {
        CPy_TypeError("int", cpy_r_r46); cpy_r_r47 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r47 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_extract_integer_ranges", 153, CPyStatic_humanize___globals);
        goto CPyL75;
    }
    cpy_r_r48.f0 = cpy_r_r44;
    cpy_r_r48.f1 = cpy_r_r47;
    cpy_r_r49 = PyTuple_New(2);
    if (unlikely(cpy_r_r49 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp97 = CPyTagged_StealAsObject(cpy_r_r48.f0);
    PyTuple_SET_ITEM(cpy_r_r49, 0, __tmp97);
    PyObject *__tmp98 = CPyTagged_StealAsObject(cpy_r_r48.f1);
    PyTuple_SET_ITEM(cpy_r_r49, 1, __tmp98);
    if (((faster_eth_utils___humanize____extract_integer_ranges_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((faster_eth_utils___humanize____extract_integer_ranges_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((faster_eth_utils___humanize____extract_integer_ranges_envObject *)cpy_r_r0)->___mypyc_next_label__ = 2;
    cpy_r_r50 = 1;
    CPy_DECREF_NO_IMM(cpy_r_r0);
    if (unlikely(!cpy_r_r50)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_extract_integer_ranges", 153, CPyStatic_humanize___globals);
        goto CPyL76;
    }
    return cpy_r_r49;
CPyL46: ;
    cpy_r_r51 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r52 = cpy_r_type != cpy_r_r51;
    if (cpy_r_r52) {
        goto CPyL77;
    } else
        goto CPyL17;
CPyL47: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_extract_integer_ranges", 153, CPyStatic_humanize___globals);
        goto CPyL57;
    }
    CPy_Unreachable();
CPyL49: ;
    cpy_r_r53 = CPy_NoErrOccurred();
    if (unlikely(!cpy_r_r53)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_extract_integer_ranges", 151, CPyStatic_humanize___globals);
        goto CPyL58;
    }
    cpy_r_r54 = Py_None;
    if (((faster_eth_utils___humanize____extract_integer_ranges_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((faster_eth_utils___humanize____extract_integer_ranges_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((faster_eth_utils___humanize____extract_integer_ranges_envObject *)cpy_r_r0)->___mypyc_next_label__ = -2;
    cpy_r_r55 = 1;
    CPy_DECREF_NO_IMM(cpy_r_r0);
    if (unlikely(!cpy_r_r55)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_extract_integer_ranges", 141, CPyStatic_humanize___globals);
        goto CPyL57;
    }
    CPyGen_SetStopIterationValue(cpy_r_r54);
    if (!0) goto CPyL57;
    CPy_Unreachable();
CPyL53: ;
    cpy_r_r56 = cpy_r_r1 == 0;
    if (cpy_r_r56) goto CPyL78;
    cpy_r_r57 = cpy_r_r1 == 2;
    CPyTagged_DECREF(cpy_r_r1);
    if (cpy_r_r57) {
        goto CPyL46;
    } else
        goto CPyL79;
CPyL55: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r58 = 0;
    if (unlikely(!cpy_r_r58)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_extract_integer_ranges", 141, CPyStatic_humanize___globals);
        goto CPyL57;
    }
    CPy_Unreachable();
CPyL57: ;
    cpy_r_r59 = NULL;
    return cpy_r_r59;
CPyL58: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL57;
CPyL59: ;
    CPy_DECREF_NO_IMM(cpy_r_r0);
    goto CPyL3;
CPyL60: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    goto CPyL57;
CPyL61: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r7);
    goto CPyL57;
CPyL62: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    goto CPyL57;
CPyL63: ;
    CPy_DECREF(cpy_r_r9);
    goto CPyL9;
CPyL64: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r7);
    goto CPyL57;
CPyL65: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r10);
    goto CPyL57;
CPyL66: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r12);
    goto CPyL57;
CPyL67: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r19);
    goto CPyL57;
CPyL68: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r20);
    goto CPyL57;
CPyL69: ;
    CPy_DECREF_NO_IMM(cpy_r_r0);
    CPy_DECREF(cpy_r_r25);
    goto CPyL21;
CPyL70: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r25);
    goto CPyL57;
CPyL71: ;
    CPy_DECREF_NO_IMM(cpy_r_r0);
    CPy_DECREF(cpy_r_r25);
    goto CPyL25;
CPyL72: ;
    CPy_DECREF_NO_IMM(cpy_r_r0);
    CPy_DECREF(cpy_r_r32);
    goto CPyL29;
CPyL73: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r34);
    goto CPyL57;
CPyL74: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r34);
    CPy_DecRef(cpy_r_r35);
    goto CPyL57;
CPyL75: ;
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_r44);
    goto CPyL57;
CPyL76: ;
    CPy_DecRef(cpy_r_r49);
    goto CPyL57;
CPyL77: ;
    CPy_DECREF_NO_IMM(cpy_r_r0);
    goto CPyL47;
CPyL78: ;
    CPyTagged_DECREF(cpy_r_r1);
    goto CPyL2;
CPyL79: ;
    CPy_DECREF_NO_IMM(cpy_r_r0);
    goto CPyL55;
}

PyObject *CPyPy_humanize____extract_integer_ranges_gen_____mypyc_generator_helper__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"type", "value", "traceback", "arg", 0};
    static CPyArg_Parser parser = {"OOOO:__mypyc_generator_helper__", kwlist, 0};
    PyObject *obj_type;
    PyObject *obj_value;
    PyObject *obj_traceback;
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_type, &obj_value, &obj_traceback, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_type = obj_type;
    PyObject *arg_value = obj_value;
    PyObject *arg_traceback = obj_traceback;
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_humanize____extract_integer_ranges_gen_____mypyc_generator_helper__(arg___mypyc_self__, arg_type, arg_value, arg_traceback, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("faster_eth_utils/humanize.py", "_extract_integer_ranges", 141, CPyStatic_humanize___globals);
    return NULL;
}

PyObject *CPyDef_humanize____extract_integer_ranges_gen_____next__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_humanize____extract_integer_ranges_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_r0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_humanize____extract_integer_ranges_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__next__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_humanize____extract_integer_ranges_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_eth_utils.humanize._extract_integer_ranges_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_humanize____extract_integer_ranges_gen_____next__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_eth_utils/humanize.py", "__next__", -1, CPyStatic_humanize___globals);
    return NULL;
}

PyObject *CPyDef_humanize____extract_integer_ranges_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_humanize____extract_integer_ranges_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_arg);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_humanize____extract_integer_ranges_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"arg", 0};
    static CPyArg_Parser parser = {"O:send", kwlist, 0};
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_humanize____extract_integer_ranges_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_eth_utils.humanize._extract_integer_ranges_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_humanize____extract_integer_ranges_gen___send(arg___mypyc_self__, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("faster_eth_utils/humanize.py", "send", -1, CPyStatic_humanize___globals);
    return NULL;
}

PyObject *CPyDef_humanize____extract_integer_ranges_gen_____iter__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF_NO_IMM(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_humanize____extract_integer_ranges_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__iter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_humanize____extract_integer_ranges_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_eth_utils.humanize._extract_integer_ranges_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_humanize____extract_integer_ranges_gen_____iter__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_eth_utils/humanize.py", "__iter__", -1, CPyStatic_humanize___globals);
    return NULL;
}

PyObject *CPyDef_humanize____extract_integer_ranges_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    if (cpy_r_value != NULL) goto CPyL7;
    CPy_INCREF(cpy_r_r0);
    cpy_r_value = cpy_r_r0;
CPyL2: ;
    if (cpy_r_traceback != NULL) goto CPyL8;
    CPy_INCREF(cpy_r_r0);
    cpy_r_traceback = cpy_r_r0;
CPyL4: ;
    cpy_r_r1 = CPyDef_humanize____extract_integer_ranges_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_type, cpy_r_value, cpy_r_traceback, cpy_r_r0);
    CPy_DECREF(cpy_r_value);
    CPy_DECREF(cpy_r_traceback);
    if (cpy_r_r1 == NULL) goto CPyL6;
    return cpy_r_r1;
CPyL6: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
CPyL7: ;
    CPy_INCREF(cpy_r_value);
    goto CPyL2;
CPyL8: ;
    CPy_INCREF(cpy_r_traceback);
    goto CPyL4;
}

PyObject *CPyPy_humanize____extract_integer_ranges_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"type", "value", "traceback", 0};
    static CPyArg_Parser parser = {"O|OO:throw", kwlist, 0};
    PyObject *obj_type;
    PyObject *obj_value = NULL;
    PyObject *obj_traceback = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_type, &obj_value, &obj_traceback)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_humanize____extract_integer_ranges_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_eth_utils.humanize._extract_integer_ranges_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_type = obj_type;
    PyObject *arg_value;
    if (obj_value == NULL) {
        arg_value = NULL;
    } else {
        arg_value = obj_value; 
    }
    PyObject *arg_traceback;
    if (obj_traceback == NULL) {
        arg_traceback = NULL;
    } else {
        arg_traceback = obj_traceback; 
    }
    PyObject *retval = CPyDef_humanize____extract_integer_ranges_gen___throw(arg___mypyc_self__, arg_type, arg_value, arg_traceback);
    return retval;
fail: ;
    CPy_AddTraceback("faster_eth_utils/humanize.py", "throw", -1, CPyStatic_humanize___globals);
    return NULL;
}

PyObject *CPyDef_humanize____extract_integer_ranges_gen___close(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    tuple_T3OOO cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    tuple_T2OO cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[189]; /* 'GeneratorExit' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (cpy_r_r2 == NULL) goto CPyL3;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = CPyDef_humanize____extract_integer_ranges_gen___throw(cpy_r___mypyc_self__, cpy_r_r2, cpy_r_r3, cpy_r_r4);
    if (cpy_r_r5 != NULL) goto CPyL11;
CPyL3: ;
    cpy_r_r6 = CPy_CatchError();
    cpy_r_r7 = CPyModule_builtins;
    cpy_r_r8 = CPyStatics[190]; /* 'StopIteration' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_r7, cpy_r_r8);
    if (cpy_r_r9 == NULL) goto CPyL12;
    cpy_r_r10.f0 = cpy_r_r2;
    cpy_r_r10.f1 = cpy_r_r9;
    cpy_r_r11 = PyTuple_New(2);
    if (unlikely(cpy_r_r11 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp99 = cpy_r_r10.f0;
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp99);
    PyObject *__tmp100 = cpy_r_r10.f1;
    PyTuple_SET_ITEM(cpy_r_r11, 1, __tmp100);
    cpy_r_r12 = CPy_ExceptionMatches(cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    if (!cpy_r_r12) goto CPyL13;
    CPy_RestoreExcInfo(cpy_r_r6);
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    cpy_r_r13 = (PyObject *)&_Py_NoneStruct;
    CPy_INCREF(cpy_r_r13);
    return cpy_r_r13;
CPyL6: ;
    CPy_Reraise();
    if (!0) goto CPyL10;
    CPy_Unreachable();
CPyL8: ;
    PyErr_SetString(PyExc_RuntimeError, "generator ignored GeneratorExit");
    cpy_r_r14 = 0;
    if (!cpy_r_r14) goto CPyL10;
    CPy_Unreachable();
CPyL10: ;
    cpy_r_r15 = NULL;
    return cpy_r_r15;
CPyL11: ;
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r5);
    goto CPyL8;
CPyL12: ;
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    goto CPyL10;
CPyL13: ;
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    goto CPyL6;
}

PyObject *CPyPy_humanize____extract_integer_ranges_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":close", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_humanize____extract_integer_ranges_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_eth_utils.humanize._extract_integer_ranges_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_humanize____extract_integer_ranges_gen___close(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_eth_utils/humanize.py", "close", -1, CPyStatic_humanize___globals);
    return NULL;
}

PyObject *CPyDef_humanize____extract_integer_ranges(PyObject *cpy_r_values) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyDef_humanize____extract_integer_ranges_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_extract_integer_ranges", 141, CPyStatic_humanize___globals);
        goto CPyL6;
    }
    CPy_INCREF(cpy_r_values);
    if (((faster_eth_utils___humanize____extract_integer_ranges_envObject *)cpy_r_r0)->_values != NULL) {
        CPy_DECREF(((faster_eth_utils___humanize____extract_integer_ranges_envObject *)cpy_r_r0)->_values);
    }
    ((faster_eth_utils___humanize____extract_integer_ranges_envObject *)cpy_r_r0)->_values = cpy_r_values;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_extract_integer_ranges", 141, CPyStatic_humanize___globals);
        goto CPyL7;
    }
    cpy_r_r2 = CPyDef_humanize____extract_integer_ranges_gen();
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_extract_integer_ranges", 141, CPyStatic_humanize___globals);
        goto CPyL7;
    }
    CPy_INCREF_NO_IMM(cpy_r_r0);
    if (((faster_eth_utils___humanize____extract_integer_ranges_genObject *)cpy_r_r2)->___mypyc_env__ != NULL) {
        CPy_DECREF_NO_IMM(((faster_eth_utils___humanize____extract_integer_ranges_genObject *)cpy_r_r2)->___mypyc_env__);
    }
    ((faster_eth_utils___humanize____extract_integer_ranges_genObject *)cpy_r_r2)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_extract_integer_ranges", 141, CPyStatic_humanize___globals);
        goto CPyL8;
    }
    if (((faster_eth_utils___humanize____extract_integer_ranges_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((faster_eth_utils___humanize____extract_integer_ranges_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((faster_eth_utils___humanize____extract_integer_ranges_envObject *)cpy_r_r0)->___mypyc_next_label__ = 0;
    cpy_r_r4 = 1;
    CPy_DECREF_NO_IMM(cpy_r_r0);
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_extract_integer_ranges", 141, CPyStatic_humanize___globals);
        goto CPyL9;
    }
    return cpy_r_r2;
CPyL6: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
CPyL7: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL6;
CPyL8: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    goto CPyL6;
CPyL9: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL6;
}

PyObject *CPyPy_humanize____extract_integer_ranges(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {"%:_extract_integer_ranges", kwlist, 0};
    PyObject *obj_values;
    if (!CPyArg_ParseStackAndKeywords(args, nargs, kwnames, &parser, &obj_values, NULL)) {
        return NULL;
    }
    PyObject *arg_values = obj_values;
    PyObject *retval = CPyDef_humanize____extract_integer_ranges(arg_values);
    CPy_DECREF(obj_values);
    return retval;
fail: ;
    CPy_DECREF(obj_values);
    CPy_AddTraceback("faster_eth_utils/humanize.py", "_extract_integer_ranges", 141, CPyStatic_humanize___globals);
    return NULL;
}

PyObject *CPyDef_humanize____humanize_range(tuple_T2II cpy_r_bounds) {
    CPyTagged cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyTagged cpy_r_r3;
    int64_t cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    cpy_r_r0 = cpy_r_bounds.f0;
    cpy_r_r1 = cpy_r_bounds.f1;
    CPyTagged_INCREF(cpy_r_bounds.f0);
    CPyTagged_INCREF(cpy_r_bounds.f1);
    cpy_r_r2 = cpy_r_r0;
    cpy_r_r3 = cpy_r_r1;
    cpy_r_r4 = cpy_r_r2 & 1;
    cpy_r_r5 = cpy_r_r4 != 0;
    if (!cpy_r_r5) goto CPyL2;
    cpy_r_r6 = CPyTagged_IsEq_(cpy_r_r2, cpy_r_r3);
    if (cpy_r_r6) {
        goto CPyL10;
    } else
        goto CPyL5;
CPyL2: ;
    cpy_r_r7 = cpy_r_r2 == cpy_r_r3;
    if (cpy_r_r7) {
        goto CPyL10;
    } else
        goto CPyL5;
CPyL3: ;
    cpy_r_r8 = CPyTagged_Str(cpy_r_r2);
    CPyTagged_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_humanize_range", 159, CPyStatic_humanize___globals);
        goto CPyL9;
    }
    return cpy_r_r8;
CPyL5: ;
    cpy_r_r9 = CPyTagged_Str(cpy_r_r2);
    CPyTagged_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_humanize_range", 161, CPyStatic_humanize___globals);
        goto CPyL11;
    }
    cpy_r_r10 = CPyStatics[203]; /* '-' */
    cpy_r_r11 = CPyTagged_Str(cpy_r_r3);
    CPyTagged_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_humanize_range", 161, CPyStatic_humanize___globals);
        goto CPyL12;
    }
    cpy_r_r12 = CPyStr_Build(3, cpy_r_r9, cpy_r_r10, cpy_r_r11);
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "_humanize_range", 161, CPyStatic_humanize___globals);
        goto CPyL9;
    }
    return cpy_r_r12;
CPyL9: ;
    cpy_r_r13 = NULL;
    return cpy_r_r13;
CPyL10: ;
    CPyTagged_DECREF(cpy_r_r3);
    goto CPyL3;
CPyL11: ;
    CPyTagged_DecRef(cpy_r_r3);
    goto CPyL9;
CPyL12: ;
    CPy_DecRef(cpy_r_r9);
    goto CPyL9;
}

PyObject *CPyPy_humanize____humanize_range(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"bounds", 0};
    static CPyArg_Parser parser = {"O:_humanize_range", kwlist, 0};
    PyObject *obj_bounds;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_bounds)) {
        return NULL;
    }
    tuple_T2II arg_bounds;
    PyObject *__tmp101;
    if (unlikely(!(PyTuple_Check(obj_bounds) && PyTuple_GET_SIZE(obj_bounds) == 2))) {
        __tmp101 = NULL;
        goto __LL102;
    }
    if (likely(PyLong_Check(PyTuple_GET_ITEM(obj_bounds, 0))))
        __tmp101 = PyTuple_GET_ITEM(obj_bounds, 0);
    else {
        __tmp101 = NULL;
    }
    if (__tmp101 == NULL) goto __LL102;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(obj_bounds, 1))))
        __tmp101 = PyTuple_GET_ITEM(obj_bounds, 1);
    else {
        __tmp101 = NULL;
    }
    if (__tmp101 == NULL) goto __LL102;
    __tmp101 = obj_bounds;
__LL102: ;
    if (unlikely(__tmp101 == NULL)) {
        CPy_TypeError("tuple[int, int]", obj_bounds); goto fail;
    } else {
        PyObject *__tmp103 = PyTuple_GET_ITEM(obj_bounds, 0);
        CPyTagged __tmp104;
        if (likely(PyLong_Check(__tmp103)))
            __tmp104 = CPyTagged_BorrowFromObject(__tmp103);
        else {
            CPy_TypeError("int", __tmp103); goto fail;
        }
        arg_bounds.f0 = __tmp104;
        PyObject *__tmp105 = PyTuple_GET_ITEM(obj_bounds, 1);
        CPyTagged __tmp106;
        if (likely(PyLong_Check(__tmp105)))
            __tmp106 = CPyTagged_BorrowFromObject(__tmp105);
        else {
            CPy_TypeError("int", __tmp105); goto fail;
        }
        arg_bounds.f1 = __tmp106;
    }
    PyObject *retval = CPyDef_humanize____humanize_range(arg_bounds);
    return retval;
fail: ;
    CPy_AddTraceback("faster_eth_utils/humanize.py", "_humanize_range", 156, CPyStatic_humanize___globals);
    return NULL;
}

PyObject *CPyDef_humanize___humanize_integer_sequence(PyObject *cpy_r_values_iter) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject **cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    cpy_r_r0 = PySequence_Tuple(cpy_r_values_iter);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "humanize_integer_sequence", 173, CPyStatic_humanize___globals);
        goto CPyL15;
    }
    cpy_r_r1 = PyObject_IsTrue(cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "humanize_integer_sequence", 173, CPyStatic_humanize___globals);
        goto CPyL16;
    }
    cpy_r_r3 = cpy_r_r1;
    if (cpy_r_r3) {
        goto CPyL4;
    } else
        goto CPyL17;
CPyL3: ;
    cpy_r_r4 = CPyStatics[204]; /* '(empty)' */
    CPy_INCREF(cpy_r_r4);
    return cpy_r_r4;
CPyL4: ;
    cpy_r_r5 = CPyStatics[205]; /* '|' */
    cpy_r_r6 = CPyStatic_humanize___globals;
    cpy_r_r7 = CPyStatics[206]; /* '_humanize_range' */
    cpy_r_r8 = CPyDict_GetItem(cpy_r_r6, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "humanize_integer_sequence", 177, CPyStatic_humanize___globals);
        goto CPyL16;
    }
    cpy_r_r9 = CPyStatic_humanize___globals;
    cpy_r_r10 = CPyStatics[207]; /* '_extract_integer_ranges' */
    cpy_r_r11 = CPyDict_GetItem(cpy_r_r9, cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "humanize_integer_sequence", 177, CPyStatic_humanize___globals);
        goto CPyL18;
    }
    cpy_r_r12 = PyList_New(0);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "humanize_integer_sequence", 177, CPyStatic_humanize___globals);
        goto CPyL19;
    }
    cpy_r_r13 = CPyList_Extend(cpy_r_r12, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "humanize_integer_sequence", 177, CPyStatic_humanize___globals);
        goto CPyL20;
    } else
        goto CPyL21;
CPyL8: ;
    cpy_r_r14 = PyList_AsTuple(cpy_r_r12);
    CPy_DECREF_NO_IMM(cpy_r_r12);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "humanize_integer_sequence", 177, CPyStatic_humanize___globals);
        goto CPyL22;
    }
    cpy_r_r15 = PyDict_New();
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "humanize_integer_sequence", 177, CPyStatic_humanize___globals);
        goto CPyL23;
    }
    cpy_r_r16 = PyObject_Call(cpy_r_r11, cpy_r_r14, cpy_r_r15);
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "humanize_integer_sequence", 177, CPyStatic_humanize___globals);
        goto CPyL24;
    }
    cpy_r_r17 = CPyModule_builtins;
    cpy_r_r18 = CPyStatics[208]; /* 'map' */
    cpy_r_r19 = CPyObject_GetAttr(cpy_r_r17, cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "humanize_integer_sequence", 177, CPyStatic_humanize___globals);
        goto CPyL25;
    }
    PyObject *cpy_r_r20[2] = {cpy_r_r8, cpy_r_r16};
    cpy_r_r21 = (PyObject **)&cpy_r_r20;
    cpy_r_r22 = PyObject_Vectorcall(cpy_r_r19, cpy_r_r21, 2, 0);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "humanize_integer_sequence", 177, CPyStatic_humanize___globals);
        goto CPyL25;
    }
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r23 = PyUnicode_Join(cpy_r_r5, cpy_r_r22);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "humanize_integer_sequence", 177, CPyStatic_humanize___globals);
        goto CPyL15;
    }
    return cpy_r_r23;
CPyL15: ;
    cpy_r_r24 = NULL;
    return cpy_r_r24;
CPyL16: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL15;
CPyL17: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL3;
CPyL18: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r8);
    goto CPyL15;
CPyL19: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r11);
    goto CPyL15;
CPyL20: ;
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r12);
    goto CPyL15;
CPyL21: ;
    CPy_DECREF(cpy_r_r13);
    goto CPyL8;
CPyL22: ;
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r11);
    goto CPyL15;
CPyL23: ;
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r14);
    goto CPyL15;
CPyL24: ;
    CPy_DecRef(cpy_r_r8);
    goto CPyL15;
CPyL25: ;
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r16);
    goto CPyL15;
}

PyObject *CPyPy_humanize___humanize_integer_sequence(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"values_iter", 0};
    static CPyArg_Parser parser = {"O:humanize_integer_sequence", kwlist, 0};
    PyObject *obj_values_iter;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_values_iter)) {
        return NULL;
    }
    PyObject *arg_values_iter = obj_values_iter;
    PyObject *retval = CPyDef_humanize___humanize_integer_sequence(arg_values_iter);
    return retval;
fail: ;
    CPy_AddTraceback("faster_eth_utils/humanize.py", "humanize_integer_sequence", 164, CPyStatic_humanize___globals);
    return NULL;
}

PyObject *CPyDef_humanize___humanize_wei(CPyTagged cpy_r_number) {
    CPyTagged cpy_r_r0;
    char cpy_r_r1;
    int64_t cpy_r_r2;
    char cpy_r_r3;
    int64_t cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_unit;
    CPyTagged cpy_r_r10;
    char cpy_r_r11;
    int64_t cpy_r_r12;
    char cpy_r_r13;
    int64_t cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    cpy_r_r0 = CPyStatic_currency___denoms___finney;
    if (likely(cpy_r_r0 != CPY_INT_TAG)) goto CPyL3;
    PyErr_SetString(PyExc_NameError, "value for final name \"finney\" was not set");
    cpy_r_r1 = 0;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "humanize_wei", 181, CPyStatic_humanize___globals);
        goto CPyL21;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r2 = cpy_r_number & 1;
    cpy_r_r3 = cpy_r_r2 != 0;
    if (cpy_r_r3) goto CPyL5;
    cpy_r_r4 = cpy_r_r0 & 1;
    cpy_r_r5 = cpy_r_r4 != 0;
    if (!cpy_r_r5) goto CPyL6;
CPyL5: ;
    cpy_r_r6 = CPyTagged_IsLt_(cpy_r_number, cpy_r_r0);
    cpy_r_r7 = cpy_r_r6 ^ 1;
    if (cpy_r_r7) {
        goto CPyL7;
    } else
        goto CPyL8;
CPyL6: ;
    cpy_r_r8 = (Py_ssize_t)cpy_r_number >= (Py_ssize_t)cpy_r_r0;
    if (!cpy_r_r8) goto CPyL8;
CPyL7: ;
    cpy_r_r9 = CPyStatics[108]; /* 'ether' */
    CPy_INCREF(cpy_r_r9);
    cpy_r_unit = cpy_r_r9;
    goto CPyL17;
CPyL8: ;
    cpy_r_r10 = CPyStatic_currency___denoms___mwei;
    if (likely(cpy_r_r10 != CPY_INT_TAG)) goto CPyL11;
    PyErr_SetString(PyExc_NameError, "value for final name \"mwei\" was not set");
    cpy_r_r11 = 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "humanize_wei", 183, CPyStatic_humanize___globals);
        goto CPyL21;
    }
    CPy_Unreachable();
CPyL11: ;
    cpy_r_r12 = cpy_r_number & 1;
    cpy_r_r13 = cpy_r_r12 != 0;
    if (cpy_r_r13) goto CPyL13;
    cpy_r_r14 = cpy_r_r10 & 1;
    cpy_r_r15 = cpy_r_r14 != 0;
    if (!cpy_r_r15) goto CPyL14;
CPyL13: ;
    cpy_r_r16 = CPyTagged_IsLt_(cpy_r_number, cpy_r_r10);
    cpy_r_r17 = cpy_r_r16 ^ 1;
    if (cpy_r_r17) {
        goto CPyL15;
    } else
        goto CPyL16;
CPyL14: ;
    cpy_r_r18 = (Py_ssize_t)cpy_r_number >= (Py_ssize_t)cpy_r_r10;
    if (!cpy_r_r18) goto CPyL16;
CPyL15: ;
    cpy_r_r19 = CPyStatics[98]; /* 'gwei' */
    CPy_INCREF(cpy_r_r19);
    cpy_r_unit = cpy_r_r19;
    goto CPyL17;
CPyL16: ;
    cpy_r_r20 = CPyStatics[91]; /* 'wei' */
    CPy_INCREF(cpy_r_r20);
    cpy_r_unit = cpy_r_r20;
CPyL17: ;
    cpy_r_r21 = CPyDef_currency___from_wei(cpy_r_number, cpy_r_unit);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "humanize_wei", 187, CPyStatic_humanize___globals);
        goto CPyL22;
    }
    cpy_r_r22 = PyObject_Str(cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "humanize_wei", 188, CPyStatic_humanize___globals);
        goto CPyL22;
    }
    cpy_r_r23 = CPyStatics[14]; /* ' ' */
    cpy_r_r24 = CPyStr_Build(3, cpy_r_r22, cpy_r_r23, cpy_r_unit);
    CPy_DECREF(cpy_r_r22);
    CPy_DECREF(cpy_r_unit);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "humanize_wei", 188, CPyStatic_humanize___globals);
        goto CPyL21;
    }
    return cpy_r_r24;
CPyL21: ;
    cpy_r_r25 = NULL;
    return cpy_r_r25;
CPyL22: ;
    CPy_DecRef(cpy_r_unit);
    goto CPyL21;
}

PyObject *CPyPy_humanize___humanize_wei(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"number", 0};
    static CPyArg_Parser parser = {"O:humanize_wei", kwlist, 0};
    PyObject *obj_number;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_number)) {
        return NULL;
    }
    CPyTagged arg_number;
    if (likely(PyLong_Check(obj_number)))
        arg_number = CPyTagged_BorrowFromObject(obj_number);
    else {
        CPy_TypeError("int", obj_number); goto fail;
    }
    PyObject *retval = CPyDef_humanize___humanize_wei(arg_number);
    return retval;
fail: ;
    CPy_AddTraceback("faster_eth_utils/humanize.py", "humanize_wei", 180, CPyStatic_humanize___globals);
    return NULL;
}

char CPyDef_humanize_____top_level__(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    int32_t cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    int32_t cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    int32_t cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    int32_t cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    int32_t cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    int32_t cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    int32_t cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    tuple_T2IO cpy_r_r61;
    PyObject *cpy_r_r62;
    tuple_T2IO cpy_r_r63;
    PyObject *cpy_r_r64;
    tuple_T2IO cpy_r_r65;
    PyObject *cpy_r_r66;
    tuple_T2IO cpy_r_r67;
    PyObject *cpy_r_r68;
    tuple_T2IO cpy_r_r69;
    PyObject *cpy_r_r70;
    tuple_T2IO cpy_r_r71;
    PyObject *cpy_r_r72;
    tuple_T2IO cpy_r_r73;
    tuple_T7T2IOT2IOT2IOT2IOT2IOT2IOT2IO cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    int32_t cpy_r_r78;
    char cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    int32_t cpy_r_r83;
    char cpy_r_r84;
    char cpy_r_r85;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[18]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "<module>", -1, CPyStatic_humanize___globals);
        goto CPyL18;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[319]; /* ('Any', 'Final', 'Iterable', 'Iterator', 'Tuple', 'Union') */
    cpy_r_r6 = CPyStatics[21]; /* 'typing' */
    cpy_r_r7 = CPyStatic_humanize___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "<module>", 1, CPyStatic_humanize___globals);
        goto CPyL18;
    }
    CPyModule_typing = cpy_r_r8;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[320]; /* ('parse',) */
    cpy_r_r10 = CPyStatics[212]; /* 'urllib' */
    cpy_r_r11 = CPyStatic_humanize___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "<module>", 9, CPyStatic_humanize___globals);
        goto CPyL18;
    }
    CPyModule_urllib = cpy_r_r12;
    CPy_INCREF(CPyModule_urllib);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[321]; /* ('URI', 'Hash32') */
    cpy_r_r14 = CPyStatics[47]; /* 'eth_typing' */
    cpy_r_r15 = CPyStatic_humanize___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "<module>", 13, CPyStatic_humanize___globals);
        goto CPyL18;
    }
    CPyModule_eth_typing = cpy_r_r16;
    CPy_INCREF(CPyModule_eth_typing);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[322]; /* ('denoms', 'from_wei') */
    cpy_r_r18 = CPyStatics[132]; /* 'faster_eth_utils.currency' */
    cpy_r_r19 = CPyStatic_humanize___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "<module>", 18, CPyStatic_humanize___globals);
        goto CPyL18;
    }
    CPyModule_faster_eth_utils___currency = cpy_r_r20;
    CPy_INCREF(CPyModule_faster_eth_utils___currency);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[323]; /* ('sliding_window', 'take') */
    cpy_r_r22 = CPyStatics[216]; /* 'faster_eth_utils.toolz' */
    cpy_r_r23 = CPyStatic_humanize___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "<module>", 23, CPyStatic_humanize___globals);
        goto CPyL18;
    }
    CPyModule_faster_eth_utils___toolz = cpy_r_r24;
    CPy_INCREF(CPyModule_faster_eth_utils___toolz);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = CPyStatic_humanize___globals;
    cpy_r_r26 = CPyStatics[217]; /* 'SECOND' */
    cpy_r_r27 = CPyStatics[268]; /* 1 */
    cpy_r_r28 = CPyDict_SetItem(cpy_r_r25, cpy_r_r26, cpy_r_r27);
    cpy_r_r29 = cpy_r_r28 >= 0;
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "<module>", 38, CPyStatic_humanize___globals);
        goto CPyL18;
    }
    cpy_r_r30 = CPyStatic_humanize___globals;
    cpy_r_r31 = CPyStatics[218]; /* 'MINUTE' */
    cpy_r_r32 = CPyStatics[272]; /* 60 */
    cpy_r_r33 = CPyDict_SetItem(cpy_r_r30, cpy_r_r31, cpy_r_r32);
    cpy_r_r34 = cpy_r_r33 >= 0;
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "<module>", 39, CPyStatic_humanize___globals);
        goto CPyL18;
    }
    cpy_r_r35 = CPyStatic_humanize___globals;
    cpy_r_r36 = CPyStatics[219]; /* 'HOUR' */
    cpy_r_r37 = CPyStatics[273]; /* 3600 */
    cpy_r_r38 = CPyDict_SetItem(cpy_r_r35, cpy_r_r36, cpy_r_r37);
    cpy_r_r39 = cpy_r_r38 >= 0;
    if (unlikely(!cpy_r_r39)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "<module>", 40, CPyStatic_humanize___globals);
        goto CPyL18;
    }
    cpy_r_r40 = CPyStatic_humanize___globals;
    cpy_r_r41 = CPyStatics[220]; /* 'DAY' */
    cpy_r_r42 = CPyStatics[274]; /* 86400 */
    cpy_r_r43 = CPyDict_SetItem(cpy_r_r40, cpy_r_r41, cpy_r_r42);
    cpy_r_r44 = cpy_r_r43 >= 0;
    if (unlikely(!cpy_r_r44)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "<module>", 41, CPyStatic_humanize___globals);
        goto CPyL18;
    }
    cpy_r_r45 = CPyStatic_humanize___globals;
    cpy_r_r46 = CPyStatics[221]; /* 'YEAR' */
    cpy_r_r47 = CPyStatics[275]; /* 31536000 */
    cpy_r_r48 = CPyDict_SetItem(cpy_r_r45, cpy_r_r46, cpy_r_r47);
    cpy_r_r49 = cpy_r_r48 >= 0;
    if (unlikely(!cpy_r_r49)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "<module>", 42, CPyStatic_humanize___globals);
        goto CPyL18;
    }
    cpy_r_r50 = CPyStatic_humanize___globals;
    cpy_r_r51 = CPyStatics[222]; /* 'MONTH' */
    cpy_r_r52 = CPyStatics[276]; /* 2628000 */
    cpy_r_r53 = CPyDict_SetItem(cpy_r_r50, cpy_r_r51, cpy_r_r52);
    cpy_r_r54 = cpy_r_r53 >= 0;
    if (unlikely(!cpy_r_r54)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "<module>", 43, CPyStatic_humanize___globals);
        goto CPyL18;
    }
    cpy_r_r55 = CPyStatic_humanize___globals;
    cpy_r_r56 = CPyStatics[223]; /* 'WEEK' */
    cpy_r_r57 = CPyStatics[277]; /* 604800 */
    cpy_r_r58 = CPyDict_SetItem(cpy_r_r55, cpy_r_r56, cpy_r_r57);
    cpy_r_r59 = cpy_r_r58 >= 0;
    if (unlikely(!cpy_r_r59)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "<module>", 44, CPyStatic_humanize___globals);
        goto CPyL18;
    }
    cpy_r_r60 = CPyStatics[224]; /* 'y' */
    CPy_INCREF(cpy_r_r60);
    cpy_r_r61.f0 = 63072000;
    cpy_r_r61.f1 = cpy_r_r60;
    cpy_r_r62 = CPyStatics[225]; /* 'm' */
    CPy_INCREF(cpy_r_r62);
    cpy_r_r63.f0 = 5256000;
    cpy_r_r63.f1 = cpy_r_r62;
    cpy_r_r64 = CPyStatics[226]; /* 'w' */
    CPy_INCREF(cpy_r_r64);
    cpy_r_r65.f0 = 1209600;
    cpy_r_r65.f1 = cpy_r_r64;
    cpy_r_r66 = CPyStatics[227]; /* 'd' */
    CPy_INCREF(cpy_r_r66);
    cpy_r_r67.f0 = 172800;
    cpy_r_r67.f1 = cpy_r_r66;
    cpy_r_r68 = CPyStatics[228]; /* 'h' */
    CPy_INCREF(cpy_r_r68);
    cpy_r_r69.f0 = 7200;
    cpy_r_r69.f1 = cpy_r_r68;
    cpy_r_r70 = CPyStatics[225]; /* 'm' */
    CPy_INCREF(cpy_r_r70);
    cpy_r_r71.f0 = 120;
    cpy_r_r71.f1 = cpy_r_r70;
    cpy_r_r72 = CPyStatics[229]; /* 's' */
    CPy_INCREF(cpy_r_r72);
    cpy_r_r73.f0 = 2;
    cpy_r_r73.f1 = cpy_r_r72;
    cpy_r_r74.f0 = cpy_r_r61;
    cpy_r_r74.f1 = cpy_r_r63;
    cpy_r_r74.f2 = cpy_r_r65;
    cpy_r_r74.f3 = cpy_r_r67;
    cpy_r_r74.f4 = cpy_r_r69;
    cpy_r_r74.f5 = cpy_r_r71;
    cpy_r_r74.f6 = cpy_r_r73;
    CPyStatic_humanize___UNITS = cpy_r_r74;
    CPyTagged_INCREF(CPyStatic_humanize___UNITS.f0.f0);
    CPy_INCREF(CPyStatic_humanize___UNITS.f0.f1);
    CPyTagged_INCREF(CPyStatic_humanize___UNITS.f1.f0);
    CPy_INCREF(CPyStatic_humanize___UNITS.f1.f1);
    CPyTagged_INCREF(CPyStatic_humanize___UNITS.f2.f0);
    CPy_INCREF(CPyStatic_humanize___UNITS.f2.f1);
    CPyTagged_INCREF(CPyStatic_humanize___UNITS.f3.f0);
    CPy_INCREF(CPyStatic_humanize___UNITS.f3.f1);
    CPyTagged_INCREF(CPyStatic_humanize___UNITS.f4.f0);
    CPy_INCREF(CPyStatic_humanize___UNITS.f4.f1);
    CPyTagged_INCREF(CPyStatic_humanize___UNITS.f5.f0);
    CPy_INCREF(CPyStatic_humanize___UNITS.f5.f1);
    CPyTagged_INCREF(CPyStatic_humanize___UNITS.f6.f0);
    CPy_INCREF(CPyStatic_humanize___UNITS.f6.f1);
    cpy_r_r75 = CPyStatic_humanize___globals;
    cpy_r_r76 = CPyStatics[230]; /* 'UNITS' */
    cpy_r_r77 = PyTuple_New(7);
    if (unlikely(cpy_r_r77 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp107 = PyTuple_New(2);
    if (unlikely(__tmp107 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp108 = CPyTagged_StealAsObject(cpy_r_r74.f0.f0);
    PyTuple_SET_ITEM(__tmp107, 0, __tmp108);
    PyObject *__tmp109 = cpy_r_r74.f0.f1;
    PyTuple_SET_ITEM(__tmp107, 1, __tmp109);
    PyTuple_SET_ITEM(cpy_r_r77, 0, __tmp107);
    PyObject *__tmp110 = PyTuple_New(2);
    if (unlikely(__tmp110 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp111 = CPyTagged_StealAsObject(cpy_r_r74.f1.f0);
    PyTuple_SET_ITEM(__tmp110, 0, __tmp111);
    PyObject *__tmp112 = cpy_r_r74.f1.f1;
    PyTuple_SET_ITEM(__tmp110, 1, __tmp112);
    PyTuple_SET_ITEM(cpy_r_r77, 1, __tmp110);
    PyObject *__tmp113 = PyTuple_New(2);
    if (unlikely(__tmp113 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp114 = CPyTagged_StealAsObject(cpy_r_r74.f2.f0);
    PyTuple_SET_ITEM(__tmp113, 0, __tmp114);
    PyObject *__tmp115 = cpy_r_r74.f2.f1;
    PyTuple_SET_ITEM(__tmp113, 1, __tmp115);
    PyTuple_SET_ITEM(cpy_r_r77, 2, __tmp113);
    PyObject *__tmp116 = PyTuple_New(2);
    if (unlikely(__tmp116 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp117 = CPyTagged_StealAsObject(cpy_r_r74.f3.f0);
    PyTuple_SET_ITEM(__tmp116, 0, __tmp117);
    PyObject *__tmp118 = cpy_r_r74.f3.f1;
    PyTuple_SET_ITEM(__tmp116, 1, __tmp118);
    PyTuple_SET_ITEM(cpy_r_r77, 3, __tmp116);
    PyObject *__tmp119 = PyTuple_New(2);
    if (unlikely(__tmp119 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp120 = CPyTagged_StealAsObject(cpy_r_r74.f4.f0);
    PyTuple_SET_ITEM(__tmp119, 0, __tmp120);
    PyObject *__tmp121 = cpy_r_r74.f4.f1;
    PyTuple_SET_ITEM(__tmp119, 1, __tmp121);
    PyTuple_SET_ITEM(cpy_r_r77, 4, __tmp119);
    PyObject *__tmp122 = PyTuple_New(2);
    if (unlikely(__tmp122 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp123 = CPyTagged_StealAsObject(cpy_r_r74.f5.f0);
    PyTuple_SET_ITEM(__tmp122, 0, __tmp123);
    PyObject *__tmp124 = cpy_r_r74.f5.f1;
    PyTuple_SET_ITEM(__tmp122, 1, __tmp124);
    PyTuple_SET_ITEM(cpy_r_r77, 5, __tmp122);
    PyObject *__tmp125 = PyTuple_New(2);
    if (unlikely(__tmp125 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp126 = CPyTagged_StealAsObject(cpy_r_r74.f6.f0);
    PyTuple_SET_ITEM(__tmp125, 0, __tmp126);
    PyObject *__tmp127 = cpy_r_r74.f6.f1;
    PyTuple_SET_ITEM(__tmp125, 1, __tmp127);
    PyTuple_SET_ITEM(cpy_r_r77, 6, __tmp125);
    cpy_r_r78 = CPyDict_SetItem(cpy_r_r75, cpy_r_r76, cpy_r_r77);
    CPy_DECREF(cpy_r_r77);
    cpy_r_r79 = cpy_r_r78 >= 0;
    if (unlikely(!cpy_r_r79)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "<module>", 47, CPyStatic_humanize___globals);
        goto CPyL18;
    }
    cpy_r_r80 = CPyStatic_humanize___globals;
    cpy_r_r81 = CPyStatics[231]; /* 'DISPLAY_HASH_CHARS' */
    cpy_r_r82 = CPyStatics[278]; /* 4 */
    cpy_r_r83 = CPyDict_SetItem(cpy_r_r80, cpy_r_r81, cpy_r_r82);
    cpy_r_r84 = cpy_r_r83 >= 0;
    if (unlikely(!cpy_r_r84)) {
        CPy_AddTraceback("faster_eth_utils/humanize.py", "<module>", 84, CPyStatic_humanize___globals);
        goto CPyL18;
    }
    return 1;
CPyL18: ;
    cpy_r_r85 = 2;
    return cpy_r_r85;
}
static PyMethodDef module_loadingmodule_methods[] = {
    {"import_string", (PyCFunction)CPyPy_module_loading___import_string, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef module_loadingmodule = {
    PyModuleDef_HEAD_INIT,
    "faster_eth_utils.module_loading",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    module_loadingmodule_methods
};

PyObject *CPyInit_faster_eth_utils___module_loading(void)
{
    PyObject* modname = NULL;
    if (CPyModule_faster_eth_utils___module_loading_internal) {
        Py_INCREF(CPyModule_faster_eth_utils___module_loading_internal);
        return CPyModule_faster_eth_utils___module_loading_internal;
    }
    CPyModule_faster_eth_utils___module_loading_internal = PyModule_Create(&module_loadingmodule);
    if (unlikely(CPyModule_faster_eth_utils___module_loading_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_faster_eth_utils___module_loading_internal, "__name__");
    CPyStatic_module_loading___globals = PyModule_GetDict(CPyModule_faster_eth_utils___module_loading_internal);
    if (unlikely(CPyStatic_module_loading___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_module_loading_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_faster_eth_utils___module_loading_internal;
    fail:
    Py_CLEAR(CPyModule_faster_eth_utils___module_loading_internal);
    Py_CLEAR(modname);
    return NULL;
}

PyObject *CPyDef_module_loading___import_string(PyObject *cpy_r_dotted_path) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    int32_t cpy_r_r2;
    char cpy_r_r3;
    CPyPtr cpy_r_r4;
    CPyPtr cpy_r_r5;
    int64_t cpy_r_r6;
    CPyPtr cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyPtr cpy_r_r9;
    CPyPtr cpy_r_r10;
    int64_t cpy_r_r11;
    CPyPtr cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    tuple_T3OOO cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_msg;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject **cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject **cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    tuple_T3OOO cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject **cpy_r_r50;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    cpy_r_r0 = CPyStatics[125]; /* '.' */
    cpy_r_r1 = CPyStr_RSplit(cpy_r_dotted_path, cpy_r_r0, 2);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/module_loading.py", "import_string", 20, CPyStatic_module_loading___globals);
        goto CPyL6;
    }
    cpy_r_r2 = CPySequence_CheckUnpackCount(cpy_r_r1, 2);
    cpy_r_r3 = cpy_r_r2 >= 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("faster_eth_utils/module_loading.py", "import_string", 20, CPyStatic_module_loading___globals);
        goto CPyL34;
    }
    cpy_r_r4 = (CPyPtr)&((PyListObject *)cpy_r_r1)->ob_item;
    cpy_r_r5 = *(CPyPtr *)cpy_r_r4;
    cpy_r_r6 = 0 * 8;
    cpy_r_r7 = cpy_r_r5 + cpy_r_r6;
    cpy_r_r8 = *(PyObject * *)cpy_r_r7;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = (CPyPtr)&((PyListObject *)cpy_r_r1)->ob_item;
    cpy_r_r10 = *(CPyPtr *)cpy_r_r9;
    cpy_r_r11 = 1 * 8;
    cpy_r_r12 = cpy_r_r10 + cpy_r_r11;
    cpy_r_r13 = *(PyObject * *)cpy_r_r12;
    CPy_INCREF(cpy_r_r13);
    CPy_DECREF_NO_IMM(cpy_r_r1);
    if (likely(PyUnicode_Check(cpy_r_r8)))
        cpy_r_r14 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/module_loading.py", "import_string", 20, CPyStatic_module_loading___globals, "str", cpy_r_r8);
        goto CPyL35;
    }
    if (likely(PyUnicode_Check(cpy_r_r13)))
        cpy_r_r15 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("faster_eth_utils/module_loading.py", "import_string", 20, CPyStatic_module_loading___globals, "str", cpy_r_r13);
        goto CPyL36;
    }
    goto CPyL17;
CPyL6: ;
    cpy_r_r16 = CPy_CatchError();
    cpy_r_r17 = CPyModule_builtins;
    cpy_r_r18 = CPyStatics[30]; /* 'ValueError' */
    cpy_r_r19 = CPyObject_GetAttr(cpy_r_r17, cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/module_loading.py", "import_string", 21, CPyStatic_module_loading___globals);
        goto CPyL15;
    }
    cpy_r_r20 = CPy_ExceptionMatches(cpy_r_r19);
    CPy_DecRef(cpy_r_r19);
    if (!cpy_r_r20) goto CPyL13;
    cpy_r_r21 = CPyStatics[232]; /* " doesn't look like a module path" */
    cpy_r_r22 = CPyStr_Build(2, cpy_r_dotted_path, cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/module_loading.py", "import_string", 22, CPyStatic_module_loading___globals);
        goto CPyL15;
    }
    cpy_r_msg = cpy_r_r22;
    cpy_r_r23 = CPyModule_builtins;
    cpy_r_r24 = CPyStatics[233]; /* 'ImportError' */
    cpy_r_r25 = CPyObject_GetAttr(cpy_r_r23, cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/module_loading.py", "import_string", 23, CPyStatic_module_loading___globals);
        goto CPyL37;
    }
    PyObject *cpy_r_r26[1] = {cpy_r_msg};
    cpy_r_r27 = (PyObject **)&cpy_r_r26;
    cpy_r_r28 = PyObject_Vectorcall(cpy_r_r25, cpy_r_r27, 1, 0);
    CPy_DecRef(cpy_r_r25);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/module_loading.py", "import_string", 23, CPyStatic_module_loading___globals);
        goto CPyL37;
    }
    CPy_DecRef(cpy_r_msg);
    CPy_Raise(cpy_r_r28);
    CPy_DecRef(cpy_r_r28);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_eth_utils/module_loading.py", "import_string", 23, CPyStatic_module_loading___globals);
        goto CPyL15;
    } else
        goto CPyL38;
CPyL12: ;
    CPy_Unreachable();
CPyL13: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL15;
    } else
        goto CPyL39;
CPyL14: ;
    CPy_Unreachable();
CPyL15: ;
    CPy_RestoreExcInfo(cpy_r_r16);
    CPy_DecRef(cpy_r_r16.f0);
    CPy_DecRef(cpy_r_r16.f1);
    CPy_DecRef(cpy_r_r16.f2);
    cpy_r_r29 = CPy_KeepPropagating();
    if (!cpy_r_r29) goto CPyL33;
    CPy_Unreachable();
CPyL17: ;
    cpy_r_r30 = CPyStatic_module_loading___globals;
    cpy_r_r31 = CPyStatics[234]; /* 'import_module' */
    cpy_r_r32 = CPyDict_GetItem(cpy_r_r30, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/module_loading.py", "import_string", 25, CPyStatic_module_loading___globals);
        goto CPyL40;
    }
    PyObject *cpy_r_r33[1] = {cpy_r_r14};
    cpy_r_r34 = (PyObject **)&cpy_r_r33;
    cpy_r_r35 = PyObject_Vectorcall(cpy_r_r32, cpy_r_r34, 1, 0);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/module_loading.py", "import_string", 25, CPyStatic_module_loading___globals);
        goto CPyL40;
    }
    cpy_r_r36 = CPyObject_GetAttr(cpy_r_r35, cpy_r_r15);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/module_loading.py", "import_string", 28, CPyStatic_module_loading___globals);
        goto CPyL22;
    } else
        goto CPyL41;
CPyL21: ;
    return cpy_r_r36;
CPyL22: ;
    cpy_r_r37 = CPy_CatchError();
    cpy_r_r38 = CPyModule_builtins;
    cpy_r_r39 = CPyStatics[26]; /* 'AttributeError' */
    cpy_r_r40 = CPyObject_GetAttr(cpy_r_r38, cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/module_loading.py", "import_string", 29, CPyStatic_module_loading___globals);
        goto CPyL42;
    }
    cpy_r_r41 = CPy_ExceptionMatches(cpy_r_r40);
    CPy_DecRef(cpy_r_r40);
    if (!cpy_r_r41) goto CPyL43;
    cpy_r_r42 = CPyStatics[235]; /* 'Module "' */
    cpy_r_r43 = CPyStatics[236]; /* '" does not define a "' */
    cpy_r_r44 = CPyStatics[237]; /* '" attribute/class' */
    cpy_r_r45 = CPyStr_Build(5, cpy_r_r42, cpy_r_r14, cpy_r_r43, cpy_r_r15, cpy_r_r44);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r15);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/module_loading.py", "import_string", 30, CPyStatic_module_loading___globals);
        goto CPyL31;
    }
    cpy_r_msg = cpy_r_r45;
    cpy_r_r46 = CPyModule_builtins;
    cpy_r_r47 = CPyStatics[233]; /* 'ImportError' */
    cpy_r_r48 = CPyObject_GetAttr(cpy_r_r46, cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/module_loading.py", "import_string", 31, CPyStatic_module_loading___globals);
        goto CPyL44;
    }
    PyObject *cpy_r_r49[1] = {cpy_r_msg};
    cpy_r_r50 = (PyObject **)&cpy_r_r49;
    cpy_r_r51 = PyObject_Vectorcall(cpy_r_r48, cpy_r_r50, 1, 0);
    CPy_DecRef(cpy_r_r48);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/module_loading.py", "import_string", 31, CPyStatic_module_loading___globals);
        goto CPyL44;
    }
    CPy_DecRef(cpy_r_msg);
    CPy_Raise(cpy_r_r51);
    CPy_DecRef(cpy_r_r51);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_eth_utils/module_loading.py", "import_string", 31, CPyStatic_module_loading___globals);
        goto CPyL31;
    } else
        goto CPyL45;
CPyL28: ;
    CPy_Unreachable();
CPyL29: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL31;
    } else
        goto CPyL46;
CPyL30: ;
    CPy_Unreachable();
CPyL31: ;
    CPy_RestoreExcInfo(cpy_r_r37);
    CPy_DecRef(cpy_r_r37.f0);
    CPy_DecRef(cpy_r_r37.f1);
    CPy_DecRef(cpy_r_r37.f2);
    cpy_r_r52 = CPy_KeepPropagating();
    if (!cpy_r_r52) goto CPyL33;
    CPy_Unreachable();
CPyL33: ;
    cpy_r_r53 = NULL;
    return cpy_r_r53;
CPyL34: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL6;
CPyL35: ;
    CPy_DecRef(cpy_r_r13);
    goto CPyL6;
CPyL36: ;
    CPy_DecRef(cpy_r_r14);
    goto CPyL6;
CPyL37: ;
    CPy_DecRef(cpy_r_msg);
    goto CPyL15;
CPyL38: ;
    CPy_DecRef(cpy_r_r16.f0);
    CPy_DecRef(cpy_r_r16.f1);
    CPy_DecRef(cpy_r_r16.f2);
    goto CPyL12;
CPyL39: ;
    CPy_DecRef(cpy_r_r16.f0);
    CPy_DecRef(cpy_r_r16.f1);
    CPy_DecRef(cpy_r_r16.f2);
    goto CPyL14;
CPyL40: ;
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r15);
    goto CPyL33;
CPyL41: ;
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r15);
    goto CPyL21;
CPyL42: ;
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r15);
    goto CPyL31;
CPyL43: ;
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r15);
    goto CPyL29;
CPyL44: ;
    CPy_DecRef(cpy_r_msg);
    goto CPyL31;
CPyL45: ;
    CPy_DecRef(cpy_r_r37.f0);
    CPy_DecRef(cpy_r_r37.f1);
    CPy_DecRef(cpy_r_r37.f2);
    goto CPyL28;
CPyL46: ;
    CPy_DecRef(cpy_r_r37.f0);
    CPy_DecRef(cpy_r_r37.f1);
    CPy_DecRef(cpy_r_r37.f2);
    goto CPyL30;
}

PyObject *CPyPy_module_loading___import_string(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"dotted_path", 0};
    static CPyArg_Parser parser = {"O:import_string", kwlist, 0};
    PyObject *obj_dotted_path;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_dotted_path)) {
        return NULL;
    }
    PyObject *arg_dotted_path;
    if (likely(PyUnicode_Check(obj_dotted_path)))
        arg_dotted_path = obj_dotted_path;
    else {
        CPy_TypeError("str", obj_dotted_path); 
        goto fail;
    }
    PyObject *retval = CPyDef_module_loading___import_string(arg_dotted_path);
    return retval;
fail: ;
    CPy_AddTraceback("faster_eth_utils/module_loading.py", "import_string", 9, CPyStatic_module_loading___globals);
    return NULL;
}

char CPyDef_module_loading_____top_level__(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[18]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/module_loading.py", "<module>", -1, CPyStatic_module_loading___globals);
        goto CPyL6;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[324]; /* ('import_module',) */
    cpy_r_r6 = CPyStatics[238]; /* 'importlib' */
    cpy_r_r7 = CPyStatic_module_loading___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/module_loading.py", "<module>", 1, CPyStatic_module_loading___globals);
        goto CPyL6;
    }
    CPyModule_importlib = cpy_r_r8;
    CPy_INCREF(CPyModule_importlib);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[325]; /* ('Any',) */
    cpy_r_r10 = CPyStatics[21]; /* 'typing' */
    cpy_r_r11 = CPyStatic_module_loading___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/module_loading.py", "<module>", 4, CPyStatic_module_loading___globals);
        goto CPyL6;
    }
    CPyModule_typing = cpy_r_r12;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r12);
    return 1;
CPyL6: ;
    cpy_r_r13 = 2;
    return cpy_r_r13;
}
static PyMethodDef typesmodule_methods[] = {
    {"is_integer", (PyCFunction)CPyPy_types___is_integer, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_bytes", (PyCFunction)CPyPy_types___is_bytes, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_text", (PyCFunction)CPyPy_types___is_text, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_string", (PyCFunction)CPyPy_types___is_string, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_boolean", (PyCFunction)CPyPy_types___is_boolean, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_dict", (PyCFunction)CPyPy_types___is_dict, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_list_like", (PyCFunction)CPyPy_types___is_list_like, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_list", (PyCFunction)CPyPy_types___is_list, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_tuple", (PyCFunction)CPyPy_types___is_tuple, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_null", (PyCFunction)CPyPy_types___is_null, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_number", (PyCFunction)CPyPy_types___is_number, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef typesmodule = {
    PyModuleDef_HEAD_INIT,
    "faster_eth_utils.types",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    typesmodule_methods
};

PyObject *CPyInit_faster_eth_utils___types(void)
{
    PyObject* modname = NULL;
    if (CPyModule_faster_eth_utils___types_internal) {
        Py_INCREF(CPyModule_faster_eth_utils___types_internal);
        return CPyModule_faster_eth_utils___types_internal;
    }
    CPyModule_faster_eth_utils___types_internal = PyModule_Create(&typesmodule);
    if (unlikely(CPyModule_faster_eth_utils___types_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_faster_eth_utils___types_internal, "__name__");
    CPyStatic_types___globals = PyModule_GetDict(CPyModule_faster_eth_utils___types_internal);
    if (unlikely(CPyStatic_types___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_types_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_faster_eth_utils___types_internal;
    fail:
    Py_CLEAR(CPyModule_faster_eth_utils___types_internal);
    Py_CLEAR(modname);
    return NULL;
}

char CPyDef_types___is_integer(PyObject *cpy_r_value) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    tuple_T1O cpy_r_r3;
    PyObject *cpy_r_r4;
    int32_t cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    int32_t cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    cpy_r_r0 = CPyStatic_types___globals;
    cpy_r_r1 = CPyStatics[239]; /* 'integer_types' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/types.py", "is_integer", 14, CPyStatic_types___globals);
        goto CPyL8;
    }
    PyObject *__tmp128;
    if (unlikely(!(PyTuple_Check(cpy_r_r2) && PyTuple_GET_SIZE(cpy_r_r2) == 1))) {
        __tmp128 = NULL;
        goto __LL129;
    }
    __tmp128 = PyTuple_GET_ITEM(cpy_r_r2, 0);
    if (__tmp128 == NULL) goto __LL129;
    __tmp128 = cpy_r_r2;
__LL129: ;
    if (unlikely(__tmp128 == NULL)) {
        CPy_TypeError("tuple[object]", cpy_r_r2); cpy_r_r3 = (tuple_T1O) { NULL };
    } else {
        PyObject *__tmp130 = PyTuple_GET_ITEM(cpy_r_r2, 0);
        CPy_INCREF(__tmp130);
        PyObject *__tmp131;
        __tmp131 = __tmp130;
        cpy_r_r3.f0 = __tmp131;
    }
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3.f0 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/types.py", "is_integer", 14, CPyStatic_types___globals);
        goto CPyL8;
    }
    cpy_r_r4 = PyTuple_New(1);
    if (unlikely(cpy_r_r4 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp132 = cpy_r_r3.f0;
    PyTuple_SET_ITEM(cpy_r_r4, 0, __tmp132);
    cpy_r_r5 = PyObject_IsInstance(cpy_r_value, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    cpy_r_r6 = cpy_r_r5 >= 0;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("faster_eth_utils/types.py", "is_integer", 14, CPyStatic_types___globals);
        goto CPyL8;
    }
    cpy_r_r7 = cpy_r_r5;
    if (cpy_r_r7) goto CPyL5;
    cpy_r_r8 = cpy_r_r7;
    goto CPyL7;
CPyL5: ;
    cpy_r_r9 = (PyObject *)&PyBool_Type;
    cpy_r_r10 = PyObject_IsInstance(cpy_r_value, cpy_r_r9);
    cpy_r_r11 = cpy_r_r10 >= 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("faster_eth_utils/types.py", "is_integer", 14, CPyStatic_types___globals);
        goto CPyL8;
    }
    cpy_r_r12 = cpy_r_r10;
    cpy_r_r13 = cpy_r_r12 ^ 1;
    cpy_r_r8 = cpy_r_r13;
CPyL7: ;
    return cpy_r_r8;
CPyL8: ;
    cpy_r_r14 = 2;
    return cpy_r_r14;
}

PyObject *CPyPy_types___is_integer(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"value", 0};
    static CPyArg_Parser parser = {"O:is_integer", kwlist, 0};
    PyObject *obj_value;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_value)) {
        return NULL;
    }
    PyObject *arg_value = obj_value;
    char retval = CPyDef_types___is_integer(arg_value);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("faster_eth_utils/types.py", "is_integer", 13, CPyStatic_types___globals);
    return NULL;
}

char CPyDef_types___is_bytes(PyObject *cpy_r_value) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    tuple_T2OO cpy_r_r3;
    PyObject *cpy_r_r4;
    int32_t cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    cpy_r_r0 = CPyStatic_types___globals;
    cpy_r_r1 = CPyStatics[240]; /* 'bytes_types' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/types.py", "is_bytes", 18, CPyStatic_types___globals);
        goto CPyL4;
    }
    PyObject *__tmp133;
    if (unlikely(!(PyTuple_Check(cpy_r_r2) && PyTuple_GET_SIZE(cpy_r_r2) == 2))) {
        __tmp133 = NULL;
        goto __LL134;
    }
    __tmp133 = PyTuple_GET_ITEM(cpy_r_r2, 0);
    if (__tmp133 == NULL) goto __LL134;
    __tmp133 = PyTuple_GET_ITEM(cpy_r_r2, 1);
    if (__tmp133 == NULL) goto __LL134;
    __tmp133 = cpy_r_r2;
__LL134: ;
    if (unlikely(__tmp133 == NULL)) {
        CPy_TypeError("tuple[object, object]", cpy_r_r2); cpy_r_r3 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp135 = PyTuple_GET_ITEM(cpy_r_r2, 0);
        CPy_INCREF(__tmp135);
        PyObject *__tmp136;
        __tmp136 = __tmp135;
        cpy_r_r3.f0 = __tmp136;
        PyObject *__tmp137 = PyTuple_GET_ITEM(cpy_r_r2, 1);
        CPy_INCREF(__tmp137);
        PyObject *__tmp138;
        __tmp138 = __tmp137;
        cpy_r_r3.f1 = __tmp138;
    }
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3.f0 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/types.py", "is_bytes", 18, CPyStatic_types___globals);
        goto CPyL4;
    }
    cpy_r_r4 = PyTuple_New(2);
    if (unlikely(cpy_r_r4 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp139 = cpy_r_r3.f0;
    PyTuple_SET_ITEM(cpy_r_r4, 0, __tmp139);
    PyObject *__tmp140 = cpy_r_r3.f1;
    PyTuple_SET_ITEM(cpy_r_r4, 1, __tmp140);
    cpy_r_r5 = PyObject_IsInstance(cpy_r_value, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    cpy_r_r6 = cpy_r_r5 >= 0;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("faster_eth_utils/types.py", "is_bytes", 18, CPyStatic_types___globals);
        goto CPyL4;
    }
    cpy_r_r7 = cpy_r_r5;
    return cpy_r_r7;
CPyL4: ;
    cpy_r_r8 = 2;
    return cpy_r_r8;
}

PyObject *CPyPy_types___is_bytes(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"value", 0};
    static CPyArg_Parser parser = {"O:is_bytes", kwlist, 0};
    PyObject *obj_value;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_value)) {
        return NULL;
    }
    PyObject *arg_value = obj_value;
    char retval = CPyDef_types___is_bytes(arg_value);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("faster_eth_utils/types.py", "is_bytes", 17, CPyStatic_types___globals);
    return NULL;
}

char CPyDef_types___is_text(PyObject *cpy_r_value) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    tuple_T1O cpy_r_r3;
    PyObject *cpy_r_r4;
    int32_t cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    cpy_r_r0 = CPyStatic_types___globals;
    cpy_r_r1 = CPyStatics[241]; /* 'text_types' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/types.py", "is_text", 22, CPyStatic_types___globals);
        goto CPyL4;
    }
    PyObject *__tmp141;
    if (unlikely(!(PyTuple_Check(cpy_r_r2) && PyTuple_GET_SIZE(cpy_r_r2) == 1))) {
        __tmp141 = NULL;
        goto __LL142;
    }
    __tmp141 = PyTuple_GET_ITEM(cpy_r_r2, 0);
    if (__tmp141 == NULL) goto __LL142;
    __tmp141 = cpy_r_r2;
__LL142: ;
    if (unlikely(__tmp141 == NULL)) {
        CPy_TypeError("tuple[object]", cpy_r_r2); cpy_r_r3 = (tuple_T1O) { NULL };
    } else {
        PyObject *__tmp143 = PyTuple_GET_ITEM(cpy_r_r2, 0);
        CPy_INCREF(__tmp143);
        PyObject *__tmp144;
        __tmp144 = __tmp143;
        cpy_r_r3.f0 = __tmp144;
    }
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3.f0 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/types.py", "is_text", 22, CPyStatic_types___globals);
        goto CPyL4;
    }
    cpy_r_r4 = PyTuple_New(1);
    if (unlikely(cpy_r_r4 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp145 = cpy_r_r3.f0;
    PyTuple_SET_ITEM(cpy_r_r4, 0, __tmp145);
    cpy_r_r5 = PyObject_IsInstance(cpy_r_value, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    cpy_r_r6 = cpy_r_r5 >= 0;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("faster_eth_utils/types.py", "is_text", 22, CPyStatic_types___globals);
        goto CPyL4;
    }
    cpy_r_r7 = cpy_r_r5;
    return cpy_r_r7;
CPyL4: ;
    cpy_r_r8 = 2;
    return cpy_r_r8;
}

PyObject *CPyPy_types___is_text(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"value", 0};
    static CPyArg_Parser parser = {"O:is_text", kwlist, 0};
    PyObject *obj_value;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_value)) {
        return NULL;
    }
    PyObject *arg_value = obj_value;
    char retval = CPyDef_types___is_text(arg_value);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("faster_eth_utils/types.py", "is_text", 21, CPyStatic_types___globals);
    return NULL;
}

char CPyDef_types___is_string(PyObject *cpy_r_value) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    tuple_T3OOO cpy_r_r3;
    PyObject *cpy_r_r4;
    int32_t cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    cpy_r_r0 = CPyStatic_types___globals;
    cpy_r_r1 = CPyStatics[242]; /* 'string_types' */
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/types.py", "is_string", 26, CPyStatic_types___globals);
        goto CPyL4;
    }
    PyObject *__tmp146;
    if (unlikely(!(PyTuple_Check(cpy_r_r2) && PyTuple_GET_SIZE(cpy_r_r2) == 3))) {
        __tmp146 = NULL;
        goto __LL147;
    }
    __tmp146 = PyTuple_GET_ITEM(cpy_r_r2, 0);
    if (__tmp146 == NULL) goto __LL147;
    __tmp146 = PyTuple_GET_ITEM(cpy_r_r2, 1);
    if (__tmp146 == NULL) goto __LL147;
    __tmp146 = PyTuple_GET_ITEM(cpy_r_r2, 2);
    if (__tmp146 == NULL) goto __LL147;
    __tmp146 = cpy_r_r2;
__LL147: ;
    if (unlikely(__tmp146 == NULL)) {
        CPy_TypeError("tuple[object, object, object]", cpy_r_r2); cpy_r_r3 = (tuple_T3OOO) { NULL, NULL, NULL };
    } else {
        PyObject *__tmp148 = PyTuple_GET_ITEM(cpy_r_r2, 0);
        CPy_INCREF(__tmp148);
        PyObject *__tmp149;
        __tmp149 = __tmp148;
        cpy_r_r3.f0 = __tmp149;
        PyObject *__tmp150 = PyTuple_GET_ITEM(cpy_r_r2, 1);
        CPy_INCREF(__tmp150);
        PyObject *__tmp151;
        __tmp151 = __tmp150;
        cpy_r_r3.f1 = __tmp151;
        PyObject *__tmp152 = PyTuple_GET_ITEM(cpy_r_r2, 2);
        CPy_INCREF(__tmp152);
        PyObject *__tmp153;
        __tmp153 = __tmp152;
        cpy_r_r3.f2 = __tmp153;
    }
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3.f0 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/types.py", "is_string", 26, CPyStatic_types___globals);
        goto CPyL4;
    }
    cpy_r_r4 = PyTuple_New(3);
    if (unlikely(cpy_r_r4 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp154 = cpy_r_r3.f0;
    PyTuple_SET_ITEM(cpy_r_r4, 0, __tmp154);
    PyObject *__tmp155 = cpy_r_r3.f1;
    PyTuple_SET_ITEM(cpy_r_r4, 1, __tmp155);
    PyObject *__tmp156 = cpy_r_r3.f2;
    PyTuple_SET_ITEM(cpy_r_r4, 2, __tmp156);
    cpy_r_r5 = PyObject_IsInstance(cpy_r_value, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    cpy_r_r6 = cpy_r_r5 >= 0;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("faster_eth_utils/types.py", "is_string", 26, CPyStatic_types___globals);
        goto CPyL4;
    }
    cpy_r_r7 = cpy_r_r5;
    return cpy_r_r7;
CPyL4: ;
    cpy_r_r8 = 2;
    return cpy_r_r8;
}

PyObject *CPyPy_types___is_string(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"value", 0};
    static CPyArg_Parser parser = {"O:is_string", kwlist, 0};
    PyObject *obj_value;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_value)) {
        return NULL;
    }
    PyObject *arg_value = obj_value;
    char retval = CPyDef_types___is_string(arg_value);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("faster_eth_utils/types.py", "is_string", 25, CPyStatic_types___globals);
    return NULL;
}

char CPyDef_types___is_boolean(PyObject *cpy_r_value) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    cpy_r_r0 = (PyObject *)&PyBool_Type;
    cpy_r_r1 = PyObject_IsInstance(cpy_r_value, cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("faster_eth_utils/types.py", "is_boolean", 30, CPyStatic_types___globals);
        goto CPyL2;
    }
    cpy_r_r3 = cpy_r_r1;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = 2;
    return cpy_r_r4;
}

PyObject *CPyPy_types___is_boolean(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"value", 0};
    static CPyArg_Parser parser = {"O:is_boolean", kwlist, 0};
    PyObject *obj_value;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_value)) {
        return NULL;
    }
    PyObject *arg_value = obj_value;
    char retval = CPyDef_types___is_boolean(arg_value);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("faster_eth_utils/types.py", "is_boolean", 29, CPyStatic_types___globals);
    return NULL;
}

char CPyDef_types___is_dict(PyObject *cpy_r_obj) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    int32_t cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    cpy_r_r0 = CPyModule_collections___abc;
    cpy_r_r1 = CPyStatics[243]; /* 'Mapping' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/types.py", "is_dict", 34, CPyStatic_types___globals);
        goto CPyL3;
    }
    cpy_r_r3 = PyObject_IsInstance(cpy_r_obj, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    cpy_r_r4 = cpy_r_r3 >= 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("faster_eth_utils/types.py", "is_dict", 34, CPyStatic_types___globals);
        goto CPyL3;
    }
    cpy_r_r5 = cpy_r_r3;
    return cpy_r_r5;
CPyL3: ;
    cpy_r_r6 = 2;
    return cpy_r_r6;
}

PyObject *CPyPy_types___is_dict(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"obj", 0};
    static CPyArg_Parser parser = {"O:is_dict", kwlist, 0};
    PyObject *obj_obj;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_obj)) {
        return NULL;
    }
    PyObject *arg_obj = obj_obj;
    char retval = CPyDef_types___is_dict(arg_obj);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("faster_eth_utils/types.py", "is_dict", 33, CPyStatic_types___globals);
    return NULL;
}

char CPyDef_types___is_list_like(PyObject *cpy_r_obj) {
    char cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    int32_t cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    cpy_r_r0 = CPyDef_types___is_string(cpy_r_obj);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("faster_eth_utils/types.py", "is_list_like", 38, CPyStatic_types___globals);
        goto CPyL7;
    }
    cpy_r_r1 = cpy_r_r0 ^ 1;
    if (cpy_r_r1) goto CPyL3;
    cpy_r_r2 = cpy_r_r1;
    goto CPyL6;
CPyL3: ;
    cpy_r_r3 = CPyModule_collections___abc;
    cpy_r_r4 = CPyStatics[244]; /* 'Sequence' */
    cpy_r_r5 = CPyObject_GetAttr(cpy_r_r3, cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/types.py", "is_list_like", 38, CPyStatic_types___globals);
        goto CPyL7;
    }
    cpy_r_r6 = PyObject_IsInstance(cpy_r_obj, cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    cpy_r_r7 = cpy_r_r6 >= 0;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("faster_eth_utils/types.py", "is_list_like", 38, CPyStatic_types___globals);
        goto CPyL7;
    }
    cpy_r_r8 = cpy_r_r6;
    cpy_r_r2 = cpy_r_r8;
CPyL6: ;
    return cpy_r_r2;
CPyL7: ;
    cpy_r_r9 = 2;
    return cpy_r_r9;
}

PyObject *CPyPy_types___is_list_like(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"obj", 0};
    static CPyArg_Parser parser = {"O:is_list_like", kwlist, 0};
    PyObject *obj_obj;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_obj)) {
        return NULL;
    }
    PyObject *arg_obj = obj_obj;
    char retval = CPyDef_types___is_list_like(arg_obj);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("faster_eth_utils/types.py", "is_list_like", 37, CPyStatic_types___globals);
    return NULL;
}

char CPyDef_types___is_list(PyObject *cpy_r_obj) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    cpy_r_r0 = (PyObject *)&PyList_Type;
    cpy_r_r1 = PyObject_IsInstance(cpy_r_obj, cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("faster_eth_utils/types.py", "is_list", 42, CPyStatic_types___globals);
        goto CPyL2;
    }
    cpy_r_r3 = cpy_r_r1;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = 2;
    return cpy_r_r4;
}

PyObject *CPyPy_types___is_list(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"obj", 0};
    static CPyArg_Parser parser = {"O:is_list", kwlist, 0};
    PyObject *obj_obj;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_obj)) {
        return NULL;
    }
    PyObject *arg_obj = obj_obj;
    char retval = CPyDef_types___is_list(arg_obj);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("faster_eth_utils/types.py", "is_list", 41, CPyStatic_types___globals);
    return NULL;
}

char CPyDef_types___is_tuple(PyObject *cpy_r_obj) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    cpy_r_r0 = (PyObject *)&PyTuple_Type;
    cpy_r_r1 = PyObject_IsInstance(cpy_r_obj, cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("faster_eth_utils/types.py", "is_tuple", 46, CPyStatic_types___globals);
        goto CPyL2;
    }
    cpy_r_r3 = cpy_r_r1;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = 2;
    return cpy_r_r4;
}

PyObject *CPyPy_types___is_tuple(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"obj", 0};
    static CPyArg_Parser parser = {"O:is_tuple", kwlist, 0};
    PyObject *obj_obj;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_obj)) {
        return NULL;
    }
    PyObject *arg_obj = obj_obj;
    char retval = CPyDef_types___is_tuple(arg_obj);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("faster_eth_utils/types.py", "is_tuple", 45, CPyStatic_types___globals);
    return NULL;
}

char CPyDef_types___is_null(PyObject *cpy_r_obj) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_obj == cpy_r_r0;
    return cpy_r_r1;
}

PyObject *CPyPy_types___is_null(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"obj", 0};
    static CPyArg_Parser parser = {"O:is_null", kwlist, 0};
    PyObject *obj_obj;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_obj)) {
        return NULL;
    }
    PyObject *arg_obj = obj_obj;
    char retval = CPyDef_types___is_null(arg_obj);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("faster_eth_utils/types.py", "is_null", 49, CPyStatic_types___globals);
    return NULL;
}

char CPyDef_types___is_number(PyObject *cpy_r_obj) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    int32_t cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    cpy_r_r0 = CPyModule_numbers;
    cpy_r_r1 = CPyStatics[245]; /* 'Number' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/types.py", "is_number", 54, CPyStatic_types___globals);
        goto CPyL3;
    }
    cpy_r_r3 = PyObject_IsInstance(cpy_r_obj, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    cpy_r_r4 = cpy_r_r3 >= 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("faster_eth_utils/types.py", "is_number", 54, CPyStatic_types___globals);
        goto CPyL3;
    }
    cpy_r_r5 = cpy_r_r3;
    return cpy_r_r5;
CPyL3: ;
    cpy_r_r6 = 2;
    return cpy_r_r6;
}

PyObject *CPyPy_types___is_number(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"obj", 0};
    static CPyArg_Parser parser = {"O:is_number", kwlist, 0};
    PyObject *obj_obj;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_obj)) {
        return NULL;
    }
    PyObject *arg_obj = obj_obj;
    char retval = CPyDef_types___is_number(arg_obj);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("faster_eth_utils/types.py", "is_number", 53, CPyStatic_types___globals);
    return NULL;
}

char CPyDef_types_____top_level__(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject **cpy_r_r5;
    PyObject **cpy_r_r6;
    void *cpy_r_r8;
    void *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    tuple_T2OO cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    int32_t cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    tuple_T1O cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    int32_t cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    tuple_T1O cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    int32_t cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    tuple_T3OOO cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    int32_t cpy_r_r53;
    char cpy_r_r54;
    char cpy_r_r55;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[18]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/types.py", "<module>", -1, CPyStatic_types___globals);
        goto CPyL12;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = (PyObject **)&CPyModule_collections___abc;
    cpy_r_r6 = (PyObject **)&CPyModule_numbers;
    PyObject **cpy_r_r7[2] = {cpy_r_r5, cpy_r_r6};
    cpy_r_r8 = (void *)&cpy_r_r7;
    int64_t cpy_r_r9[2] = {1, 2};
    cpy_r_r10 = (void *)&cpy_r_r9;
    cpy_r_r11 = CPyStatics[328]; /* (('collections.abc', 'collections', 'collections'),
                                    ('numbers', 'numbers', 'numbers')) */
    cpy_r_r12 = CPyStatic_types___globals;
    cpy_r_r13 = CPyStatics[249]; /* 'faster_eth_utils/types.py' */
    cpy_r_r14 = CPyStatics[38]; /* '<module>' */
    cpy_r_r15 = CPyImport_ImportMany(cpy_r_r11, cpy_r_r8, cpy_r_r12, cpy_r_r13, cpy_r_r14, cpy_r_r10);
    if (!cpy_r_r15) goto CPyL12;
    cpy_r_r16 = CPyStatics[325]; /* ('Any',) */
    cpy_r_r17 = CPyStatics[21]; /* 'typing' */
    cpy_r_r18 = CPyStatic_types___globals;
    cpy_r_r19 = CPyImport_ImportFromMany(cpy_r_r17, cpy_r_r16, cpy_r_r16, cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/types.py", "<module>", 3, CPyStatic_types___globals);
        goto CPyL12;
    }
    CPyModule_typing = cpy_r_r19;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r19);
    cpy_r_r20 = (PyObject *)&PyBytes_Type;
    cpy_r_r21 = CPyModule_builtins;
    cpy_r_r22 = CPyStatics[65]; /* 'bytearray' */
    cpy_r_r23 = CPyObject_GetAttr(cpy_r_r21, cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/types.py", "<module>", 7, CPyStatic_types___globals);
        goto CPyL12;
    }
    CPy_INCREF(cpy_r_r20);
    cpy_r_r24.f0 = cpy_r_r20;
    cpy_r_r24.f1 = cpy_r_r23;
    cpy_r_r25 = CPyStatic_types___globals;
    cpy_r_r26 = CPyStatics[240]; /* 'bytes_types' */
    cpy_r_r27 = PyTuple_New(2);
    if (unlikely(cpy_r_r27 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp157 = cpy_r_r24.f0;
    PyTuple_SET_ITEM(cpy_r_r27, 0, __tmp157);
    PyObject *__tmp158 = cpy_r_r24.f1;
    PyTuple_SET_ITEM(cpy_r_r27, 1, __tmp158);
    cpy_r_r28 = CPyDict_SetItem(cpy_r_r25, cpy_r_r26, cpy_r_r27);
    CPy_DECREF(cpy_r_r27);
    cpy_r_r29 = cpy_r_r28 >= 0;
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("faster_eth_utils/types.py", "<module>", 7, CPyStatic_types___globals);
        goto CPyL12;
    }
    cpy_r_r30 = (PyObject *)&PyLong_Type;
    CPy_INCREF(cpy_r_r30);
    cpy_r_r31.f0 = cpy_r_r30;
    cpy_r_r32 = CPyStatic_types___globals;
    cpy_r_r33 = CPyStatics[239]; /* 'integer_types' */
    cpy_r_r34 = PyTuple_New(1);
    if (unlikely(cpy_r_r34 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp159 = cpy_r_r31.f0;
    PyTuple_SET_ITEM(cpy_r_r34, 0, __tmp159);
    cpy_r_r35 = CPyDict_SetItem(cpy_r_r32, cpy_r_r33, cpy_r_r34);
    CPy_DECREF(cpy_r_r34);
    cpy_r_r36 = cpy_r_r35 >= 0;
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("faster_eth_utils/types.py", "<module>", 8, CPyStatic_types___globals);
        goto CPyL12;
    }
    cpy_r_r37 = (PyObject *)&PyUnicode_Type;
    CPy_INCREF(cpy_r_r37);
    cpy_r_r38.f0 = cpy_r_r37;
    cpy_r_r39 = CPyStatic_types___globals;
    cpy_r_r40 = CPyStatics[241]; /* 'text_types' */
    cpy_r_r41 = PyTuple_New(1);
    if (unlikely(cpy_r_r41 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp160 = cpy_r_r38.f0;
    PyTuple_SET_ITEM(cpy_r_r41, 0, __tmp160);
    cpy_r_r42 = CPyDict_SetItem(cpy_r_r39, cpy_r_r40, cpy_r_r41);
    CPy_DECREF(cpy_r_r41);
    cpy_r_r43 = cpy_r_r42 >= 0;
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("faster_eth_utils/types.py", "<module>", 9, CPyStatic_types___globals);
        goto CPyL12;
    }
    cpy_r_r44 = (PyObject *)&PyBytes_Type;
    cpy_r_r45 = (PyObject *)&PyUnicode_Type;
    cpy_r_r46 = CPyModule_builtins;
    cpy_r_r47 = CPyStatics[65]; /* 'bytearray' */
    cpy_r_r48 = CPyObject_GetAttr(cpy_r_r46, cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/types.py", "<module>", 10, CPyStatic_types___globals);
        goto CPyL12;
    }
    CPy_INCREF(cpy_r_r44);
    CPy_INCREF(cpy_r_r45);
    cpy_r_r49.f0 = cpy_r_r44;
    cpy_r_r49.f1 = cpy_r_r45;
    cpy_r_r49.f2 = cpy_r_r48;
    cpy_r_r50 = CPyStatic_types___globals;
    cpy_r_r51 = CPyStatics[242]; /* 'string_types' */
    cpy_r_r52 = PyTuple_New(3);
    if (unlikely(cpy_r_r52 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp161 = cpy_r_r49.f0;
    PyTuple_SET_ITEM(cpy_r_r52, 0, __tmp161);
    PyObject *__tmp162 = cpy_r_r49.f1;
    PyTuple_SET_ITEM(cpy_r_r52, 1, __tmp162);
    PyObject *__tmp163 = cpy_r_r49.f2;
    PyTuple_SET_ITEM(cpy_r_r52, 2, __tmp163);
    cpy_r_r53 = CPyDict_SetItem(cpy_r_r50, cpy_r_r51, cpy_r_r52);
    CPy_DECREF(cpy_r_r52);
    cpy_r_r54 = cpy_r_r53 >= 0;
    if (unlikely(!cpy_r_r54)) {
        CPy_AddTraceback("faster_eth_utils/types.py", "<module>", 10, CPyStatic_types___globals);
        goto CPyL12;
    }
    return 1;
CPyL12: ;
    cpy_r_r55 = 2;
    return cpy_r_r55;
}
static PyMethodDef unitsmodule_methods[] = {
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef unitsmodule = {
    PyModuleDef_HEAD_INIT,
    "faster_eth_utils.units",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    unitsmodule_methods
};

PyObject *CPyInit_faster_eth_utils___units(void)
{
    PyObject* modname = NULL;
    if (CPyModule_faster_eth_utils___units_internal) {
        Py_INCREF(CPyModule_faster_eth_utils___units_internal);
        return CPyModule_faster_eth_utils___units_internal;
    }
    CPyModule_faster_eth_utils___units_internal = PyModule_Create(&unitsmodule);
    if (unlikely(CPyModule_faster_eth_utils___units_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_faster_eth_utils___units_internal, "__name__");
    CPyStatic_units___globals = PyModule_GetDict(CPyModule_faster_eth_utils___units_internal);
    if (unlikely(CPyStatic_units___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_units_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_faster_eth_utils___units_internal;
    fail:
    Py_CLEAR(CPyModule_faster_eth_utils___units_internal);
    Py_CLEAR(modname);
    return NULL;
}

char CPyDef_units_____top_level__(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject **cpy_r_r5;
    void *cpy_r_r7;
    void *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject **cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject **cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject **cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject **cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject **cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject **cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject **cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject **cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject **cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject **cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject **cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject **cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject **cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject **cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject **cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject **cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject **cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject **cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject *cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject **cpy_r_r165;
    PyObject *cpy_r_r166;
    PyObject *cpy_r_r167;
    PyObject *cpy_r_r168;
    PyObject *cpy_r_r169;
    PyObject *cpy_r_r170;
    PyObject *cpy_r_r171;
    PyObject **cpy_r_r173;
    PyObject *cpy_r_r174;
    PyObject *cpy_r_r175;
    PyObject *cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    PyObject *cpy_r_r179;
    PyObject **cpy_r_r181;
    PyObject *cpy_r_r182;
    PyObject *cpy_r_r183;
    PyObject *cpy_r_r184;
    PyObject *cpy_r_r185;
    PyObject *cpy_r_r186;
    PyObject *cpy_r_r187;
    PyObject **cpy_r_r189;
    PyObject *cpy_r_r190;
    PyObject *cpy_r_r191;
    PyObject *cpy_r_r192;
    PyObject *cpy_r_r193;
    PyObject *cpy_r_r194;
    PyObject *cpy_r_r195;
    PyObject **cpy_r_r197;
    PyObject *cpy_r_r198;
    PyObject *cpy_r_r199;
    PyObject *cpy_r_r200;
    PyObject *cpy_r_r201;
    int32_t cpy_r_r202;
    char cpy_r_r203;
    char cpy_r_r204;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[18]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/units.py", "<module>", -1, CPyStatic_units___globals);
        goto CPyL53;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = (PyObject **)&CPyModule_decimal;
    PyObject **cpy_r_r6[1] = {cpy_r_r5};
    cpy_r_r7 = (void *)&cpy_r_r6;
    int64_t cpy_r_r8[1] = {1};
    cpy_r_r9 = (void *)&cpy_r_r8;
    cpy_r_r10 = CPyStatics[298]; /* (('decimal', 'decimal', 'decimal'),) */
    cpy_r_r11 = CPyStatic_units___globals;
    cpy_r_r12 = CPyStatics[250]; /* 'faster_eth_utils/units.py' */
    cpy_r_r13 = CPyStatics[38]; /* '<module>' */
    cpy_r_r14 = CPyImport_ImportMany(cpy_r_r10, cpy_r_r7, cpy_r_r11, cpy_r_r12, cpy_r_r13, cpy_r_r9);
    if (!cpy_r_r14) goto CPyL53;
    cpy_r_r15 = CPyStatics[91]; /* 'wei' */
    cpy_r_r16 = CPyStatics[251]; /* '1' */
    cpy_r_r17 = CPyModule_decimal;
    cpy_r_r18 = CPyStatics[121]; /* 'Decimal' */
    cpy_r_r19 = CPyObject_GetAttr(cpy_r_r17, cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/units.py", "<module>", 7, CPyStatic_units___globals);
        goto CPyL53;
    }
    PyObject *cpy_r_r20[1] = {cpy_r_r16};
    cpy_r_r21 = (PyObject **)&cpy_r_r20;
    cpy_r_r22 = PyObject_Vectorcall(cpy_r_r19, cpy_r_r21, 1, 0);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/units.py", "<module>", 7, CPyStatic_units___globals);
        goto CPyL53;
    }
    cpy_r_r23 = CPyStatics[92]; /* 'kwei' */
    cpy_r_r24 = CPyStatics[252]; /* '1000' */
    cpy_r_r25 = CPyModule_decimal;
    cpy_r_r26 = CPyStatics[121]; /* 'Decimal' */
    cpy_r_r27 = CPyObject_GetAttr(cpy_r_r25, cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/units.py", "<module>", 8, CPyStatic_units___globals);
        goto CPyL54;
    }
    PyObject *cpy_r_r28[1] = {cpy_r_r24};
    cpy_r_r29 = (PyObject **)&cpy_r_r28;
    cpy_r_r30 = PyObject_Vectorcall(cpy_r_r27, cpy_r_r29, 1, 0);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/units.py", "<module>", 8, CPyStatic_units___globals);
        goto CPyL54;
    }
    cpy_r_r31 = CPyStatics[93]; /* 'babbage' */
    cpy_r_r32 = CPyStatics[252]; /* '1000' */
    cpy_r_r33 = CPyModule_decimal;
    cpy_r_r34 = CPyStatics[121]; /* 'Decimal' */
    cpy_r_r35 = CPyObject_GetAttr(cpy_r_r33, cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/units.py", "<module>", 9, CPyStatic_units___globals);
        goto CPyL55;
    }
    PyObject *cpy_r_r36[1] = {cpy_r_r32};
    cpy_r_r37 = (PyObject **)&cpy_r_r36;
    cpy_r_r38 = PyObject_Vectorcall(cpy_r_r35, cpy_r_r37, 1, 0);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/units.py", "<module>", 9, CPyStatic_units___globals);
        goto CPyL55;
    }
    cpy_r_r39 = CPyStatics[94]; /* 'femtoether' */
    cpy_r_r40 = CPyStatics[252]; /* '1000' */
    cpy_r_r41 = CPyModule_decimal;
    cpy_r_r42 = CPyStatics[121]; /* 'Decimal' */
    cpy_r_r43 = CPyObject_GetAttr(cpy_r_r41, cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/units.py", "<module>", 10, CPyStatic_units___globals);
        goto CPyL56;
    }
    PyObject *cpy_r_r44[1] = {cpy_r_r40};
    cpy_r_r45 = (PyObject **)&cpy_r_r44;
    cpy_r_r46 = PyObject_Vectorcall(cpy_r_r43, cpy_r_r45, 1, 0);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/units.py", "<module>", 10, CPyStatic_units___globals);
        goto CPyL56;
    }
    cpy_r_r47 = CPyStatics[95]; /* 'mwei' */
    cpy_r_r48 = CPyStatics[253]; /* '1000000' */
    cpy_r_r49 = CPyModule_decimal;
    cpy_r_r50 = CPyStatics[121]; /* 'Decimal' */
    cpy_r_r51 = CPyObject_GetAttr(cpy_r_r49, cpy_r_r50);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/units.py", "<module>", 11, CPyStatic_units___globals);
        goto CPyL57;
    }
    PyObject *cpy_r_r52[1] = {cpy_r_r48};
    cpy_r_r53 = (PyObject **)&cpy_r_r52;
    cpy_r_r54 = PyObject_Vectorcall(cpy_r_r51, cpy_r_r53, 1, 0);
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/units.py", "<module>", 11, CPyStatic_units___globals);
        goto CPyL57;
    }
    cpy_r_r55 = CPyStatics[96]; /* 'lovelace' */
    cpy_r_r56 = CPyStatics[253]; /* '1000000' */
    cpy_r_r57 = CPyModule_decimal;
    cpy_r_r58 = CPyStatics[121]; /* 'Decimal' */
    cpy_r_r59 = CPyObject_GetAttr(cpy_r_r57, cpy_r_r58);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/units.py", "<module>", 12, CPyStatic_units___globals);
        goto CPyL58;
    }
    PyObject *cpy_r_r60[1] = {cpy_r_r56};
    cpy_r_r61 = (PyObject **)&cpy_r_r60;
    cpy_r_r62 = PyObject_Vectorcall(cpy_r_r59, cpy_r_r61, 1, 0);
    CPy_DECREF(cpy_r_r59);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/units.py", "<module>", 12, CPyStatic_units___globals);
        goto CPyL58;
    }
    cpy_r_r63 = CPyStatics[97]; /* 'picoether' */
    cpy_r_r64 = CPyStatics[253]; /* '1000000' */
    cpy_r_r65 = CPyModule_decimal;
    cpy_r_r66 = CPyStatics[121]; /* 'Decimal' */
    cpy_r_r67 = CPyObject_GetAttr(cpy_r_r65, cpy_r_r66);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/units.py", "<module>", 13, CPyStatic_units___globals);
        goto CPyL59;
    }
    PyObject *cpy_r_r68[1] = {cpy_r_r64};
    cpy_r_r69 = (PyObject **)&cpy_r_r68;
    cpy_r_r70 = PyObject_Vectorcall(cpy_r_r67, cpy_r_r69, 1, 0);
    CPy_DECREF(cpy_r_r67);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/units.py", "<module>", 13, CPyStatic_units___globals);
        goto CPyL59;
    }
    cpy_r_r71 = CPyStatics[98]; /* 'gwei' */
    cpy_r_r72 = CPyStatics[254]; /* '1000000000' */
    cpy_r_r73 = CPyModule_decimal;
    cpy_r_r74 = CPyStatics[121]; /* 'Decimal' */
    cpy_r_r75 = CPyObject_GetAttr(cpy_r_r73, cpy_r_r74);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/units.py", "<module>", 14, CPyStatic_units___globals);
        goto CPyL60;
    }
    PyObject *cpy_r_r76[1] = {cpy_r_r72};
    cpy_r_r77 = (PyObject **)&cpy_r_r76;
    cpy_r_r78 = PyObject_Vectorcall(cpy_r_r75, cpy_r_r77, 1, 0);
    CPy_DECREF(cpy_r_r75);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/units.py", "<module>", 14, CPyStatic_units___globals);
        goto CPyL60;
    }
    cpy_r_r79 = CPyStatics[99]; /* 'shannon' */
    cpy_r_r80 = CPyStatics[254]; /* '1000000000' */
    cpy_r_r81 = CPyModule_decimal;
    cpy_r_r82 = CPyStatics[121]; /* 'Decimal' */
    cpy_r_r83 = CPyObject_GetAttr(cpy_r_r81, cpy_r_r82);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/units.py", "<module>", 15, CPyStatic_units___globals);
        goto CPyL61;
    }
    PyObject *cpy_r_r84[1] = {cpy_r_r80};
    cpy_r_r85 = (PyObject **)&cpy_r_r84;
    cpy_r_r86 = PyObject_Vectorcall(cpy_r_r83, cpy_r_r85, 1, 0);
    CPy_DECREF(cpy_r_r83);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/units.py", "<module>", 15, CPyStatic_units___globals);
        goto CPyL61;
    }
    cpy_r_r87 = CPyStatics[100]; /* 'nanoether' */
    cpy_r_r88 = CPyStatics[254]; /* '1000000000' */
    cpy_r_r89 = CPyModule_decimal;
    cpy_r_r90 = CPyStatics[121]; /* 'Decimal' */
    cpy_r_r91 = CPyObject_GetAttr(cpy_r_r89, cpy_r_r90);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/units.py", "<module>", 16, CPyStatic_units___globals);
        goto CPyL62;
    }
    PyObject *cpy_r_r92[1] = {cpy_r_r88};
    cpy_r_r93 = (PyObject **)&cpy_r_r92;
    cpy_r_r94 = PyObject_Vectorcall(cpy_r_r91, cpy_r_r93, 1, 0);
    CPy_DECREF(cpy_r_r91);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/units.py", "<module>", 16, CPyStatic_units___globals);
        goto CPyL62;
    }
    cpy_r_r95 = CPyStatics[101]; /* 'nano' */
    cpy_r_r96 = CPyStatics[254]; /* '1000000000' */
    cpy_r_r97 = CPyModule_decimal;
    cpy_r_r98 = CPyStatics[121]; /* 'Decimal' */
    cpy_r_r99 = CPyObject_GetAttr(cpy_r_r97, cpy_r_r98);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/units.py", "<module>", 17, CPyStatic_units___globals);
        goto CPyL63;
    }
    PyObject *cpy_r_r100[1] = {cpy_r_r96};
    cpy_r_r101 = (PyObject **)&cpy_r_r100;
    cpy_r_r102 = PyObject_Vectorcall(cpy_r_r99, cpy_r_r101, 1, 0);
    CPy_DECREF(cpy_r_r99);
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/units.py", "<module>", 17, CPyStatic_units___globals);
        goto CPyL63;
    }
    cpy_r_r103 = CPyStatics[102]; /* 'szabo' */
    cpy_r_r104 = CPyStatics[255]; /* '1000000000000' */
    cpy_r_r105 = CPyModule_decimal;
    cpy_r_r106 = CPyStatics[121]; /* 'Decimal' */
    cpy_r_r107 = CPyObject_GetAttr(cpy_r_r105, cpy_r_r106);
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/units.py", "<module>", 18, CPyStatic_units___globals);
        goto CPyL64;
    }
    PyObject *cpy_r_r108[1] = {cpy_r_r104};
    cpy_r_r109 = (PyObject **)&cpy_r_r108;
    cpy_r_r110 = PyObject_Vectorcall(cpy_r_r107, cpy_r_r109, 1, 0);
    CPy_DECREF(cpy_r_r107);
    if (unlikely(cpy_r_r110 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/units.py", "<module>", 18, CPyStatic_units___globals);
        goto CPyL64;
    }
    cpy_r_r111 = CPyStatics[103]; /* 'microether' */
    cpy_r_r112 = CPyStatics[255]; /* '1000000000000' */
    cpy_r_r113 = CPyModule_decimal;
    cpy_r_r114 = CPyStatics[121]; /* 'Decimal' */
    cpy_r_r115 = CPyObject_GetAttr(cpy_r_r113, cpy_r_r114);
    if (unlikely(cpy_r_r115 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/units.py", "<module>", 19, CPyStatic_units___globals);
        goto CPyL65;
    }
    PyObject *cpy_r_r116[1] = {cpy_r_r112};
    cpy_r_r117 = (PyObject **)&cpy_r_r116;
    cpy_r_r118 = PyObject_Vectorcall(cpy_r_r115, cpy_r_r117, 1, 0);
    CPy_DECREF(cpy_r_r115);
    if (unlikely(cpy_r_r118 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/units.py", "<module>", 19, CPyStatic_units___globals);
        goto CPyL65;
    }
    cpy_r_r119 = CPyStatics[104]; /* 'micro' */
    cpy_r_r120 = CPyStatics[255]; /* '1000000000000' */
    cpy_r_r121 = CPyModule_decimal;
    cpy_r_r122 = CPyStatics[121]; /* 'Decimal' */
    cpy_r_r123 = CPyObject_GetAttr(cpy_r_r121, cpy_r_r122);
    if (unlikely(cpy_r_r123 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/units.py", "<module>", 20, CPyStatic_units___globals);
        goto CPyL66;
    }
    PyObject *cpy_r_r124[1] = {cpy_r_r120};
    cpy_r_r125 = (PyObject **)&cpy_r_r124;
    cpy_r_r126 = PyObject_Vectorcall(cpy_r_r123, cpy_r_r125, 1, 0);
    CPy_DECREF(cpy_r_r123);
    if (unlikely(cpy_r_r126 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/units.py", "<module>", 20, CPyStatic_units___globals);
        goto CPyL66;
    }
    cpy_r_r127 = CPyStatics[105]; /* 'finney' */
    cpy_r_r128 = CPyStatics[256]; /* '1000000000000000' */
    cpy_r_r129 = CPyModule_decimal;
    cpy_r_r130 = CPyStatics[121]; /* 'Decimal' */
    cpy_r_r131 = CPyObject_GetAttr(cpy_r_r129, cpy_r_r130);
    if (unlikely(cpy_r_r131 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/units.py", "<module>", 21, CPyStatic_units___globals);
        goto CPyL67;
    }
    PyObject *cpy_r_r132[1] = {cpy_r_r128};
    cpy_r_r133 = (PyObject **)&cpy_r_r132;
    cpy_r_r134 = PyObject_Vectorcall(cpy_r_r131, cpy_r_r133, 1, 0);
    CPy_DECREF(cpy_r_r131);
    if (unlikely(cpy_r_r134 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/units.py", "<module>", 21, CPyStatic_units___globals);
        goto CPyL67;
    }
    cpy_r_r135 = CPyStatics[106]; /* 'milliether' */
    cpy_r_r136 = CPyStatics[256]; /* '1000000000000000' */
    cpy_r_r137 = CPyModule_decimal;
    cpy_r_r138 = CPyStatics[121]; /* 'Decimal' */
    cpy_r_r139 = CPyObject_GetAttr(cpy_r_r137, cpy_r_r138);
    if (unlikely(cpy_r_r139 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/units.py", "<module>", 22, CPyStatic_units___globals);
        goto CPyL68;
    }
    PyObject *cpy_r_r140[1] = {cpy_r_r136};
    cpy_r_r141 = (PyObject **)&cpy_r_r140;
    cpy_r_r142 = PyObject_Vectorcall(cpy_r_r139, cpy_r_r141, 1, 0);
    CPy_DECREF(cpy_r_r139);
    if (unlikely(cpy_r_r142 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/units.py", "<module>", 22, CPyStatic_units___globals);
        goto CPyL68;
    }
    cpy_r_r143 = CPyStatics[107]; /* 'milli' */
    cpy_r_r144 = CPyStatics[256]; /* '1000000000000000' */
    cpy_r_r145 = CPyModule_decimal;
    cpy_r_r146 = CPyStatics[121]; /* 'Decimal' */
    cpy_r_r147 = CPyObject_GetAttr(cpy_r_r145, cpy_r_r146);
    if (unlikely(cpy_r_r147 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/units.py", "<module>", 23, CPyStatic_units___globals);
        goto CPyL69;
    }
    PyObject *cpy_r_r148[1] = {cpy_r_r144};
    cpy_r_r149 = (PyObject **)&cpy_r_r148;
    cpy_r_r150 = PyObject_Vectorcall(cpy_r_r147, cpy_r_r149, 1, 0);
    CPy_DECREF(cpy_r_r147);
    if (unlikely(cpy_r_r150 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/units.py", "<module>", 23, CPyStatic_units___globals);
        goto CPyL69;
    }
    cpy_r_r151 = CPyStatics[108]; /* 'ether' */
    cpy_r_r152 = CPyStatics[257]; /* '1000000000000000000' */
    cpy_r_r153 = CPyModule_decimal;
    cpy_r_r154 = CPyStatics[121]; /* 'Decimal' */
    cpy_r_r155 = CPyObject_GetAttr(cpy_r_r153, cpy_r_r154);
    if (unlikely(cpy_r_r155 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/units.py", "<module>", 24, CPyStatic_units___globals);
        goto CPyL70;
    }
    PyObject *cpy_r_r156[1] = {cpy_r_r152};
    cpy_r_r157 = (PyObject **)&cpy_r_r156;
    cpy_r_r158 = PyObject_Vectorcall(cpy_r_r155, cpy_r_r157, 1, 0);
    CPy_DECREF(cpy_r_r155);
    if (unlikely(cpy_r_r158 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/units.py", "<module>", 24, CPyStatic_units___globals);
        goto CPyL70;
    }
    cpy_r_r159 = CPyStatics[109]; /* 'kether' */
    cpy_r_r160 = CPyStatics[258]; /* '1000000000000000000000' */
    cpy_r_r161 = CPyModule_decimal;
    cpy_r_r162 = CPyStatics[121]; /* 'Decimal' */
    cpy_r_r163 = CPyObject_GetAttr(cpy_r_r161, cpy_r_r162);
    if (unlikely(cpy_r_r163 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/units.py", "<module>", 25, CPyStatic_units___globals);
        goto CPyL71;
    }
    PyObject *cpy_r_r164[1] = {cpy_r_r160};
    cpy_r_r165 = (PyObject **)&cpy_r_r164;
    cpy_r_r166 = PyObject_Vectorcall(cpy_r_r163, cpy_r_r165, 1, 0);
    CPy_DECREF(cpy_r_r163);
    if (unlikely(cpy_r_r166 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/units.py", "<module>", 25, CPyStatic_units___globals);
        goto CPyL71;
    }
    cpy_r_r167 = CPyStatics[110]; /* 'grand' */
    cpy_r_r168 = CPyStatics[258]; /* '1000000000000000000000' */
    cpy_r_r169 = CPyModule_decimal;
    cpy_r_r170 = CPyStatics[121]; /* 'Decimal' */
    cpy_r_r171 = CPyObject_GetAttr(cpy_r_r169, cpy_r_r170);
    if (unlikely(cpy_r_r171 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/units.py", "<module>", 26, CPyStatic_units___globals);
        goto CPyL72;
    }
    PyObject *cpy_r_r172[1] = {cpy_r_r168};
    cpy_r_r173 = (PyObject **)&cpy_r_r172;
    cpy_r_r174 = PyObject_Vectorcall(cpy_r_r171, cpy_r_r173, 1, 0);
    CPy_DECREF(cpy_r_r171);
    if (unlikely(cpy_r_r174 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/units.py", "<module>", 26, CPyStatic_units___globals);
        goto CPyL72;
    }
    cpy_r_r175 = CPyStatics[111]; /* 'mether' */
    cpy_r_r176 = CPyStatics[259]; /* '1000000000000000000000000' */
    cpy_r_r177 = CPyModule_decimal;
    cpy_r_r178 = CPyStatics[121]; /* 'Decimal' */
    cpy_r_r179 = CPyObject_GetAttr(cpy_r_r177, cpy_r_r178);
    if (unlikely(cpy_r_r179 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/units.py", "<module>", 27, CPyStatic_units___globals);
        goto CPyL73;
    }
    PyObject *cpy_r_r180[1] = {cpy_r_r176};
    cpy_r_r181 = (PyObject **)&cpy_r_r180;
    cpy_r_r182 = PyObject_Vectorcall(cpy_r_r179, cpy_r_r181, 1, 0);
    CPy_DECREF(cpy_r_r179);
    if (unlikely(cpy_r_r182 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/units.py", "<module>", 27, CPyStatic_units___globals);
        goto CPyL73;
    }
    cpy_r_r183 = CPyStatics[112]; /* 'gether' */
    cpy_r_r184 = CPyStatics[260]; /* '1000000000000000000000000000' */
    cpy_r_r185 = CPyModule_decimal;
    cpy_r_r186 = CPyStatics[121]; /* 'Decimal' */
    cpy_r_r187 = CPyObject_GetAttr(cpy_r_r185, cpy_r_r186);
    if (unlikely(cpy_r_r187 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/units.py", "<module>", 28, CPyStatic_units___globals);
        goto CPyL74;
    }
    PyObject *cpy_r_r188[1] = {cpy_r_r184};
    cpy_r_r189 = (PyObject **)&cpy_r_r188;
    cpy_r_r190 = PyObject_Vectorcall(cpy_r_r187, cpy_r_r189, 1, 0);
    CPy_DECREF(cpy_r_r187);
    if (unlikely(cpy_r_r190 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/units.py", "<module>", 28, CPyStatic_units___globals);
        goto CPyL74;
    }
    cpy_r_r191 = CPyStatics[113]; /* 'tether' */
    cpy_r_r192 = CPyStatics[261]; /* '1000000000000000000000000000000' */
    cpy_r_r193 = CPyModule_decimal;
    cpy_r_r194 = CPyStatics[121]; /* 'Decimal' */
    cpy_r_r195 = CPyObject_GetAttr(cpy_r_r193, cpy_r_r194);
    if (unlikely(cpy_r_r195 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/units.py", "<module>", 29, CPyStatic_units___globals);
        goto CPyL75;
    }
    PyObject *cpy_r_r196[1] = {cpy_r_r192};
    cpy_r_r197 = (PyObject **)&cpy_r_r196;
    cpy_r_r198 = PyObject_Vectorcall(cpy_r_r195, cpy_r_r197, 1, 0);
    CPy_DECREF(cpy_r_r195);
    if (unlikely(cpy_r_r198 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/units.py", "<module>", 29, CPyStatic_units___globals);
        goto CPyL75;
    }
    cpy_r_r199 = CPyDict_Build(23, cpy_r_r15, cpy_r_r22, cpy_r_r23, cpy_r_r30, cpy_r_r31, cpy_r_r38, cpy_r_r39, cpy_r_r46, cpy_r_r47, cpy_r_r54, cpy_r_r55, cpy_r_r62, cpy_r_r63, cpy_r_r70, cpy_r_r71, cpy_r_r78, cpy_r_r79, cpy_r_r86, cpy_r_r87, cpy_r_r94, cpy_r_r95, cpy_r_r102, cpy_r_r103, cpy_r_r110, cpy_r_r111, cpy_r_r118, cpy_r_r119, cpy_r_r126, cpy_r_r127, cpy_r_r134, cpy_r_r135, cpy_r_r142, cpy_r_r143, cpy_r_r150, cpy_r_r151, cpy_r_r158, cpy_r_r159, cpy_r_r166, cpy_r_r167, cpy_r_r174, cpy_r_r175, cpy_r_r182, cpy_r_r183, cpy_r_r190, cpy_r_r191, cpy_r_r198);
    CPy_DECREF(cpy_r_r22);
    CPy_DECREF(cpy_r_r30);
    CPy_DECREF(cpy_r_r38);
    CPy_DECREF(cpy_r_r46);
    CPy_DECREF(cpy_r_r54);
    CPy_DECREF(cpy_r_r62);
    CPy_DECREF(cpy_r_r70);
    CPy_DECREF(cpy_r_r78);
    CPy_DECREF(cpy_r_r86);
    CPy_DECREF(cpy_r_r94);
    CPy_DECREF(cpy_r_r102);
    CPy_DECREF(cpy_r_r110);
    CPy_DECREF(cpy_r_r118);
    CPy_DECREF(cpy_r_r126);
    CPy_DECREF(cpy_r_r134);
    CPy_DECREF(cpy_r_r142);
    CPy_DECREF(cpy_r_r150);
    CPy_DECREF(cpy_r_r158);
    CPy_DECREF(cpy_r_r166);
    CPy_DECREF(cpy_r_r174);
    CPy_DECREF(cpy_r_r182);
    CPy_DECREF(cpy_r_r190);
    CPy_DECREF(cpy_r_r198);
    if (unlikely(cpy_r_r199 == NULL)) {
        CPy_AddTraceback("faster_eth_utils/units.py", "<module>", 6, CPyStatic_units___globals);
        goto CPyL53;
    }
    cpy_r_r200 = CPyStatic_units___globals;
    cpy_r_r201 = CPyStatics[90]; /* 'units' */
    cpy_r_r202 = CPyDict_SetItem(cpy_r_r200, cpy_r_r201, cpy_r_r199);
    CPy_DECREF(cpy_r_r199);
    cpy_r_r203 = cpy_r_r202 >= 0;
    if (unlikely(!cpy_r_r203)) {
        CPy_AddTraceback("faster_eth_utils/units.py", "<module>", 6, CPyStatic_units___globals);
        goto CPyL53;
    }
    return 1;
CPyL53: ;
    cpy_r_r204 = 2;
    return cpy_r_r204;
CPyL54: ;
    CPy_DecRef(cpy_r_r22);
    goto CPyL53;
CPyL55: ;
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r30);
    goto CPyL53;
CPyL56: ;
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r38);
    goto CPyL53;
CPyL57: ;
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_r46);
    goto CPyL53;
CPyL58: ;
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_r54);
    goto CPyL53;
CPyL59: ;
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_r54);
    CPy_DecRef(cpy_r_r62);
    goto CPyL53;
CPyL60: ;
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_r54);
    CPy_DecRef(cpy_r_r62);
    CPy_DecRef(cpy_r_r70);
    goto CPyL53;
CPyL61: ;
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_r54);
    CPy_DecRef(cpy_r_r62);
    CPy_DecRef(cpy_r_r70);
    CPy_DecRef(cpy_r_r78);
    goto CPyL53;
CPyL62: ;
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_r54);
    CPy_DecRef(cpy_r_r62);
    CPy_DecRef(cpy_r_r70);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r86);
    goto CPyL53;
CPyL63: ;
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_r54);
    CPy_DecRef(cpy_r_r62);
    CPy_DecRef(cpy_r_r70);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r86);
    CPy_DecRef(cpy_r_r94);
    goto CPyL53;
CPyL64: ;
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_r54);
    CPy_DecRef(cpy_r_r62);
    CPy_DecRef(cpy_r_r70);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r86);
    CPy_DecRef(cpy_r_r94);
    CPy_DecRef(cpy_r_r102);
    goto CPyL53;
CPyL65: ;
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_r54);
    CPy_DecRef(cpy_r_r62);
    CPy_DecRef(cpy_r_r70);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r86);
    CPy_DecRef(cpy_r_r94);
    CPy_DecRef(cpy_r_r102);
    CPy_DecRef(cpy_r_r110);
    goto CPyL53;
CPyL66: ;
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_r54);
    CPy_DecRef(cpy_r_r62);
    CPy_DecRef(cpy_r_r70);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r86);
    CPy_DecRef(cpy_r_r94);
    CPy_DecRef(cpy_r_r102);
    CPy_DecRef(cpy_r_r110);
    CPy_DecRef(cpy_r_r118);
    goto CPyL53;
CPyL67: ;
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_r54);
    CPy_DecRef(cpy_r_r62);
    CPy_DecRef(cpy_r_r70);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r86);
    CPy_DecRef(cpy_r_r94);
    CPy_DecRef(cpy_r_r102);
    CPy_DecRef(cpy_r_r110);
    CPy_DecRef(cpy_r_r118);
    CPy_DecRef(cpy_r_r126);
    goto CPyL53;
CPyL68: ;
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_r54);
    CPy_DecRef(cpy_r_r62);
    CPy_DecRef(cpy_r_r70);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r86);
    CPy_DecRef(cpy_r_r94);
    CPy_DecRef(cpy_r_r102);
    CPy_DecRef(cpy_r_r110);
    CPy_DecRef(cpy_r_r118);
    CPy_DecRef(cpy_r_r126);
    CPy_DecRef(cpy_r_r134);
    goto CPyL53;
CPyL69: ;
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_r54);
    CPy_DecRef(cpy_r_r62);
    CPy_DecRef(cpy_r_r70);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r86);
    CPy_DecRef(cpy_r_r94);
    CPy_DecRef(cpy_r_r102);
    CPy_DecRef(cpy_r_r110);
    CPy_DecRef(cpy_r_r118);
    CPy_DecRef(cpy_r_r126);
    CPy_DecRef(cpy_r_r134);
    CPy_DecRef(cpy_r_r142);
    goto CPyL53;
CPyL70: ;
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_r54);
    CPy_DecRef(cpy_r_r62);
    CPy_DecRef(cpy_r_r70);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r86);
    CPy_DecRef(cpy_r_r94);
    CPy_DecRef(cpy_r_r102);
    CPy_DecRef(cpy_r_r110);
    CPy_DecRef(cpy_r_r118);
    CPy_DecRef(cpy_r_r126);
    CPy_DecRef(cpy_r_r134);
    CPy_DecRef(cpy_r_r142);
    CPy_DecRef(cpy_r_r150);
    goto CPyL53;
CPyL71: ;
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_r54);
    CPy_DecRef(cpy_r_r62);
    CPy_DecRef(cpy_r_r70);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r86);
    CPy_DecRef(cpy_r_r94);
    CPy_DecRef(cpy_r_r102);
    CPy_DecRef(cpy_r_r110);
    CPy_DecRef(cpy_r_r118);
    CPy_DecRef(cpy_r_r126);
    CPy_DecRef(cpy_r_r134);
    CPy_DecRef(cpy_r_r142);
    CPy_DecRef(cpy_r_r150);
    CPy_DecRef(cpy_r_r158);
    goto CPyL53;
CPyL72: ;
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_r54);
    CPy_DecRef(cpy_r_r62);
    CPy_DecRef(cpy_r_r70);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r86);
    CPy_DecRef(cpy_r_r94);
    CPy_DecRef(cpy_r_r102);
    CPy_DecRef(cpy_r_r110);
    CPy_DecRef(cpy_r_r118);
    CPy_DecRef(cpy_r_r126);
    CPy_DecRef(cpy_r_r134);
    CPy_DecRef(cpy_r_r142);
    CPy_DecRef(cpy_r_r150);
    CPy_DecRef(cpy_r_r158);
    CPy_DecRef(cpy_r_r166);
    goto CPyL53;
CPyL73: ;
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_r54);
    CPy_DecRef(cpy_r_r62);
    CPy_DecRef(cpy_r_r70);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r86);
    CPy_DecRef(cpy_r_r94);
    CPy_DecRef(cpy_r_r102);
    CPy_DecRef(cpy_r_r110);
    CPy_DecRef(cpy_r_r118);
    CPy_DecRef(cpy_r_r126);
    CPy_DecRef(cpy_r_r134);
    CPy_DecRef(cpy_r_r142);
    CPy_DecRef(cpy_r_r150);
    CPy_DecRef(cpy_r_r158);
    CPy_DecRef(cpy_r_r166);
    CPy_DecRef(cpy_r_r174);
    goto CPyL53;
CPyL74: ;
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_r54);
    CPy_DecRef(cpy_r_r62);
    CPy_DecRef(cpy_r_r70);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r86);
    CPy_DecRef(cpy_r_r94);
    CPy_DecRef(cpy_r_r102);
    CPy_DecRef(cpy_r_r110);
    CPy_DecRef(cpy_r_r118);
    CPy_DecRef(cpy_r_r126);
    CPy_DecRef(cpy_r_r134);
    CPy_DecRef(cpy_r_r142);
    CPy_DecRef(cpy_r_r150);
    CPy_DecRef(cpy_r_r158);
    CPy_DecRef(cpy_r_r166);
    CPy_DecRef(cpy_r_r174);
    CPy_DecRef(cpy_r_r182);
    goto CPyL53;
CPyL75: ;
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_r54);
    CPy_DecRef(cpy_r_r62);
    CPy_DecRef(cpy_r_r70);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r86);
    CPy_DecRef(cpy_r_r94);
    CPy_DecRef(cpy_r_r102);
    CPy_DecRef(cpy_r_r110);
    CPy_DecRef(cpy_r_r118);
    CPy_DecRef(cpy_r_r126);
    CPy_DecRef(cpy_r_r134);
    CPy_DecRef(cpy_r_r142);
    CPy_DecRef(cpy_r_r150);
    CPy_DecRef(cpy_r_r158);
    CPy_DecRef(cpy_r_r166);
    CPy_DecRef(cpy_r_r174);
    CPy_DecRef(cpy_r_r182);
    CPy_DecRef(cpy_r_r190);
    goto CPyL53;
}

int CPyGlobalsInit(void)
{
    static int is_initialized = 0;
    if (is_initialized) return 0;
    
    CPy_Init();
    CPyModule_faster_eth_utils___abi = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_typing = Py_None;
    CPyModule_faster_eth_utils___crypto = Py_None;
    CPyModule_faster_eth_utils___address = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_re = Py_None;
    CPyModule_typing = Py_None;
    CPyModule_eth_typing = Py_None;
    CPyModule_faster_eth_utils___conversions = Py_None;
    CPyModule_faster_eth_utils___crypto = Py_None;
    CPyModule_faster_eth_utils___hexadecimal = Py_None;
    CPyModule_faster_eth_utils___types = Py_None;
    CPyModule_faster_eth_utils___conversions = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_typing = Py_None;
    CPyModule_eth_typing = Py_None;
    CPyModule_faster_eth_utils___encoding = Py_None;
    CPyModule_faster_eth_utils___hexadecimal = Py_None;
    CPyModule_faster_eth_utils___types = Py_None;
    CPyModule_faster_eth_utils___currency = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_decimal = Py_None;
    CPyModule_typing = Py_None;
    CPyModule_faster_eth_utils___types = Py_None;
    CPyModule_faster_eth_utils___units = Py_None;
    CPyModule_faster_eth_utils___debug = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_platform = Py_None;
    CPyModule_subprocess = Py_None;
    CPyModule_sys = Py_None;
    CPyModule_faster_eth_utils___decorators = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_functools = Py_None;
    CPyModule_itertools = Py_None;
    CPyModule_os = Py_None;
    CPyModule_typing = Py_None;
    CPyModule_faster_eth_utils___types = Py_None;
    CPyModule_faster_eth_utils___encoding = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_faster_eth_utils___exceptions = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_faster_eth_utils___hexadecimal = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_binascii = Py_None;
    CPyModule_re = Py_None;
    CPyModule_typing = Py_None;
    CPyModule_eth_typing = Py_None;
    CPyModule_faster_eth_utils___types = Py_None;
    CPyModule_faster_eth_utils___humanize = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_typing = Py_None;
    CPyModule_urllib = Py_None;
    CPyModule_eth_typing = Py_None;
    CPyModule_faster_eth_utils___currency = Py_None;
    CPyModule_faster_eth_utils___toolz = Py_None;
    CPyModule_faster_eth_utils___module_loading = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_importlib = Py_None;
    CPyModule_typing = Py_None;
    CPyModule_faster_eth_utils___types = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_collections___abc = Py_None;
    CPyModule_numbers = Py_None;
    CPyModule_typing = Py_None;
    CPyModule_faster_eth_utils___units = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_decimal = Py_None;
    if (CPyStatics_Initialize(CPyStatics, CPyLit_Str, CPyLit_Bytes, CPyLit_Int, CPyLit_Float, CPyLit_Complex, CPyLit_Tuple, CPyLit_FrozenSet) < 0) {
        return -1;
    }
    is_initialized = 1;
    return 0;
}

PyObject *CPyStatics[329];
const char * const CPyLit_Str[] = {
    "\005\004type%The \'type\' must be a string, but got \t of type \tTypeError\005tuple",
    "\016\001,\ncomponents\001(\001)\006inputs\004name\001 \000\006keccak\004text\bbuiltins\003Any\004Dict\006typing",
    "\005\027faster_eth_utils.crypto\tfullmatch\006to_hex\005lower\016AttributeError",
    "\002+Value must be any string, instead got type \017Unknown format ",
    "\002\034, attempted to normalize to \nValueError",
    "\005#Both values must be valid addresses\005upper\aislower\aisupper\tisnumeric",
    "\a\002re\033faster_eth_utils/address.py\b<module>\005Final\005Union\004cast\aAddress",
    "\006\nAnyAddress\017ChecksumAddress\nHexAddress\006HexStr\neth_typing\rhexstr_if_str",
    "\004\034faster_eth_utils.conversions\radd_0x_prefix\ndecode_hex\nencode_hex",
    "\004\020remove_0x_prefix\034faster_eth_utils.hexadecimal\bis_bytes\ais_text",
    "\005\026faster_eth_utils.types\021(0x)\?[0-9a-f]{40}\nIGNORECASE\005ASCII\acompile",
    "\004\023_HEX_ADDRESS_REGEXP\0030x1\0030x0\tbytearray",
    "\001aUnsupported type: The primitive argument must be one of: bytes,bytearray, int or bool and not str",
    "\002\003hex\023Unsupported type: \'",
    "\0016\'. Must be one of: bool, str, bytes, bytearray or int.",
    "\001+Pass in strings with keyword hexstr or text",
    "\001@Invalid type. Expected one of int/bool/str/bytes/bytearray. Got ",
    "\001Rexpected a bool, int, byte or bytearray in first arg, or keyword of hexstr or text",
    "\003\005utf-8\006decode,Expected an int, bytes, bytearray or hexstr.",
    "\0032when sending a str, it must be a hex string. Got: \006hexstr\bCallable",
    "\005\bOptional\aTypeVar\nPrimitives\021big_endian_to_int\021int_to_big_endian",
    "\006\031faster_eth_utils.encoding\tis_hexstr\nis_boolean\nis_integer\tis_string\001T",
    "\t\005units\003wei\004kwei\ababbage\nfemtoether\004mwei\blovelace\tpicoether\004gwei",
    "\t\ashannon\tnanoether\004nano\005szabo\nmicroether\005micro\006finney\nmilliether\005milli",
    "\a\005ether\006kether\005grand\006mether\006gether\006tether\035Unknown unit. Must be one of ",
    "\004\001/&value must be between 1 and 2**256 - 1\flocalcontext\b__exit__",
    "\005\t__enter__\004prec\aDecimal\005value\acontext",
    "\003:Unsupported type. Must be one of integer, float, or string\001.\005index",
    "\0024Resulting wei value must be between 1 and 2**256 - 1\adecimal",
    "\003\034faster_eth_utils/currency.py\005final\026faster_eth_utils.units",
    "\005\031faster_eth_utils.currency\017__mypyc_attrs__\006denoms\aMIN_WEI\aMAX_WEI",
    "\005\024python -m pip freeze\004PIPE\003run\006stdout\035python -m pip freeze result:\n",
    "\006\020Python version:\n\aversion\022Operating System: \bplatform\002\n\n\nsubprocess",
    "\a\003sys\031faster_eth_utils/debug.py\006method\005wraps\b_wrapper\awrapper\bKeyError",
    "\003+could not look up new exception to use for \awrapped\tfunctools",
    "\004\titertools\002os\036faster_eth_utils/decorators.py\004Type",
    "\005\033faster_eth_utils.decorators\vcombomethod\nbit_length\003big\bto_bytes",
    "\004\nfrom_bytes\tException\033faster_eth_utils.exceptions\b__dict__",
    "\004\017ValidationError Value must be an instance of str\005ascii\006encode",
    "\003\tunhexlify+Value must be an instance of str or unicode\ahexlify",
    "\0033is_0x_prefixed requires text typed arguments. Got: \0020x\0020X",
    "\002+is_hex requires text typed arguments. Got: \bbinascii",
    "\003\037faster_eth_utils/hexadecimal.py\006AnyStr\024(0[xX])\?[0-9a-fA-F]*",
    "\006\v_HEX_REGEXP\0020s\004take\rGeneratorExit\rStopIteration\002..",
    "\001W does not look like a valid IPFS uri. Currently, only CIDv0 hash schemes are supported.",
    "\t\005parse\burlparse\006netloc\aipfs://\006scheme\004ipfs\002Qm\016sliding_window\tenumerate",
    "\006\021_find_breakpoints\001-\a(empty)\001|\017_humanize_range\027_extract_integer_ranges",
    "\b\003map\bIterable\bIterator\005Tuple\006urllib\003URI\006Hash32\bfrom_wei",
    "\f\026faster_eth_utils.toolz\006SECOND\006MINUTE\004HOUR\003DAY\004YEAR\005MONTH\004WEEK\001y\001m\001w\001d",
    "\005\001h\001s\005UNITS\022DISPLAY_HASH_CHARS  doesn\'t look like a module path",
    "\004\vImportError\rimport_module\bModule \"\025\" does not define a \"",
    "\005\021\" attribute/class\timportlib\rinteger_types\vbytes_types\ntext_types",
    "\006\fstring_types\aMapping\bSequence\006Number\017collections.abc\vcollections",
    "\005\anumbers\031faster_eth_utils/types.py\031faster_eth_utils/units.py\0011\0041000",
    "\005\a1000000\n1000000000\r1000000000000\0201000000000000000\0231000000000000000000",
    "\002\0261000000000000000000000\0311000000000000000000000000",
    "\002\0341000000000000000000000000000\0371000000000000000000000000000000",
    "",
};
const char * const CPyLit_Bytes[] = {
    "\002\001\001\001\000",
    "",
};
const char * const CPyLit_Int[] = {
    "\00216\0000",
    "\001115792089237316195423570985008687907853269984665640564039457584007913129639935",
    "\f999\0001\00010\0002\0003\00060\0003600\00086400\00031536000\0002628000\000604800\0004",
    "",
};
const double CPyLit_Float[] = {0};
const double CPyLit_Complex[] = {0};
const int CPyLit_Tuple[] = {
    50, 1, 17, 2, 19, 20, 1, 16, 3, 36, 36, 36, 1, 282, 4, 19, 39, 40,
    41, 5, 42, 43, 44, 45, 46, 2, 48, 24, 4, 50, 51, 52, 53, 2, 55, 56, 1,
    77, 5, 78, 79, 80, 40, 41, 2, 46, 81, 2, 82, 83, 5, 50, 51, 52, 85,
    53, 3, 86, 87, 88, 2, 122, 123, 1, 122, 3, 128, 128, 128, 1, 297, 1,
    117, 3, 39, 40, 130, 2, 87, 88, 1, 90, 1, 140, 3, 145, 145, 145, 3,
    147, 147, 147, 3, 148, 148, 148, 3, 304, 305, 306, 3, 157, 157, 157,
    3, 158, 158, 158, 3, 159, 159, 159, 3, 308, 309, 310, 7, 19, 78, 20,
    79, 161, 80, 130, 1, 56, 3, 182, 182, 182, 2, 314, 282, 3, 19, 184,
    39, 1, 46, 2, 88, 56, 6, 19, 39, 209, 210, 211, 40, 1, 193, 2, 213,
    214, 2, 134, 215, 2, 200, 188, 1, 234, 1, 19, 3, 246, 247, 247, 3,
    248, 248, 248, 2, 326, 327
};
const int CPyLit_FrozenSet[] = {0};
CPyModule *CPyModule_faster_eth_utils___abi_internal = NULL;
CPyModule *CPyModule_faster_eth_utils___abi;
PyObject *CPyStatic_abi___globals;
CPyModule *CPyModule_builtins;
CPyModule *CPyModule_typing;
CPyModule *CPyModule_faster_eth_utils___crypto;
CPyModule *CPyModule_faster_eth_utils___address_internal = NULL;
CPyModule *CPyModule_faster_eth_utils___address;
PyObject *CPyStatic_address___globals;
CPyModule *CPyModule_re;
CPyModule *CPyModule_eth_typing;
CPyModule *CPyModule_faster_eth_utils___conversions_internal = NULL;
CPyModule *CPyModule_faster_eth_utils___conversions;
CPyModule *CPyModule_faster_eth_utils___hexadecimal_internal = NULL;
CPyModule *CPyModule_faster_eth_utils___hexadecimal;
CPyModule *CPyModule_faster_eth_utils___types_internal = NULL;
CPyModule *CPyModule_faster_eth_utils___types;
PyObject *CPyStatic_conversions___globals;
CPyModule *CPyModule_faster_eth_utils___encoding_internal = NULL;
CPyModule *CPyModule_faster_eth_utils___encoding;
CPyModule *CPyModule_faster_eth_utils___currency_internal = NULL;
CPyModule *CPyModule_faster_eth_utils___currency;
PyObject *CPyStatic_currency___globals;
CPyModule *CPyModule_decimal;
CPyModule *CPyModule_faster_eth_utils___units_internal = NULL;
CPyModule *CPyModule_faster_eth_utils___units;
CPyModule *CPyModule_faster_eth_utils___debug_internal = NULL;
CPyModule *CPyModule_faster_eth_utils___debug;
PyObject *CPyStatic_debug___globals;
CPyModule *CPyModule_platform;
CPyModule *CPyModule_subprocess;
CPyModule *CPyModule_sys;
CPyModule *CPyModule_faster_eth_utils___decorators_internal = NULL;
CPyModule *CPyModule_faster_eth_utils___decorators;
PyObject *CPyStatic_decorators___globals;
CPyModule *CPyModule_functools;
CPyModule *CPyModule_itertools;
CPyModule *CPyModule_os;
PyObject *CPyStatic_encoding___globals;
CPyModule *CPyModule_faster_eth_utils___exceptions_internal = NULL;
CPyModule *CPyModule_faster_eth_utils___exceptions;
PyObject *CPyStatic_exceptions___globals;
PyObject *CPyStatic_hexadecimal___globals;
CPyModule *CPyModule_binascii;
CPyModule *CPyModule_faster_eth_utils___humanize_internal = NULL;
CPyModule *CPyModule_faster_eth_utils___humanize;
PyObject *CPyStatic_humanize___globals;
CPyModule *CPyModule_urllib;
CPyModule *CPyModule_faster_eth_utils___toolz;
CPyModule *CPyModule_faster_eth_utils___module_loading_internal = NULL;
CPyModule *CPyModule_faster_eth_utils___module_loading;
PyObject *CPyStatic_module_loading___globals;
CPyModule *CPyModule_importlib;
PyObject *CPyStatic_types___globals;
CPyModule *CPyModule_collections___abc;
CPyModule *CPyModule_numbers;
PyObject *CPyStatic_units___globals;
PyObject *CPyDef_abi___collapse_if_tuple(PyObject *cpy_r_abi);
PyObject *CPyPy_abi___collapse_if_tuple(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_abi____abi_to_signature(PyObject *cpy_r_abi);
PyObject *CPyPy_abi____abi_to_signature(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_abi___function_signature_to_4byte_selector(PyObject *cpy_r_event_signature);
PyObject *CPyPy_abi___function_signature_to_4byte_selector(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_abi___function_abi_to_4byte_selector(PyObject *cpy_r_function_abi);
PyObject *CPyPy_abi___function_abi_to_4byte_selector(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_abi___event_signature_to_log_topic(PyObject *cpy_r_event_signature);
PyObject *CPyPy_abi___event_signature_to_log_topic(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_abi___event_abi_to_log_topic(PyObject *cpy_r_event_abi);
PyObject *CPyPy_abi___event_abi_to_log_topic(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_abi_____top_level__(void);
PyObject *CPyStatic_address____HEX_ADDRESS_REGEXP = NULL;
char CPyDef_address___is_hex_address(PyObject *cpy_r_value);
PyObject *CPyPy_address___is_hex_address(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_address___is_binary_address(PyObject *cpy_r_value);
PyObject *CPyPy_address___is_binary_address(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_address___is_address(PyObject *cpy_r_value);
PyObject *CPyPy_address___is_address(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_address___to_normalized_address(PyObject *cpy_r_value);
PyObject *CPyPy_address___to_normalized_address(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_address___is_normalized_address(PyObject *cpy_r_value);
PyObject *CPyPy_address___is_normalized_address(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_address___to_canonical_address(PyObject *cpy_r_address);
PyObject *CPyPy_address___to_canonical_address(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_address___is_canonical_address(PyObject *cpy_r_address);
PyObject *CPyPy_address___is_canonical_address(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_address___is_same_address(PyObject *cpy_r_left, PyObject *cpy_r_right);
PyObject *CPyPy_address___is_same_address(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_address___to_checksum_address(PyObject *cpy_r_value);
PyObject *CPyPy_address___to_checksum_address(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_address___is_checksum_address(PyObject *cpy_r_value);
PyObject *CPyPy_address___is_checksum_address(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_address____is_checksum_formatted(PyObject *cpy_r_value);
PyObject *CPyPy_address____is_checksum_formatted(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_address___is_checksum_formatted_address(PyObject *cpy_r_value);
PyObject *CPyPy_address___is_checksum_formatted_address(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_address_____top_level__(void);
PyObject *CPyDef_conversions___to_hex(PyObject *cpy_r_primitive, PyObject *cpy_r_hexstr, PyObject *cpy_r_text);
PyObject *CPyPy_conversions___to_hex(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
CPyTagged CPyDef_conversions___to_int(PyObject *cpy_r_primitive, PyObject *cpy_r_hexstr, PyObject *cpy_r_text);
PyObject *CPyPy_conversions___to_int(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_conversions___to_bytes(PyObject *cpy_r_primitive, PyObject *cpy_r_hexstr, PyObject *cpy_r_text);
PyObject *CPyPy_conversions___to_bytes(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_conversions___to_text(PyObject *cpy_r_primitive, PyObject *cpy_r_hexstr, PyObject *cpy_r_text);
PyObject *CPyPy_conversions___to_text(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_conversions___text_if_str(PyObject *cpy_r_to_type, PyObject *cpy_r_text_or_primitive);
PyObject *CPyPy_conversions___text_if_str(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_conversions___hexstr_if_str(PyObject *cpy_r_to_type, PyObject *cpy_r_hexstr_or_primitive);
PyObject *CPyPy_conversions___hexstr_if_str(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_conversions_____top_level__(void);
CPyTagged CPyStatic_currency___denoms___wei = CPY_INT_TAG;
CPyTagged CPyStatic_currency___denoms___kwei = CPY_INT_TAG;
CPyTagged CPyStatic_currency___denoms___babbage = CPY_INT_TAG;
CPyTagged CPyStatic_currency___denoms___femtoether = CPY_INT_TAG;
CPyTagged CPyStatic_currency___denoms___mwei = CPY_INT_TAG;
CPyTagged CPyStatic_currency___denoms___lovelace = CPY_INT_TAG;
CPyTagged CPyStatic_currency___denoms___picoether = CPY_INT_TAG;
CPyTagged CPyStatic_currency___denoms___gwei = CPY_INT_TAG;
CPyTagged CPyStatic_currency___denoms___shannon = CPY_INT_TAG;
CPyTagged CPyStatic_currency___denoms___nanoether = CPY_INT_TAG;
CPyTagged CPyStatic_currency___denoms___nano = CPY_INT_TAG;
CPyTagged CPyStatic_currency___denoms___szabo = CPY_INT_TAG;
CPyTagged CPyStatic_currency___denoms___microether = CPY_INT_TAG;
CPyTagged CPyStatic_currency___denoms___micro = CPY_INT_TAG;
CPyTagged CPyStatic_currency___denoms___finney = CPY_INT_TAG;
CPyTagged CPyStatic_currency___denoms___milliether = CPY_INT_TAG;
CPyTagged CPyStatic_currency___denoms___milli = CPY_INT_TAG;
CPyTagged CPyStatic_currency___denoms___ether = CPY_INT_TAG;
CPyTagged CPyStatic_currency___denoms___kether = CPY_INT_TAG;
CPyTagged CPyStatic_currency___denoms___grand = CPY_INT_TAG;
CPyTagged CPyStatic_currency___denoms___mether = CPY_INT_TAG;
CPyTagged CPyStatic_currency___denoms___gether = CPY_INT_TAG;
CPyTagged CPyStatic_currency___denoms___tether = CPY_INT_TAG;
PyTypeObject *CPyType_currency___denoms;
PyObject *CPyDef_currency___denoms(void);
char CPyDef_currency___denoms_____mypyc_defaults_setup(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_currency___denoms_____mypyc_defaults_setup(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_currency___from_wei(CPyTagged cpy_r_number, PyObject *cpy_r_unit);
PyObject *CPyPy_currency___from_wei(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
CPyTagged CPyDef_currency___to_wei(PyObject *cpy_r_number, PyObject *cpy_r_unit);
PyObject *CPyPy_currency___to_wei(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_currency_____top_level__(void);
PyObject *CPyDef_debug___pip_freeze(void);
PyObject *CPyPy_debug___pip_freeze(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_debug___python_version(void);
PyObject *CPyPy_debug___python_version(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_debug___platform_info(void);
PyObject *CPyPy_debug___platform_info(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_debug___get_environment_summary(void);
PyObject *CPyPy_debug___get_environment_summary(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_debug_____top_level__(void);
PyTypeObject *CPyType_decorators___combomethod;
PyObject *CPyDef_decorators___combomethod(PyObject *cpy_r_method);
PyTypeObject *CPyType_decorators_____get___3_combomethod_env;
PyObject *CPyDef_decorators_____get___3_combomethod_env(void);
PyTypeObject *CPyType_decorators____wrapper___3_get___3_combomethod_obj;
PyObject *CPyDef_decorators____wrapper___3_get___3_combomethod_obj(void);
PyTypeObject *CPyType_decorators___return_arg_type_env;
PyObject *CPyDef_decorators___return_arg_type_env(void);
PyTypeObject *CPyType_decorators___decorator_return_arg_type_env;
PyObject *CPyDef_decorators___decorator_return_arg_type_env(void);
PyTypeObject *CPyType_decorators___decorator_return_arg_type_obj;
PyObject *CPyDef_decorators___decorator_return_arg_type_obj(void);
PyTypeObject *CPyType_decorators___wrapper_return_arg_type_decorator_obj;
PyObject *CPyDef_decorators___wrapper_return_arg_type_decorator_obj(void);
PyTypeObject *CPyType_decorators___replace_exceptions_env;
PyObject *CPyDef_decorators___replace_exceptions_env(void);
PyTypeObject *CPyType_decorators___decorator_replace_exceptions_env;
PyObject *CPyDef_decorators___decorator_replace_exceptions_env(void);
PyTypeObject *CPyType_decorators___decorator_replace_exceptions_obj;
PyObject *CPyDef_decorators___decorator_replace_exceptions_obj(void);
PyTypeObject *CPyType_decorators___wrapped_replace_exceptions_decorator_obj;
PyObject *CPyDef_decorators___wrapped_replace_exceptions_decorator_obj(void);
char CPyDef_decorators___combomethod_____init__(PyObject *cpy_r_self, PyObject *cpy_r_method);
PyObject *CPyPy_decorators___combomethod_____init__(PyObject *self, PyObject *args, PyObject *kw);
PyObject *CPyDef_decorators____wrapper___3_get___3_combomethod_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
PyObject *CPyPy_decorators____wrapper___3_get___3_combomethod_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_decorators____wrapper___3_get___3_combomethod_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_args, PyObject *cpy_r_kwargs);
PyObject *CPyPy_decorators____wrapper___3_get___3_combomethod_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_decorators___combomethod_____get__(PyObject *cpy_r_self, PyObject *cpy_r_obj, PyObject *cpy_r_objtype);
PyObject *CPyPy_decorators___combomethod_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_decorators___wrapper_return_arg_type_decorator_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
PyObject *CPyPy_decorators___wrapper_return_arg_type_decorator_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_decorators___wrapper_return_arg_type_decorator_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_args, PyObject *cpy_r_kwargs);
PyObject *CPyPy_decorators___wrapper_return_arg_type_decorator_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_decorators___decorator_return_arg_type_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
PyObject *CPyPy_decorators___decorator_return_arg_type_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_decorators___decorator_return_arg_type_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_to_wrap);
PyObject *CPyPy_decorators___decorator_return_arg_type_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_decorators___return_arg_type(CPyTagged cpy_r_at_position);
PyObject *CPyPy_decorators___return_arg_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_decorators___wrapped_replace_exceptions_decorator_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
PyObject *CPyPy_decorators___wrapped_replace_exceptions_decorator_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_decorators___wrapped_replace_exceptions_decorator_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_args, PyObject *cpy_r_kwargs);
PyObject *CPyPy_decorators___wrapped_replace_exceptions_decorator_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_decorators___decorator_replace_exceptions_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
PyObject *CPyPy_decorators___decorator_replace_exceptions_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_decorators___decorator_replace_exceptions_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_to_wrap);
PyObject *CPyPy_decorators___decorator_replace_exceptions_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_decorators___replace_exceptions(PyObject *cpy_r_old_to_new_exceptions);
PyObject *CPyPy_decorators___replace_exceptions(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_decorators_____top_level__(void);
PyObject *CPyDef_encoding___int_to_big_endian(CPyTagged cpy_r_value);
PyObject *CPyPy_encoding___int_to_big_endian(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
CPyTagged CPyDef_encoding___big_endian_to_int(PyObject *cpy_r_value);
PyObject *CPyPy_encoding___big_endian_to_int(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_encoding_____top_level__(void);
PyTypeObject *CPyType_exceptions___ValidationError;
char CPyDef_exceptions_____top_level__(void);
PyObject *CPyStatic_hexadecimal____HEX_REGEXP = NULL;
PyObject *CPyDef_hexadecimal___decode_hex(PyObject *cpy_r_value);
PyObject *CPyPy_hexadecimal___decode_hex(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_hexadecimal___encode_hex(PyObject *cpy_r_value);
PyObject *CPyPy_hexadecimal___encode_hex(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_hexadecimal___is_0x_prefixed(PyObject *cpy_r_value);
PyObject *CPyPy_hexadecimal___is_0x_prefixed(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_hexadecimal___remove_0x_prefix(PyObject *cpy_r_value);
PyObject *CPyPy_hexadecimal___remove_0x_prefix(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_hexadecimal___add_0x_prefix(PyObject *cpy_r_value);
PyObject *CPyPy_hexadecimal___add_0x_prefix(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_hexadecimal___is_hexstr(PyObject *cpy_r_value);
PyObject *CPyPy_hexadecimal___is_hexstr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_hexadecimal___is_hex(PyObject *cpy_r_value);
PyObject *CPyPy_hexadecimal___is_hex(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_hexadecimal_____top_level__(void);
tuple_T7T2IOT2IOT2IOT2IOT2IOT2IOT2IO CPyStatic_humanize___UNITS = { { CPY_INT_TAG, NULL }, { CPY_INT_TAG, NULL }, { CPY_INT_TAG, NULL }, { CPY_INT_TAG, NULL }, { CPY_INT_TAG, NULL }, { CPY_INT_TAG, NULL }, { CPY_INT_TAG, NULL } };
PyTypeObject *CPyType_humanize____consume_leading_zero_units_env;
PyObject *CPyDef_humanize____consume_leading_zero_units_env(void);
PyTypeObject *CPyType_humanize____consume_leading_zero_units_gen;
PyObject *CPyDef_humanize____consume_leading_zero_units_gen(void);
PyTypeObject *CPyType_humanize____humanize_seconds_env;
PyObject *CPyDef_humanize____humanize_seconds_env(void);
PyTypeObject *CPyType_humanize____humanize_seconds_gen;
PyObject *CPyDef_humanize____humanize_seconds_gen(void);
PyTypeObject *CPyType_humanize____find_breakpoints_env;
PyObject *CPyDef_humanize____find_breakpoints_env(void);
PyTypeObject *CPyType_humanize____find_breakpoints_gen;
PyObject *CPyDef_humanize____find_breakpoints_gen(void);
PyTypeObject *CPyType_humanize____extract_integer_ranges_env;
PyObject *CPyDef_humanize____extract_integer_ranges_env(void);
PyTypeObject *CPyType_humanize____extract_integer_ranges_gen;
PyObject *CPyDef_humanize____extract_integer_ranges_gen(void);
PyObject *CPyDef_humanize___humanize_seconds(PyObject *cpy_r_seconds);
PyObject *CPyPy_humanize___humanize_seconds(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_humanize____consume_leading_zero_units_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg);
PyObject *CPyPy_humanize____consume_leading_zero_units_gen_____mypyc_generator_helper__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_humanize____consume_leading_zero_units_gen_____next__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_humanize____consume_leading_zero_units_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_humanize____consume_leading_zero_units_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
PyObject *CPyPy_humanize____consume_leading_zero_units_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_humanize____consume_leading_zero_units_gen_____iter__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_humanize____consume_leading_zero_units_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_humanize____consume_leading_zero_units_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
PyObject *CPyPy_humanize____consume_leading_zero_units_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_humanize____consume_leading_zero_units_gen___close(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_humanize____consume_leading_zero_units_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_humanize____consume_leading_zero_units(PyObject *cpy_r_units_iter);
PyObject *CPyPy_humanize____consume_leading_zero_units(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_humanize____humanize_seconds_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg);
PyObject *CPyPy_humanize____humanize_seconds_gen_____mypyc_generator_helper__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_humanize____humanize_seconds_gen_____next__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_humanize____humanize_seconds_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_humanize____humanize_seconds_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
PyObject *CPyPy_humanize____humanize_seconds_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_humanize____humanize_seconds_gen_____iter__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_humanize____humanize_seconds_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_humanize____humanize_seconds_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
PyObject *CPyPy_humanize____humanize_seconds_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_humanize____humanize_seconds_gen___close(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_humanize____humanize_seconds_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_humanize____humanize_seconds(CPyTagged cpy_r_seconds);
PyObject *CPyPy_humanize____humanize_seconds(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_humanize___humanize_bytes(PyObject *cpy_r_value);
PyObject *CPyPy_humanize___humanize_bytes(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_humanize___humanize_hash(PyObject *cpy_r_value);
PyObject *CPyPy_humanize___humanize_hash(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_humanize___humanize_ipfs_uri(PyObject *cpy_r_uri);
PyObject *CPyPy_humanize___humanize_ipfs_uri(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_humanize___is_ipfs_uri(PyObject *cpy_r_value);
PyObject *CPyPy_humanize___is_ipfs_uri(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_humanize____is_CIDv0_ipfs_hash(PyObject *cpy_r_ipfs_hash);
PyObject *CPyPy_humanize____is_CIDv0_ipfs_hash(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_humanize____find_breakpoints_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg);
PyObject *CPyPy_humanize____find_breakpoints_gen_____mypyc_generator_helper__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_humanize____find_breakpoints_gen_____next__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_humanize____find_breakpoints_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_humanize____find_breakpoints_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
PyObject *CPyPy_humanize____find_breakpoints_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_humanize____find_breakpoints_gen_____iter__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_humanize____find_breakpoints_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_humanize____find_breakpoints_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
PyObject *CPyPy_humanize____find_breakpoints_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_humanize____find_breakpoints_gen___close(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_humanize____find_breakpoints_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_humanize____find_breakpoints(PyObject *cpy_r_values);
PyObject *CPyPy_humanize____find_breakpoints(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_humanize____extract_integer_ranges_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg);
PyObject *CPyPy_humanize____extract_integer_ranges_gen_____mypyc_generator_helper__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_humanize____extract_integer_ranges_gen_____next__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_humanize____extract_integer_ranges_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_humanize____extract_integer_ranges_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
PyObject *CPyPy_humanize____extract_integer_ranges_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_humanize____extract_integer_ranges_gen_____iter__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_humanize____extract_integer_ranges_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_humanize____extract_integer_ranges_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
PyObject *CPyPy_humanize____extract_integer_ranges_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_humanize____extract_integer_ranges_gen___close(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_humanize____extract_integer_ranges_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_humanize____extract_integer_ranges(PyObject *cpy_r_values);
PyObject *CPyPy_humanize____extract_integer_ranges(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_humanize____humanize_range(tuple_T2II cpy_r_bounds);
PyObject *CPyPy_humanize____humanize_range(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_humanize___humanize_integer_sequence(PyObject *cpy_r_values_iter);
PyObject *CPyPy_humanize___humanize_integer_sequence(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_humanize___humanize_wei(CPyTagged cpy_r_number);
PyObject *CPyPy_humanize___humanize_wei(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_humanize_____top_level__(void);
PyObject *CPyDef_module_loading___import_string(PyObject *cpy_r_dotted_path);
PyObject *CPyPy_module_loading___import_string(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_module_loading_____top_level__(void);
char CPyDef_types___is_integer(PyObject *cpy_r_value);
PyObject *CPyPy_types___is_integer(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_types___is_bytes(PyObject *cpy_r_value);
PyObject *CPyPy_types___is_bytes(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_types___is_text(PyObject *cpy_r_value);
PyObject *CPyPy_types___is_text(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_types___is_string(PyObject *cpy_r_value);
PyObject *CPyPy_types___is_string(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_types___is_boolean(PyObject *cpy_r_value);
PyObject *CPyPy_types___is_boolean(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_types___is_dict(PyObject *cpy_r_obj);
PyObject *CPyPy_types___is_dict(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_types___is_list_like(PyObject *cpy_r_obj);
PyObject *CPyPy_types___is_list_like(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_types___is_list(PyObject *cpy_r_obj);
PyObject *CPyPy_types___is_list(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_types___is_tuple(PyObject *cpy_r_obj);
PyObject *CPyPy_types___is_tuple(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_types___is_null(PyObject *cpy_r_obj);
PyObject *CPyPy_types___is_null(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_types___is_number(PyObject *cpy_r_obj);
PyObject *CPyPy_types___is_number(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef_types_____top_level__(void);
char CPyDef_units_____top_level__(void);

static struct export_table_bce0bfc64ce5e845ec4a exports = {
    &CPyDef_abi___collapse_if_tuple,
    &CPyDef_abi____abi_to_signature,
    &CPyDef_abi___function_signature_to_4byte_selector,
    &CPyDef_abi___function_abi_to_4byte_selector,
    &CPyDef_abi___event_signature_to_log_topic,
    &CPyDef_abi___event_abi_to_log_topic,
    &CPyDef_abi_____top_level__,
    &CPyStatic_address____HEX_ADDRESS_REGEXP,
    &CPyDef_address___is_hex_address,
    &CPyDef_address___is_binary_address,
    &CPyDef_address___is_address,
    &CPyDef_address___to_normalized_address,
    &CPyDef_address___is_normalized_address,
    &CPyDef_address___to_canonical_address,
    &CPyDef_address___is_canonical_address,
    &CPyDef_address___is_same_address,
    &CPyDef_address___to_checksum_address,
    &CPyDef_address___is_checksum_address,
    &CPyDef_address____is_checksum_formatted,
    &CPyDef_address___is_checksum_formatted_address,
    &CPyDef_address_____top_level__,
    &CPyDef_conversions___to_hex,
    &CPyDef_conversions___to_int,
    &CPyDef_conversions___to_bytes,
    &CPyDef_conversions___to_text,
    &CPyDef_conversions___text_if_str,
    &CPyDef_conversions___hexstr_if_str,
    &CPyDef_conversions_____top_level__,
    &CPyStatic_currency___denoms___wei,
    &CPyStatic_currency___denoms___kwei,
    &CPyStatic_currency___denoms___babbage,
    &CPyStatic_currency___denoms___femtoether,
    &CPyStatic_currency___denoms___mwei,
    &CPyStatic_currency___denoms___lovelace,
    &CPyStatic_currency___denoms___picoether,
    &CPyStatic_currency___denoms___gwei,
    &CPyStatic_currency___denoms___shannon,
    &CPyStatic_currency___denoms___nanoether,
    &CPyStatic_currency___denoms___nano,
    &CPyStatic_currency___denoms___szabo,
    &CPyStatic_currency___denoms___microether,
    &CPyStatic_currency___denoms___micro,
    &CPyStatic_currency___denoms___finney,
    &CPyStatic_currency___denoms___milliether,
    &CPyStatic_currency___denoms___milli,
    &CPyStatic_currency___denoms___ether,
    &CPyStatic_currency___denoms___kether,
    &CPyStatic_currency___denoms___grand,
    &CPyStatic_currency___denoms___mether,
    &CPyStatic_currency___denoms___gether,
    &CPyStatic_currency___denoms___tether,
    &CPyType_currency___denoms,
    &CPyDef_currency___denoms,
    &CPyDef_currency___denoms_____mypyc_defaults_setup,
    &CPyDef_currency___from_wei,
    &CPyDef_currency___to_wei,
    &CPyDef_currency_____top_level__,
    &CPyDef_debug___pip_freeze,
    &CPyDef_debug___python_version,
    &CPyDef_debug___platform_info,
    &CPyDef_debug___get_environment_summary,
    &CPyDef_debug_____top_level__,
    &CPyType_decorators___combomethod,
    &CPyDef_decorators___combomethod,
    &CPyType_decorators_____get___3_combomethod_env,
    &CPyDef_decorators_____get___3_combomethod_env,
    &CPyType_decorators____wrapper___3_get___3_combomethod_obj,
    &CPyDef_decorators____wrapper___3_get___3_combomethod_obj,
    &CPyType_decorators___return_arg_type_env,
    &CPyDef_decorators___return_arg_type_env,
    &CPyType_decorators___decorator_return_arg_type_env,
    &CPyDef_decorators___decorator_return_arg_type_env,
    &CPyType_decorators___decorator_return_arg_type_obj,
    &CPyDef_decorators___decorator_return_arg_type_obj,
    &CPyType_decorators___wrapper_return_arg_type_decorator_obj,
    &CPyDef_decorators___wrapper_return_arg_type_decorator_obj,
    &CPyType_decorators___replace_exceptions_env,
    &CPyDef_decorators___replace_exceptions_env,
    &CPyType_decorators___decorator_replace_exceptions_env,
    &CPyDef_decorators___decorator_replace_exceptions_env,
    &CPyType_decorators___decorator_replace_exceptions_obj,
    &CPyDef_decorators___decorator_replace_exceptions_obj,
    &CPyType_decorators___wrapped_replace_exceptions_decorator_obj,
    &CPyDef_decorators___wrapped_replace_exceptions_decorator_obj,
    &CPyDef_decorators___combomethod_____init__,
    &CPyDef_decorators____wrapper___3_get___3_combomethod_obj_____get__,
    &CPyDef_decorators____wrapper___3_get___3_combomethod_obj_____call__,
    &CPyDef_decorators___combomethod_____get__,
    &CPyDef_decorators___wrapper_return_arg_type_decorator_obj_____get__,
    &CPyDef_decorators___wrapper_return_arg_type_decorator_obj_____call__,
    &CPyDef_decorators___decorator_return_arg_type_obj_____get__,
    &CPyDef_decorators___decorator_return_arg_type_obj_____call__,
    &CPyDef_decorators___return_arg_type,
    &CPyDef_decorators___wrapped_replace_exceptions_decorator_obj_____get__,
    &CPyDef_decorators___wrapped_replace_exceptions_decorator_obj_____call__,
    &CPyDef_decorators___decorator_replace_exceptions_obj_____get__,
    &CPyDef_decorators___decorator_replace_exceptions_obj_____call__,
    &CPyDef_decorators___replace_exceptions,
    &CPyDef_decorators_____top_level__,
    &CPyDef_encoding___int_to_big_endian,
    &CPyDef_encoding___big_endian_to_int,
    &CPyDef_encoding_____top_level__,
    &CPyType_exceptions___ValidationError,
    &CPyDef_exceptions_____top_level__,
    &CPyStatic_hexadecimal____HEX_REGEXP,
    &CPyDef_hexadecimal___decode_hex,
    &CPyDef_hexadecimal___encode_hex,
    &CPyDef_hexadecimal___is_0x_prefixed,
    &CPyDef_hexadecimal___remove_0x_prefix,
    &CPyDef_hexadecimal___add_0x_prefix,
    &CPyDef_hexadecimal___is_hexstr,
    &CPyDef_hexadecimal___is_hex,
    &CPyDef_hexadecimal_____top_level__,
    &CPyStatic_humanize___UNITS,
    &CPyType_humanize____consume_leading_zero_units_env,
    &CPyDef_humanize____consume_leading_zero_units_env,
    &CPyType_humanize____consume_leading_zero_units_gen,
    &CPyDef_humanize____consume_leading_zero_units_gen,
    &CPyType_humanize____humanize_seconds_env,
    &CPyDef_humanize____humanize_seconds_env,
    &CPyType_humanize____humanize_seconds_gen,
    &CPyDef_humanize____humanize_seconds_gen,
    &CPyType_humanize____find_breakpoints_env,
    &CPyDef_humanize____find_breakpoints_env,
    &CPyType_humanize____find_breakpoints_gen,
    &CPyDef_humanize____find_breakpoints_gen,
    &CPyType_humanize____extract_integer_ranges_env,
    &CPyDef_humanize____extract_integer_ranges_env,
    &CPyType_humanize____extract_integer_ranges_gen,
    &CPyDef_humanize____extract_integer_ranges_gen,
    &CPyDef_humanize___humanize_seconds,
    &CPyDef_humanize____consume_leading_zero_units_gen_____mypyc_generator_helper__,
    &CPyDef_humanize____consume_leading_zero_units_gen_____next__,
    &CPyDef_humanize____consume_leading_zero_units_gen___send,
    &CPyDef_humanize____consume_leading_zero_units_gen_____iter__,
    &CPyDef_humanize____consume_leading_zero_units_gen___throw,
    &CPyDef_humanize____consume_leading_zero_units_gen___close,
    &CPyDef_humanize____consume_leading_zero_units,
    &CPyDef_humanize____humanize_seconds_gen_____mypyc_generator_helper__,
    &CPyDef_humanize____humanize_seconds_gen_____next__,
    &CPyDef_humanize____humanize_seconds_gen___send,
    &CPyDef_humanize____humanize_seconds_gen_____iter__,
    &CPyDef_humanize____humanize_seconds_gen___throw,
    &CPyDef_humanize____humanize_seconds_gen___close,
    &CPyDef_humanize____humanize_seconds,
    &CPyDef_humanize___humanize_bytes,
    &CPyDef_humanize___humanize_hash,
    &CPyDef_humanize___humanize_ipfs_uri,
    &CPyDef_humanize___is_ipfs_uri,
    &CPyDef_humanize____is_CIDv0_ipfs_hash,
    &CPyDef_humanize____find_breakpoints_gen_____mypyc_generator_helper__,
    &CPyDef_humanize____find_breakpoints_gen_____next__,
    &CPyDef_humanize____find_breakpoints_gen___send,
    &CPyDef_humanize____find_breakpoints_gen_____iter__,
    &CPyDef_humanize____find_breakpoints_gen___throw,
    &CPyDef_humanize____find_breakpoints_gen___close,
    &CPyDef_humanize____find_breakpoints,
    &CPyDef_humanize____extract_integer_ranges_gen_____mypyc_generator_helper__,
    &CPyDef_humanize____extract_integer_ranges_gen_____next__,
    &CPyDef_humanize____extract_integer_ranges_gen___send,
    &CPyDef_humanize____extract_integer_ranges_gen_____iter__,
    &CPyDef_humanize____extract_integer_ranges_gen___throw,
    &CPyDef_humanize____extract_integer_ranges_gen___close,
    &CPyDef_humanize____extract_integer_ranges,
    &CPyDef_humanize____humanize_range,
    &CPyDef_humanize___humanize_integer_sequence,
    &CPyDef_humanize___humanize_wei,
    &CPyDef_humanize_____top_level__,
    &CPyDef_module_loading___import_string,
    &CPyDef_module_loading_____top_level__,
    &CPyDef_types___is_integer,
    &CPyDef_types___is_bytes,
    &CPyDef_types___is_text,
    &CPyDef_types___is_string,
    &CPyDef_types___is_boolean,
    &CPyDef_types___is_dict,
    &CPyDef_types___is_list_like,
    &CPyDef_types___is_list,
    &CPyDef_types___is_tuple,
    &CPyDef_types___is_null,
    &CPyDef_types___is_number,
    &CPyDef_types_____top_level__,
    &CPyDef_units_____top_level__,
};

PyMODINIT_FUNC PyInit_bce0bfc64ce5e845ec4a__mypyc(void)
{
    static PyModuleDef def = { PyModuleDef_HEAD_INIT, "bce0bfc64ce5e845ec4a__mypyc", NULL, -1, NULL, NULL };
    int res;
    PyObject *capsule;
    PyObject *tmp;
    static PyObject *module;
    if (module) {
        Py_INCREF(module);
        return module;
    }
    module = PyModule_Create(&def);
    if (!module) {
        goto fail;
    }
    
    capsule = PyCapsule_New(&exports, "bce0bfc64ce5e845ec4a__mypyc.exports", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "exports", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    extern PyObject *CPyInit_faster_eth_utils___abi(void);
    capsule = PyCapsule_New((void *)CPyInit_faster_eth_utils___abi, "bce0bfc64ce5e845ec4a__mypyc.init_faster_eth_utils___abi", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_faster_eth_utils___abi", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    extern PyObject *CPyInit_faster_eth_utils___address(void);
    capsule = PyCapsule_New((void *)CPyInit_faster_eth_utils___address, "bce0bfc64ce5e845ec4a__mypyc.init_faster_eth_utils___address", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_faster_eth_utils___address", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    extern PyObject *CPyInit_faster_eth_utils___conversions(void);
    capsule = PyCapsule_New((void *)CPyInit_faster_eth_utils___conversions, "bce0bfc64ce5e845ec4a__mypyc.init_faster_eth_utils___conversions", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_faster_eth_utils___conversions", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    extern PyObject *CPyInit_faster_eth_utils___currency(void);
    capsule = PyCapsule_New((void *)CPyInit_faster_eth_utils___currency, "bce0bfc64ce5e845ec4a__mypyc.init_faster_eth_utils___currency", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_faster_eth_utils___currency", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    extern PyObject *CPyInit_faster_eth_utils___debug(void);
    capsule = PyCapsule_New((void *)CPyInit_faster_eth_utils___debug, "bce0bfc64ce5e845ec4a__mypyc.init_faster_eth_utils___debug", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_faster_eth_utils___debug", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    extern PyObject *CPyInit_faster_eth_utils___decorators(void);
    capsule = PyCapsule_New((void *)CPyInit_faster_eth_utils___decorators, "bce0bfc64ce5e845ec4a__mypyc.init_faster_eth_utils___decorators", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_faster_eth_utils___decorators", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    extern PyObject *CPyInit_faster_eth_utils___encoding(void);
    capsule = PyCapsule_New((void *)CPyInit_faster_eth_utils___encoding, "bce0bfc64ce5e845ec4a__mypyc.init_faster_eth_utils___encoding", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_faster_eth_utils___encoding", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    extern PyObject *CPyInit_faster_eth_utils___exceptions(void);
    capsule = PyCapsule_New((void *)CPyInit_faster_eth_utils___exceptions, "bce0bfc64ce5e845ec4a__mypyc.init_faster_eth_utils___exceptions", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_faster_eth_utils___exceptions", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    extern PyObject *CPyInit_faster_eth_utils___hexadecimal(void);
    capsule = PyCapsule_New((void *)CPyInit_faster_eth_utils___hexadecimal, "bce0bfc64ce5e845ec4a__mypyc.init_faster_eth_utils___hexadecimal", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_faster_eth_utils___hexadecimal", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    extern PyObject *CPyInit_faster_eth_utils___humanize(void);
    capsule = PyCapsule_New((void *)CPyInit_faster_eth_utils___humanize, "bce0bfc64ce5e845ec4a__mypyc.init_faster_eth_utils___humanize", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_faster_eth_utils___humanize", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    extern PyObject *CPyInit_faster_eth_utils___module_loading(void);
    capsule = PyCapsule_New((void *)CPyInit_faster_eth_utils___module_loading, "bce0bfc64ce5e845ec4a__mypyc.init_faster_eth_utils___module_loading", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_faster_eth_utils___module_loading", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    extern PyObject *CPyInit_faster_eth_utils___types(void);
    capsule = PyCapsule_New((void *)CPyInit_faster_eth_utils___types, "bce0bfc64ce5e845ec4a__mypyc.init_faster_eth_utils___types", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_faster_eth_utils___types", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    extern PyObject *CPyInit_faster_eth_utils___units(void);
    capsule = PyCapsule_New((void *)CPyInit_faster_eth_utils___units, "bce0bfc64ce5e845ec4a__mypyc.init_faster_eth_utils___units", NULL);
    if (!capsule) {
        goto fail;
    }
    res = PyObject_SetAttrString(module, "init_faster_eth_utils___units", capsule);
    Py_DECREF(capsule);
    if (res < 0) {
        goto fail;
    }
    
    return module;
    fail:
    Py_XDECREF(module);
    return NULL;
}
