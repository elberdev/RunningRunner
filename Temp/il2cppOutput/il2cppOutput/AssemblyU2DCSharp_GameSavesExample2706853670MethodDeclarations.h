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

// GameSavesExample
struct GameSavesExample_t2706853670;
// System.String
struct String_t;
// GK_SavedGame
struct GK_SavedGame_t3944999262;
// System.Collections.Generic.List`1<GK_SavedGame>
struct List_1_t446990935;
// ISN_Result
struct ISN_Result_t2497682552;
// GK_SaveResult
struct GK_SaveResult_t1548818005;
// GK_SaveRemoveResult
struct GK_SaveRemoveResult_t3368549881;
// GK_SaveDataLoaded
struct GK_SaveDataLoaded_t1755223687;
// GK_FetchResult
struct GK_FetchResult_t3785760892;
// GK_SavesResolveResult
struct GK_SavesResolveResult_t4177305998;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_ISN_Result2497682552.h"
#include "AssemblyU2DCSharp_GK_SaveResult1548818005.h"
#include "AssemblyU2DCSharp_GK_SaveRemoveResult3368549881.h"
#include "AssemblyU2DCSharp_GK_SaveDataLoaded1755223687.h"
#include "AssemblyU2DCSharp_GK_FetchResult3785760892.h"
#include "AssemblyU2DCSharp_GK_SavesResolveResult4177305998.h"

// System.Void GameSavesExample::.ctor()
extern "C"  void GameSavesExample__ctor_m3316482613 (GameSavesExample_t2706853670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameSavesExample::Awake()
extern "C"  void GameSavesExample_Awake_m3554087832 (GameSavesExample_t2706853670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameSavesExample::OnGUI()
extern "C"  void GameSavesExample_OnGUI_m2811881263 (GameSavesExample_t2706853670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameSavesExample::Save(System.String)
extern "C"  void GameSavesExample_Save_m579792854 (GameSavesExample_t2706853670 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameSavesExample::Fetch()
extern "C"  void GameSavesExample_Fetch_m3198625677 (GameSavesExample_t2706853670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameSavesExample::Delete(System.String)
extern "C"  void GameSavesExample_Delete_m2899508584 (GameSavesExample_t2706853670 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameSavesExample::Load()
extern "C"  void GameSavesExample_Load_m145077205 (GameSavesExample_t2706853670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameSavesExample::ResolveConflicts()
extern "C"  void GameSavesExample_ResolveConflicts_m1130360964 (GameSavesExample_t2706853670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GK_SavedGame GameSavesExample::GetLoadedSave(System.String)
extern "C"  GK_SavedGame_t3944999262 * GameSavesExample_GetLoadedSave_m1879042262 (GameSavesExample_t2706853670 * __this, String_t* ___saveGameName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GK_SavedGame> GameSavesExample::GetConflict()
extern "C"  List_1_t446990935 * GameSavesExample_GetConflict_m2005905866 (GameSavesExample_t2706853670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameSavesExample::GetConflictsCount()
extern "C"  int32_t GameSavesExample_GetConflictsCount_m4167652777 (GameSavesExample_t2706853670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameSavesExample::CheckSavesOnDuplicates()
extern "C"  void GameSavesExample_CheckSavesOnDuplicates_m1216811332 (GameSavesExample_t2706853670 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameSavesExample::HandleOnAuthFinished(ISN_Result)
extern "C"  void GameSavesExample_HandleOnAuthFinished_m1235781624 (GameSavesExample_t2706853670 * __this, ISN_Result_t2497682552 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameSavesExample::HandleActionGameSaved(GK_SaveResult)
extern "C"  void GameSavesExample_HandleActionGameSaved_m1817259987 (GameSavesExample_t2706853670 * __this, GK_SaveResult_t1548818005 * ___res, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameSavesExample::HandleActionSaveRemoved(GK_SaveRemoveResult)
extern "C"  void GameSavesExample_HandleActionSaveRemoved_m3867777217 (GameSavesExample_t2706853670 * __this, GK_SaveRemoveResult_t3368549881 * ___res, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameSavesExample::HandleActionDataLoaded(GK_SaveDataLoaded)
extern "C"  void GameSavesExample_HandleActionDataLoaded_m1065050095 (GameSavesExample_t2706853670 * __this, GK_SaveDataLoaded_t1755223687 * ___res, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameSavesExample::HandleActionSavesFetched(GK_FetchResult)
extern "C"  void GameSavesExample_HandleActionSavesFetched_m2882063092 (GameSavesExample_t2706853670 * __this, GK_FetchResult_t3785760892 * ___res, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameSavesExample::HandleActionSavesResolved(GK_SavesResolveResult)
extern "C"  void GameSavesExample_HandleActionSavesResolved_m1305481121 (GameSavesExample_t2706853670 * __this, GK_SavesResolveResult_t4177305998 * ___res, const MethodInfo* method) IL2CPP_METHOD_ATTR;
