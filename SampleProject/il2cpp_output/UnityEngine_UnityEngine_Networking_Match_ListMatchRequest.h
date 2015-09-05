#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Int64>
struct Dictionary_2_t165;

#include "UnityEngine_UnityEngine_Networking_Match_Request.h"

// UnityEngine.Networking.Match.ListMatchRequest
struct  ListMatchRequest_t171  : public Request_t160
{
	// System.Int32 UnityEngine.Networking.Match.ListMatchRequest::<pageSize>k__BackingField
	int32_t ___U3CpageSizeU3Ek__BackingField_4;
	// System.Int32 UnityEngine.Networking.Match.ListMatchRequest::<pageNum>k__BackingField
	int32_t ___U3CpageNumU3Ek__BackingField_5;
	// System.String UnityEngine.Networking.Match.ListMatchRequest::<nameFilter>k__BackingField
	String_t* ___U3CnameFilterU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.Match.ListMatchRequest::<includePasswordMatches>k__BackingField
	bool ___U3CincludePasswordMatchesU3Ek__BackingField_7;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.ListMatchRequest::<matchAttributeFilterLessThan>k__BackingField
	Dictionary_2_t165 * ___U3CmatchAttributeFilterLessThanU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.ListMatchRequest::<matchAttributeFilterGreaterThan>k__BackingField
	Dictionary_2_t165 * ___U3CmatchAttributeFilterGreaterThanU3Ek__BackingField_9;
};
