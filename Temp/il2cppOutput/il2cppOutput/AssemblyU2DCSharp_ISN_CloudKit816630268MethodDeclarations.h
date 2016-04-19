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

// ISN_CloudKit
struct ISN_CloudKit_t816630268;
// CK_Database
struct CK_Database_t4249326482;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void ISN_CloudKit::.ctor()
extern "C"  void ISN_CloudKit__ctor_m2058920991 (ISN_CloudKit_t816630268 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_CloudKit::Awake()
extern "C"  void ISN_CloudKit_Awake_m2296526210 (ISN_CloudKit_t816630268 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CK_Database ISN_CloudKit::get_PrivateDB()
extern "C"  CK_Database_t4249326482 * ISN_CloudKit_get_PrivateDB_m1393172532 (ISN_CloudKit_t816630268 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CK_Database ISN_CloudKit::get_PublicDB()
extern "C"  CK_Database_t4249326482 * ISN_CloudKit_get_PublicDB_m499851126 (ISN_CloudKit_t816630268 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_CloudKit::OnSaveRecordSuccess(System.String)
extern "C"  void ISN_CloudKit_OnSaveRecordSuccess_m659253071 (ISN_CloudKit_t816630268 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_CloudKit::OnSaveRecordFailed(System.String)
extern "C"  void ISN_CloudKit_OnSaveRecordFailed_m2699738515 (ISN_CloudKit_t816630268 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_CloudKit::OnDeleteRecordSuccess(System.String)
extern "C"  void ISN_CloudKit_OnDeleteRecordSuccess_m3338089917 (ISN_CloudKit_t816630268 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_CloudKit::OnDeleteRecordFailed(System.String)
extern "C"  void ISN_CloudKit_OnDeleteRecordFailed_m846489957 (ISN_CloudKit_t816630268 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_CloudKit::OnFetchRecordSuccess(System.String)
extern "C"  void ISN_CloudKit_OnFetchRecordSuccess_m4177792742 (ISN_CloudKit_t816630268 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_CloudKit::OnFetchRecordFailed(System.String)
extern "C"  void ISN_CloudKit_OnFetchRecordFailed_m4198713116 (ISN_CloudKit_t816630268 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_CloudKit::CreateRecordId_Object(System.Int32,System.String)
extern "C"  void ISN_CloudKit_CreateRecordId_Object_m4015048416 (Il2CppObject * __this /* static, unused */, int32_t ___recordId, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_CloudKit::UpdateRecord_Object(System.Int32,System.String,System.String,System.String,System.Int32)
extern "C"  void ISN_CloudKit_UpdateRecord_Object_m3093629841 (Il2CppObject * __this /* static, unused */, int32_t ___ID, String_t* ___type, String_t* ___keys, String_t* ___values, int32_t ___recordId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_CloudKit::SaveRecord(System.Int32,System.Int32)
extern "C"  void ISN_CloudKit_SaveRecord_m1320173459 (Il2CppObject * __this /* static, unused */, int32_t ___dbId, int32_t ___recordId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_CloudKit::DeleteRecord(System.Int32,System.Int32)
extern "C"  void ISN_CloudKit_DeleteRecord_m858610213 (Il2CppObject * __this /* static, unused */, int32_t ___dbId, int32_t ___recordId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_CloudKit::FetchRecord(System.Int32,System.Int32)
extern "C"  void ISN_CloudKit_FetchRecord_m1013831422 (Il2CppObject * __this /* static, unused */, int32_t ___dbId, int32_t ___recordId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
