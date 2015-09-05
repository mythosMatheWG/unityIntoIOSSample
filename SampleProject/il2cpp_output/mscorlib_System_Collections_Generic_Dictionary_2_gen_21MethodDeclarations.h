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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t496;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t1483;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Int32>
struct IDictionary_2_t1908;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t312;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t1830;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>[]
struct KeyValuePair_2U5BU5D_t1907;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t281;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>
struct IEnumerator_1_t1909;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t563;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>
struct KeyCollection_t1739;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>
struct ValueCollection_t1743;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_22.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__18.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m11593_gshared (Dictionary_2_t496 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m11593(__this, method) (( void (*) (Dictionary_2_t496 *, const MethodInfo*))Dictionary_2__ctor_m11593_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m11594_gshared (Dictionary_2_t496 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m11594(__this, ___comparer, method) (( void (*) (Dictionary_2_t496 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11594_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m11595_gshared (Dictionary_2_t496 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m11595(__this, ___dictionary, method) (( void (*) (Dictionary_2_t496 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11595_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m11596_gshared (Dictionary_2_t496 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m11596(__this, ___capacity, method) (( void (*) (Dictionary_2_t496 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m11596_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m11597_gshared (Dictionary_2_t496 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m11597(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t496 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11597_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m11598_gshared (Dictionary_2_t496 * __this, SerializationInfo_t312 * ___info, StreamingContext_t313  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m11598(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t496 *, SerializationInfo_t312 *, StreamingContext_t313 , const MethodInfo*))Dictionary_2__ctor_m11598_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m11599_gshared (Dictionary_2_t496 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m11599(__this, method) (( Object_t* (*) (Dictionary_2_t496 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m11599_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m11600_gshared (Dictionary_2_t496 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m11600(__this, method) (( Object_t* (*) (Dictionary_2_t496 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m11600_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m11601_gshared (Dictionary_2_t496 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m11601(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t496 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m11601_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m11602_gshared (Dictionary_2_t496 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m11602(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t496 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m11602_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m11603_gshared (Dictionary_2_t496 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m11603(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t496 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m11603_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m11604_gshared (Dictionary_2_t496 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m11604(__this, ___key, method) (( bool (*) (Dictionary_2_t496 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m11604_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m11605_gshared (Dictionary_2_t496 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m11605(__this, ___key, method) (( void (*) (Dictionary_2_t496 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m11605_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11606_gshared (Dictionary_2_t496 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11606(__this, method) (( Object_t * (*) (Dictionary_2_t496 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11606_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11607_gshared (Dictionary_2_t496 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11607(__this, method) (( bool (*) (Dictionary_2_t496 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11607_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11608_gshared (Dictionary_2_t496 * __this, KeyValuePair_2_t1737  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11608(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t496 *, KeyValuePair_2_t1737 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11608_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11609_gshared (Dictionary_2_t496 * __this, KeyValuePair_2_t1737  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11609(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t496 *, KeyValuePair_2_t1737 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11609_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11610_gshared (Dictionary_2_t496 * __this, KeyValuePair_2U5BU5D_t1907* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11610(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t496 *, KeyValuePair_2U5BU5D_t1907*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11610_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11611_gshared (Dictionary_2_t496 * __this, KeyValuePair_2_t1737  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11611(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t496 *, KeyValuePair_2_t1737 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11611_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m11612_gshared (Dictionary_2_t496 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m11612(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t496 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m11612_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11613_gshared (Dictionary_2_t496 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11613(__this, method) (( Object_t * (*) (Dictionary_2_t496 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11613_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11614_gshared (Dictionary_2_t496 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11614(__this, method) (( Object_t* (*) (Dictionary_2_t496 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11614_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11615_gshared (Dictionary_2_t496 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11615(__this, method) (( Object_t * (*) (Dictionary_2_t496 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11615_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m11616_gshared (Dictionary_2_t496 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m11616(__this, method) (( int32_t (*) (Dictionary_2_t496 *, const MethodInfo*))Dictionary_2_get_Count_m11616_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m11617_gshared (Dictionary_2_t496 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m11617(__this, ___key, method) (( int32_t (*) (Dictionary_2_t496 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m11617_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m11618_gshared (Dictionary_2_t496 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m11618(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t496 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_set_Item_m11618_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m11619_gshared (Dictionary_2_t496 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m11619(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t496 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m11619_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m11620_gshared (Dictionary_2_t496 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m11620(__this, ___size, method) (( void (*) (Dictionary_2_t496 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m11620_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m11621_gshared (Dictionary_2_t496 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m11621(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t496 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m11621_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1737  Dictionary_2_make_pair_m11622_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m11622(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1737  (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_make_pair_m11622_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m11623_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m11623(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_pick_key_m11623_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m11624_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m11624(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_pick_value_m11624_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m11625_gshared (Dictionary_2_t496 * __this, KeyValuePair_2U5BU5D_t1907* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m11625(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t496 *, KeyValuePair_2U5BU5D_t1907*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m11625_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m11626_gshared (Dictionary_2_t496 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m11626(__this, method) (( void (*) (Dictionary_2_t496 *, const MethodInfo*))Dictionary_2_Resize_m11626_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m11627_gshared (Dictionary_2_t496 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m11627(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t496 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_Add_m11627_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m11628_gshared (Dictionary_2_t496 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m11628(__this, method) (( void (*) (Dictionary_2_t496 *, const MethodInfo*))Dictionary_2_Clear_m11628_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m11629_gshared (Dictionary_2_t496 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m11629(__this, ___key, method) (( bool (*) (Dictionary_2_t496 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m11629_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m11630_gshared (Dictionary_2_t496 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m11630(__this, ___value, method) (( bool (*) (Dictionary_2_t496 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m11630_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m11631_gshared (Dictionary_2_t496 * __this, SerializationInfo_t312 * ___info, StreamingContext_t313  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m11631(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t496 *, SerializationInfo_t312 *, StreamingContext_t313 , const MethodInfo*))Dictionary_2_GetObjectData_m11631_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m11632_gshared (Dictionary_2_t496 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m11632(__this, ___sender, method) (( void (*) (Dictionary_2_t496 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m11632_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m11633_gshared (Dictionary_2_t496 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m11633(__this, ___key, method) (( bool (*) (Dictionary_2_t496 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m11633_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m11634_gshared (Dictionary_2_t496 * __this, int32_t ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m11634(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t496 *, int32_t, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m11634_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Keys()
extern "C" KeyCollection_t1739 * Dictionary_2_get_Keys_m11635_gshared (Dictionary_2_t496 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m11635(__this, method) (( KeyCollection_t1739 * (*) (Dictionary_2_t496 *, const MethodInfo*))Dictionary_2_get_Keys_m11635_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Values()
extern "C" ValueCollection_t1743 * Dictionary_2_get_Values_m11636_gshared (Dictionary_2_t496 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m11636(__this, method) (( ValueCollection_t1743 * (*) (Dictionary_2_t496 *, const MethodInfo*))Dictionary_2_get_Values_m11636_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m11637_gshared (Dictionary_2_t496 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m11637(__this, ___key, method) (( int32_t (*) (Dictionary_2_t496 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m11637_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m11638_gshared (Dictionary_2_t496 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m11638(__this, ___value, method) (( int32_t (*) (Dictionary_2_t496 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m11638_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m11639_gshared (Dictionary_2_t496 * __this, KeyValuePair_2_t1737  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m11639(__this, ___pair, method) (( bool (*) (Dictionary_2_t496 *, KeyValuePair_2_t1737 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m11639_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetEnumerator()
extern "C" Enumerator_t1741  Dictionary_2_GetEnumerator_m11640_gshared (Dictionary_2_t496 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m11640(__this, method) (( Enumerator_t1741  (*) (Dictionary_2_t496 *, const MethodInfo*))Dictionary_2_GetEnumerator_m11640_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t564  Dictionary_2_U3CCopyToU3Em__0_m11641_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m11641(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t564  (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m11641_gshared)(__this /* static, unused */, ___key, ___value, method)
