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

// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>
struct Dictionary_2_t1681;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1513;
// System.Collections.Generic.IDictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>
struct IDictionary_2_t1893;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t312;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t300;
// System.Collections.Generic.ICollection`1<UnityEngine.TextEditor/TextEditOp>
struct ICollection_1_t1894;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>[]
struct KeyValuePair_2U5BU5D_t1892;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t281;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>
struct IEnumerator_1_t1895;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t563;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,UnityEngine.TextEditor/TextEditOp>
struct KeyCollection_t1686;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>
struct ValueCollection_t1690;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_18.h"
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__14.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor()
extern "C" void Dictionary_2__ctor_m11007_gshared (Dictionary_2_t1681 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m11007(__this, method) (( void (*) (Dictionary_2_t1681 *, const MethodInfo*))Dictionary_2__ctor_m11007_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m11009_gshared (Dictionary_2_t1681 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m11009(__this, ___comparer, method) (( void (*) (Dictionary_2_t1681 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11009_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m11011_gshared (Dictionary_2_t1681 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m11011(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1681 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11011_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m11013_gshared (Dictionary_2_t1681 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m11013(__this, ___capacity, method) (( void (*) (Dictionary_2_t1681 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m11013_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m11015_gshared (Dictionary_2_t1681 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m11015(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1681 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11015_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m11017_gshared (Dictionary_2_t1681 * __this, SerializationInfo_t312 * ___info, StreamingContext_t313  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m11017(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1681 *, SerializationInfo_t312 *, StreamingContext_t313 , const MethodInfo*))Dictionary_2__ctor_m11017_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m11019_gshared (Dictionary_2_t1681 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m11019(__this, method) (( Object_t* (*) (Dictionary_2_t1681 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m11019_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m11021_gshared (Dictionary_2_t1681 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m11021(__this, method) (( Object_t* (*) (Dictionary_2_t1681 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m11021_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m11023_gshared (Dictionary_2_t1681 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m11023(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1681 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m11023_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m11025_gshared (Dictionary_2_t1681 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m11025(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1681 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m11025_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m11027_gshared (Dictionary_2_t1681 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m11027(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1681 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m11027_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m11029_gshared (Dictionary_2_t1681 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m11029(__this, ___key, method) (( bool (*) (Dictionary_2_t1681 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m11029_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m11031_gshared (Dictionary_2_t1681 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m11031(__this, ___key, method) (( void (*) (Dictionary_2_t1681 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m11031_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11033_gshared (Dictionary_2_t1681 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11033(__this, method) (( Object_t * (*) (Dictionary_2_t1681 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11033_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11035_gshared (Dictionary_2_t1681 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11035(__this, method) (( bool (*) (Dictionary_2_t1681 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11035_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11037_gshared (Dictionary_2_t1681 * __this, KeyValuePair_2_t1683  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11037(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1681 *, KeyValuePair_2_t1683 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11037_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11039_gshared (Dictionary_2_t1681 * __this, KeyValuePair_2_t1683  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11039(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1681 *, KeyValuePair_2_t1683 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11039_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11041_gshared (Dictionary_2_t1681 * __this, KeyValuePair_2U5BU5D_t1892* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11041(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1681 *, KeyValuePair_2U5BU5D_t1892*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11041_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11043_gshared (Dictionary_2_t1681 * __this, KeyValuePair_2_t1683  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11043(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1681 *, KeyValuePair_2_t1683 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11043_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m11045_gshared (Dictionary_2_t1681 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m11045(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1681 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m11045_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11047_gshared (Dictionary_2_t1681 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11047(__this, method) (( Object_t * (*) (Dictionary_2_t1681 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11047_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11049_gshared (Dictionary_2_t1681 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11049(__this, method) (( Object_t* (*) (Dictionary_2_t1681 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11049_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11051_gshared (Dictionary_2_t1681 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11051(__this, method) (( Object_t * (*) (Dictionary_2_t1681 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11051_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m11053_gshared (Dictionary_2_t1681 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m11053(__this, method) (( int32_t (*) (Dictionary_2_t1681 *, const MethodInfo*))Dictionary_2_get_Count_m11053_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m11055_gshared (Dictionary_2_t1681 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m11055(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1681 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m11055_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m11057_gshared (Dictionary_2_t1681 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m11057(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1681 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m11057_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m11059_gshared (Dictionary_2_t1681 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m11059(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1681 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m11059_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m11061_gshared (Dictionary_2_t1681 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m11061(__this, ___size, method) (( void (*) (Dictionary_2_t1681 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m11061_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m11063_gshared (Dictionary_2_t1681 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m11063(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1681 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m11063_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1683  Dictionary_2_make_pair_m11065_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m11065(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1683  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m11065_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m11067_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m11067(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_key_m11067_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m11069_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m11069(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m11069_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m11071_gshared (Dictionary_2_t1681 * __this, KeyValuePair_2U5BU5D_t1892* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m11071(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1681 *, KeyValuePair_2U5BU5D_t1892*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m11071_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Resize()
extern "C" void Dictionary_2_Resize_m11073_gshared (Dictionary_2_t1681 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m11073(__this, method) (( void (*) (Dictionary_2_t1681 *, const MethodInfo*))Dictionary_2_Resize_m11073_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m11075_gshared (Dictionary_2_t1681 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m11075(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1681 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m11075_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Clear()
extern "C" void Dictionary_2_Clear_m11077_gshared (Dictionary_2_t1681 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m11077(__this, method) (( void (*) (Dictionary_2_t1681 *, const MethodInfo*))Dictionary_2_Clear_m11077_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m11079_gshared (Dictionary_2_t1681 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m11079(__this, ___key, method) (( bool (*) (Dictionary_2_t1681 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m11079_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m11081_gshared (Dictionary_2_t1681 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m11081(__this, ___value, method) (( bool (*) (Dictionary_2_t1681 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m11081_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m11083_gshared (Dictionary_2_t1681 * __this, SerializationInfo_t312 * ___info, StreamingContext_t313  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m11083(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1681 *, SerializationInfo_t312 *, StreamingContext_t313 , const MethodInfo*))Dictionary_2_GetObjectData_m11083_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m11085_gshared (Dictionary_2_t1681 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m11085(__this, ___sender, method) (( void (*) (Dictionary_2_t1681 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m11085_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m11087_gshared (Dictionary_2_t1681 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m11087(__this, ___key, method) (( bool (*) (Dictionary_2_t1681 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m11087_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m11089_gshared (Dictionary_2_t1681 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m11089(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1681 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m11089_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Keys()
extern "C" KeyCollection_t1686 * Dictionary_2_get_Keys_m11091_gshared (Dictionary_2_t1681 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m11091(__this, method) (( KeyCollection_t1686 * (*) (Dictionary_2_t1681 *, const MethodInfo*))Dictionary_2_get_Keys_m11091_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Values()
extern "C" ValueCollection_t1690 * Dictionary_2_get_Values_m11093_gshared (Dictionary_2_t1681 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m11093(__this, method) (( ValueCollection_t1690 * (*) (Dictionary_2_t1681 *, const MethodInfo*))Dictionary_2_get_Values_m11093_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m11095_gshared (Dictionary_2_t1681 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m11095(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1681 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m11095_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m11097_gshared (Dictionary_2_t1681 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m11097(__this, ___value, method) (( int32_t (*) (Dictionary_2_t1681 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m11097_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m11099_gshared (Dictionary_2_t1681 * __this, KeyValuePair_2_t1683  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m11099(__this, ___pair, method) (( bool (*) (Dictionary_2_t1681 *, KeyValuePair_2_t1683 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m11099_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::GetEnumerator()
extern "C" Enumerator_t1688  Dictionary_2_GetEnumerator_m11101_gshared (Dictionary_2_t1681 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m11101(__this, method) (( Enumerator_t1688  (*) (Dictionary_2_t1681 *, const MethodInfo*))Dictionary_2_GetEnumerator_m11101_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t564  Dictionary_2_U3CCopyToU3Em__0_m11103_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m11103(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t564  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m11103_gshared)(__this /* static, unused */, ___key, ___value, method)
