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

// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t154;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UIVertex>
struct IEnumerator_1_t1848;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t281;
// System.Object
struct Object_t;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t286;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_UIVertex.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_4.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor()
extern "C" void List_1__ctor_m9495_gshared (List_1_t154 * __this, const MethodInfo* method);
#define List_1__ctor_m9495(__this, method) (( void (*) (List_1_t154 *, const MethodInfo*))List_1__ctor_m9495_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Int32)
extern "C" void List_1__ctor_m1240_gshared (List_1_t154 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m1240(__this, ___capacity, method) (( void (*) (List_1_t154 *, int32_t, const MethodInfo*))List_1__ctor_m1240_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.cctor()
extern "C" void List_1__cctor_m9496_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m9496(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m9496_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m9497_gshared (List_1_t154 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m9497(__this, method) (( Object_t* (*) (List_1_t154 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m9497_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m9498_gshared (List_1_t154 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m9498(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t154 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m9498_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m9499_gshared (List_1_t154 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m9499(__this, method) (( Object_t * (*) (List_1_t154 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m9499_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m9500_gshared (List_1_t154 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m9500(__this, ___item, method) (( int32_t (*) (List_1_t154 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m9500_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m9501_gshared (List_1_t154 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m9501(__this, ___item, method) (( bool (*) (List_1_t154 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m9501_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m9502_gshared (List_1_t154 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m9502(__this, ___item, method) (( int32_t (*) (List_1_t154 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m9502_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m9503_gshared (List_1_t154 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m9503(__this, ___index, ___item, method) (( void (*) (List_1_t154 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m9503_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m9504_gshared (List_1_t154 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m9504(__this, ___item, method) (( void (*) (List_1_t154 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m9504_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m9505_gshared (List_1_t154 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m9505(__this, method) (( bool (*) (List_1_t154 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m9505_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m9506_gshared (List_1_t154 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m9506(__this, method) (( Object_t * (*) (List_1_t154 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m9506_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m9507_gshared (List_1_t154 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m9507(__this, ___index, method) (( Object_t * (*) (List_1_t154 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m9507_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m9508_gshared (List_1_t154 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m9508(__this, ___index, ___value, method) (( void (*) (List_1_t154 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m9508_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Add(T)
extern "C" void List_1_Add_m9509_gshared (List_1_t154 * __this, UIVertex_t159  ___item, const MethodInfo* method);
#define List_1_Add_m9509(__this, ___item, method) (( void (*) (List_1_t154 *, UIVertex_t159 , const MethodInfo*))List_1_Add_m9509_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m9510_gshared (List_1_t154 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m9510(__this, ___newCount, method) (( void (*) (List_1_t154 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m9510_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Clear()
extern "C" void List_1_Clear_m9511_gshared (List_1_t154 * __this, const MethodInfo* method);
#define List_1_Clear_m9511(__this, method) (( void (*) (List_1_t154 *, const MethodInfo*))List_1_Clear_m9511_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Contains(T)
extern "C" bool List_1_Contains_m9512_gshared (List_1_t154 * __this, UIVertex_t159  ___item, const MethodInfo* method);
#define List_1_Contains_m9512(__this, ___item, method) (( bool (*) (List_1_t154 *, UIVertex_t159 , const MethodInfo*))List_1_Contains_m9512_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m9513_gshared (List_1_t154 * __this, UIVertexU5BU5D_t286* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m9513(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t154 *, UIVertexU5BU5D_t286*, int32_t, const MethodInfo*))List_1_CopyTo_m9513_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetEnumerator()
extern "C" Enumerator_t1559  List_1_GetEnumerator_m9514_gshared (List_1_t154 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m9514(__this, method) (( Enumerator_t1559  (*) (List_1_t154 *, const MethodInfo*))List_1_GetEnumerator_m9514_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m9515_gshared (List_1_t154 * __this, UIVertex_t159  ___item, const MethodInfo* method);
#define List_1_IndexOf_m9515(__this, ___item, method) (( int32_t (*) (List_1_t154 *, UIVertex_t159 , const MethodInfo*))List_1_IndexOf_m9515_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m9516_gshared (List_1_t154 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m9516(__this, ___start, ___delta, method) (( void (*) (List_1_t154 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m9516_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m9517_gshared (List_1_t154 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m9517(__this, ___index, method) (( void (*) (List_1_t154 *, int32_t, const MethodInfo*))List_1_CheckIndex_m9517_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m9518_gshared (List_1_t154 * __this, int32_t ___index, UIVertex_t159  ___item, const MethodInfo* method);
#define List_1_Insert_m9518(__this, ___index, ___item, method) (( void (*) (List_1_t154 *, int32_t, UIVertex_t159 , const MethodInfo*))List_1_Insert_m9518_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Remove(T)
extern "C" bool List_1_Remove_m9519_gshared (List_1_t154 * __this, UIVertex_t159  ___item, const MethodInfo* method);
#define List_1_Remove_m9519(__this, ___item, method) (( bool (*) (List_1_t154 *, UIVertex_t159 , const MethodInfo*))List_1_Remove_m9519_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m9520_gshared (List_1_t154 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m9520(__this, ___index, method) (( void (*) (List_1_t154 *, int32_t, const MethodInfo*))List_1_RemoveAt_m9520_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UIVertex>::ToArray()
extern "C" UIVertexU5BU5D_t286* List_1_ToArray_m9521_gshared (List_1_t154 * __this, const MethodInfo* method);
#define List_1_ToArray_m9521(__this, method) (( UIVertexU5BU5D_t286* (*) (List_1_t154 *, const MethodInfo*))List_1_ToArray_m9521_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m9522_gshared (List_1_t154 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m9522(__this, method) (( int32_t (*) (List_1_t154 *, const MethodInfo*))List_1_get_Capacity_m9522_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m9523_gshared (List_1_t154 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m9523(__this, ___value, method) (( void (*) (List_1_t154 *, int32_t, const MethodInfo*))List_1_set_Capacity_m9523_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Count()
extern "C" int32_t List_1_get_Count_m9524_gshared (List_1_t154 * __this, const MethodInfo* method);
#define List_1_get_Count_m9524(__this, method) (( int32_t (*) (List_1_t154 *, const MethodInfo*))List_1_get_Count_m9524_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Item(System.Int32)
extern "C" UIVertex_t159  List_1_get_Item_m9525_gshared (List_1_t154 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m9525(__this, ___index, method) (( UIVertex_t159  (*) (List_1_t154 *, int32_t, const MethodInfo*))List_1_get_Item_m9525_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m9526_gshared (List_1_t154 * __this, int32_t ___index, UIVertex_t159  ___value, const MethodInfo* method);
#define List_1_set_Item_m9526(__this, ___index, ___value, method) (( void (*) (List_1_t154 *, int32_t, UIVertex_t159 , const MethodInfo*))List_1_set_Item_m9526_gshared)(__this, ___index, ___value, method)
