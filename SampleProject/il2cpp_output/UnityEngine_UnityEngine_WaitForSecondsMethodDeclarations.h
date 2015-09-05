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

// UnityEngine.WaitForSeconds
struct WaitForSeconds_t10;
struct WaitForSeconds_t10_marshaled;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" void WaitForSeconds__ctor_m17 (WaitForSeconds_t10 * __this, float ___seconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void WaitForSeconds_t10_marshal(const WaitForSeconds_t10& unmarshaled, WaitForSeconds_t10_marshaled& marshaled);
extern "C" void WaitForSeconds_t10_marshal_back(const WaitForSeconds_t10_marshaled& marshaled, WaitForSeconds_t10& unmarshaled);
extern "C" void WaitForSeconds_t10_marshal_cleanup(WaitForSeconds_t10_marshaled& marshaled);
