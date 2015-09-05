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

// Mono.Security.X509.X509Crl
struct X509Crl_t569;
// System.Byte[]
struct ByteU5BU5D_t104;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t597;
// System.String
struct String_t;
// Mono.Security.X509.X509Crl/X509CrlEntry
struct X509CrlEntry_t571;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t453;
// System.Security.Cryptography.DSA
struct DSA_t565;
// System.Security.Cryptography.RSA
struct RSA_t566;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t441;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"

// System.Void Mono.Security.X509.X509Crl::.ctor(System.Byte[])
extern "C" void X509Crl__ctor_m2732 (X509Crl_t569 * __this, ByteU5BU5D_t104* ___crl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Crl::Parse(System.Byte[])
extern "C" void X509Crl_Parse_m2733 (X509Crl_t569 * __this, ByteU5BU5D_t104* ___crl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl::get_Extensions()
extern "C" X509ExtensionCollection_t597 * X509Crl_get_Extensions_m2355 (X509Crl_t569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Crl::get_Hash()
extern "C" ByteU5BU5D_t104* X509Crl_get_Hash_m2734 (X509Crl_t569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Crl::get_IssuerName()
extern "C" String_t* X509Crl_get_IssuerName_m2363 (X509Crl_t569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Crl::get_NextUpdate()
extern "C" DateTime_t52  X509Crl_get_NextUpdate_m2361 (X509Crl_t569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::Compare(System.Byte[],System.Byte[])
extern "C" bool X509Crl_Compare_m2735 (X509Crl_t569 * __this, ByteU5BU5D_t104* ___array1, ByteU5BU5D_t104* ___array2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(Mono.Security.X509.X509Certificate)
extern "C" X509CrlEntry_t571 * X509Crl_GetCrlEntry_m2359 (X509Crl_t569 * __this, X509Certificate_t453 * ___x509, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(System.Byte[])
extern "C" X509CrlEntry_t571 * X509Crl_GetCrlEntry_m2736 (X509Crl_t569 * __this, ByteU5BU5D_t104* ___serialNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Crl::GetHashName()
extern "C" String_t* X509Crl_GetHashName_m2737 (X509Crl_t569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.DSA)
extern "C" bool X509Crl_VerifySignature_m2738 (X509Crl_t569 * __this, DSA_t565 * ___dsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.RSA)
extern "C" bool X509Crl_VerifySignature_m2739 (X509Crl_t569 * __this, RSA_t566 * ___rsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" bool X509Crl_VerifySignature_m2358 (X509Crl_t569 * __this, AsymmetricAlgorithm_t441 * ___aa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
