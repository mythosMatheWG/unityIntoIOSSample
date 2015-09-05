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

// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t1711;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__16.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_20.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m11462_gshared (Enumerator_t1718 * __this, Dictionary_2_t1711 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m11462(__this, ___dictionary, method) (( void (*) (Enumerator_t1718 *, Dictionary_2_t1711 *, const MethodInfo*))Enumerator__ctor_m11462_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m11463_gshared (Enumerator_t1718 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m11463(__this, method) (( Object_t * (*) (Enumerator_t1718 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m11463_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t564  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11464_gshared (Enumerator_t1718 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11464(__this, method) (( DictionaryEntry_t564  (*) (Enumerator_t1718 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11464_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11465_gshared (Enumerator_t1718 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11465(__this, method) (( Object_t * (*) (Enumerator_t1718 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11465_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11466_gshared (Enumerator_t1718 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11466(__this, method) (( Object_t * (*) (Enumerator_t1718 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11466_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::MoveNext()
extern "C" bool Enumerator_MoveNext_m11467_gshared (Enumerator_t1718 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m11467(__this, method) (( bool (*) (Enumerator_t1718 *, const MethodInfo*))Enumerator_MoveNext_m11467_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_Current()
extern "C" KeyValuePair_2_t1713  Enumerator_get_Current_m11468_gshared (Enumerator_t1718 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m11468(__this, method) (( KeyValuePair_2_t1713  (*) (Enumerator_t1718 *, const MethodInfo*))Enumerator_get_Current_m11468_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m11469_gshared (Enumerator_t1718 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m11469(__this, method) (( Object_t * (*) (Enumerator_t1718 *, const MethodInfo*))Enumerator_get_CurrentKey_m11469_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_CurrentValue()
extern "C" bool Enumerator_get_CurrentValue_m11470_gshared (Enumerator_t1718 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m11470(__this, method) (( bool (*) (Enumerator_t1718 *, const MethodInfo*))Enumerator_get_CurrentValue_m11470_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::VerifyState()
extern "C" void Enumerator_VerifyState_m11471_gshared (Enumerator_t1718 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m11471(__this, method) (( void (*) (Enumerator_t1718 *, const MethodInfo*))Enumerator_VerifyState_m11471_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m11472_gshared (Enumerator_t1718 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m11472(__this, method) (( void (*) (Enumerator_t1718 *, const MethodInfo*))Enumerator_VerifyCurrent_m11472_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::Dispose()
extern "C" void Enumerator_Dispose_m11473_gshared (Enumerator_t1718 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m11473(__this, method) (( void (*) (Enumerator_t1718 *, const MethodInfo*))Enumerator_Dispose_m11473_gshared)(__this, method)
