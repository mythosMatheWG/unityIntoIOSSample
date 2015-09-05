#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object.h"
#include "UnityEngine_UnityEngine_Networking_Types_SourceID.h"
#include "UnityEngine_UnityEngine_Networking_Types_AppID.h"

// UnityEngine.Networking.Match.Request
struct  Request_t160  : public Object_t
{
	// System.Int32 UnityEngine.Networking.Match.Request::version
	int32_t ___version_0;
	// UnityEngine.Networking.Types.SourceID UnityEngine.Networking.Match.Request::<sourceId>k__BackingField
	uint64_t ___U3CsourceIdU3Ek__BackingField_1;
	// UnityEngine.Networking.Types.AppID UnityEngine.Networking.Match.Request::<appId>k__BackingField
	uint64_t ___U3CappIdU3Ek__BackingField_2;
	// System.Int32 UnityEngine.Networking.Match.Request::<domain>k__BackingField
	int32_t ___U3CdomainU3Ek__BackingField_3;
};
