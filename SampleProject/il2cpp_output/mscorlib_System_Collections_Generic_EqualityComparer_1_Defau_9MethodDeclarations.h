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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>
struct DefaultComparer_t1813;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::.ctor()
extern "C" void DefaultComparer__ctor_m12099_gshared (DefaultComparer_t1813 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m12099(__this, method) (( void (*) (DefaultComparer_t1813 *, const MethodInfo*))DefaultComparer__ctor_m12099_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m12100_gshared (DefaultComparer_t1813 * __this, DateTime_t52  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m12100(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1813 *, DateTime_t52 , const MethodInfo*))DefaultComparer_GetHashCode_m12100_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m12101_gshared (DefaultComparer_t1813 * __this, DateTime_t52  ___x, DateTime_t52  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m12101(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1813 *, DateTime_t52 , DateTime_t52 , const MethodInfo*))DefaultComparer_Equals_m12101_gshared)(__this, ___x, ___y, method)
