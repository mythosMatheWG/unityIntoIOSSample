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

// System.Array
struct Array_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array_InternalEnumerator_1_gen_51.h"
#include "System_System_Security_Cryptography_X509Certificates_X509Cha_5.h"

// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m11578_gshared (InternalEnumerator_1_t1733 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m11578(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1733 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m11578_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11579_gshared (InternalEnumerator_1_t1733 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11579(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1733 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m11579_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m11580_gshared (InternalEnumerator_1_t1733 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m11580(__this, method) (( void (*) (InternalEnumerator_1_t1733 *, const MethodInfo*))InternalEnumerator_1_Dispose_m11580_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m11581_gshared (InternalEnumerator_1_t1733 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m11581(__this, method) (( bool (*) (InternalEnumerator_1_t1733 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m11581_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509ChainStatus>::get_Current()
extern "C" X509ChainStatus_t464  InternalEnumerator_1_get_Current_m11582_gshared (InternalEnumerator_1_t1733 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m11582(__this, method) (( X509ChainStatus_t464  (*) (InternalEnumerator_1_t1733 *, const MethodInfo*))InternalEnumerator_1_get_Current_m11582_gshared)(__this, method)
