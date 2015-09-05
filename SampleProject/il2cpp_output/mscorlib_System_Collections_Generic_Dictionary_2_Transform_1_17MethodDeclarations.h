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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct Transform_1_t1583;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t47;
// System.AsyncCallback
struct AsyncCallback_t48;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m9817_gshared (Transform_1_t1583 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m9817(__this, ___object, ___method, method) (( void (*) (Transform_1_t1583 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m9817_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t1573  Transform_1_Invoke_m9818_gshared (Transform_1_t1583 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m9818(__this, ___key, ___value, method) (( KeyValuePair_2_t1573  (*) (Transform_1_t1583 *, Object_t *, int64_t, const MethodInfo*))Transform_1_Invoke_m9818_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m9819_gshared (Transform_1_t1583 * __this, Object_t * ___key, int64_t ___value, AsyncCallback_t48 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m9819(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t1583 *, Object_t *, int64_t, AsyncCallback_t48 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m9819_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int64,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t1573  Transform_1_EndInvoke_m9820_gshared (Transform_1_t1583 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m9820(__this, ___result, method) (( KeyValuePair_2_t1573  (*) (Transform_1_t1583 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m9820_gshared)(__this, ___result, method)
