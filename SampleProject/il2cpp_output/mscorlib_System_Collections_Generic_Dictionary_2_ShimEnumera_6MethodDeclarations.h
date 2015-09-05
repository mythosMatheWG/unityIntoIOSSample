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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>
struct ShimEnumerator_t1724;
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t1711;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m11508_gshared (ShimEnumerator_t1724 * __this, Dictionary_2_t1711 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m11508(__this, ___host, method) (( void (*) (ShimEnumerator_t1724 *, Dictionary_2_t1711 *, const MethodInfo*))ShimEnumerator__ctor_m11508_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m11509_gshared (ShimEnumerator_t1724 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m11509(__this, method) (( bool (*) (ShimEnumerator_t1724 *, const MethodInfo*))ShimEnumerator_MoveNext_m11509_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Entry()
extern "C" DictionaryEntry_t564  ShimEnumerator_get_Entry_m11510_gshared (ShimEnumerator_t1724 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m11510(__this, method) (( DictionaryEntry_t564  (*) (ShimEnumerator_t1724 *, const MethodInfo*))ShimEnumerator_get_Entry_m11510_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m11511_gshared (ShimEnumerator_t1724 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m11511(__this, method) (( Object_t * (*) (ShimEnumerator_t1724 *, const MethodInfo*))ShimEnumerator_get_Key_m11511_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m11512_gshared (ShimEnumerator_t1724 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m11512(__this, method) (( Object_t * (*) (ShimEnumerator_t1724 *, const MethodInfo*))ShimEnumerator_get_Value_m11512_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m11513_gshared (ShimEnumerator_t1724 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m11513(__this, method) (( Object_t * (*) (ShimEnumerator_t1724 *, const MethodInfo*))ShimEnumerator_get_Current_m11513_gshared)(__this, method)
