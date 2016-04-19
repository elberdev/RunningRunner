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

// ISN_Result
struct ISN_Result_t2497682552;
// ISN_Error
struct ISN_Error_t3116992077;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ISN_Error3116992077.h"
#include "mscorlib_System_String968488902.h"

// System.Void ISN_Result::.ctor(System.Boolean)
extern "C"  void ISN_Result__ctor_m3253567322 (ISN_Result_t2497682552 * __this, bool ___IsResultSucceeded, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_Result::.ctor(ISN_Error)
extern "C"  void ISN_Result__ctor_m1382644162 (ISN_Result_t2497682552 * __this, ISN_Error_t3116992077 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_Result::.ctor(System.String)
extern "C"  void ISN_Result__ctor_m2176355519 (ISN_Result_t2497682552 * __this, String_t* ___errorData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ISN_Result::get_IsSucceeded()
extern "C"  bool ISN_Result_get_IsSucceeded_m880042875 (ISN_Result_t2497682552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ISN_Result::get_IsFailed()
extern "C"  bool ISN_Result_get_IsFailed_m957240389 (ISN_Result_t2497682552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ISN_Error ISN_Result::get_Error()
extern "C"  ISN_Error_t3116992077 * ISN_Result_get_Error_m1119720442 (ISN_Result_t2497682552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_Result::SetError(ISN_Error)
extern "C"  void ISN_Result_SetError_m1953122910 (ISN_Result_t2497682552 * __this, ISN_Error_t3116992077 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
