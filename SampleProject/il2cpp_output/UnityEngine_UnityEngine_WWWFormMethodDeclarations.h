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

// UnityEngine.WWWForm
struct WWWForm_t101;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t283;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t282;
// System.Byte[]
struct ByteU5BU5D_t104;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.WWWForm::.ctor()
extern "C" void WWWForm__ctor_m522 (WWWForm_t101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWWForm::AddField(System.String,System.String)
extern "C" void WWWForm_AddField_m523 (WWWForm_t101 * __this, String_t* ___fieldName, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWWForm::AddField(System.String,System.String,System.Text.Encoding)
extern "C" void WWWForm_AddField_m524 (WWWForm_t101 * __this, String_t* ___fieldName, String_t* ___value, Encoding_t283 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWWForm::AddField(System.String,System.Int32)
extern "C" void WWWForm_AddField_m525 (WWWForm_t101 * __this, String_t* ___fieldName, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWWForm::get_headers()
extern "C" Dictionary_2_t282 * WWWForm_get_headers_m526 (WWWForm_t101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.WWWForm::get_data()
extern "C" ByteU5BU5D_t104* WWWForm_get_data_m527 (WWWForm_t101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
