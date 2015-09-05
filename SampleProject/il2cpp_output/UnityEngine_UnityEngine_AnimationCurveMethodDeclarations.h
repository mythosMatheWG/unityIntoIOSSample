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

// UnityEngine.AnimationCurve
struct AnimationCurve_t137;
struct AnimationCurve_t137_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t285;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m697 (AnimationCurve_t137 * __this, KeyframeU5BU5D_t285* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m698 (AnimationCurve_t137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m699 (AnimationCurve_t137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m700 (AnimationCurve_t137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m701 (AnimationCurve_t137 * __this, KeyframeU5BU5D_t285* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void AnimationCurve_t137_marshal(const AnimationCurve_t137& unmarshaled, AnimationCurve_t137_marshaled& marshaled);
extern "C" void AnimationCurve_t137_marshal_back(const AnimationCurve_t137_marshaled& marshaled, AnimationCurve_t137& unmarshaled);
extern "C" void AnimationCurve_t137_marshal_cleanup(AnimationCurve_t137_marshaled& marshaled);
