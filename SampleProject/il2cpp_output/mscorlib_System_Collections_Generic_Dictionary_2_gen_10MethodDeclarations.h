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

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1511;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1513;
// System.Collections.Generic.IDictionary`2<System.Object,System.Object>
struct IDictionary_2_t1836;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t312;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t300;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t1647;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t281;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t1837;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t563;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t1516;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t1520;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__3.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m8836_gshared (Dictionary_2_t1511 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m8836(__this, method) (( void (*) (Dictionary_2_t1511 *, const MethodInfo*))Dictionary_2__ctor_m8836_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m8837_gshared (Dictionary_2_t1511 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m8837(__this, ___comparer, method) (( void (*) (Dictionary_2_t1511 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m8837_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m8839_gshared (Dictionary_2_t1511 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m8839(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1511 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m8839_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m8841_gshared (Dictionary_2_t1511 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m8841(__this, ___capacity, method) (( void (*) (Dictionary_2_t1511 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m8841_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m8843_gshared (Dictionary_2_t1511 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m8843(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1511 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m8843_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m8845_gshared (Dictionary_2_t1511 * __this, SerializationInfo_t312 * ___info, StreamingContext_t313  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m8845(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1511 *, SerializationInfo_t312 *, StreamingContext_t313 , const MethodInfo*))Dictionary_2__ctor_m8845_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m8847_gshared (Dictionary_2_t1511 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m8847(__this, method) (( Object_t* (*) (Dictionary_2_t1511 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m8847_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m8849_gshared (Dictionary_2_t1511 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m8849(__this, method) (( Object_t* (*) (Dictionary_2_t1511 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m8849_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m8851_gshared (Dictionary_2_t1511 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m8851(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1511 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m8851_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m8853_gshared (Dictionary_2_t1511 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m8853(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1511 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m8853_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m8855_gshared (Dictionary_2_t1511 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m8855(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1511 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m8855_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m8857_gshared (Dictionary_2_t1511 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m8857(__this, ___key, method) (( bool (*) (Dictionary_2_t1511 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m8857_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m8859_gshared (Dictionary_2_t1511 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m8859(__this, ___key, method) (( void (*) (Dictionary_2_t1511 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m8859_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m8861_gshared (Dictionary_2_t1511 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m8861(__this, method) (( Object_t * (*) (Dictionary_2_t1511 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m8861_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m8863_gshared (Dictionary_2_t1511 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m8863(__this, method) (( bool (*) (Dictionary_2_t1511 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m8863_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m8865_gshared (Dictionary_2_t1511 * __this, KeyValuePair_2_t1514  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m8865(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1511 *, KeyValuePair_2_t1514 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m8865_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m8867_gshared (Dictionary_2_t1511 * __this, KeyValuePair_2_t1514  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m8867(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1511 *, KeyValuePair_2_t1514 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m8867_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m8869_gshared (Dictionary_2_t1511 * __this, KeyValuePair_2U5BU5D_t1647* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m8869(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1511 *, KeyValuePair_2U5BU5D_t1647*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m8869_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m8871_gshared (Dictionary_2_t1511 * __this, KeyValuePair_2_t1514  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m8871(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1511 *, KeyValuePair_2_t1514 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m8871_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m8873_gshared (Dictionary_2_t1511 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m8873(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1511 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m8873_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m8875_gshared (Dictionary_2_t1511 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m8875(__this, method) (( Object_t * (*) (Dictionary_2_t1511 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m8875_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m8877_gshared (Dictionary_2_t1511 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m8877(__this, method) (( Object_t* (*) (Dictionary_2_t1511 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m8877_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m8879_gshared (Dictionary_2_t1511 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m8879(__this, method) (( Object_t * (*) (Dictionary_2_t1511 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m8879_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m8881_gshared (Dictionary_2_t1511 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m8881(__this, method) (( int32_t (*) (Dictionary_2_t1511 *, const MethodInfo*))Dictionary_2_get_Count_m8881_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m8883_gshared (Dictionary_2_t1511 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m8883(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1511 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m8883_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m8885_gshared (Dictionary_2_t1511 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m8885(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1511 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m8885_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m8887_gshared (Dictionary_2_t1511 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m8887(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1511 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m8887_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m8889_gshared (Dictionary_2_t1511 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m8889(__this, ___size, method) (( void (*) (Dictionary_2_t1511 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m8889_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m8891_gshared (Dictionary_2_t1511 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m8891(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1511 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m8891_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1514  Dictionary_2_make_pair_m8893_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m8893(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1514  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m8893_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m8895_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m8895(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m8895_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m8897_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m8897(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m8897_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m8899_gshared (Dictionary_2_t1511 * __this, KeyValuePair_2U5BU5D_t1647* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m8899(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1511 *, KeyValuePair_2U5BU5D_t1647*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m8899_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m8901_gshared (Dictionary_2_t1511 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m8901(__this, method) (( void (*) (Dictionary_2_t1511 *, const MethodInfo*))Dictionary_2_Resize_m8901_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m8903_gshared (Dictionary_2_t1511 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m8903(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1511 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_Add_m8903_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m8905_gshared (Dictionary_2_t1511 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m8905(__this, method) (( void (*) (Dictionary_2_t1511 *, const MethodInfo*))Dictionary_2_Clear_m8905_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m8907_gshared (Dictionary_2_t1511 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m8907(__this, ___key, method) (( bool (*) (Dictionary_2_t1511 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m8907_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m8909_gshared (Dictionary_2_t1511 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m8909(__this, ___value, method) (( bool (*) (Dictionary_2_t1511 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m8909_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m8911_gshared (Dictionary_2_t1511 * __this, SerializationInfo_t312 * ___info, StreamingContext_t313  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m8911(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1511 *, SerializationInfo_t312 *, StreamingContext_t313 , const MethodInfo*))Dictionary_2_GetObjectData_m8911_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m8913_gshared (Dictionary_2_t1511 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m8913(__this, ___sender, method) (( void (*) (Dictionary_2_t1511 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m8913_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m8915_gshared (Dictionary_2_t1511 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m8915(__this, ___key, method) (( bool (*) (Dictionary_2_t1511 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m8915_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m8917_gshared (Dictionary_2_t1511 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m8917(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1511 *, Object_t *, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m8917_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
extern "C" KeyCollection_t1516 * Dictionary_2_get_Keys_m8919_gshared (Dictionary_2_t1511 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m8919(__this, method) (( KeyCollection_t1516 * (*) (Dictionary_2_t1511 *, const MethodInfo*))Dictionary_2_get_Keys_m8919_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C" ValueCollection_t1520 * Dictionary_2_get_Values_m8920_gshared (Dictionary_2_t1511 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m8920(__this, method) (( ValueCollection_t1520 * (*) (Dictionary_2_t1511 *, const MethodInfo*))Dictionary_2_get_Values_m8920_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m8922_gshared (Dictionary_2_t1511 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m8922(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1511 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m8922_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m8924_gshared (Dictionary_2_t1511 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m8924(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1511 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m8924_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m8926_gshared (Dictionary_2_t1511 * __this, KeyValuePair_2_t1514  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m8926(__this, ___pair, method) (( bool (*) (Dictionary_2_t1511 *, KeyValuePair_2_t1514 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m8926_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t1518  Dictionary_2_GetEnumerator_m8928_gshared (Dictionary_2_t1511 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m8928(__this, method) (( Enumerator_t1518  (*) (Dictionary_2_t1511 *, const MethodInfo*))Dictionary_2_GetEnumerator_m8928_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t564  Dictionary_2_U3CCopyToU3Em__0_m8930_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m8930(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t564  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m8930_gshared)(__this /* static, unused */, ___key, ___value, method)
