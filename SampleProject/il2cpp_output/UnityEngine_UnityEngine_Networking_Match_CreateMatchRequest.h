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

// UnityEngine.Networking.Match.CreateMatchRequest
struct  CreateMatchRequest_t164  : public Request_t160
{
	// System.String UnityEngine.Networking.Match.CreateMatchRequest::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_4;
	// System.UInt32 UnityEngine.Networking.Match.CreateMatchRequest::<size>k__BackingField
	uint32_t ___U3CsizeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.Match.CreateMatchRequest::<advertise>k__BackingField
	bool ___U3CadvertiseU3Ek__BackingField_6;
	// System.String UnityEngine.Networking.Match.CreateMatchRequest::<password>k__BackingField
	String_t* ___U3CpasswordU3Ek__BackingField_7;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.CreateMatchRequest::<matchAttributes>k__BackingField
	Dictionary_2_t165 * ___U3CmatchAttributesU3Ek__BackingField_8;
};
