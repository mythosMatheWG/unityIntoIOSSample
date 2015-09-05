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
#include "mscorlib_System_Array_InternalEnumerator_1_gen_92.h"
#include "mscorlib_System_DateTime.h"

// System.Void System.Array/InternalEnumerator`1<System.DateTime>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m12022_gshared (InternalEnumerator_1_t1803 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m12022(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1803 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m12022_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.DateTime>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12023_gshared (InternalEnumerator_1_t1803 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12023(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1803 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12023_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.DateTime>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m12024_gshared (InternalEnumerator_1_t1803 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m12024(__this, method) (( void (*) (InternalEnumerator_1_t1803 *, const MethodInfo*))InternalEnumerator_1_Dispose_m12024_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.DateTime>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m12025_gshared (InternalEnumerator_1_t1803 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m12025(__this, method) (( bool (*) (InternalEnumerator_1_t1803 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m12025_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.DateTime>::get_Current()
extern "C" DateTime_t52  InternalEnumerator_1_get_Current_m12026_gshared (InternalEnumerator_1_t1803 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m12026(__this, method) (( DateTime_t52  (*) (InternalEnumerator_1_t1803 *, const MethodInfo*))InternalEnumerator_1_get_Current_m12026_gshared)(__this, method)
