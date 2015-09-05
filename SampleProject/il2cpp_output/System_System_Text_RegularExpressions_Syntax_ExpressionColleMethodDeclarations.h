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

// System.Text.RegularExpressions.Syntax.ExpressionCollection
struct ExpressionCollection_t529;
// System.Text.RegularExpressions.Syntax.Expression
struct Expression_t530;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.RegularExpressions.Syntax.ExpressionCollection::.ctor()
extern "C" void ExpressionCollection__ctor_m2054 (ExpressionCollection_t529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.ExpressionCollection::Add(System.Text.RegularExpressions.Syntax.Expression)
extern "C" void ExpressionCollection_Add_m2055 (ExpressionCollection_t529 * __this, Expression_t530 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.ExpressionCollection::get_Item(System.Int32)
extern "C" Expression_t530 * ExpressionCollection_get_Item_m2056 (ExpressionCollection_t529 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.ExpressionCollection::set_Item(System.Int32,System.Text.RegularExpressions.Syntax.Expression)
extern "C" void ExpressionCollection_set_Item_m2057 (ExpressionCollection_t529 * __this, int32_t ___i, Expression_t530 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.ExpressionCollection::OnValidate(System.Object)
extern "C" void ExpressionCollection_OnValidate_m2058 (ExpressionCollection_t529 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
