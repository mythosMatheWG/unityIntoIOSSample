#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_Networking_Match_Request.h"
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
#include "UnityEngine_UnityEngine_Networking_Types_NodeID.h"

// UnityEngine.Networking.Match.DropConnectionRequest
struct  DropConnectionRequest_t170  : public Request_t160
{
	// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.DropConnectionRequest::<networkId>k__BackingField
	uint64_t ___U3CnetworkIdU3Ek__BackingField_4;
	// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.DropConnectionRequest::<nodeId>k__BackingField
	uint16_t ___U3CnodeIdU3Ek__BackingField_5;
};
