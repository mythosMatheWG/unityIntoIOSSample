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

// System.Collections.Generic.GenericEqualityComparer`1<System.Guid>
struct GenericEqualityComparer_1_t1457;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::.ctor()
extern "C" void GenericEqualityComparer_1__ctor_m8365_gshared (GenericEqualityComparer_1_t1457 * __this, const MethodInfo* method);
#define GenericEqualityComparer_1__ctor_m8365(__this, method) (( void (*) (GenericEqualityComparer_1_t1457 *, const MethodInfo*))GenericEqualityComparer_1__ctor_m8365_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::GetHashCode(T)
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m12130_gshared (GenericEqualityComparer_1_t1457 * __this, Guid_t367  ___obj, const MethodInfo* method);
#define GenericEqualityComparer_1_GetHashCode_m12130(__this, ___obj, method) (( int32_t (*) (GenericEqualityComparer_1_t1457 *, Guid_t367 , const MethodInfo*))GenericEqualityComparer_1_GetHashCode_m12130_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::Equals(T,T)
extern "C" bool GenericEqualityComparer_1_Equals_m12131_gshared (GenericEqualityComparer_1_t1457 * __this, Guid_t367  ___x, Guid_t367  ___y, const MethodInfo* method);
#define GenericEqualityComparer_1_Equals_m12131(__this, ___x, ___y, method) (( bool (*) (GenericEqualityComparer_1_t1457 *, Guid_t367 , Guid_t367 , const MethodInfo*))GenericEqualityComparer_1_Equals_m12131_gshared)(__this, ___x, ___y, method)
