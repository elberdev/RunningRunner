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

// GK_PlayerSignatureResult
struct GK_PlayerSignatureResult_t3998341273;
// ISN_Error
struct ISN_Error_t3116992077;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ISN_Error3116992077.h"
#include "mscorlib_System_String968488902.h"

// System.Void GK_PlayerSignatureResult::.ctor(ISN_Error)
extern "C"  void GK_PlayerSignatureResult__ctor_m1712986531 (GK_PlayerSignatureResult_t3998341273 * __this, ISN_Error_t3116992077 * ___er, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GK_PlayerSignatureResult::.ctor(System.String,System.String,System.String,System.String)
extern "C"  void GK_PlayerSignatureResult__ctor_m3666418132 (GK_PlayerSignatureResult_t3998341273 * __this, String_t* ___publicKeyUrl, String_t* ___signature, String_t* ___salt, String_t* ___timestamp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GK_PlayerSignatureResult::get_PublicKeyUrl()
extern "C"  String_t* GK_PlayerSignatureResult_get_PublicKeyUrl_m1866598183 (GK_PlayerSignatureResult_t3998341273 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] GK_PlayerSignatureResult::get_Signature()
extern "C"  ByteU5BU5D_t58506160* GK_PlayerSignatureResult_get_Signature_m3323892709 (GK_PlayerSignatureResult_t3998341273 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] GK_PlayerSignatureResult::get_Salt()
extern "C"  ByteU5BU5D_t58506160* GK_PlayerSignatureResult_get_Salt_m175888427 (GK_PlayerSignatureResult_t3998341273 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 GK_PlayerSignatureResult::get_Timestamp()
extern "C"  int64_t GK_PlayerSignatureResult_get_Timestamp_m1367994302 (GK_PlayerSignatureResult_t3998341273 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
