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

// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t1571;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__7.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m9775_gshared (Enumerator_t1578 * __this, Dictionary_2_t1571 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m9775(__this, ___dictionary, method) (( void (*) (Enumerator_t1578 *, Dictionary_2_t1571 *, const MethodInfo*))Enumerator__ctor_m9775_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m9776_gshared (Enumerator_t1578 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m9776(__this, method) (( Object_t * (*) (Enumerator_t1578 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m9776_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t564  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m9777_gshared (Enumerator_t1578 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m9777(__this, method) (( DictionaryEntry_t564  (*) (Enumerator_t1578 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m9777_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m9778_gshared (Enumerator_t1578 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m9778(__this, method) (( Object_t * (*) (Enumerator_t1578 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m9778_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m9779_gshared (Enumerator_t1578 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m9779(__this, method) (( Object_t * (*) (Enumerator_t1578 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m9779_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool Enumerator_MoveNext_m9780_gshared (Enumerator_t1578 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m9780(__this, method) (( bool (*) (Enumerator_t1578 *, const MethodInfo*))Enumerator_MoveNext_m9780_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_Current()
extern "C" KeyValuePair_2_t1573  Enumerator_get_Current_m9781_gshared (Enumerator_t1578 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m9781(__this, method) (( KeyValuePair_2_t1573  (*) (Enumerator_t1578 *, const MethodInfo*))Enumerator_get_Current_m9781_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m9782_gshared (Enumerator_t1578 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m9782(__this, method) (( Object_t * (*) (Enumerator_t1578 *, const MethodInfo*))Enumerator_get_CurrentKey_m9782_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentValue()
extern "C" int64_t Enumerator_get_CurrentValue_m9783_gshared (Enumerator_t1578 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m9783(__this, method) (( int64_t (*) (Enumerator_t1578 *, const MethodInfo*))Enumerator_get_CurrentValue_m9783_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyState()
extern "C" void Enumerator_VerifyState_m9784_gshared (Enumerator_t1578 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m9784(__this, method) (( void (*) (Enumerator_t1578 *, const MethodInfo*))Enumerator_VerifyState_m9784_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m9785_gshared (Enumerator_t1578 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m9785(__this, method) (( void (*) (Enumerator_t1578 *, const MethodInfo*))Enumerator_VerifyCurrent_m9785_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::Dispose()
extern "C" void Enumerator_Dispose_m9786_gshared (Enumerator_t1578 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m9786(__this, method) (( void (*) (Enumerator_t1578 *, const MethodInfo*))Enumerator_Dispose_m9786_gshared)(__this, method)
