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

// System.Collections.Hashtable/HashKeys
struct HashKeys_t882;
// System.Collections.Hashtable
struct Hashtable_t390;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t281;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.Hashtable/HashKeys::.ctor(System.Collections.Hashtable)
extern "C" void HashKeys__ctor_m4900 (HashKeys_t882 * __this, Hashtable_t390 * ___host, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Hashtable/HashKeys::get_Count()
extern "C" int32_t HashKeys_get_Count_m4901 (HashKeys_t882 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Hashtable/HashKeys::get_SyncRoot()
extern "C" Object_t * HashKeys_get_SyncRoot_m4902 (HashKeys_t882 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable/HashKeys::CopyTo(System.Array,System.Int32)
extern "C" void HashKeys_CopyTo_m4903 (HashKeys_t882 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Hashtable/HashKeys::GetEnumerator()
extern "C" Object_t * HashKeys_GetEnumerator_m4904 (HashKeys_t882 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
