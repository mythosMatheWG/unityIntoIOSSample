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
#include "mscorlib_System_Array_InternalEnumerator_1_gen_17.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m8721_gshared (InternalEnumerator_1_t1497 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m8721(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1497 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m8721_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m8722_gshared (InternalEnumerator_1_t1497 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m8722(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1497 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m8722_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m8723_gshared (InternalEnumerator_1_t1497 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m8723(__this, method) (( void (*) (InternalEnumerator_1_t1497 *, const MethodInfo*))InternalEnumerator_1_Dispose_m8723_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m8724_gshared (InternalEnumerator_1_t1497 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m8724(__this, method) (( bool (*) (InternalEnumerator_1_t1497 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m8724_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::get_Current()
extern "C" DictionaryEntry_t564  InternalEnumerator_1_get_Current_m8725_gshared (InternalEnumerator_1_t1497 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m8725(__this, method) (( DictionaryEntry_t564  (*) (InternalEnumerator_1_t1497 *, const MethodInfo*))InternalEnumerator_1_get_Current_m8725_gshared)(__this, method)
