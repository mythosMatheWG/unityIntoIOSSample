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

// System.Byte[]
struct ByteU5BU5D_t104;
// System.Security.Cryptography.RSA
struct RSA_t566;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t646;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Cryptography.PKCS1::.cctor()
extern "C" void PKCS1__cctor_m2605 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Compare(System.Byte[],System.Byte[])
extern "C" bool PKCS1_Compare_m2606 (Object_t * __this /* static, unused */, ByteU5BU5D_t104* ___array1, ByteU5BU5D_t104* ___array2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::I2OSP(System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t104* PKCS1_I2OSP_m2607 (Object_t * __this /* static, unused */, ByteU5BU5D_t104* ___x, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::OS2IP(System.Byte[])
extern "C" ByteU5BU5D_t104* PKCS1_OS2IP_m2608 (Object_t * __this /* static, unused */, ByteU5BU5D_t104* ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSASP1(System.Security.Cryptography.RSA,System.Byte[])
extern "C" ByteU5BU5D_t104* PKCS1_RSASP1_m2609 (Object_t * __this /* static, unused */, RSA_t566 * ___rsa, ByteU5BU5D_t104* ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSAVP1(System.Security.Cryptography.RSA,System.Byte[])
extern "C" ByteU5BU5D_t104* PKCS1_RSAVP1_m2610 (Object_t * __this /* static, unused */, RSA_t566 * ___rsa, ByteU5BU5D_t104* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Sign_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[])
extern "C" ByteU5BU5D_t104* PKCS1_Sign_v15_m2611 (Object_t * __this /* static, unused */, RSA_t566 * ___rsa, HashAlgorithm_t646 * ___hash, ByteU5BU5D_t104* ___hashValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Verify_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Byte[])
extern "C" bool PKCS1_Verify_v15_m2612 (Object_t * __this /* static, unused */, RSA_t566 * ___rsa, HashAlgorithm_t646 * ___hash, ByteU5BU5D_t104* ___hashValue, ByteU5BU5D_t104* ___signature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Verify_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Byte[],System.Boolean)
extern "C" bool PKCS1_Verify_v15_m2613 (Object_t * __this /* static, unused */, RSA_t566 * ___rsa, HashAlgorithm_t646 * ___hash, ByteU5BU5D_t104* ___hashValue, ByteU5BU5D_t104* ___signature, bool ___tryNonStandardEncoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Encode_v15(System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t104* PKCS1_Encode_v15_m2614 (Object_t * __this /* static, unused */, HashAlgorithm_t646 * ___hash, ByteU5BU5D_t104* ___hashValue, int32_t ___emLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
