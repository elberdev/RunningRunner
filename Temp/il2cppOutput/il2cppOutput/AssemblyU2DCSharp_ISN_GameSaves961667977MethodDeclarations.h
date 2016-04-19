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

// ISN_GameSaves
struct ISN_GameSaves_t961667977;
// System.Action`1<GK_SaveRemoveResult>
struct Action_1_t3517002586;
// System.Action`1<GK_SaveResult>
struct Action_1_t1697270710;
// System.Action`1<GK_FetchResult>
struct Action_1_t3934213597;
// System.Action`1<GK_SavesResolveResult>
struct Action_1_t30791407;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Collections.Generic.List`1<GK_SavedGame>
struct List_1_t446990935;
// GK_SavedGame
struct GK_SavedGame_t3944999262;
// GK_SaveRemoveResult
struct GK_SaveRemoveResult_t3368549881;
// GK_SaveResult
struct GK_SaveResult_t1548818005;
// GK_FetchResult
struct GK_FetchResult_t3785760892;
// GK_SavesResolveResult
struct GK_SavesResolveResult_t4177305998;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_GK_SavedGame3944999262.h"
#include "AssemblyU2DCSharp_GK_SaveRemoveResult3368549881.h"
#include "AssemblyU2DCSharp_GK_SaveResult1548818005.h"
#include "AssemblyU2DCSharp_GK_FetchResult3785760892.h"
#include "AssemblyU2DCSharp_GK_SavesResolveResult4177305998.h"

// System.Void ISN_GameSaves::.ctor()
extern "C"  void ISN_GameSaves__ctor_m1931831298 (ISN_GameSaves_t961667977 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_GameSaves::.cctor()
extern "C"  void ISN_GameSaves__cctor_m3570099179 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_GameSaves::add_ActionSaveRemoved(System.Action`1<GK_SaveRemoveResult>)
extern "C"  void ISN_GameSaves_add_ActionSaveRemoved_m2514162100 (Il2CppObject * __this /* static, unused */, Action_1_t3517002586 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_GameSaves::remove_ActionSaveRemoved(System.Action`1<GK_SaveRemoveResult>)
extern "C"  void ISN_GameSaves_remove_ActionSaveRemoved_m4270711481 (Il2CppObject * __this /* static, unused */, Action_1_t3517002586 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_GameSaves::add_ActionGameSaved(System.Action`1<GK_SaveResult>)
extern "C"  void ISN_GameSaves_add_ActionGameSaved_m4118693730 (Il2CppObject * __this /* static, unused */, Action_1_t1697270710 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_GameSaves::remove_ActionGameSaved(System.Action`1<GK_SaveResult>)
extern "C"  void ISN_GameSaves_remove_ActionGameSaved_m2598432103 (Il2CppObject * __this /* static, unused */, Action_1_t1697270710 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_GameSaves::add_ActionSavesFetched(System.Action`1<GK_FetchResult>)
extern "C"  void ISN_GameSaves_add_ActionSavesFetched_m1987260109 (Il2CppObject * __this /* static, unused */, Action_1_t3934213597 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_GameSaves::remove_ActionSavesFetched(System.Action`1<GK_FetchResult>)
extern "C"  void ISN_GameSaves_remove_ActionSavesFetched_m3193522770 (Il2CppObject * __this /* static, unused */, Action_1_t3934213597 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_GameSaves::add_ActionSavesResolved(System.Action`1<GK_SavesResolveResult>)
extern "C"  void ISN_GameSaves_add_ActionSavesResolved_m3339324116 (Il2CppObject * __this /* static, unused */, Action_1_t30791407 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_GameSaves::remove_ActionSavesResolved(System.Action`1<GK_SavesResolveResult>)
extern "C"  void ISN_GameSaves_remove_ActionSavesResolved_m137548121 (Il2CppObject * __this /* static, unused */, Action_1_t30791407 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_GameSaves::_ISN_SaveGame(System.String,System.String)
extern "C"  void ISN_GameSaves__ISN_SaveGame_m3316807573 (Il2CppObject * __this /* static, unused */, String_t* ___data, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_GameSaves::_ISN_FetchSavedGames()
extern "C"  void ISN_GameSaves__ISN_FetchSavedGames_m4211987068 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_GameSaves::_ISN_DeleteSavedGame(System.String)
extern "C"  void ISN_GameSaves__ISN_DeleteSavedGame_m192224236 (Il2CppObject * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_GameSaves::_ISN_ResolveConflictingSavedGames(System.String,System.String)
extern "C"  void ISN_GameSaves__ISN_ResolveConflictingSavedGames_m345627302 (Il2CppObject * __this /* static, unused */, String_t* ___saves, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_GameSaves::_ISN_LoadSaveData(System.String)
extern "C"  void ISN_GameSaves__ISN_LoadSaveData_m1699023131 (Il2CppObject * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_GameSaves::Awake()
extern "C"  void ISN_GameSaves_Awake_m2169436517 (ISN_GameSaves_t961667977 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_GameSaves::SaveGame(System.Byte[],System.String)
extern "C"  void ISN_GameSaves_SaveGame_m1355002324 (ISN_GameSaves_t961667977 * __this, ByteU5BU5D_t58506160* ___data, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_GameSaves::FetchSavedGames()
extern "C"  void ISN_GameSaves_FetchSavedGames_m3893829684 (ISN_GameSaves_t961667977 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_GameSaves::DeleteSavedGame(System.String)
extern "C"  void ISN_GameSaves_DeleteSavedGame_m1645861172 (ISN_GameSaves_t961667977 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_GameSaves::ResolveConflictingSavedGames(System.Collections.Generic.List`1<GK_SavedGame>,System.Byte[])
extern "C"  void ISN_GameSaves_ResolveConflictingSavedGames_m2007516211 (ISN_GameSaves_t961667977 * __this, List_1_t446990935 * ___conflicts, ByteU5BU5D_t58506160* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_GameSaves::LoadSaveData(GK_SavedGame)
extern "C"  void ISN_GameSaves_LoadSaveData_m3719186417 (ISN_GameSaves_t961667977 * __this, GK_SavedGame_t3944999262 * ___save, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_GameSaves::OnSaveSuccess(System.String)
extern "C"  void ISN_GameSaves_OnSaveSuccess_m2321166747 (ISN_GameSaves_t961667977 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_GameSaves::OnSaveFailed(System.String)
extern "C"  void ISN_GameSaves_OnSaveFailed_m4277369287 (ISN_GameSaves_t961667977 * __this, String_t* ___erroData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_GameSaves::OnFetchSuccess(System.String)
extern "C"  void ISN_GameSaves_OnFetchSuccess_m1736828440 (ISN_GameSaves_t961667977 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_GameSaves::OnFetchFailed(System.String)
extern "C"  void ISN_GameSaves_OnFetchFailed_m1903215018 (ISN_GameSaves_t961667977 * __this, String_t* ___errorData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_GameSaves::OnResolveSuccess(System.String)
extern "C"  void ISN_GameSaves_OnResolveSuccess_m2068426698 (ISN_GameSaves_t961667977 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_GameSaves::OnResolveFailed(System.String)
extern "C"  void ISN_GameSaves_OnResolveFailed_m1913911736 (ISN_GameSaves_t961667977 * __this, String_t* ___errorData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_GameSaves::OnDeleteSuccess(System.String)
extern "C"  void ISN_GameSaves_OnDeleteSuccess_m459202377 (ISN_GameSaves_t961667977 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_GameSaves::OnDeleteFailed(System.String)
extern "C"  void ISN_GameSaves_OnDeleteFailed_m753622617 (ISN_GameSaves_t961667977 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_GameSaves::OnSaveDataLoaded(System.String)
extern "C"  void ISN_GameSaves_OnSaveDataLoaded_m2981153269 (ISN_GameSaves_t961667977 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_GameSaves::OnSaveDataLoadFailed(System.String)
extern "C"  void ISN_GameSaves_OnSaveDataLoadFailed_m1665073399 (ISN_GameSaves_t961667977 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GK_SavedGame ISN_GameSaves::DeserializeGameSave(System.String)
extern "C"  GK_SavedGame_t3944999262 * ISN_GameSaves_DeserializeGameSave_m27582069 (ISN_GameSaves_t961667977 * __this, String_t* ___serializedData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_GameSaves::<ActionSaveRemoved>m__31(GK_SaveRemoveResult)
extern "C"  void ISN_GameSaves_U3CActionSaveRemovedU3Em__31_m4087396377 (Il2CppObject * __this /* static, unused */, GK_SaveRemoveResult_t3368549881 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_GameSaves::<ActionGameSaved>m__32(GK_SaveResult)
extern "C"  void ISN_GameSaves_U3CActionGameSavedU3Em__32_m3427486154 (Il2CppObject * __this /* static, unused */, GK_SaveResult_t1548818005 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_GameSaves::<ActionSavesFetched>m__33(GK_FetchResult)
extern "C"  void ISN_GameSaves_U3CActionSavesFetchedU3Em__33_m702560648 (Il2CppObject * __this /* static, unused */, GK_FetchResult_t3785760892 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_GameSaves::<ActionSavesResolved>m__34(GK_SavesResolveResult)
extern "C"  void ISN_GameSaves_U3CActionSavesResolvedU3Em__34_m2052291734 (Il2CppObject * __this /* static, unused */, GK_SavesResolveResult_t4177305998 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
