#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SimpleJson.IJsonSerializerStrategy
struct IJsonSerializerStrategy_t193;
// SimpleJson.PocoJsonSerializerStrategy
struct PocoJsonSerializerStrategy_t192;

#include "mscorlib_System_Object.h"

// SimpleJson.SimpleJson
struct  SimpleJson_t191  : public Object_t
{
};
struct SimpleJson_t191_StaticFields{
	// SimpleJson.IJsonSerializerStrategy SimpleJson.SimpleJson::_currentJsonSerializerStrategy
	Object_t * ____currentJsonSerializerStrategy_0;
	// SimpleJson.PocoJsonSerializerStrategy SimpleJson.SimpleJson::_pocoJsonSerializerStrategy
	PocoJsonSerializerStrategy_t192 * ____pocoJsonSerializerStrategy_1;
};
