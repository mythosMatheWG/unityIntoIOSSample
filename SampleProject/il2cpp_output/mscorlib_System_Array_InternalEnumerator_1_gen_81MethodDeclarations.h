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
#include "mscorlib_System_Array_InternalEnumerator_1_gen_81.h"
#include "mscorlib_System_Reflection_Emit_ILGenerator_LabelFixup.h"

// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelFixup>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m11959_gshared (InternalEnumerator_1_t1790 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m11959(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1790 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m11959_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelFixup>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11960_gshared (InternalEnumerator_1_t1790 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11960(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1790 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11960_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelFixup>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m11961_gshared (InternalEnumerator_1_t1790 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m11961(__this, method) (( void (*) (InternalEnumerator_1_t1790 *, const MethodInfo*))InternalEnumerator_1_Dispose_m11961_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelFixup>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m11962_gshared (InternalEnumerator_1_t1790 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m11962(__this, method) (( bool (*) (InternalEnumerator_1_t1790 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m11962_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelFixup>::get_Current()
extern "C" LabelFixup_t964  InternalEnumerator_1_get_Current_m11963_gshared (InternalEnumerator_1_t1790 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m11963(__this, method) (( LabelFixup_t964  (*) (InternalEnumerator_1_t1790 *, const MethodInfo*))InternalEnumerator_1_get_Current_m11963_gshared)(__this, method)
