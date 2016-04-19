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

// CK_RecordResult
struct CK_RecordResult_t2820832869;
// System.String
struct String_t;
// CK_Database
struct CK_Database_t4249326482;
// CK_Record
struct CK_Record_t1878820904;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_CK_Database4249326482.h"

// System.Void CK_RecordResult::.ctor(System.Int32)
extern "C"  void CK_RecordResult__ctor_m1992398583 (CK_RecordResult_t2820832869 * __this, int32_t ___recordId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CK_RecordResult::.ctor(System.String)
extern "C"  void CK_RecordResult__ctor_m2091512348 (CK_RecordResult_t2820832869 * __this, String_t* ___errorData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CK_RecordResult::SetDatabase(CK_Database)
extern "C"  void CK_RecordResult_SetDatabase_m679561663 (CK_RecordResult_t2820832869 * __this, CK_Database_t4249326482 * ___database, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CK_Record CK_RecordResult::get_Record()
extern "C"  CK_Record_t1878820904 * CK_RecordResult_get_Record_m1871956909 (CK_RecordResult_t2820832869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CK_Database CK_RecordResult::get_Database()
extern "C"  CK_Database_t4249326482 * CK_RecordResult_get_Database_m318679489 (CK_RecordResult_t2820832869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
