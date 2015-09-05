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
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1513;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int32>
struct IDictionary_2_t1841;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t312;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t300;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t1830;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t1840;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t281;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t1842;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t563;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
struct KeyCollection_t1532;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t1536;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__5.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m9061_gshared (Dictionary_2_t1528 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m9061(__this, method) (( void (*) (Dictionary_2_t1528 *, const MethodInfo*))Dictionary_2__ctor_m9061_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m9063_gshared (Dictionary_2_t1528 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m9063(__this, ___comparer, method) (( void (*) (Dictionary_2_t1528 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9063_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m9065_gshared (Dictionary_2_t1528 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m9065(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1528 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9065_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m9066_gshared (Dictionary_2_t1528 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m9066(__this, ___capacity, method) (( void (*) (Dictionary_2_t1528 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m9066_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m9068_gshared (Dictionary_2_t1528 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m9068(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1528 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9068_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m9070_gshared (Dictionary_2_t1528 * __this, SerializationInfo_t312 * ___info, StreamingContext_t313  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m9070(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1528 *, SerializationInfo_t312 *, StreamingContext_t313 , const MethodInfo*))Dictionary_2__ctor_m9070_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9072_gshared (Dictionary_2_t1528 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9072(__this, method) (( Object_t* (*) (Dictionary_2_t1528 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9072_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9074_gshared (Dictionary_2_t1528 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9074(__this, method) (( Object_t* (*) (Dictionary_2_t1528 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9074_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m9076_gshared (Dictionary_2_t1528 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m9076(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1528 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m9076_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m9078_gshared (Dictionary_2_t1528 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m9078(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1528 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m9078_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m9080_gshared (Dictionary_2_t1528 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m9080(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1528 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m9080_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m9082_gshared (Dictionary_2_t1528 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m9082(__this, ___key, method) (( bool (*) (Dictionary_2_t1528 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m9082_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m9084_gshared (Dictionary_2_t1528 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m9084(__this, ___key, method) (( void (*) (Dictionary_2_t1528 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m9084_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9086_gshared (Dictionary_2_t1528 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9086(__this, method) (( Object_t * (*) (Dictionary_2_t1528 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9086_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9088_gshared (Dictionary_2_t1528 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9088(__this, method) (( bool (*) (Dictionary_2_t1528 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9088_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9090_gshared (Dictionary_2_t1528 * __this, KeyValuePair_2_t1530  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9090(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1528 *, KeyValuePair_2_t1530 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9090_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9092_gshared (Dictionary_2_t1528 * __this, KeyValuePair_2_t1530  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9092(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1528 *, KeyValuePair_2_t1530 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9092_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9094_gshared (Dictionary_2_t1528 * __this, KeyValuePair_2U5BU5D_t1840* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9094(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1528 *, KeyValuePair_2U5BU5D_t1840*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9094_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9096_gshared (Dictionary_2_t1528 * __this, KeyValuePair_2_t1530  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9096(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1528 *, KeyValuePair_2_t1530 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9096_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m9098_gshared (Dictionary_2_t1528 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m9098(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1528 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m9098_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9100_gshared (Dictionary_2_t1528 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9100(__this, method) (( Object_t * (*) (Dictionary_2_t1528 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9100_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9102_gshared (Dictionary_2_t1528 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9102(__this, method) (( Object_t* (*) (Dictionary_2_t1528 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9102_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9104_gshared (Dictionary_2_t1528 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9104(__this, method) (( Object_t * (*) (Dictionary_2_t1528 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9104_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m9106_gshared (Dictionary_2_t1528 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m9106(__this, method) (( int32_t (*) (Dictionary_2_t1528 *, const MethodInfo*))Dictionary_2_get_Count_m9106_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m9108_gshared (Dictionary_2_t1528 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m9108(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1528 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m9108_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m9110_gshared (Dictionary_2_t1528 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m9110(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1528 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m9110_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m9112_gshared (Dictionary_2_t1528 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m9112(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1528 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m9112_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m9114_gshared (Dictionary_2_t1528 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m9114(__this, ___size, method) (( void (*) (Dictionary_2_t1528 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m9114_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m9116_gshared (Dictionary_2_t1528 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m9116(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1528 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m9116_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1530  Dictionary_2_make_pair_m9118_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m9118(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1530  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m9118_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m9120_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m9120(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_key_m9120_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m9122_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m9122(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m9122_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m9124_gshared (Dictionary_2_t1528 * __this, KeyValuePair_2U5BU5D_t1840* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m9124(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1528 *, KeyValuePair_2U5BU5D_t1840*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m9124_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m9126_gshared (Dictionary_2_t1528 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m9126(__this, method) (( void (*) (Dictionary_2_t1528 *, const MethodInfo*))Dictionary_2_Resize_m9126_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m9128_gshared (Dictionary_2_t1528 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m9128(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1528 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m9128_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m9130_gshared (Dictionary_2_t1528 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m9130(__this, method) (( void (*) (Dictionary_2_t1528 *, const MethodInfo*))Dictionary_2_Clear_m9130_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m9132_gshared (Dictionary_2_t1528 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m9132(__this, ___key, method) (( bool (*) (Dictionary_2_t1528 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m9132_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m9134_gshared (Dictionary_2_t1528 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m9134(__this, ___value, method) (( bool (*) (Dictionary_2_t1528 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m9134_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m9136_gshared (Dictionary_2_t1528 * __this, SerializationInfo_t312 * ___info, StreamingContext_t313  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m9136(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1528 *, SerializationInfo_t312 *, StreamingContext_t313 , const MethodInfo*))Dictionary_2_GetObjectData_m9136_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m9138_gshared (Dictionary_2_t1528 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m9138(__this, ___sender, method) (( void (*) (Dictionary_2_t1528 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m9138_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m9140_gshared (Dictionary_2_t1528 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m9140(__this, ___key, method) (( bool (*) (Dictionary_2_t1528 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m9140_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m9142_gshared (Dictionary_2_t1528 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m9142(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1528 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m9142_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Keys()
extern "C" KeyCollection_t1532 * Dictionary_2_get_Keys_m9144_gshared (Dictionary_2_t1528 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m9144(__this, method) (( KeyCollection_t1532 * (*) (Dictionary_2_t1528 *, const MethodInfo*))Dictionary_2_get_Keys_m9144_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t1536 * Dictionary_2_get_Values_m9146_gshared (Dictionary_2_t1528 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m9146(__this, method) (( ValueCollection_t1536 * (*) (Dictionary_2_t1528 *, const MethodInfo*))Dictionary_2_get_Values_m9146_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m9148_gshared (Dictionary_2_t1528 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m9148(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1528 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m9148_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m9150_gshared (Dictionary_2_t1528 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m9150(__this, ___value, method) (( int32_t (*) (Dictionary_2_t1528 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m9150_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m9152_gshared (Dictionary_2_t1528 * __this, KeyValuePair_2_t1530  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m9152(__this, ___pair, method) (( bool (*) (Dictionary_2_t1528 *, KeyValuePair_2_t1530 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m9152_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t1534  Dictionary_2_GetEnumerator_m9154_gshared (Dictionary_2_t1528 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m9154(__this, method) (( Enumerator_t1534  (*) (Dictionary_2_t1528 *, const MethodInfo*))Dictionary_2_GetEnumerator_m9154_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t564  Dictionary_2_U3CCopyToU3Em__0_m9156_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m9156(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t564  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m9156_gshared)(__this /* static, unused */, ___key, ___value, method)
