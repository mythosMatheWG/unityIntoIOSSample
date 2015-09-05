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
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1513;
// System.Collections.Generic.IDictionary`2<System.Object,System.Boolean>
struct IDictionary_2_t1901;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t312;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t300;
// System.Collections.Generic.ICollection`1<System.Boolean>
struct ICollection_1_t1902;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t1900;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t281;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct IEnumerator_1_t1903;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t563;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>
struct KeyCollection_t1716;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>
struct ValueCollection_t1720;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_20.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__16.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor()
extern "C" void Dictionary_2__ctor_m11332_gshared (Dictionary_2_t1711 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m11332(__this, method) (( void (*) (Dictionary_2_t1711 *, const MethodInfo*))Dictionary_2__ctor_m11332_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m11333_gshared (Dictionary_2_t1711 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m11333(__this, ___comparer, method) (( void (*) (Dictionary_2_t1711 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11333_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m11335_gshared (Dictionary_2_t1711 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m11335(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1711 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11335_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m11337_gshared (Dictionary_2_t1711 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m11337(__this, ___capacity, method) (( void (*) (Dictionary_2_t1711 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m11337_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m11339_gshared (Dictionary_2_t1711 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m11339(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1711 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11339_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m11341_gshared (Dictionary_2_t1711 * __this, SerializationInfo_t312 * ___info, StreamingContext_t313  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m11341(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1711 *, SerializationInfo_t312 *, StreamingContext_t313 , const MethodInfo*))Dictionary_2__ctor_m11341_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m11343_gshared (Dictionary_2_t1711 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m11343(__this, method) (( Object_t* (*) (Dictionary_2_t1711 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m11343_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m11345_gshared (Dictionary_2_t1711 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m11345(__this, method) (( Object_t* (*) (Dictionary_2_t1711 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m11345_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m11347_gshared (Dictionary_2_t1711 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m11347(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1711 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m11347_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m11349_gshared (Dictionary_2_t1711 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m11349(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1711 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m11349_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m11351_gshared (Dictionary_2_t1711 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m11351(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1711 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m11351_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m11353_gshared (Dictionary_2_t1711 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m11353(__this, ___key, method) (( bool (*) (Dictionary_2_t1711 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m11353_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m11355_gshared (Dictionary_2_t1711 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m11355(__this, ___key, method) (( void (*) (Dictionary_2_t1711 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m11355_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11357_gshared (Dictionary_2_t1711 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11357(__this, method) (( Object_t * (*) (Dictionary_2_t1711 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11357_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11359_gshared (Dictionary_2_t1711 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11359(__this, method) (( bool (*) (Dictionary_2_t1711 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11359_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11361_gshared (Dictionary_2_t1711 * __this, KeyValuePair_2_t1713  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11361(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1711 *, KeyValuePair_2_t1713 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11361_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11363_gshared (Dictionary_2_t1711 * __this, KeyValuePair_2_t1713  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11363(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1711 *, KeyValuePair_2_t1713 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11363_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11365_gshared (Dictionary_2_t1711 * __this, KeyValuePair_2U5BU5D_t1900* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11365(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1711 *, KeyValuePair_2U5BU5D_t1900*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11365_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11367_gshared (Dictionary_2_t1711 * __this, KeyValuePair_2_t1713  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11367(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1711 *, KeyValuePair_2_t1713 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11367_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m11369_gshared (Dictionary_2_t1711 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m11369(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1711 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m11369_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11371_gshared (Dictionary_2_t1711 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11371(__this, method) (( Object_t * (*) (Dictionary_2_t1711 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11371_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11373_gshared (Dictionary_2_t1711 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11373(__this, method) (( Object_t* (*) (Dictionary_2_t1711 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11373_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11375_gshared (Dictionary_2_t1711 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11375(__this, method) (( Object_t * (*) (Dictionary_2_t1711 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11375_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m11377_gshared (Dictionary_2_t1711 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m11377(__this, method) (( int32_t (*) (Dictionary_2_t1711 *, const MethodInfo*))Dictionary_2_get_Count_m11377_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Item(TKey)
extern "C" bool Dictionary_2_get_Item_m11379_gshared (Dictionary_2_t1711 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m11379(__this, ___key, method) (( bool (*) (Dictionary_2_t1711 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m11379_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m11381_gshared (Dictionary_2_t1711 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m11381(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1711 *, Object_t *, bool, const MethodInfo*))Dictionary_2_set_Item_m11381_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m11383_gshared (Dictionary_2_t1711 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m11383(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1711 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m11383_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m11385_gshared (Dictionary_2_t1711 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m11385(__this, ___size, method) (( void (*) (Dictionary_2_t1711 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m11385_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m11387_gshared (Dictionary_2_t1711 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m11387(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1711 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m11387_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1713  Dictionary_2_make_pair_m11389_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m11389(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1713  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_make_pair_m11389_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m11391_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m11391(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_pick_key_m11391_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_value(TKey,TValue)
extern "C" bool Dictionary_2_pick_value_m11393_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m11393(__this /* static, unused */, ___key, ___value, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_pick_value_m11393_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m11395_gshared (Dictionary_2_t1711 * __this, KeyValuePair_2U5BU5D_t1900* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m11395(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1711 *, KeyValuePair_2U5BU5D_t1900*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m11395_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Resize()
extern "C" void Dictionary_2_Resize_m11397_gshared (Dictionary_2_t1711 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m11397(__this, method) (( void (*) (Dictionary_2_t1711 *, const MethodInfo*))Dictionary_2_Resize_m11397_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m11399_gshared (Dictionary_2_t1711 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_Add_m11399(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1711 *, Object_t *, bool, const MethodInfo*))Dictionary_2_Add_m11399_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Clear()
extern "C" void Dictionary_2_Clear_m11401_gshared (Dictionary_2_t1711 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m11401(__this, method) (( void (*) (Dictionary_2_t1711 *, const MethodInfo*))Dictionary_2_Clear_m11401_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m11403_gshared (Dictionary_2_t1711 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m11403(__this, ___key, method) (( bool (*) (Dictionary_2_t1711 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m11403_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m11405_gshared (Dictionary_2_t1711 * __this, bool ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m11405(__this, ___value, method) (( bool (*) (Dictionary_2_t1711 *, bool, const MethodInfo*))Dictionary_2_ContainsValue_m11405_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m11407_gshared (Dictionary_2_t1711 * __this, SerializationInfo_t312 * ___info, StreamingContext_t313  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m11407(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1711 *, SerializationInfo_t312 *, StreamingContext_t313 , const MethodInfo*))Dictionary_2_GetObjectData_m11407_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m11409_gshared (Dictionary_2_t1711 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m11409(__this, ___sender, method) (( void (*) (Dictionary_2_t1711 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m11409_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m11411_gshared (Dictionary_2_t1711 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m11411(__this, ___key, method) (( bool (*) (Dictionary_2_t1711 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m11411_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m11413_gshared (Dictionary_2_t1711 * __this, Object_t * ___key, bool* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m11413(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1711 *, Object_t *, bool*, const MethodInfo*))Dictionary_2_TryGetValue_m11413_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Keys()
extern "C" KeyCollection_t1716 * Dictionary_2_get_Keys_m11415_gshared (Dictionary_2_t1711 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m11415(__this, method) (( KeyCollection_t1716 * (*) (Dictionary_2_t1711 *, const MethodInfo*))Dictionary_2_get_Keys_m11415_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Values()
extern "C" ValueCollection_t1720 * Dictionary_2_get_Values_m11417_gshared (Dictionary_2_t1711 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m11417(__this, method) (( ValueCollection_t1720 * (*) (Dictionary_2_t1711 *, const MethodInfo*))Dictionary_2_get_Values_m11417_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m11419_gshared (Dictionary_2_t1711 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m11419(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1711 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m11419_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTValue(System.Object)
extern "C" bool Dictionary_2_ToTValue_m11421_gshared (Dictionary_2_t1711 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m11421(__this, ___value, method) (( bool (*) (Dictionary_2_t1711 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m11421_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m11423_gshared (Dictionary_2_t1711 * __this, KeyValuePair_2_t1713  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m11423(__this, ___pair, method) (( bool (*) (Dictionary_2_t1711 *, KeyValuePair_2_t1713 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m11423_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetEnumerator()
extern "C" Enumerator_t1718  Dictionary_2_GetEnumerator_m11425_gshared (Dictionary_2_t1711 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m11425(__this, method) (( Enumerator_t1718  (*) (Dictionary_2_t1711 *, const MethodInfo*))Dictionary_2_GetEnumerator_m11425_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t564  Dictionary_2_U3CCopyToU3Em__0_m11427_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m11427(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t564  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m11427_gshared)(__this /* static, unused */, ___key, ___value, method)
