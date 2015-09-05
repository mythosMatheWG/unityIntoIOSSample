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
#include "mscorlib_System_Array_InternalEnumerator_1_gen_80.h"
#include "mscorlib_System_Reflection_Emit_ILGenerator_LabelData.h"

// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelData>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m11954_gshared (InternalEnumerator_1_t1789 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m11954(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1789 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m11954_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelData>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11955_gshared (InternalEnumerator_1_t1789 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11955(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1789 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11955_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelData>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m11956_gshared (InternalEnumerator_1_t1789 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m11956(__this, method) (( void (*) (InternalEnumerator_1_t1789 *, const MethodInfo*))InternalEnumerator_1_Dispose_m11956_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelData>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m11957_gshared (InternalEnumerator_1_t1789 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m11957(__this, method) (( bool (*) (InternalEnumerator_1_t1789 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m11957_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelData>::get_Current()
extern "C" LabelData_t965  InternalEnumerator_1_get_Current_m11958_gshared (InternalEnumerator_1_t1789 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m11958(__this, method) (( LabelData_t965  (*) (InternalEnumerator_1_t1789 *, const MethodInfo*))InternalEnumerator_1_get_Current_m11958_gshared)(__this, method)
