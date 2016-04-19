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

// CK_Record
struct CK_Record_t1878820904;
// CK_RecordID
struct CK_RecordID_t1660626755;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_CK_RecordID1660626755.h"
#include "mscorlib_System_String968488902.h"

// System.Void CK_Record::.ctor(CK_RecordID,System.String)
extern "C"  void CK_Record__ctor_m2081599016 (CK_Record_t1878820904 * __this, CK_RecordID_t1660626755 * ___id, String_t* ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CK_Record::.ctor(System.String)
extern "C"  void CK_Record__ctor_m1384802719 (CK_Record_t1878820904 * __this, String_t* ___template, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CK_Record::.cctor()
extern "C"  void CK_Record__cctor_m1899616714 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CK_Record::SetObject(System.String,System.String)
extern "C"  void CK_Record_SetObject_m1256861980 (CK_Record_t1878820904 * __this, String_t* ___key, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String CK_Record::GetObject(System.String)
extern "C"  String_t* CK_Record_GetObject_m3915520361 (CK_Record_t1878820904 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CK_RecordID CK_Record::get_Id()
extern "C"  CK_RecordID_t1660626755 * CK_Record_get_Id_m3998772629 (CK_Record_t1878820904 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String CK_Record::get_Type()
extern "C"  String_t* CK_Record_get_Type_m1002123809 (CK_Record_t1878820904 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CK_Record::IndexRecord()
extern "C"  void CK_Record_IndexRecord_m237801060 (CK_Record_t1878820904 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CK_Record::UpdateRecord()
extern "C"  void CK_Record_UpdateRecord_m2795855515 (CK_Record_t1878820904 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CK_Record::get_Internal_Id()
extern "C"  int32_t CK_Record_get_Internal_Id_m1481691651 (CK_Record_t1878820904 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CK_Record CK_Record::GetRecordByInternalId(System.Int32)
extern "C"  CK_Record_t1878820904 * CK_Record_GetRecordByInternalId_m3511282163 (Il2CppObject * __this /* static, unused */, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
