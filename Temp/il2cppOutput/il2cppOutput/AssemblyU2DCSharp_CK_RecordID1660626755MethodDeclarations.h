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

// CK_RecordID
struct CK_RecordID_t1660626755;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void CK_RecordID::.ctor(System.String)
extern "C"  void CK_RecordID__ctor_m1454918778 (CK_RecordID_t1660626755 * __this, String_t* ___recordName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CK_RecordID::.cctor()
extern "C"  void CK_RecordID__cctor_m3923307813 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String CK_RecordID::get_Name()
extern "C"  String_t* CK_RecordID_get_Name_m3736517261 (CK_RecordID_t1660626755 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CK_RecordID::get_Internal_Id()
extern "C"  int32_t CK_RecordID_get_Internal_Id_m1206798728 (CK_RecordID_t1660626755 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CK_RecordID CK_RecordID::GetRecordIdByInternalId(System.Int32)
extern "C"  CK_RecordID_t1660626755 * CK_RecordID_GetRecordIdByInternalId_m1535308024 (Il2CppObject * __this /* static, unused */, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
