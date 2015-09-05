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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
struct ShimEnumerator_t1523;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1511;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m9002_gshared (ShimEnumerator_t1523 * __this, Dictionary_2_t1511 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m9002(__this, ___host, method) (( void (*) (ShimEnumerator_t1523 *, Dictionary_2_t1511 *, const MethodInfo*))ShimEnumerator__ctor_m9002_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m9003_gshared (ShimEnumerator_t1523 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m9003(__this, method) (( bool (*) (ShimEnumerator_t1523 *, const MethodInfo*))ShimEnumerator_MoveNext_m9003_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern "C" DictionaryEntry_t564  ShimEnumerator_get_Entry_m9004_gshared (ShimEnumerator_t1523 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m9004(__this, method) (( DictionaryEntry_t564  (*) (ShimEnumerator_t1523 *, const MethodInfo*))ShimEnumerator_get_Entry_m9004_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m9005_gshared (ShimEnumerator_t1523 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m9005(__this, method) (( Object_t * (*) (ShimEnumerator_t1523 *, const MethodInfo*))ShimEnumerator_get_Key_m9005_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m9006_gshared (ShimEnumerator_t1523 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m9006(__this, method) (( Object_t * (*) (ShimEnumerator_t1523 *, const MethodInfo*))ShimEnumerator_get_Value_m9006_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m9007_gshared (ShimEnumerator_t1523 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m9007(__this, method) (( Object_t * (*) (ShimEnumerator_t1523 *, const MethodInfo*))ShimEnumerator_get_Current_m9007_gshared)(__this, method)
