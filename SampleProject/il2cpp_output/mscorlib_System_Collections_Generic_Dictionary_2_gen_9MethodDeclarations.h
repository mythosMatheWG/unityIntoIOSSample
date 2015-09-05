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
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t1483;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Object>
struct IDictionary_2_t1829;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t312;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t1830;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t300;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t1828;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t281;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t1831;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t563;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
struct KeyCollection_t1490;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t1494;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__1.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m8543_gshared (Dictionary_2_t1484 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m8543(__this, method) (( void (*) (Dictionary_2_t1484 *, const MethodInfo*))Dictionary_2__ctor_m8543_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m8545_gshared (Dictionary_2_t1484 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m8545(__this, ___comparer, method) (( void (*) (Dictionary_2_t1484 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m8545_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m8547_gshared (Dictionary_2_t1484 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m8547(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1484 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m8547_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m8549_gshared (Dictionary_2_t1484 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m8549(__this, ___capacity, method) (( void (*) (Dictionary_2_t1484 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m8549_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m8551_gshared (Dictionary_2_t1484 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m8551(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1484 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m8551_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m8553_gshared (Dictionary_2_t1484 * __this, SerializationInfo_t312 * ___info, StreamingContext_t313  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m8553(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1484 *, SerializationInfo_t312 *, StreamingContext_t313 , const MethodInfo*))Dictionary_2__ctor_m8553_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m8555_gshared (Dictionary_2_t1484 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m8555(__this, method) (( Object_t* (*) (Dictionary_2_t1484 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m8555_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m8557_gshared (Dictionary_2_t1484 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m8557(__this, method) (( Object_t* (*) (Dictionary_2_t1484 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m8557_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m8559_gshared (Dictionary_2_t1484 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m8559(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1484 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m8559_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m8561_gshared (Dictionary_2_t1484 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m8561(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1484 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m8561_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m8563_gshared (Dictionary_2_t1484 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m8563(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1484 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m8563_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m8565_gshared (Dictionary_2_t1484 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m8565(__this, ___key, method) (( bool (*) (Dictionary_2_t1484 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m8565_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m8567_gshared (Dictionary_2_t1484 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m8567(__this, ___key, method) (( void (*) (Dictionary_2_t1484 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m8567_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m8569_gshared (Dictionary_2_t1484 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m8569(__this, method) (( Object_t * (*) (Dictionary_2_t1484 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m8569_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m8571_gshared (Dictionary_2_t1484 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m8571(__this, method) (( bool (*) (Dictionary_2_t1484 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m8571_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m8573_gshared (Dictionary_2_t1484 * __this, KeyValuePair_2_t1486  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m8573(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1484 *, KeyValuePair_2_t1486 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m8573_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m8575_gshared (Dictionary_2_t1484 * __this, KeyValuePair_2_t1486  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m8575(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1484 *, KeyValuePair_2_t1486 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m8575_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m8577_gshared (Dictionary_2_t1484 * __this, KeyValuePair_2U5BU5D_t1828* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m8577(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1484 *, KeyValuePair_2U5BU5D_t1828*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m8577_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m8579_gshared (Dictionary_2_t1484 * __this, KeyValuePair_2_t1486  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m8579(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1484 *, KeyValuePair_2_t1486 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m8579_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m8581_gshared (Dictionary_2_t1484 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m8581(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1484 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m8581_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m8583_gshared (Dictionary_2_t1484 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m8583(__this, method) (( Object_t * (*) (Dictionary_2_t1484 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m8583_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m8585_gshared (Dictionary_2_t1484 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m8585(__this, method) (( Object_t* (*) (Dictionary_2_t1484 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m8585_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m8587_gshared (Dictionary_2_t1484 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m8587(__this, method) (( Object_t * (*) (Dictionary_2_t1484 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m8587_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m8589_gshared (Dictionary_2_t1484 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m8589(__this, method) (( int32_t (*) (Dictionary_2_t1484 *, const MethodInfo*))Dictionary_2_get_Count_m8589_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m8591_gshared (Dictionary_2_t1484 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m8591(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1484 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m8591_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m8593_gshared (Dictionary_2_t1484 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m8593(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1484 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m8593_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m8595_gshared (Dictionary_2_t1484 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m8595(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1484 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m8595_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m8597_gshared (Dictionary_2_t1484 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m8597(__this, ___size, method) (( void (*) (Dictionary_2_t1484 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m8597_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m8599_gshared (Dictionary_2_t1484 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m8599(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1484 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m8599_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1486  Dictionary_2_make_pair_m8601_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m8601(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1486  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m8601_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m8603_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m8603(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m8603_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m8605_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m8605(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m8605_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m8607_gshared (Dictionary_2_t1484 * __this, KeyValuePair_2U5BU5D_t1828* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m8607(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1484 *, KeyValuePair_2U5BU5D_t1828*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m8607_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m8609_gshared (Dictionary_2_t1484 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m8609(__this, method) (( void (*) (Dictionary_2_t1484 *, const MethodInfo*))Dictionary_2_Resize_m8609_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m8611_gshared (Dictionary_2_t1484 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m8611(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1484 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m8611_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m8613_gshared (Dictionary_2_t1484 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m8613(__this, method) (( void (*) (Dictionary_2_t1484 *, const MethodInfo*))Dictionary_2_Clear_m8613_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m8615_gshared (Dictionary_2_t1484 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m8615(__this, ___key, method) (( bool (*) (Dictionary_2_t1484 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m8615_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m8617_gshared (Dictionary_2_t1484 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m8617(__this, ___value, method) (( bool (*) (Dictionary_2_t1484 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m8617_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m8619_gshared (Dictionary_2_t1484 * __this, SerializationInfo_t312 * ___info, StreamingContext_t313  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m8619(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1484 *, SerializationInfo_t312 *, StreamingContext_t313 , const MethodInfo*))Dictionary_2_GetObjectData_m8619_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m8621_gshared (Dictionary_2_t1484 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m8621(__this, ___sender, method) (( void (*) (Dictionary_2_t1484 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m8621_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m8623_gshared (Dictionary_2_t1484 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m8623(__this, ___key, method) (( bool (*) (Dictionary_2_t1484 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m8623_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m8625_gshared (Dictionary_2_t1484 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m8625(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1484 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m8625_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Keys()
extern "C" KeyCollection_t1490 * Dictionary_2_get_Keys_m8627_gshared (Dictionary_2_t1484 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m8627(__this, method) (( KeyCollection_t1490 * (*) (Dictionary_2_t1484 *, const MethodInfo*))Dictionary_2_get_Keys_m8627_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t1494 * Dictionary_2_get_Values_m8629_gshared (Dictionary_2_t1484 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m8629(__this, method) (( ValueCollection_t1494 * (*) (Dictionary_2_t1484 *, const MethodInfo*))Dictionary_2_get_Values_m8629_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m8631_gshared (Dictionary_2_t1484 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m8631(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1484 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m8631_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m8633_gshared (Dictionary_2_t1484 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m8633(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1484 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m8633_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m8635_gshared (Dictionary_2_t1484 * __this, KeyValuePair_2_t1486  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m8635(__this, ___pair, method) (( bool (*) (Dictionary_2_t1484 *, KeyValuePair_2_t1486 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m8635_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t1492  Dictionary_2_GetEnumerator_m8637_gshared (Dictionary_2_t1484 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m8637(__this, method) (( Enumerator_t1492  (*) (Dictionary_2_t1484 *, const MethodInfo*))Dictionary_2_GetEnumerator_m8637_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t564  Dictionary_2_U3CCopyToU3Em__0_m8639_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m8639(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t564  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m8639_gshared)(__this /* static, unused */, ___key, ___value, method)
