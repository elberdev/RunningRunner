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

// PTPGameController
struct PTPGameController_t4082758426;
// ISN_Result
struct ISN_Result_t2497682552;
// GK_Player
struct GK_Player_t3188093628;
// GK_RTM_Match
struct GK_RTM_Match_t2350619926;
// GK_RTM_MatchStartedResult
struct GK_RTM_MatchStartedResult_t273405576;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "AssemblyU2DCSharp_ISN_Result2497682552.h"
#include "AssemblyU2DCSharp_GK_Player3188093628.h"
#include "AssemblyU2DCSharp_GK_PlayerConnectionState1085203959.h"
#include "AssemblyU2DCSharp_GK_RTM_Match2350619926.h"
#include "AssemblyU2DCSharp_GK_RTM_MatchStartedResult273405576.h"

// System.Void PTPGameController::.ctor()
extern "C"  void PTPGameController__ctor_m3731920785 (PTPGameController_t4082758426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PTPGameController::Awake()
extern "C"  void PTPGameController_Awake_m3969526004 (PTPGameController_t4082758426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PTPGameController::createRedSphere(UnityEngine.Vector3)
extern "C"  void PTPGameController_createRedSphere_m3707768648 (PTPGameController_t4082758426 * __this, Vector3_t3525329789  ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PTPGameController::createGreenSphere(UnityEngine.Vector3)
extern "C"  void PTPGameController_createGreenSphere_m335214102 (PTPGameController_t4082758426 * __this, Vector3_t3525329789  ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PTPGameController::OnAuthFinished(ISN_Result)
extern "C"  void PTPGameController_OnAuthFinished_m4154965844 (PTPGameController_t4082758426 * __this, ISN_Result_t2497682552 * ___res, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PTPGameController::HandleActionPlayerStateChanged(GK_Player,GK_PlayerConnectionState,GK_RTM_Match)
extern "C"  void PTPGameController_HandleActionPlayerStateChanged_m3974812770 (PTPGameController_t4082758426 * __this, GK_Player_t3188093628 * ___player, int32_t ___state, GK_RTM_Match_t2350619926 * ___macth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PTPGameController::HandleActionMatchStarted(GK_RTM_MatchStartedResult)
extern "C"  void PTPGameController_HandleActionMatchStarted_m3608554141 (PTPGameController_t4082758426 * __this, GK_RTM_MatchStartedResult_t273405576 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PTPGameController::CheckMatchState(GK_RTM_Match)
extern "C"  void PTPGameController_CheckMatchState_m2336100813 (PTPGameController_t4082758426 * __this, GK_RTM_Match_t2350619926 * ___macth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PTPGameController::cleanUpScene()
extern "C"  void PTPGameController_cleanUpScene_m484075419 (PTPGameController_t4082758426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
