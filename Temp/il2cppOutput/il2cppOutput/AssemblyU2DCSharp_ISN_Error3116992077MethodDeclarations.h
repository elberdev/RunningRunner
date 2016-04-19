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

// ISN_Error
struct ISN_Error_t3116992077;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void ISN_Error::.ctor(System.Int32,System.String)
extern "C"  void ISN_Error__ctor_m1368145931 (ISN_Error_t3116992077 * __this, int32_t ___code, String_t* ___description, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_Error::.ctor(System.String)
extern "C"  void ISN_Error__ctor_m3935309316 (ISN_Error_t3116992077 * __this, String_t* ___errorData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ISN_Error::get_Code()
extern "C"  int32_t ISN_Error_get_Code_m975284142 (ISN_Error_t3116992077 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ISN_Error::get_Description()
extern "C"  String_t* ISN_Error_get_Description_m2604569746 (ISN_Error_t3116992077 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
