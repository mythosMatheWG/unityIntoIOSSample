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

#include "UnityEngine_UnityEngine_Networking_Match_Request.h"
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"

// UnityEngine.Networking.Match.JoinMatchRequest
struct  JoinMatchRequest_t167  : public Request_t160
{
	// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.JoinMatchRequest::<networkId>k__BackingField
	uint64_t ___U3CnetworkIdU3Ek__BackingField_4;
	// System.String UnityEngine.Networking.Match.JoinMatchRequest::<password>k__BackingField
	String_t* ___U3CpasswordU3Ek__BackingField_5;
};
