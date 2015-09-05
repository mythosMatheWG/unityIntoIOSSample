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
#include "mscorlib_System_Array_InternalEnumerator_1_gen_54.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_22.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m11642_gshared (InternalEnumerator_1_t1738 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m11642(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1738 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m11642_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11643_gshared (InternalEnumerator_1_t1738 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11643(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1738 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11643_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m11644_gshared (InternalEnumerator_1_t1738 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m11644(__this, method) (( void (*) (InternalEnumerator_1_t1738 *, const MethodInfo*))InternalEnumerator_1_Dispose_m11644_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m11645_gshared (InternalEnumerator_1_t1738 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m11645(__this, method) (( bool (*) (InternalEnumerator_1_t1738 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m11645_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::get_Current()
extern "C" KeyValuePair_2_t1737  InternalEnumerator_1_get_Current_m11646_gshared (InternalEnumerator_1_t1738 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m11646(__this, method) (( KeyValuePair_2_t1737  (*) (InternalEnumerator_1_t1738 *, const MethodInfo*))InternalEnumerator_1_get_Current_m11646_gshared)(__this, method)
