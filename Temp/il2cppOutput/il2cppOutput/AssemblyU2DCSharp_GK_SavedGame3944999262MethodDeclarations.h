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

// GK_SavedGame
struct GK_SavedGame_t3944999262;
// System.String
struct String_t;
// System.Action`1<GK_SaveDataLoaded>
struct Action_1_t1903676392;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// GK_SaveDataLoaded
struct GK_SaveDataLoaded_t1755223687;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_DateTime339033936.h"
#include "AssemblyU2DCSharp_GK_SaveDataLoaded1755223687.h"

// System.Void GK_SavedGame::.ctor(System.String,System.String,System.String,System.String)
extern "C"  void GK_SavedGame__ctor_m3863715481 (GK_SavedGame_t3944999262 * __this, String_t* ___id, String_t* ___name, String_t* ___device, String_t* ___dateString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GK_SavedGame::add_ActionDataLoaded(System.Action`1<GK_SaveDataLoaded>)
extern "C"  void GK_SavedGame_add_ActionDataLoaded_m2687563165 (GK_SavedGame_t3944999262 * __this, Action_1_t1903676392 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GK_SavedGame::remove_ActionDataLoaded(System.Action`1<GK_SaveDataLoaded>)
extern "C"  void GK_SavedGame_remove_ActionDataLoaded_m296142798 (GK_SavedGame_t3944999262 * __this, Action_1_t1903676392 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GK_SavedGame::LoadData()
extern "C"  void GK_SavedGame_LoadData_m1841921367 (GK_SavedGame_t3944999262 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GK_SavedGame::GenerateDataLoadEvent(System.String)
extern "C"  void GK_SavedGame_GenerateDataLoadEvent_m867065042 (GK_SavedGame_t3944999262 * __this, String_t* ___base64Data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GK_SavedGame::GenerateDataLoadFailedEvent(System.String)
extern "C"  void GK_SavedGame_GenerateDataLoadFailedEvent_m1555361903 (GK_SavedGame_t3944999262 * __this, String_t* ___erorrData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GK_SavedGame::get_Id()
extern "C"  String_t* GK_SavedGame_get_Id_m2339837102 (GK_SavedGame_t3944999262 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GK_SavedGame::get_Name()
extern "C"  String_t* GK_SavedGame_get_Name_m2458048926 (GK_SavedGame_t3944999262 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GK_SavedGame::get_DeviceName()
extern "C"  String_t* GK_SavedGame_get_DeviceName_m3340559892 (GK_SavedGame_t3944999262 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime GK_SavedGame::get_ModificationDate()
extern "C"  DateTime_t339033936  GK_SavedGame_get_ModificationDate_m4210177907 (GK_SavedGame_t3944999262 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] GK_SavedGame::get_Data()
extern "C"  ByteU5BU5D_t58506160* GK_SavedGame_get_Data_m1564065476 (GK_SavedGame_t3944999262 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GK_SavedGame::<ActionDataLoaded>m__A(GK_SaveDataLoaded)
extern "C"  void GK_SavedGame_U3CActionDataLoadedU3Em__A_m3456835219 (Il2CppObject * __this /* static, unused */, GK_SaveDataLoaded_t1755223687 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
