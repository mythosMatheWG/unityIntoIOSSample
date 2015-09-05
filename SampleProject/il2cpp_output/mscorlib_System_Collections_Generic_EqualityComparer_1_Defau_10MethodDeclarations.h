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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>
struct DefaultComparer_t1817;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
extern "C" void DefaultComparer__ctor_m12116_gshared (DefaultComparer_t1817 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m12116(__this, method) (( void (*) (DefaultComparer_t1817 *, const MethodInfo*))DefaultComparer__ctor_m12116_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m12117_gshared (DefaultComparer_t1817 * __this, DateTimeOffset_t366  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m12117(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1817 *, DateTimeOffset_t366 , const MethodInfo*))DefaultComparer_GetHashCode_m12117_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m12118_gshared (DefaultComparer_t1817 * __this, DateTimeOffset_t366  ___x, DateTimeOffset_t366  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m12118(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1817 *, DateTimeOffset_t366 , DateTimeOffset_t366 , const MethodInfo*))DefaultComparer_Equals_m12118_gshared)(__this, ___x, ___y, method)
