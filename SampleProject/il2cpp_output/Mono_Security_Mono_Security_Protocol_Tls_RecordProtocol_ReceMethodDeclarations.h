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

// Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult
struct ReceiveRecordAsyncResult_t695;
// System.AsyncCallback
struct AsyncCallback_t48;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t104;
// System.IO.Stream
struct Stream_t697;
// System.Exception
struct Exception_t66;
// System.Threading.WaitHandle
struct WaitHandle_t742;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.IO.Stream)
extern "C" void ReceiveRecordAsyncResult__ctor_m2967 (ReceiveRecordAsyncResult_t695 * __this, AsyncCallback_t48 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t104* ___initialBuffer, Stream_t697 * ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_Record()
extern "C" Stream_t697 * ReceiveRecordAsyncResult_get_Record_m2968 (ReceiveRecordAsyncResult_t695 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_ResultingBuffer()
extern "C" ByteU5BU5D_t104* ReceiveRecordAsyncResult_get_ResultingBuffer_m2969 (ReceiveRecordAsyncResult_t695 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_InitialBuffer()
extern "C" ByteU5BU5D_t104* ReceiveRecordAsyncResult_get_InitialBuffer_m2970 (ReceiveRecordAsyncResult_t695 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncState()
extern "C" Object_t * ReceiveRecordAsyncResult_get_AsyncState_m2971 (ReceiveRecordAsyncResult_t695 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncException()
extern "C" Exception_t66 * ReceiveRecordAsyncResult_get_AsyncException_m2972 (ReceiveRecordAsyncResult_t695 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_CompletedWithError()
extern "C" bool ReceiveRecordAsyncResult_get_CompletedWithError_m2973 (ReceiveRecordAsyncResult_t695 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t742 * ReceiveRecordAsyncResult_get_AsyncWaitHandle_m2974 (ReceiveRecordAsyncResult_t695 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_IsCompleted()
extern "C" bool ReceiveRecordAsyncResult_get_IsCompleted_m2975 (ReceiveRecordAsyncResult_t695 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception,System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m2976 (ReceiveRecordAsyncResult_t695 * __this, Exception_t66 * ___ex, ByteU5BU5D_t104* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception)
extern "C" void ReceiveRecordAsyncResult_SetComplete_m2977 (ReceiveRecordAsyncResult_t695 * __this, Exception_t66 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m2978 (ReceiveRecordAsyncResult_t695 * __this, ByteU5BU5D_t104* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
