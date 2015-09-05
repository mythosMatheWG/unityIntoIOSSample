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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1484;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__1.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m8679_gshared (Enumerator_t1492 * __this, Dictionary_2_t1484 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m8679(__this, ___dictionary, method) (( void (*) (Enumerator_t1492 *, Dictionary_2_t1484 *, const MethodInfo*))Enumerator__ctor_m8679_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m8680_gshared (Enumerator_t1492 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m8680(__this, method) (( Object_t * (*) (Enumerator_t1492 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m8680_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t564  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m8681_gshared (Enumerator_t1492 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m8681(__this, method) (( DictionaryEntry_t564  (*) (Enumerator_t1492 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m8681_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m8682_gshared (Enumerator_t1492 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m8682(__this, method) (( Object_t * (*) (Enumerator_t1492 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m8682_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m8683_gshared (Enumerator_t1492 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m8683(__this, method) (( Object_t * (*) (Enumerator_t1492 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m8683_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m8684_gshared (Enumerator_t1492 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m8684(__this, method) (( bool (*) (Enumerator_t1492 *, const MethodInfo*))Enumerator_MoveNext_m8684_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
extern "C" KeyValuePair_2_t1486  Enumerator_get_Current_m8685_gshared (Enumerator_t1492 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m8685(__this, method) (( KeyValuePair_2_t1486  (*) (Enumerator_t1492 *, const MethodInfo*))Enumerator_get_Current_m8685_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m8686_gshared (Enumerator_t1492 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m8686(__this, method) (( int32_t (*) (Enumerator_t1492 *, const MethodInfo*))Enumerator_get_CurrentKey_m8686_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m8687_gshared (Enumerator_t1492 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m8687(__this, method) (( Object_t * (*) (Enumerator_t1492 *, const MethodInfo*))Enumerator_get_CurrentValue_m8687_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m8688_gshared (Enumerator_t1492 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m8688(__this, method) (( void (*) (Enumerator_t1492 *, const MethodInfo*))Enumerator_VerifyState_m8688_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m8689_gshared (Enumerator_t1492 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m8689(__this, method) (( void (*) (Enumerator_t1492 *, const MethodInfo*))Enumerator_VerifyCurrent_m8689_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m8690_gshared (Enumerator_t1492 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m8690(__this, method) (( void (*) (Enumerator_t1492 *, const MethodInfo*))Enumerator_Dispose_m8690_gshared)(__this, method)
