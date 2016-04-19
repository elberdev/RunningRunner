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

// CK_RecordDeleteResult
struct CK_RecordDeleteResult_t266333680;
// System.String
struct String_t;
// CK_Database
struct CK_Database_t4249326482;
// CK_RecordID
struct CK_RecordID_t1660626755;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_CK_Database4249326482.h"

// System.Void CK_RecordDeleteResult::.ctor(System.Int32)
extern "C"  void CK_RecordDeleteResult__ctor_m1605373516 (CK_RecordDeleteResult_t266333680 * __this, int32_t ___recordId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CK_RecordDeleteResult::.ctor(System.String)
extern "C"  void CK_RecordDeleteResult__ctor_m2978637159 (CK_RecordDeleteResult_t266333680 * __this, String_t* ___errorData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CK_RecordDeleteResult::SetDatabase(CK_Database)
extern "C"  void CK_RecordDeleteResult_SetDatabase_m1175527306 (CK_RecordDeleteResult_t266333680 * __this, CK_Database_t4249326482 * ___database, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CK_Database CK_RecordDeleteResult::get_Database()
extern "C"  CK_Database_t4249326482 * CK_RecordDeleteResult_get_Database_m1049837068 (CK_RecordDeleteResult_t266333680 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CK_RecordID CK_RecordDeleteResult::get_RecordID()
extern "C"  CK_RecordID_t1660626755 * CK_RecordDeleteResult_get_RecordID_m348713070 (CK_RecordDeleteResult_t266333680 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
