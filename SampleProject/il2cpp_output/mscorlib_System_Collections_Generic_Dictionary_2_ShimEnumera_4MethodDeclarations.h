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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ShimEnumerator_t1657;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t1646;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m10837_gshared (ShimEnumerator_t1657 * __this, Dictionary_2_t1646 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m10837(__this, ___host, method) (( void (*) (ShimEnumerator_t1657 *, Dictionary_2_t1646 *, const MethodInfo*))ShimEnumerator__ctor_m10837_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m10838_gshared (ShimEnumerator_t1657 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m10838(__this, method) (( bool (*) (ShimEnumerator_t1657 *, const MethodInfo*))ShimEnumerator_MoveNext_m10838_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Entry()
extern "C" DictionaryEntry_t564  ShimEnumerator_get_Entry_m10839_gshared (ShimEnumerator_t1657 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m10839(__this, method) (( DictionaryEntry_t564  (*) (ShimEnumerator_t1657 *, const MethodInfo*))ShimEnumerator_get_Entry_m10839_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m10840_gshared (ShimEnumerator_t1657 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m10840(__this, method) (( Object_t * (*) (ShimEnumerator_t1657 *, const MethodInfo*))ShimEnumerator_get_Key_m10840_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m10841_gshared (ShimEnumerator_t1657 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m10841(__this, method) (( Object_t * (*) (ShimEnumerator_t1657 *, const MethodInfo*))ShimEnumerator_get_Value_m10841_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m10842_gshared (ShimEnumerator_t1657 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m10842(__this, method) (( Object_t * (*) (ShimEnumerator_t1657 *, const MethodInfo*))ShimEnumerator_get_Current_m10842_gshared)(__this, method)
