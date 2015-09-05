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

// Mono.Security.Cryptography.RC4
struct RC4_t642;
// System.Byte[]
struct ByteU5BU5D_t104;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Cryptography.RC4::.ctor()
extern "C" void RC4__ctor_m2630 (RC4_t642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RC4::.cctor()
extern "C" void RC4__cctor_m2631 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.RC4::get_IV()
extern "C" ByteU5BU5D_t104* RC4_get_IV_m2632 (RC4_t642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RC4::set_IV(System.Byte[])
extern "C" void RC4_set_IV_m2633 (RC4_t642 * __this, ByteU5BU5D_t104* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
