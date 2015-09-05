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

// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>
struct ThreadSafeDictionary_2_t1626;
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>
struct ThreadSafeDictionaryValueFactory_2_t1624;
// System.Collections.IEnumerator
struct IEnumerator_t281;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t300;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t1647;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t1837;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"

// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::.ctor(SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2__ctor_m10342_gshared (ThreadSafeDictionary_2_t1626 * __this, ThreadSafeDictionaryValueFactory_2_t1624 * ___valueFactory, const MethodInfo* method);
#define ThreadSafeDictionary_2__ctor_m10342(__this, ___valueFactory, method) (( void (*) (ThreadSafeDictionary_2_t1626 *, ThreadSafeDictionaryValueFactory_2_t1624 *, const MethodInfo*))ThreadSafeDictionary_2__ctor_m10342_gshared)(__this, ___valueFactory, method)
// System.Collections.IEnumerator SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m10344_gshared (ThreadSafeDictionary_2_t1626 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m10344(__this, method) (( Object_t * (*) (ThreadSafeDictionary_2_t1626 *, const MethodInfo*))ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m10344_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Get(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_Get_m10346_gshared (ThreadSafeDictionary_2_t1626 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_Get_m10346(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t1626 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Get_m10346_gshared)(__this, ___key, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::AddValue(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_AddValue_m10348_gshared (ThreadSafeDictionary_2_t1626 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_AddValue_m10348(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t1626 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_AddValue_m10348_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_Add_m10350_gshared (ThreadSafeDictionary_2_t1626 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m10350(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t1626 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Add_m10350_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TKey> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Keys()
extern "C" Object_t* ThreadSafeDictionary_2_get_Keys_m10352_gshared (ThreadSafeDictionary_2_t1626 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Keys_m10352(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t1626 *, const MethodInfo*))ThreadSafeDictionary_2_get_Keys_m10352_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool ThreadSafeDictionary_2_TryGetValue_m10354_gshared (ThreadSafeDictionary_2_t1626 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_TryGetValue_m10354(__this, ___key, ___value, method) (( bool (*) (ThreadSafeDictionary_2_t1626 *, Object_t *, Object_t **, const MethodInfo*))ThreadSafeDictionary_2_TryGetValue_m10354_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TValue> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Values()
extern "C" Object_t* ThreadSafeDictionary_2_get_Values_m10356_gshared (ThreadSafeDictionary_2_t1626 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Values_m10356(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t1626 *, const MethodInfo*))ThreadSafeDictionary_2_get_Values_m10356_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_get_Item_m10358_gshared (ThreadSafeDictionary_2_t1626 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Item_m10358(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t1626 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_get_Item_m10358_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_set_Item_m10360_gshared (ThreadSafeDictionary_2_t1626 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_set_Item_m10360(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t1626 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_set_Item_m10360_gshared)(__this, ___key, ___value, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2_Add_m10362_gshared (ThreadSafeDictionary_2_t1626 * __this, KeyValuePair_2_t1514  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m10362(__this, ___item, method) (( void (*) (ThreadSafeDictionary_2_t1626 *, KeyValuePair_2_t1514 , const MethodInfo*))ThreadSafeDictionary_2_Add_m10362_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Clear()
extern "C" void ThreadSafeDictionary_2_Clear_m10364_gshared (ThreadSafeDictionary_2_t1626 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_Clear_m10364(__this, method) (( void (*) (ThreadSafeDictionary_2_t1626 *, const MethodInfo*))ThreadSafeDictionary_2_Clear_m10364_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Contains_m10366_gshared (ThreadSafeDictionary_2_t1626 * __this, KeyValuePair_2_t1514  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Contains_m10366(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t1626 *, KeyValuePair_2_t1514 , const MethodInfo*))ThreadSafeDictionary_2_Contains_m10366_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void ThreadSafeDictionary_2_CopyTo_m10368_gshared (ThreadSafeDictionary_2_t1626 * __this, KeyValuePair_2U5BU5D_t1647* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define ThreadSafeDictionary_2_CopyTo_m10368(__this, ___array, ___arrayIndex, method) (( void (*) (ThreadSafeDictionary_2_t1626 *, KeyValuePair_2U5BU5D_t1647*, int32_t, const MethodInfo*))ThreadSafeDictionary_2_CopyTo_m10368_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t ThreadSafeDictionary_2_get_Count_m10370_gshared (ThreadSafeDictionary_2_t1626 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Count_m10370(__this, method) (( int32_t (*) (ThreadSafeDictionary_2_t1626 *, const MethodInfo*))ThreadSafeDictionary_2_get_Count_m10370_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_IsReadOnly()
extern "C" bool ThreadSafeDictionary_2_get_IsReadOnly_m10372_gshared (ThreadSafeDictionary_2_t1626 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_IsReadOnly_m10372(__this, method) (( bool (*) (ThreadSafeDictionary_2_t1626 *, const MethodInfo*))ThreadSafeDictionary_2_get_IsReadOnly_m10372_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Remove_m10374_gshared (ThreadSafeDictionary_2_t1626 * __this, KeyValuePair_2_t1514  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m10374(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t1626 *, KeyValuePair_2_t1514 , const MethodInfo*))ThreadSafeDictionary_2_Remove_m10374_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Object_t* ThreadSafeDictionary_2_GetEnumerator_m10376_gshared (ThreadSafeDictionary_2_t1626 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_GetEnumerator_m10376(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t1626 *, const MethodInfo*))ThreadSafeDictionary_2_GetEnumerator_m10376_gshared)(__this, method)
