﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t495;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t1480;
// System.Object[]
struct ObjectU5BU5D_t202;
// UnityEngine.TextEditor/TextEditOp[]
struct TextEditOpU5BU5D_t1678;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1513;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t312;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,System.Collections.DictionaryEntry>
struct Transform_1_t1682;

#include "mscorlib_System_Object.h"

// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>
struct  Dictionary_2_t1681  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::table
	Int32U5BU5D_t495* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::linkSlots
	LinkU5BU5D_t1480* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::keySlots
	ObjectU5BU5D_t202* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::valueSlots
	TextEditOpU5BU5D_t1678* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::serialization_info
	SerializationInfo_t312 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t1681_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::<>f__am$cacheB
	Transform_1_t1682 * ___U3CU3Ef__amU24cacheB_15;
};
