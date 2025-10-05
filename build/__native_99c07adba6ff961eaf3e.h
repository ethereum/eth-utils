#ifndef MYPYC_NATIVE_99c07adba6ff961eaf3e_H
#define MYPYC_NATIVE_99c07adba6ff961eaf3e_H
#include <Python.h>
#include <CPy.h>
#ifndef MYPYC_DECLARED_tuple_T2OO
#define MYPYC_DECLARED_tuple_T2OO
typedef struct tuple_T2OO {
    PyObject *f0;
    PyObject *f1;
} tuple_T2OO;
#endif

#ifndef MYPYC_DECLARED_tuple_T0
#define MYPYC_DECLARED_tuple_T0
typedef struct tuple_T0 {
    int empty_struct_error_flag;
} tuple_T0;
#endif

#ifndef MYPYC_DECLARED_tuple_T3OOO
#define MYPYC_DECLARED_tuple_T3OOO
typedef struct tuple_T3OOO {
    PyObject *f0;
    PyObject *f1;
    PyObject *f2;
} tuple_T3OOO;
#endif

#ifndef MYPYC_DECLARED_tuple_T4CIOO
#define MYPYC_DECLARED_tuple_T4CIOO
typedef struct tuple_T4CIOO {
    char f0;
    CPyTagged f1;
    PyObject *f2;
    PyObject *f3;
} tuple_T4CIOO;
#endif

#ifndef MYPYC_DECLARED_tuple_T4OOOO
#define MYPYC_DECLARED_tuple_T4OOOO
typedef struct tuple_T4OOOO {
    PyObject *f0;
    PyObject *f1;
    PyObject *f2;
    PyObject *f3;
} tuple_T4OOOO;
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

