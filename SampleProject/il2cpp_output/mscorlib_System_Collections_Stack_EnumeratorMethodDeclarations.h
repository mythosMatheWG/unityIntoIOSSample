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

// System.Collections.Stack/Enumerator
struct Enumerator_t889;
// System.Collections.Stack
struct Stack_t272;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.Stack/Enumerator::.ctor(System.Collections.Stack)
extern "C" void Enumerator__ctor_m4981 (Enumerator_t889 * __this, Stack_t272 * ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Stack/Enumerator::get_Current()
extern "C" Object_t * Enumerator_get_Current_m4982 (Enumerator_t889 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Stack/Enumerator::MoveNext()
extern "C" bool Enumerator_MoveNext_m4983 (Enumerator_t889 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
