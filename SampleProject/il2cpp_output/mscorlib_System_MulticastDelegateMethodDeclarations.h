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

// System.MulticastDelegate
struct MulticastDelegate_t46;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t312;
// System.Object
struct Object_t;
// System.Delegate[]
struct DelegateU5BU5D_t1405;
// System.Delegate
struct Delegate_t336;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MulticastDelegate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MulticastDelegate_GetObjectData_m3932 (MulticastDelegate_t46 * __this, SerializationInfo_t312 * ___info, StreamingContext_t313  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::Equals(System.Object)
extern "C" bool MulticastDelegate_Equals_m3933 (MulticastDelegate_t46 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MulticastDelegate::GetHashCode()
extern "C" int32_t MulticastDelegate_GetHashCode_m3934 (MulticastDelegate_t46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate[] System.MulticastDelegate::GetInvocationList()
extern "C" DelegateU5BU5D_t1405* MulticastDelegate_GetInvocationList_m3935 (MulticastDelegate_t46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::CombineImpl(System.Delegate)
extern "C" Delegate_t336 * MulticastDelegate_CombineImpl_m3936 (MulticastDelegate_t46 * __this, Delegate_t336 * ___follow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::BaseEquals(System.MulticastDelegate)
extern "C" bool MulticastDelegate_BaseEquals_m3937 (MulticastDelegate_t46 * __this, MulticastDelegate_t46 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MulticastDelegate System.MulticastDelegate::KPM(System.MulticastDelegate,System.MulticastDelegate,System.MulticastDelegate&)
extern "C" MulticastDelegate_t46 * MulticastDelegate_KPM_m3938 (Object_t * __this /* static, unused */, MulticastDelegate_t46 * ___needle, MulticastDelegate_t46 * ___haystack, MulticastDelegate_t46 ** ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::RemoveImpl(System.Delegate)
extern "C" Delegate_t336 * MulticastDelegate_RemoveImpl_m3939 (MulticastDelegate_t46 * __this, Delegate_t336 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
