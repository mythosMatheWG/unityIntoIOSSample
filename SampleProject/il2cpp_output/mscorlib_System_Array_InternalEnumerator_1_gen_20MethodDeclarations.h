#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Array
struct Array_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array_InternalEnumerator_1_gen_20.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m9157_gshared (InternalEnumerator_1_t1531 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m9157(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1531 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m9157_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m9158_gshared (InternalEnumerator_1_t1531 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m9158(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1531 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m9158_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m9159_gshared (InternalEnumerator_1_t1531 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m9159(__this, method) (( void (*) (InternalEnumerator_1_t1531 *, const MethodInfo*))InternalEnumerator_1_Dispose_m9159_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m9160_gshared (InternalEnumerator_1_t1531 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m9160(__this, method) (( bool (*) (InternalEnumerator_1_t1531 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m9160_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::get_Current()
extern "C" KeyValuePair_2_t1530  InternalEnumerator_1_get_Current_m9161_gshared (InternalEnumerator_1_t1531 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m9161(__this, method) (( KeyValuePair_2_t1530  (*) (InternalEnumerator_1_t1531 *, const MethodInfo*))InternalEnumerator_1_get_Current_m9161_gshared)(__this, method)
