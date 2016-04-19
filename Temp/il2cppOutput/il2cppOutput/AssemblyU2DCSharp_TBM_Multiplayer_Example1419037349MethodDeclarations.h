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

// TBM_Multiplayer_Example
struct TBM_Multiplayer_Example_t1419037349;
// GK_Player
struct GK_Player_t3188093628;
// GK_Invite
struct GK_Invite_t2990147300;
// System.String[]
struct StringU5BU5D_t2956870243;
// GK_Player[]
struct GK_PlayerU5BU5D_t1068965589;
// GK_RTM_MatchStartedResult
struct GK_RTM_MatchStartedResult_t273405576;
// GK_UserPhotoLoadResult
struct GK_UserPhotoLoadResult_t2258278703;
// ISN_Result
struct ISN_Result_t2497682552;
// GK_TBM_LoadMatchesResult
struct GK_TBM_LoadMatchesResult_t1624868367;
// GK_TBM_MatchDataUpdateResult
struct GK_TBM_MatchDataUpdateResult_t3764325018;
// GK_TBM_EndTrunResult
struct GK_TBM_EndTrunResult_t2662117492;
// GK_TBM_MatchEndResult
struct GK_TBM_MatchEndResult_t2633756814;
// GK_TBM_MatchRemovedResult
struct GK_TBM_MatchRemovedResult_t521092435;
// GK_TBM_Match
struct GK_TBM_Match_t1724863338;
// GK_TBM_MatchInitResult
struct GK_TBM_MatchInitResult_t3228532823;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GK_Player3188093628.h"
#include "AssemblyU2DCSharp_GK_MatchType76663012.h"
#include "AssemblyU2DCSharp_GK_Invite2990147300.h"
#include "AssemblyU2DCSharp_GK_RTM_MatchStartedResult273405576.h"
#include "AssemblyU2DCSharp_GK_UserPhotoLoadResult2258278703.h"
#include "AssemblyU2DCSharp_ISN_Result2497682552.h"
#include "AssemblyU2DCSharp_GK_TBM_LoadMatchesResult1624868367.h"
#include "AssemblyU2DCSharp_GK_TBM_MatchDataUpdateResult3764325018.h"
#include "AssemblyU2DCSharp_GK_TBM_EndTrunResult2662117492.h"
#include "AssemblyU2DCSharp_GK_TBM_MatchEndResult2633756814.h"
#include "AssemblyU2DCSharp_GK_TBM_MatchRemovedResult521092435.h"
#include "AssemblyU2DCSharp_GK_TBM_MatchInitResult3228532823.h"

// System.Void TBM_Multiplayer_Example::.ctor()
extern "C"  void TBM_Multiplayer_Example__ctor_m2928852582 (TBM_Multiplayer_Example_t1419037349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBM_Multiplayer_Example::.cctor()
extern "C"  void TBM_Multiplayer_Example__cctor_m118020615 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBM_Multiplayer_Example::Awake()
extern "C"  void TBM_Multiplayer_Example_Awake_m3166457801 (TBM_Multiplayer_Example_t1419037349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBM_Multiplayer_Example::HandleActionNearbyPlayerStateUpdated(GK_Player,System.Boolean)
extern "C"  void TBM_Multiplayer_Example_HandleActionNearbyPlayerStateUpdated_m3109591501 (TBM_Multiplayer_Example_t1419037349 * __this, GK_Player_t3188093628 * ___player, bool ___IsAvaliable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBM_Multiplayer_Example::HandleActionPlayerAcceptedInvitation(GK_MatchType,GK_Invite)
extern "C"  void TBM_Multiplayer_Example_HandleActionPlayerAcceptedInvitation_m3142825665 (TBM_Multiplayer_Example_t1419037349 * __this, int32_t ___matchType, GK_Invite_t2990147300 * ___invite, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBM_Multiplayer_Example::HandleActionPlayerRequestedMatchWithRecipients(GK_MatchType,System.String[],GK_Player[])
extern "C"  void TBM_Multiplayer_Example_HandleActionPlayerRequestedMatchWithRecipients_m2440895864 (TBM_Multiplayer_Example_t1419037349 * __this, int32_t ___matchType, StringU5BU5D_t2956870243* ___recepientIds, GK_PlayerU5BU5D_t1068965589* ___recepients, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBM_Multiplayer_Example::HandleActionMatchStarted(GK_RTM_MatchStartedResult)
extern "C"  void TBM_Multiplayer_Example_HandleActionMatchStarted_m14231026 (TBM_Multiplayer_Example_t1419037349 * __this, GK_RTM_MatchStartedResult_t273405576 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBM_Multiplayer_Example::HandleOnPlayerPhotoLoaded(GK_UserPhotoLoadResult)
extern "C"  void TBM_Multiplayer_Example_HandleOnPlayerPhotoLoaded_m2336744772 (TBM_Multiplayer_Example_t1419037349 * __this, GK_UserPhotoLoadResult_t2258278703 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBM_Multiplayer_Example::OnGUI()
extern "C"  void TBM_Multiplayer_Example_OnGUI_m2424251232 (TBM_Multiplayer_Example_t1419037349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBM_Multiplayer_Example::OnAuthFinished(ISN_Result)
extern "C"  void TBM_Multiplayer_Example_OnAuthFinished_m1606366815 (TBM_Multiplayer_Example_t1419037349 * __this, ISN_Result_t2497682552 * ___res, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBM_Multiplayer_Example::ActionMatchesResultLoaded(GK_TBM_LoadMatchesResult)
extern "C"  void TBM_Multiplayer_Example_ActionMatchesResultLoaded_m4005020500 (TBM_Multiplayer_Example_t1419037349 * __this, GK_TBM_LoadMatchesResult_t1624868367 * ___res, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBM_Multiplayer_Example::ActionMatchDataUpdated(GK_TBM_MatchDataUpdateResult)
extern "C"  void TBM_Multiplayer_Example_ActionMatchDataUpdated_m931037574 (TBM_Multiplayer_Example_t1419037349 * __this, GK_TBM_MatchDataUpdateResult_t3764325018 * ___res, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBM_Multiplayer_Example::ActionTrunEnded(GK_TBM_EndTrunResult)
extern "C"  void TBM_Multiplayer_Example_ActionTrunEnded_m4144635997 (TBM_Multiplayer_Example_t1419037349 * __this, GK_TBM_EndTrunResult_t2662117492 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBM_Multiplayer_Example::ActionMacthEnded(GK_TBM_MatchEndResult)
extern "C"  void TBM_Multiplayer_Example_ActionMacthEnded_m3374295065 (TBM_Multiplayer_Example_t1419037349 * __this, GK_TBM_MatchEndResult_t2633756814 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBM_Multiplayer_Example::ActionMacthRemoved(GK_TBM_MatchRemovedResult)
extern "C"  void TBM_Multiplayer_Example_ActionMacthRemoved_m1491721102 (TBM_Multiplayer_Example_t1419037349 * __this, GK_TBM_MatchRemovedResult_t521092435 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GK_TBM_Match TBM_Multiplayer_Example::get_CurrentMatch()
extern "C"  GK_TBM_Match_t1724863338 * TBM_Multiplayer_Example_get_CurrentMatch_m3544064384 (TBM_Multiplayer_Example_t1419037349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TBM_Multiplayer_Example::ActionMatchFound(GK_TBM_MatchInitResult)
extern "C"  void TBM_Multiplayer_Example_ActionMatchFound_m4219060730 (TBM_Multiplayer_Example_t1419037349 * __this, GK_TBM_MatchInitResult_t3228532823 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
