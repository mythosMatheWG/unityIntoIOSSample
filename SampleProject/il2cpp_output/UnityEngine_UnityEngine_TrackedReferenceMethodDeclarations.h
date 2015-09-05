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

// UnityEngine.TrackedReference
struct TrackedReference_t138;
struct TrackedReference_t138_marshaled;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Boolean UnityEngine.TrackedReference::Equals(System.Object)
extern "C" bool TrackedReference_Equals_m1134 (TrackedReference_t138 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TrackedReference::GetHashCode()
extern "C" int32_t TrackedReference_GetHashCode_m1135 (TrackedReference_t138 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TrackedReference::op_Equality(UnityEngine.TrackedReference,UnityEngine.TrackedReference)
extern "C" bool TrackedReference_op_Equality_m1136 (Object_t * __this /* static, unused */, TrackedReference_t138 * ___x, TrackedReference_t138 * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void TrackedReference_t138_marshal(const TrackedReference_t138& unmarshaled, TrackedReference_t138_marshaled& marshaled);
extern "C" void TrackedReference_t138_marshal_back(const TrackedReference_t138_marshaled& marshaled, TrackedReference_t138& unmarshaled);
extern "C" void TrackedReference_t138_marshal_cleanup(TrackedReference_t138_marshaled& marshaled);
