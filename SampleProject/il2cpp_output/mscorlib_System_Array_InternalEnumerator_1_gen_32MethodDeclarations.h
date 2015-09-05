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
#include "mscorlib_System_Array_InternalEnumerator_1_gen_32.h"

// System.Void System.Array/InternalEnumerator`1<System.Int64>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m9752_gshared (InternalEnumerator_1_t1575 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m9752(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1575 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m9752_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Int64>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m9753_gshared (InternalEnumerator_1_t1575 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m9753(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1575 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m9753_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Int64>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m9754_gshared (InternalEnumerator_1_t1575 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m9754(__this, method) (( void (*) (InternalEnumerator_1_t1575 *, const MethodInfo*))InternalEnumerator_1_Dispose_m9754_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Int64>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m9755_gshared (InternalEnumerator_1_t1575 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m9755(__this, method) (( bool (*) (InternalEnumerator_1_t1575 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m9755_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Int64>::get_Current()
extern "C" int64_t InternalEnumerator_1_get_Current_m9756_gshared (InternalEnumerator_1_t1575 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m9756(__this, method) (( int64_t (*) (InternalEnumerator_1_t1575 *, const MethodInfo*))InternalEnumerator_1_get_Current_m9756_gshared)(__this, method)
