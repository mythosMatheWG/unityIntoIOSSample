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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int64>
struct DefaultComparer_t1587;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int64>::.ctor()
extern "C" void DefaultComparer__ctor_m9835_gshared (DefaultComparer_t1587 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m9835(__this, method) (( void (*) (DefaultComparer_t1587 *, const MethodInfo*))DefaultComparer__ctor_m9835_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int64>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m9836_gshared (DefaultComparer_t1587 * __this, int64_t ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m9836(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1587 *, int64_t, const MethodInfo*))DefaultComparer_GetHashCode_m9836_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int64>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m9837_gshared (DefaultComparer_t1587 * __this, int64_t ___x, int64_t ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m9837(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1587 *, int64_t, int64_t, const MethodInfo*))DefaultComparer_Equals_m9837_gshared)(__this, ___x, ___y, method)
