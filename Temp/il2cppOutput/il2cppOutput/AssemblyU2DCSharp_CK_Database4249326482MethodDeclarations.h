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

// CK_Database
struct CK_Database_t4249326482;
// System.Action`1<CK_RecordResult>
struct Action_1_t2969285574;
// System.Action`1<CK_RecordDeleteResult>
struct Action_1_t414786385;
// CK_Record
struct CK_Record_t1878820904;
// CK_RecordID
struct CK_RecordID_t1660626755;
// CK_Query
struct CK_Query_t1445635601;
// CK_RecordResult
struct CK_RecordResult_t2820832869;
// CK_RecordDeleteResult
struct CK_RecordDeleteResult_t266333680;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_CK_Record1878820904.h"
#include "AssemblyU2DCSharp_CK_RecordID1660626755.h"
#include "AssemblyU2DCSharp_CK_Query1445635601.h"
#include "AssemblyU2DCSharp_CK_RecordResult2820832869.h"
#include "AssemblyU2DCSharp_CK_RecordDeleteResult266333680.h"

// System.Void CK_Database::.ctor(System.Int32)
extern "C"  void CK_Database__ctor_m228795370 (CK_Database_t4249326482 * __this, int32_t ___internalId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CK_Database::.cctor()
extern "C"  void CK_Database__cctor_m2200011444 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CK_Database::add_ActionRecordSaved(System.Action`1<CK_RecordResult>)
extern "C"  void CK_Database_add_ActionRecordSaved_m1467320586 (CK_Database_t4249326482 * __this, Action_1_t2969285574 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CK_Database::remove_ActionRecordSaved(System.Action`1<CK_RecordResult>)
extern "C"  void CK_Database_remove_ActionRecordSaved_m267216129 (CK_Database_t4249326482 * __this, Action_1_t2969285574 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CK_Database::add_ActionRecordFetchComplete(System.Action`1<CK_RecordResult>)
extern "C"  void CK_Database_add_ActionRecordFetchComplete_m1516009622 (CK_Database_t4249326482 * __this, Action_1_t2969285574 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CK_Database::remove_ActionRecordFetchComplete(System.Action`1<CK_RecordResult>)
extern "C"  void CK_Database_remove_ActionRecordFetchComplete_m1154510221 (CK_Database_t4249326482 * __this, Action_1_t2969285574 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CK_Database::add_ActionRecordDeleted(System.Action`1<CK_RecordDeleteResult>)
extern "C"  void CK_Database_add_ActionRecordDeleted_m3701018023 (CK_Database_t4249326482 * __this, Action_1_t414786385 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CK_Database::remove_ActionRecordDeleted(System.Action`1<CK_RecordDeleteResult>)
extern "C"  void CK_Database_remove_ActionRecordDeleted_m3339518622 (CK_Database_t4249326482 * __this, Action_1_t414786385 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CK_Database::SaveRecrod(CK_Record)
extern "C"  void CK_Database_SaveRecrod_m1383250251 (CK_Database_t4249326482 * __this, CK_Record_t1878820904 * ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CK_Database::FetchRecordWithID(CK_RecordID)
extern "C"  void CK_Database_FetchRecordWithID_m967454732 (CK_Database_t4249326482 * __this, CK_RecordID_t1660626755 * ___recordId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CK_Database::DeleteRecordWithID(CK_RecordID)
extern "C"  void CK_Database_DeleteRecordWithID_m536454503 (CK_Database_t4249326482 * __this, CK_RecordID_t1660626755 * ___recordId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CK_Database::PerformQuery(CK_Query)
extern "C"  void CK_Database_PerformQuery_m1815849793 (CK_Database_t4249326482 * __this, CK_Query_t1445635601 * ___query, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CK_Database::get_InternalId()
extern "C"  int32_t CK_Database_get_InternalId_m1083671358 (CK_Database_t4249326482 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CK_Database CK_Database::GetDatabaseByInternalId(System.Int32)
extern "C"  CK_Database_t4249326482 * CK_Database_GetDatabaseByInternalId_m3573387401 (Il2CppObject * __this /* static, unused */, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CK_Database::FireSaveRecordResult(CK_RecordResult)
extern "C"  void CK_Database_FireSaveRecordResult_m226304545 (CK_Database_t4249326482 * __this, CK_RecordResult_t2820832869 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CK_Database::FireFetchRecordResult(CK_RecordResult)
extern "C"  void CK_Database_FireFetchRecordResult_m1264648644 (CK_Database_t4249326482 * __this, CK_RecordResult_t2820832869 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CK_Database::FireDeleteRecordResult(CK_RecordDeleteResult)
extern "C"  void CK_Database_FireDeleteRecordResult_m2499540808 (CK_Database_t4249326482 * __this, CK_RecordDeleteResult_t266333680 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CK_Database::<ActionRecordSaved>m__6A(CK_RecordResult)
extern "C"  void CK_Database_U3CActionRecordSavedU3Em__6A_m2818383172 (Il2CppObject * __this /* static, unused */, CK_RecordResult_t2820832869 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CK_Database::<ActionRecordFetchComplete>m__6B(CK_RecordResult)
extern "C"  void CK_Database_U3CActionRecordFetchCompleteU3Em__6B_m3469665623 (Il2CppObject * __this /* static, unused */, CK_RecordResult_t2820832869 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CK_Database::<ActionRecordDeleted>m__6C(CK_RecordDeleteResult)
extern "C"  void CK_Database_U3CActionRecordDeletedU3Em__6C_m3747359301 (Il2CppObject * __this /* static, unused */, CK_RecordDeleteResult_t266333680 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
