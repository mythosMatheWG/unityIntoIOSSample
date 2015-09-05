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

#include "UnityEngine_UnityEngine_Networking_Match_BasicResponse.h"
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
#include "UnityEngine_UnityEngine_Networking_Types_NodeID.h"

// UnityEngine.Networking.Match.JoinMatchResponse
struct  JoinMatchResponse_t168  : public BasicResponse_t163
{
	// System.String UnityEngine.Networking.Match.JoinMatchResponse::<address>k__BackingField
	String_t* ___U3CaddressU3Ek__BackingField_2;
	// System.Int32 UnityEngine.Networking.Match.JoinMatchResponse::<port>k__BackingField
	int32_t ___U3CportU3Ek__BackingField_3;
	// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.JoinMatchResponse::<networkId>k__BackingField
	uint64_t ___U3CnetworkIdU3Ek__BackingField_4;
	// System.String UnityEngine.Networking.Match.JoinMatchResponse::<accessTokenString>k__BackingField
	String_t* ___U3CaccessTokenStringU3Ek__BackingField_5;
	// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.JoinMatchResponse::<nodeId>k__BackingField
	uint16_t ___U3CnodeIdU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.Match.JoinMatchResponse::<usingRelay>k__BackingField
	bool ___U3CusingRelayU3Ek__BackingField_7;
};
