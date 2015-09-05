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
#include "mscorlib_System_Array_InternalEnumerator_1_gen_65.h"

// System.Void System.Array/InternalEnumerator`1<System.Double>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m11777_gshared (InternalEnumerator_1_t1760 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m11777(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1760 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m11777_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Double>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11778_gshared (InternalEnumerator_1_t1760 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11778(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1760 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11778_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Double>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m11779_gshared (InternalEnumerator_1_t1760 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m11779(__this, method) (( void (*) (InternalEnumerator_1_t1760 *, const MethodInfo*))InternalEnumerator_1_Dispose_m11779_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Double>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m11780_gshared (InternalEnumerator_1_t1760 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m11780(__this, method) (( bool (*) (InternalEnumerator_1_t1760 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m11780_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Double>::get_Current()
extern "C" double InternalEnumerator_1_get_Current_m11781_gshared (InternalEnumerator_1_t1760 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m11781(__this, method) (( double (*) (InternalEnumerator_1_t1760 *, const MethodInfo*))InternalEnumerator_1_get_Current_m11781_gshared)(__this, method)
