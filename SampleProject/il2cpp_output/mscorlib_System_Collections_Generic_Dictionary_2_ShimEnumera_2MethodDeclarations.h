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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>
struct ShimEnumerator_t1584;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t1571;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m9821_gshared (ShimEnumerator_t1584 * __this, Dictionary_2_t1571 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m9821(__this, ___host, method) (( void (*) (ShimEnumerator_t1584 *, Dictionary_2_t1571 *, const MethodInfo*))ShimEnumerator__ctor_m9821_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m9822_gshared (ShimEnumerator_t1584 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m9822(__this, method) (( bool (*) (ShimEnumerator_t1584 *, const MethodInfo*))ShimEnumerator_MoveNext_m9822_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Entry()
extern "C" DictionaryEntry_t564  ShimEnumerator_get_Entry_m9823_gshared (ShimEnumerator_t1584 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m9823(__this, method) (( DictionaryEntry_t564  (*) (ShimEnumerator_t1584 *, const MethodInfo*))ShimEnumerator_get_Entry_m9823_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m9824_gshared (ShimEnumerator_t1584 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m9824(__this, method) (( Object_t * (*) (ShimEnumerator_t1584 *, const MethodInfo*))ShimEnumerator_get_Key_m9824_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m9825_gshared (ShimEnumerator_t1584 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m9825(__this, method) (( Object_t * (*) (ShimEnumerator_t1584 *, const MethodInfo*))ShimEnumerator_get_Value_m9825_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m9826_gshared (ShimEnumerator_t1584 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m9826(__this, method) (( Object_t * (*) (ShimEnumerator_t1584 *, const MethodInfo*))ShimEnumerator_get_Current_m9826_gshared)(__this, method)