#ifndef MYPYC_DECLARED_tuple_T5OOOOO
#define MYPYC_DECLARED_tuple_T5OOOOO
typedef struct tuple_T5OOOOO {
    PyObject *f0;
    PyObject *f1;
    PyObject *f2;
    PyObject *f3;
    PyObject *f4;
} tuple_T5OOOOO;
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
    PyObject *___mypyc_self__;
    PyObject *_sorted_arg_names;
    PyObject *_abi_element;
    PyObject *_args;
    PyObject *_kwargs;
    PyObject *_function_inputs;
    PyObject *_kwarg_names;
    PyObject *_arg_abi;
    PyObject *_args_as_kwargs;
    PyObject *_duplicate_args;
    PyObject *_unknown_args;
    PyObject *_message;
} faster_eth_utils___abi___get_normalized_abi_inputs_envObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
    PyObject *___mypyc_env__;
} faster_eth_utils___abi_____mypyc_lambda__0_get_normalized_abi_inputs_objObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__formatter;
    CPyTagged ___mypyc_generator_attribute__at_index;
    PyObject *___mypyc_generator_attribute__value;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_generator_attribute__item;
    tuple_T3OOO ___mypyc_temp__0;
    PyObject *___mypyc_temp__1;
    tuple_T3OOO ___mypyc_temp__2;
    PyObject *___mypyc_temp__3;
    tuple_T3OOO ___mypyc_temp__4;
} faster_eth_utils___applicators___apply_formatter_at_index_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__formatters;
    PyObject *___mypyc_generator_attribute__sequence;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__5;
    int64_t ___mypyc_temp__6;
    PyObject *___mypyc_temp__7;
    PyObject *___mypyc_temp__8;
    PyObject *___mypyc_generator_attribute__formatter;
    PyObject *___mypyc_generator_attribute__item;
} faster_eth_utils___applicators___apply_formatters_to_sequence_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__formatters;
    PyObject *___mypyc_generator_attribute__value;
    char ___mypyc_generator_attribute__unaliased;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__9;
    PyObject *___mypyc_temp__10;
    PyObject *___mypyc_generator_attribute__key;
    PyObject *___mypyc_generator_attribute__item;
    tuple_T3OOO ___mypyc_temp__11;
    PyObject *___mypyc_generator_attribute__exc;
    PyObject *___mypyc_generator_attribute__new_error_message;
} faster_eth_utils___applicators___apply_formatters_to_dict_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__formatter;
    PyObject *___mypyc_generator_attribute__value;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__12;
    PyObject *___mypyc_temp__13;
    PyObject *___mypyc_generator_attribute__item;
} faster_eth_utils___applicators___apply_formatter_to_array_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__key_mappings;
    PyObject *___mypyc_generator_attribute__value;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__14;
    PyObject *___mypyc_temp__15;
    CPyTagged ___mypyc_temp__16;
    int64_t ___mypyc_temp__17;
    PyObject *___mypyc_temp__18;
    PyObject *___mypyc_generator_attribute__k;
    PyObject *___mypyc_generator_attribute__v;
    PyObject *___mypyc_generator_attribute__key_conflicts;
    PyObject *___mypyc_temp__19;
    CPyTagged ___mypyc_temp__20;
    int64_t ___mypyc_temp__21;
    PyObject *___mypyc_temp__22;
    PyObject *___mypyc_generator_attribute__key;
    PyObject *___mypyc_generator_attribute__item;
} faster_eth_utils___applicators___apply_key_map_genObject;

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
    PyObject *___mypyc_self__;
    PyObject *_f;
    PyObject *_g;
    PyObject *_combined;
} faster_eth_utils___functional___combine_envObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
    PyObject *___mypyc_env__;
} faster_eth_utils___functional___combined_combine_objObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_self__;
    PyObject *_callback;
    PyObject *_outer;
} faster_eth_utils___functional___apply_to_return_value_envObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_self__;
    PyObject *___mypyc_env__;
    PyObject *_fn;
    PyObject *_inner;
    PyObject *_callback;
    PyObject *_outer;
} faster_eth_utils___functional___outer_apply_to_return_value_envObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
    PyObject *___mypyc_env__;
} faster_eth_utils___functional___outer_apply_to_return_value_objObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
    PyObject *___mypyc_env__;
} faster_eth_utils___functional___inner_apply_to_return_value_outer_objObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_self__;
    PyObject *_fn;
    PyObject *_to_tuple_wrap;
} faster_eth_utils___functional___to_tuple_envObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
    PyObject *___mypyc_env__;
} faster_eth_utils___functional___to_tuple_wrap_to_tuple_objObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_self__;
    PyObject *_fn;
    PyObject *_to_list_wrap;
} faster_eth_utils___functional___to_list_envObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
    PyObject *___mypyc_env__;
} faster_eth_utils___functional___to_list_wrap_to_list_objObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_self__;
    PyObject *_fn;
    PyObject *_to_set_wrap;
} faster_eth_utils___functional___to_set_envObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
    PyObject *___mypyc_env__;
} faster_eth_utils___functional___to_set_wrap_to_set_objObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_self__;
    PyObject *_fn;
    PyObject *_to_dict_wrap;
} faster_eth_utils___functional___to_dict_envObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    vectorcallfunc vectorcall;
    PyObject *___mypyc_env__;
} faster_eth_utils___functional___to_dict_wrap_to_dict_objObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__units_iter;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__0;
    PyObject *___mypyc_temp__1;
    CPyTagged ___mypyc_generator_attribute__amount;
    PyObject *___mypyc_generator_attribute__unit;
    PyObject *___mypyc_temp__2;
    tuple_T3OOO ___mypyc_temp__3;
} faster_eth_utils___humanize____consume_leading_zero_units_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    CPyTagged ___mypyc_generator_attribute__seconds;
    int32_t ___mypyc_next_label__;
    CPyTagged ___mypyc_generator_attribute__remainder;
    tuple_T7T2IOT2IOT2IOT2IOT2IOT2IOT2IO ___mypyc_temp__4;
    PyObject *___mypyc_temp__5;
    CPyTagged ___mypyc_generator_attribute__duration;
    PyObject *___mypyc_generator_attribute__unit;
    CPyTagged ___mypyc_generator_attribute__num;
} faster_eth_utils___humanize____humanize_seconds_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__values;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__6;
    PyObject *___mypyc_temp__7;
    CPyTagged ___mypyc_generator_attribute__index;
    PyObject *___mypyc_generator_attribute__left;
    PyObject *___mypyc_generator_attribute__right;
} faster_eth_utils___humanize____find_breakpoints_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    PyObject *___mypyc_generator_attribute__values;
    int32_t ___mypyc_next_label__;
    PyObject *___mypyc_temp__8;
    PyObject *___mypyc_temp__9;
    PyObject *___mypyc_generator_attribute__left;
    PyObject *___mypyc_generator_attribute__right;
    PyObject *___mypyc_generator_attribute__chunk;
} faster_eth_utils___humanize____extract_integer_ranges_genObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
    CPyTagged _chain_id;
    PyObject *_name;
    PyObject *_shortName;
    PyObject *_symbol;
} faster_eth_utils___network___NetworkObject;

typedef struct {
    PyObject_HEAD
    CPyVTableItem *vtable;
} faster_eth_utils___numeric___ComparableObject;

#endif
