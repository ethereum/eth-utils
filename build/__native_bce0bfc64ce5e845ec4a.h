#ifndef MYPYC_NATIVE_bce0bfc64ce5e845ec4a_H
#define MYPYC_NATIVE_bce0bfc64ce5e845ec4a_H
#include <Python.h>
#include <CPy.h>
#ifndef MYPYC_DECLARED_tuple_T3OOO
#define MYPYC_DECLARED_tuple_T3OOO
typedef struct tuple_T3OOO {
    PyObject *f0;
    PyObject *f1;
    PyObject *f2;
} tuple_T3OOO;
#endif

#ifndef MYPYC_DECLARED_tuple_T2OO
#define MYPYC_DECLARED_tuple_T2OO
typedef struct tuple_T2OO {
    PyObject *f0;
    PyObject *f1;
} tuple_T2OO;
#endif

#ifndef MYPYC_DECLARED_tuple_T2IO
#define MYPYC_DECLARED_tuple_T2IO
typedef struct tuple_T2IO {
    CPyTagged f0;
    PyObject *f1;
} tuple_T2IO;
#endif

#ifndef MYPYC_DECLARED_tuple_T7T2IOT2IOT2IOT2IOT2IOT2IOT2IO
#define MYPYC_DECLARED_tuple_T7T2IOT2IOT2IOT2IOT2IOT2IOT2IO
typedef struct tuple_T7T2IOT2IOT2IOT2IOT2IOT2IOT2IO {
    tuple_T2IO f0;
    tuple_T2IO f1;
    tuple_T2IO f2;
    tuple_T2IO f3;
    tuple_T2IO f4;
    tuple_T2IO f5;
    tuple_T2IO f6;
} tuple_T7T2IOT2IOT2IOT2IOT2IOT2IOT2IO;
#endif

#ifndef MYPYC_DECLARED_tuple_T2II
#define MYPYC_DECLARED_tuple_T2II
typedef struct tuple_T2II {
    CPyTagged f0;
    CPyTagged f1;
} tuple_T2II;
#endif

#ifndef MYPYC_DECLARED_tuple_T1O
#define MYPYC_DECLARED_tuple_T1O
typedef struct tuple_T1O {
    PyObject *f0;
} tuple_T1O;
#endif

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    CPyTagged _wei;
    CPyTagged _kwei;
    CPyTagged _babbage;
    CPyTagged _femtoether;
    CPyTagged _mwei;
    CPyTagged _lovelace;
    CPyTagged _picoether;
    CPyTagged _gwei;
    CPyTagged _shannon;
    CPyTagged _nanoether;
    CPyTagged _nano;
    CPyTagged _szabo;
    CPyTagged _microether;
    CPyTagged _micro;
    CPyTagged _finney;
    CPyTagged _milliether;
    CPyTagged _milli;
    CPyTagged _ether;
    CPyTagged _kether;
    CPyTagged _grand;
    CPyTagged _mether;
    CPyTagged _gether;
    CPyTagged _tether;
} faster_eth_utils___currency___denomsObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *_method;
} faster_eth_utils___decorators___combomethodObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_self__;
    PyObject *_self;
    PyObject *_obj;
    PyObject *_objtype;
    char _None;
    PyObject *__wrapper;
} faster_eth_utils___decorators_____get___3_combomethod_envObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
    PyObject *___mypyc_env__;
} faster_eth_utils___decorators____wrapper___3_get___3_combomethod_objObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_self__;
    CPyTagged _at_position;
    PyObject *_decorator;
} faster_eth_utils___decorators___return_arg_type_envObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_self__;
    PyObject *___mypyc_env__;
    PyObject *_to_wrap;
    PyObject *_wrapper;
    CPyTagged _at_position;
    PyObject *_decorator;
} faster_eth_utils___decorators___decorator_return_arg_type_envObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
    PyObject *___mypyc_env__;
} faster_eth_utils___decorators___decorator_return_arg_type_objObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
    PyObject *___mypyc_env__;
} faster_eth_utils___decorators___wrapper_return_arg_type_decorator_objObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_self__;
    PyObject *_old_to_new_exceptions;
    PyObject *_old_exceptions;
    PyObject *_decorator;
} faster_eth_utils___decorators___replace_exceptions_envObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_self__;
    PyObject *___mypyc_env__;
    PyObject *_to_wrap;
    PyObject *_wrapped;
    PyObject *_old_to_new_exceptions;
    PyObject *_old_exceptions;
    PyObject *_decorator;
} faster_eth_utils___decorators___decorator_replace_exceptions_envObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
    PyObject *___mypyc_env__;
} faster_eth_utils___decorators___decorator_replace_exceptions_objObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
    PyObject *___mypyc_env__;
} faster_eth_utils___decorators___wrapped_replace_exceptions_decorator_objObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
} faster_eth_utils___exceptions___ValidationErrorObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *_units_iter;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__0;
    PyObject *___mypyc_temp__1;
    CPyTagged _amount;
    PyObject *_unit;
    PyObject *___mypyc_temp__2;
    tuple_T3OOO ___mypyc_temp__3;
} faster_eth_utils___humanize____consume_leading_zero_units_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    CPyTagged _seconds;
    int32_t ___mypyc_next_label__;
    CPyTagged _remainder;
    tuple_T7T2IOT2IOT2IOT2IOT2IOT2IOT2IO ___mypyc_temp__4;
    PyObject *___mypyc_temp__5;
    CPyTagged _duration;
    PyObject *_unit;
    CPyTagged _num;
} faster_eth_utils___humanize____humanize_seconds_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *_values;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__6;
    PyObject *___mypyc_temp__7;
    CPyTagged _index;
    PyObject *_left;
    PyObject *_right;
} faster_eth_utils___humanize____find_breakpoints_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *_values;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__8;
    PyObject *___mypyc_temp__9;
    PyObject *_left;
    PyObject *_right;
    PyObject *_chunk;
} faster_eth_utils___humanize____extract_integer_ranges_genObject;


