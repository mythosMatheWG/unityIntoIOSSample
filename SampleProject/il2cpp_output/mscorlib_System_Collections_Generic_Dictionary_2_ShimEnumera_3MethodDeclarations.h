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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>
struct ShimEnumerator_t1613;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>
struct Dictionary_2_t1600;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m10141_gshared (ShimEnumerator_t1613 * __this, Dictionary_2_t1600 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m10141(__this, ___host, method) (( void (*) (ShimEnumerator_t1613 *, Dictionary_2_t1600 *, const MethodInfo*))ShimEnumerator__ctor_m10141_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m10142_gshared (ShimEnumerator_t1613 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m10142(__this, method) (( bool (*) (ShimEnumerator_t1613 *, const MethodInfo*))ShimEnumerator_MoveNext_m10142_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Entry()
extern "C" DictionaryEntry_t564  ShimEnumerator_get_Entry_m10143_gshared (ShimEnumerator_t1613 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m10143(__this, method) (( DictionaryEntry_t564  (*) (ShimEnumerator_t1613 *, const MethodInfo*))ShimEnumerator_get_Entry_m10143_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m10144_gshared (ShimEnumerator_t1613 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m10144(__this, method) (( Object_t * (*) (ShimEnumerator_t1613 *, const MethodInfo*))ShimEnumerator_get_Key_m10144_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m10145_gshared (ShimEnumerator_t1613 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m10145(__this, method) (( Object_t * (*) (ShimEnumerator_t1613 *, const MethodInfo*))ShimEnumerator_get_Value_m10145_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m10146_gshared (ShimEnumerator_t1613 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m10146(__this, method) (( Object_t * (*) (ShimEnumerator_t1613 *, const MethodInfo*))ShimEnumerator_get_Current_m10146_gshared)(__this, method)
