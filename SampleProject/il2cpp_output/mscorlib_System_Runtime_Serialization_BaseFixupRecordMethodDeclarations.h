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

// System.Runtime.Serialization.BaseFixupRecord
struct BaseFixupRecord_t1178;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t1177;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t1171;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Runtime.Serialization.BaseFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Runtime.Serialization.ObjectRecord)
extern "C" void BaseFixupRecord__ctor_m6642 (BaseFixupRecord_t1178 * __this, ObjectRecord_t1177 * ___objectToBeFixed, ObjectRecord_t1177 * ___objectRequired, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.BaseFixupRecord::DoFixup(System.Runtime.Serialization.ObjectManager,System.Boolean)
extern "C" bool BaseFixupRecord_DoFixup_m6643 (BaseFixupRecord_t1178 * __this, ObjectManager_t1171 * ___manager, bool ___strict, const MethodInfo* method) IL2CPP_METHOD_ATTR;
