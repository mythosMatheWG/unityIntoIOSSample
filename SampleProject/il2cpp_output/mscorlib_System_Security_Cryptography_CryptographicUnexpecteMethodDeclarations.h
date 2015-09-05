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

// System.Security.Cryptography.CryptographicUnexpectedOperationException
struct CryptographicUnexpectedOperationException_t596;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t312;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Security.Cryptography.CryptographicUnexpectedOperationException::.ctor()
extern "C" void CryptographicUnexpectedOperationException__ctor_m6728 (CryptographicUnexpectedOperationException_t596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptographicUnexpectedOperationException::.ctor(System.String)
extern "C" void CryptographicUnexpectedOperationException__ctor_m3341 (CryptographicUnexpectedOperationException_t596 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptographicUnexpectedOperationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void CryptographicUnexpectedOperationException__ctor_m6729 (CryptographicUnexpectedOperationException_t596 * __this, SerializationInfo_t312 * ___info, StreamingContext_t313  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
