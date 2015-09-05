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

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t440;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t453;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t442;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t441;
// System.Security.Cryptography.Oid
struct Oid_t443;
// System.Byte[]
struct ByteU5BU5D_t104;
// System.Security.Cryptography.DSA
struct DSA_t565;
// System.Security.Cryptography.RSA
struct RSA_t566;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern "C" void PublicKey__ctor_m1561 (PublicKey_t440 * __this, X509Certificate_t453 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern "C" AsnEncodedData_t442 * PublicKey_get_EncodedKeyValue_m1562 (PublicKey_t440 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern "C" AsnEncodedData_t442 * PublicKey_get_EncodedParameters_m1563 (PublicKey_t440 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern "C" AsymmetricAlgorithm_t441 * PublicKey_get_Key_m1564 (PublicKey_t440 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern "C" Oid_t443 * PublicKey_get_Oid_m1565 (PublicKey_t440 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t104* PublicKey_GetUnsignedBigInteger_m1566 (Object_t * __this /* static, unused */, ByteU5BU5D_t104* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern "C" DSA_t565 * PublicKey_DecodeDSA_m1567 (Object_t * __this /* static, unused */, ByteU5BU5D_t104* ___rawPublicKey, ByteU5BU5D_t104* ___rawParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern "C" RSA_t566 * PublicKey_DecodeRSA_m1568 (Object_t * __this /* static, unused */, ByteU5BU5D_t104* ___rawPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
