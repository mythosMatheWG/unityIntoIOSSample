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

// System.CurrentSystemTimeZone
struct CurrentSystemTimeZone_t1369;
// System.Object
struct Object_t;
// System.Int64[]
struct Int64U5BU5D_t1406;
// System.String[]
struct StringU5BU5D_t195;
// System.Globalization.DaylightTime
struct DaylightTime_t909;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_TimeSpan.h"
#include "mscorlib_System_DateTime.h"

// System.Void System.CurrentSystemTimeZone::.ctor()
extern "C" void CurrentSystemTimeZone__ctor_m8248 (CurrentSystemTimeZone_t1369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CurrentSystemTimeZone::.ctor(System.Int64)
extern "C" void CurrentSystemTimeZone__ctor_m8249 (CurrentSystemTimeZone_t1369 * __this, int64_t ___lnow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CurrentSystemTimeZone::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern "C" void CurrentSystemTimeZone_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m8250 (CurrentSystemTimeZone_t1369 * __this, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.CurrentSystemTimeZone::GetTimeZoneData(System.Int32,System.Int64[]&,System.String[]&)
extern "C" bool CurrentSystemTimeZone_GetTimeZoneData_m8251 (Object_t * __this /* static, unused */, int32_t ___year, Int64U5BU5D_t1406** ___data, StringU5BU5D_t195** ___names, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DaylightTime System.CurrentSystemTimeZone::GetDaylightChanges(System.Int32)
extern "C" DaylightTime_t909 * CurrentSystemTimeZone_GetDaylightChanges_m8252 (CurrentSystemTimeZone_t1369 * __this, int32_t ___year, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.CurrentSystemTimeZone::GetUtcOffset(System.DateTime)
extern "C" TimeSpan_t467  CurrentSystemTimeZone_GetUtcOffset_m8253 (CurrentSystemTimeZone_t1369 * __this, DateTime_t52  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CurrentSystemTimeZone::OnDeserialization(System.Globalization.DaylightTime)
extern "C" void CurrentSystemTimeZone_OnDeserialization_m8254 (CurrentSystemTimeZone_t1369 * __this, DaylightTime_t909 * ___dlt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DaylightTime System.CurrentSystemTimeZone::GetDaylightTimeFromData(System.Int64[])
extern "C" DaylightTime_t909 * CurrentSystemTimeZone_GetDaylightTimeFromData_m8255 (CurrentSystemTimeZone_t1369 * __this, Int64U5BU5D_t1406* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
