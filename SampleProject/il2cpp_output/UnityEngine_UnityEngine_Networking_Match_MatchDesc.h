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
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
struct List_1_t174;

#include "UnityEngine_UnityEngine_Networking_Match_ResponseBase.h"
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
#include "UnityEngine_UnityEngine_Networking_Types_NodeID.h"

// UnityEngine.Networking.Match.MatchDesc
struct  MatchDesc_t173  : public ResponseBase_t161
{
	// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.MatchDesc::<networkId>k__BackingField
	uint64_t ___U3CnetworkIdU3Ek__BackingField_0;
	// System.String UnityEngine.Networking.Match.MatchDesc::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_1;
	// System.Int32 UnityEngine.Networking.Match.MatchDesc::<averageEloScore>k__BackingField
	int32_t ___U3CaverageEloScoreU3Ek__BackingField_2;
	// System.Int32 UnityEngine.Networking.Match.MatchDesc::<maxSize>k__BackingField
	int32_t ___U3CmaxSizeU3Ek__BackingField_3;
	// System.Int32 UnityEngine.Networking.Match.MatchDesc::<currentSize>k__BackingField
	int32_t ___U3CcurrentSizeU3Ek__BackingField_4;
	// System.Boolean UnityEngine.Networking.Match.MatchDesc::<isPrivate>k__BackingField
	bool ___U3CisPrivateU3Ek__BackingField_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.MatchDesc::<matchAttributes>k__BackingField
	Dictionary_2_t165 * ___U3CmatchAttributesU3Ek__BackingField_6;
	// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.MatchDesc::<hostNodeId>k__BackingField
	uint16_t ___U3ChostNodeIdU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo> UnityEngine.Networking.Match.MatchDesc::<directConnectInfos>k__BackingField
	List_1_t174 * ___U3CdirectConnectInfosU3Ek__BackingField_8;
};
