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

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1528;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__5.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m9186_gshared (Enumerator_t1534 * __this, Dictionary_2_t1528 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m9186(__this, ___dictionary, method) (( void (*) (Enumerator_t1534 *, Dictionary_2_t1528 *, const MethodInfo*))Enumerator__ctor_m9186_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m9187_gshared (Enumerator_t1534 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m9187(__this, method) (( Object_t * (*) (Enumerator_t1534 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m9187_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t564  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m9188_gshared (Enumerator_t1534 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m9188(__this, method) (( DictionaryEntry_t564  (*) (Enumerator_t1534 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m9188_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m9189_gshared (Enumerator_t1534 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m9189(__this, method) (( Object_t * (*) (Enumerator_t1534 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m9189_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m9190_gshared (Enumerator_t1534 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m9190(__this, method) (( Object_t * (*) (Enumerator_t1534 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m9190_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m9191_gshared (Enumerator_t1534 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m9191(__this, method) (( bool (*) (Enumerator_t1534 *, const MethodInfo*))Enumerator_MoveNext_m9191_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t1530  Enumerator_get_Current_m9192_gshared (Enumerator_t1534 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m9192(__this, method) (( KeyValuePair_2_t1530  (*) (Enumerator_t1534 *, const MethodInfo*))Enumerator_get_Current_m9192_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m9193_gshared (Enumerator_t1534 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m9193(__this, method) (( Object_t * (*) (Enumerator_t1534 *, const MethodInfo*))Enumerator_get_CurrentKey_m9193_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m9194_gshared (Enumerator_t1534 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m9194(__this, method) (( int32_t (*) (Enumerator_t1534 *, const MethodInfo*))Enumerator_get_CurrentValue_m9194_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m9195_gshared (Enumerator_t1534 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m9195(__this, method) (( void (*) (Enumerator_t1534 *, const MethodInfo*))Enumerator_VerifyState_m9195_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m9196_gshared (Enumerator_t1534 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m9196(__this, method) (( void (*) (Enumerator_t1534 *, const MethodInfo*))Enumerator_VerifyCurrent_m9196_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m9197_gshared (Enumerator_t1534 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m9197(__this, method) (( void (*) (Enumerator_t1534 *, const MethodInfo*))Enumerator_Dispose_m9197_gshared)(__this, method)
