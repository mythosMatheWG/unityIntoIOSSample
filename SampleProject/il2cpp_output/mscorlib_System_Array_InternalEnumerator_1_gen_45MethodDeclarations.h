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
#include "mscorlib_System_Array_InternalEnumerator_1_gen_45.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_18.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m11104_gshared (InternalEnumerator_1_t1684 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m11104(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1684 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m11104_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11105_gshared (InternalEnumerator_1_t1684 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11105(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1684 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11105_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m11106_gshared (InternalEnumerator_1_t1684 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m11106(__this, method) (( void (*) (InternalEnumerator_1_t1684 *, const MethodInfo*))InternalEnumerator_1_Dispose_m11106_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m11107_gshared (InternalEnumerator_1_t1684 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m11107(__this, method) (( bool (*) (InternalEnumerator_1_t1684 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m11107_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>::get_Current()
extern "C" KeyValuePair_2_t1683  InternalEnumerator_1_get_Current_m11108_gshared (InternalEnumerator_1_t1684 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m11108(__this, method) (( KeyValuePair_2_t1683  (*) (InternalEnumerator_1_t1684 *, const MethodInfo*))InternalEnumerator_1_get_Current_m11108_gshared)(__this, method)