struct export_table_bce0bfc64ce5e845ec4a {
    PyObject *(*CPyDef_abi___collapse_if_tuple)(PyObject *cpy_r_abi);
    PyObject *(*CPyDef_abi____abi_to_signature)(PyObject *cpy_r_abi);
    PyObject *(*CPyDef_abi___function_signature_to_4byte_selector)(PyObject *cpy_r_event_signature);
    PyObject *(*CPyDef_abi___function_abi_to_4byte_selector)(PyObject *cpy_r_function_abi);
    PyObject *(*CPyDef_abi___event_signature_to_log_topic)(PyObject *cpy_r_event_signature);
    PyObject *(*CPyDef_abi___event_abi_to_log_topic)(PyObject *cpy_r_event_abi);
    char (*CPyDef_abi_____top_level__)(void);
    PyObject **CPyStatic_address____HEX_ADDRESS_REGEXP;
    char (*CPyDef_address___is_hex_address)(PyObject *cpy_r_value);
    char (*CPyDef_address___is_binary_address)(PyObject *cpy_r_value);
    char (*CPyDef_address___is_address)(PyObject *cpy_r_value);
    PyObject *(*CPyDef_address___to_normalized_address)(PyObject *cpy_r_value);
    char (*CPyDef_address___is_normalized_address)(PyObject *cpy_r_value);
    PyObject *(*CPyDef_address___to_canonical_address)(PyObject *cpy_r_address);
    char (*CPyDef_address___is_canonical_address)(PyObject *cpy_r_address);
    char (*CPyDef_address___is_same_address)(PyObject *cpy_r_left, PyObject *cpy_r_right);
    PyObject *(*CPyDef_address___to_checksum_address)(PyObject *cpy_r_value);
    char (*CPyDef_address___is_checksum_address)(PyObject *cpy_r_value);
    char (*CPyDef_address____is_checksum_formatted)(PyObject *cpy_r_value);
    char (*CPyDef_address___is_checksum_formatted_address)(PyObject *cpy_r_value);
    char (*CPyDef_address_____top_level__)(void);
    PyObject *(*CPyDef_conversions___to_hex)(PyObject *cpy_r_primitive, PyObject *cpy_r_hexstr, PyObject *cpy_r_text);
    CPyTagged (*CPyDef_conversions___to_int)(PyObject *cpy_r_primitive, PyObject *cpy_r_hexstr, PyObject *cpy_r_text);
    PyObject *(*CPyDef_conversions___to_bytes)(PyObject *cpy_r_primitive, PyObject *cpy_r_hexstr, PyObject *cpy_r_text);
    PyObject *(*CPyDef_conversions___to_text)(PyObject *cpy_r_primitive, PyObject *cpy_r_hexstr, PyObject *cpy_r_text);
    PyObject *(*CPyDef_conversions___text_if_str)(PyObject *cpy_r_to_type, PyObject *cpy_r_text_or_primitive);
    PyObject *(*CPyDef_conversions___hexstr_if_str)(PyObject *cpy_r_to_type, PyObject *cpy_r_hexstr_or_primitive);
    char (*CPyDef_conversions_____top_level__)(void);
    CPyTagged *CPyStatic_currency___denoms___wei;
    CPyTagged *CPyStatic_currency___denoms___kwei;
    CPyTagged *CPyStatic_currency___denoms___babbage;
    CPyTagged *CPyStatic_currency___denoms___femtoether;
    CPyTagged *CPyStatic_currency___denoms___mwei;
    CPyTagged *CPyStatic_currency___denoms___lovelace;
    CPyTagged *CPyStatic_currency___denoms___picoether;
    CPyTagged *CPyStatic_currency___denoms___gwei;
    CPyTagged *CPyStatic_currency___denoms___shannon;
    CPyTagged *CPyStatic_currency___denoms___nanoether;
    CPyTagged *CPyStatic_currency___denoms___nano;
    CPyTagged *CPyStatic_currency___denoms___szabo;
    CPyTagged *CPyStatic_currency___denoms___microether;
    CPyTagged *CPyStatic_currency___denoms___micro;
    CPyTagged *CPyStatic_currency___denoms___finney;
    CPyTagged *CPyStatic_currency___denoms___milliether;
    CPyTagged *CPyStatic_currency___denoms___milli;
    CPyTagged *CPyStatic_currency___denoms___ether;
    CPyTagged *CPyStatic_currency___denoms___kether;
    CPyTagged *CPyStatic_currency___denoms___grand;
    CPyTagged *CPyStatic_currency___denoms___mether;
    CPyTagged *CPyStatic_currency___denoms___gether;
    CPyTagged *CPyStatic_currency___denoms___tether;
    PyTypeObject **CPyType_currency___denoms;
    PyObject *(*CPyDef_currency___denoms)(void);
    char (*CPyDef_currency___denoms_____mypyc_defaults_setup)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_currency___from_wei)(CPyTagged cpy_r_number, PyObject *cpy_r_unit);
    CPyTagged (*CPyDef_currency___to_wei)(PyObject *cpy_r_number, PyObject *cpy_r_unit);
    char (*CPyDef_currency_____top_level__)(void);
    PyObject *(*CPyDef_debug___pip_freeze)(void);
    PyObject *(*CPyDef_debug___python_version)(void);
    PyObject *(*CPyDef_debug___platform_info)(void);
    PyObject *(*CPyDef_debug___get_environment_summary)(void);
    char (*CPyDef_debug_____top_level__)(void);
    PyTypeObject **CPyType_decorators___combomethod;
    PyObject *(*CPyDef_decorators___combomethod)(PyObject *cpy_r_method);
    PyTypeObject **CPyType_decorators_____get___3_combomethod_env;
    PyObject *(*CPyDef_decorators_____get___3_combomethod_env)(void);
    PyTypeObject **CPyType_decorators____wrapper___3_get___3_combomethod_obj;
    PyObject *(*CPyDef_decorators____wrapper___3_get___3_combomethod_obj)(void);
    PyTypeObject **CPyType_decorators___return_arg_type_env;
    PyObject *(*CPyDef_decorators___return_arg_type_env)(void);
    PyTypeObject **CPyType_decorators___decorator_return_arg_type_env;
    PyObject *(*CPyDef_decorators___decorator_return_arg_type_env)(void);
    PyTypeObject **CPyType_decorators___decorator_return_arg_type_obj;
    PyObject *(*CPyDef_decorators___decorator_return_arg_type_obj)(void);
    PyTypeObject **CPyType_decorators___wrapper_return_arg_type_decorator_obj;
    PyObject *(*CPyDef_decorators___wrapper_return_arg_type_decorator_obj)(void);
    PyTypeObject **CPyType_decorators___replace_exceptions_env;
    PyObject *(*CPyDef_decorators___replace_exceptions_env)(void);
    PyTypeObject **CPyType_decorators___decorator_replace_exceptions_env;
    PyObject *(*CPyDef_decorators___decorator_replace_exceptions_env)(void);
    PyTypeObject **CPyType_decorators___decorator_replace_exceptions_obj;
    PyObject *(*CPyDef_decorators___decorator_replace_exceptions_obj)(void);
    PyTypeObject **CPyType_decorators___wrapped_replace_exceptions_decorator_obj;
    PyObject *(*CPyDef_decorators___wrapped_replace_exceptions_decorator_obj)(void);
    char (*CPyDef_decorators___combomethod_____init__)(PyObject *cpy_r_self, PyObject *cpy_r_method);
    PyObject *(*CPyDef_decorators____wrapper___3_get___3_combomethod_obj_____get__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
    PyObject *(*CPyDef_decorators____wrapper___3_get___3_combomethod_obj_____call__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_args, PyObject *cpy_r_kwargs);
    PyObject *(*CPyDef_decorators___combomethod_____get__)(PyObject *cpy_r_self, PyObject *cpy_r_obj, PyObject *cpy_r_objtype);
    PyObject *(*CPyDef_decorators___wrapper_return_arg_type_decorator_obj_____get__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
    PyObject *(*CPyDef_decorators___wrapper_return_arg_type_decorator_obj_____call__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_args, PyObject *cpy_r_kwargs);
    PyObject *(*CPyDef_decorators___decorator_return_arg_type_obj_____get__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
    PyObject *(*CPyDef_decorators___decorator_return_arg_type_obj_____call__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_to_wrap);
    PyObject *(*CPyDef_decorators___return_arg_type)(CPyTagged cpy_r_at_position);
    PyObject *(*CPyDef_decorators___wrapped_replace_exceptions_decorator_obj_____get__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
    PyObject *(*CPyDef_decorators___wrapped_replace_exceptions_decorator_obj_____call__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_args, PyObject *cpy_r_kwargs);
    PyObject *(*CPyDef_decorators___decorator_replace_exceptions_obj_____get__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
    PyObject *(*CPyDef_decorators___decorator_replace_exceptions_obj_____call__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_to_wrap);
    PyObject *(*CPyDef_decorators___replace_exceptions)(PyObject *cpy_r_old_to_new_exceptions);
    char (*CPyDef_decorators_____top_level__)(void);
    PyObject *(*CPyDef_encoding___int_to_big_endian)(CPyTagged cpy_r_value);
    CPyTagged (*CPyDef_encoding___big_endian_to_int)(PyObject *cpy_r_value);
    char (*CPyDef_encoding_____top_level__)(void);
    PyTypeObject **CPyType_exceptions___ValidationError;
    char (*CPyDef_exceptions_____top_level__)(void);
    PyObject **CPyStatic_hexadecimal____HEX_REGEXP;
    PyObject *(*CPyDef_hexadecimal___decode_hex)(PyObject *cpy_r_value);
    PyObject *(*CPyDef_hexadecimal___encode_hex)(PyObject *cpy_r_value);
    char (*CPyDef_hexadecimal___is_0x_prefixed)(PyObject *cpy_r_value);
    PyObject *(*CPyDef_hexadecimal___remove_0x_prefix)(PyObject *cpy_r_value);
    PyObject *(*CPyDef_hexadecimal___add_0x_prefix)(PyObject *cpy_r_value);
    char (*CPyDef_hexadecimal___is_hexstr)(PyObject *cpy_r_value);
    char (*CPyDef_hexadecimal___is_hex)(PyObject *cpy_r_value);
    char (*CPyDef_hexadecimal_____top_level__)(void);
    tuple_T7T2IOT2IOT2IOT2IOT2IOT2IOT2IO *CPyStatic_humanize___UNITS;
    PyTypeObject **CPyType_humanize____consume_leading_zero_units_gen;
    PyObject *(*CPyDef_humanize____consume_leading_zero_units_gen)(void);
    PyTypeObject **CPyType_humanize____humanize_seconds_gen;
    PyObject *(*CPyDef_humanize____humanize_seconds_gen)(void);
    PyTypeObject **CPyType_humanize____find_breakpoints_gen;
    PyObject *(*CPyDef_humanize____find_breakpoints_gen)(void);
    PyTypeObject **CPyType_humanize____extract_integer_ranges_gen;
    PyObject *(*CPyDef_humanize____extract_integer_ranges_gen)(void);
    PyObject *(*CPyDef_humanize___humanize_seconds)(PyObject *cpy_r_seconds);
    PyObject *(*CPyDef_humanize____consume_leading_zero_units_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_humanize____consume_leading_zero_units_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_humanize____consume_leading_zero_units_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_humanize____consume_leading_zero_units_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_humanize____consume_leading_zero_units_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_humanize____consume_leading_zero_units_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_humanize____consume_leading_zero_units)(PyObject *cpy_r_units_iter);
    PyObject *(*CPyDef_humanize____humanize_seconds_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_humanize____humanize_seconds_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_humanize____humanize_seconds_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_humanize____humanize_seconds_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_humanize____humanize_seconds_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_humanize____humanize_seconds_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_humanize____humanize_seconds)(CPyTagged cpy_r_seconds);
    PyObject *(*CPyDef_humanize___humanize_bytes)(PyObject *cpy_r_value);
    PyObject *(*CPyDef_humanize___humanize_hash)(PyObject *cpy_r_value);
    PyObject *(*CPyDef_humanize___humanize_ipfs_uri)(PyObject *cpy_r_uri);
    char (*CPyDef_humanize___is_ipfs_uri)(PyObject *cpy_r_value);
    char (*CPyDef_humanize____is_CIDv0_ipfs_hash)(PyObject *cpy_r_ipfs_hash);
    PyObject *(*CPyDef_humanize____find_breakpoints_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_humanize____find_breakpoints_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_humanize____find_breakpoints_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_humanize____find_breakpoints_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_humanize____find_breakpoints_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_humanize____find_breakpoints_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_humanize____find_breakpoints)(PyObject *cpy_r_values);
    PyObject *(*CPyDef_humanize____extract_integer_ranges_gen_____mypyc_generator_helper__)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_humanize____extract_integer_ranges_gen_____next__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_humanize____extract_integer_ranges_gen___send)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
    PyObject *(*CPyDef_humanize____extract_integer_ranges_gen_____iter__)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_humanize____extract_integer_ranges_gen___throw)(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
    PyObject *(*CPyDef_humanize____extract_integer_ranges_gen___close)(PyObject *cpy_r___mypyc_self__);
    PyObject *(*CPyDef_humanize____extract_integer_ranges)(PyObject *cpy_r_values);
    PyObject *(*CPyDef_humanize____humanize_range)(tuple_T2II cpy_r_bounds);
    PyObject *(*CPyDef_humanize___humanize_integer_sequence)(PyObject *cpy_r_values_iter);
    PyObject *(*CPyDef_humanize___humanize_wei)(CPyTagged cpy_r_number);
    char (*CPyDef_humanize_____top_level__)(void);
    PyObject *(*CPyDef_module_loading___import_string)(PyObject *cpy_r_dotted_path);
    char (*CPyDef_module_loading_____top_level__)(void);
    char (*CPyDef_types___is_integer)(PyObject *cpy_r_value);
    char (*CPyDef_types___is_bytes)(PyObject *cpy_r_value);
    char (*CPyDef_types___is_text)(PyObject *cpy_r_value);
    char (*CPyDef_types___is_string)(PyObject *cpy_r_value);
    char (*CPyDef_types___is_boolean)(PyObject *cpy_r_value);
    char (*CPyDef_types___is_dict)(PyObject *cpy_r_obj);
    char (*CPyDef_types___is_list_like)(PyObject *cpy_r_obj);
    char (*CPyDef_types___is_list)(PyObject *cpy_r_obj);
    char (*CPyDef_types___is_tuple)(PyObject *cpy_r_obj);
    char (*CPyDef_types___is_null)(PyObject *cpy_r_obj);
    char (*CPyDef_types___is_number)(PyObject *cpy_r_obj);
    char (*CPyDef_types_____top_level__)(void);
    char (*CPyDef_units_____top_level__)(void);
};
#endif
