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

// GameCenter_RTM
struct GameCenter_RTM_t3307156755;
// System.Action`1<GK_RTM_MatchStartedResult>
struct Action_1_t421858281;
// System.Action`1<ISN_Error>
struct Action_1_t3265444782;
// System.Action`2<GK_Player,System.Boolean>
struct Action_2_t241833359;
// System.Action`1<GK_RTM_QueryActivityResult>
struct Action_1_t1286807014;
// System.Action`2<GK_Player,System.Byte[]>
struct Action_2_t89334178;
// System.Action`3<GK_Player,GK_PlayerConnectionState,GK_RTM_Match>
struct Action_3_t3017981018;
// System.Action`1<GK_Player>
struct Action_1_t3336546333;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t2956870243;
// GK_Invite
struct GK_Invite_t2990147300;
// GK_Player
struct GK_Player_t3188093628;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// GK_Player[]
struct GK_PlayerU5BU5D_t1068965589;
// GK_RTM_Match
struct GK_RTM_Match_t2350619926;
// System.Collections.Generic.List`1<GK_Player>
struct List_1_t3985052597;
// System.Collections.Generic.Dictionary`2<System.String,GK_Player>
struct Dictionary_2_t530824236;
// GK_RTM_MatchStartedResult
struct GK_RTM_MatchStartedResult_t273405576;
// ISN_Error
struct ISN_Error_t3116992077;
// GK_RTM_QueryActivityResult
struct GK_RTM_QueryActivityResult_t1138354309;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_GK_Invite2990147300.h"
#include "AssemblyU2DCSharp_GK_Player3188093628.h"
#include "AssemblyU2DCSharp_GK_MatchSendDataMode2941244351.h"
#include "AssemblyU2DCSharp_GK_RTM_MatchStartedResult273405576.h"
#include "AssemblyU2DCSharp_ISN_Error3116992077.h"
#include "AssemblyU2DCSharp_GK_RTM_QueryActivityResult1138354309.h"
#include "AssemblyU2DCSharp_GK_PlayerConnectionState1085203959.h"
#include "AssemblyU2DCSharp_GK_RTM_Match2350619926.h"

// System.Void GameCenter_RTM::.ctor()
extern "C"  void GameCenter_RTM__ctor_m1236638952 (GameCenter_RTM_t3307156755 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::.cctor()
extern "C"  void GameCenter_RTM__cctor_m3493972933 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::add_ActionMatchStarted(System.Action`1<GK_RTM_MatchStartedResult>)
extern "C"  void GameCenter_RTM_add_ActionMatchStarted_m3954600512 (Il2CppObject * __this /* static, unused */, Action_1_t421858281 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::remove_ActionMatchStarted(System.Action`1<GK_RTM_MatchStartedResult>)
extern "C"  void GameCenter_RTM_remove_ActionMatchStarted_m1275223207 (Il2CppObject * __this /* static, unused */, Action_1_t421858281 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::add_ActionMatchFailed(System.Action`1<ISN_Error>)
extern "C"  void GameCenter_RTM_add_ActionMatchFailed_m2309940269 (Il2CppObject * __this /* static, unused */, Action_1_t3265444782 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::remove_ActionMatchFailed(System.Action`1<ISN_Error>)
extern "C"  void GameCenter_RTM_remove_ActionMatchFailed_m3907132134 (Il2CppObject * __this /* static, unused */, Action_1_t3265444782 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::add_ActionNearbyPlayerStateUpdated(System.Action`2<GK_Player,System.Boolean>)
extern "C"  void GameCenter_RTM_add_ActionNearbyPlayerStateUpdated_m3735082216 (Il2CppObject * __this /* static, unused */, Action_2_t241833359 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::remove_ActionNearbyPlayerStateUpdated(System.Action`2<GK_Player,System.Boolean>)
extern "C"  void GameCenter_RTM_remove_ActionNearbyPlayerStateUpdated_m4165151777 (Il2CppObject * __this /* static, unused */, Action_2_t241833359 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::add_ActionActivityResultReceived(System.Action`1<GK_RTM_QueryActivityResult>)
extern "C"  void GameCenter_RTM_add_ActionActivityResultReceived_m1085403602 (Il2CppObject * __this /* static, unused */, Action_1_t1286807014 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::remove_ActionActivityResultReceived(System.Action`1<GK_RTM_QueryActivityResult>)
extern "C"  void GameCenter_RTM_remove_ActionActivityResultReceived_m1515473163 (Il2CppObject * __this /* static, unused */, Action_1_t1286807014 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::add_ActionDataSendError(System.Action`1<ISN_Error>)
extern "C"  void GameCenter_RTM_add_ActionDataSendError_m2007044705 (Il2CppObject * __this /* static, unused */, Action_1_t3265444782 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::remove_ActionDataSendError(System.Action`1<ISN_Error>)
extern "C"  void GameCenter_RTM_remove_ActionDataSendError_m3605102298 (Il2CppObject * __this /* static, unused */, Action_1_t3265444782 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::add_ActionDataReceived(System.Action`2<GK_Player,System.Byte[]>)
extern "C"  void GameCenter_RTM_add_ActionDataReceived_m1737956737 (Il2CppObject * __this /* static, unused */, Action_2_t89334178 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::remove_ActionDataReceived(System.Action`2<GK_Player,System.Byte[]>)
extern "C"  void GameCenter_RTM_remove_ActionDataReceived_m591035816 (Il2CppObject * __this /* static, unused */, Action_2_t89334178 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::add_ActionPlayerStateChanged(System.Action`3<GK_Player,GK_PlayerConnectionState,GK_RTM_Match>)
extern "C"  void GameCenter_RTM_add_ActionPlayerStateChanged_m3121951901 (Il2CppObject * __this /* static, unused */, Action_3_t3017981018 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::remove_ActionPlayerStateChanged(System.Action`3<GK_Player,GK_PlayerConnectionState,GK_RTM_Match>)
extern "C"  void GameCenter_RTM_remove_ActionPlayerStateChanged_m822548100 (Il2CppObject * __this /* static, unused */, Action_3_t3017981018 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::add_ActionDiconnectedPlayerReinvited(System.Action`1<GK_Player>)
extern "C"  void GameCenter_RTM_add_ActionDiconnectedPlayerReinvited_m1294130171 (Il2CppObject * __this /* static, unused */, Action_1_t3336546333 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::remove_ActionDiconnectedPlayerReinvited(System.Action`1<GK_Player>)
extern "C"  void GameCenter_RTM_remove_ActionDiconnectedPlayerReinvited_m147209250 (Il2CppObject * __this /* static, unused */, Action_1_t3336546333 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::_ISN_RTM_FindMatch(System.Int32,System.Int32,System.String,System.String)
extern "C"  void GameCenter_RTM__ISN_RTM_FindMatch_m2438002180 (Il2CppObject * __this /* static, unused */, int32_t ___minPlayers, int32_t ___maxPlayers, String_t* ___msg, String_t* ___invitations, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::_ISN_RTM_FindMatchWithNativeUI(System.Int32,System.Int32,System.String,System.String)
extern "C"  void GameCenter_RTM__ISN_RTM_FindMatchWithNativeUI_m3370562675 (Il2CppObject * __this /* static, unused */, int32_t ___minPlayers, int32_t ___maxPlayers, String_t* ___msg, String_t* ___invitations, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::_ISN_RTM_SetPlayerGroup(System.Int32)
extern "C"  void GameCenter_RTM__ISN_RTM_SetPlayerGroup_m1246903169 (Il2CppObject * __this /* static, unused */, int32_t ___group, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::_ISN_RTM_SetPlayerAttributes(System.Int32)
extern "C"  void GameCenter_RTM__ISN_RTM_SetPlayerAttributes_m3304521081 (Il2CppObject * __this /* static, unused */, int32_t ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::ISN_RTM_StartMatchWithInviteID(System.String,System.Boolean)
extern "C"  void GameCenter_RTM_ISN_RTM_StartMatchWithInviteID_m2034931955 (Il2CppObject * __this /* static, unused */, String_t* ___inviteId, bool ___useNativeUI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::ISN_RTM_CancelPendingInviteToPlayerWithId(System.String)
extern "C"  void GameCenter_RTM_ISN_RTM_CancelPendingInviteToPlayerWithId_m2471754152 (Il2CppObject * __this /* static, unused */, String_t* ___playerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::ISN_RTM_CancelMatchSeartch()
extern "C"  void GameCenter_RTM_ISN_RTM_CancelMatchSeartch_m1825824854 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::ISN_RTM_FinishMatchmaking()
extern "C"  void GameCenter_RTM_ISN_RTM_FinishMatchmaking_m530549268 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::ISN_RTM_QueryActivity()
extern "C"  void GameCenter_RTM_ISN_RTM_QueryActivity_m2422500334 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::ISN_RTM_QueryPlayerGroupActivity(System.Int32)
extern "C"  void GameCenter_RTM_ISN_RTM_QueryPlayerGroupActivity_m2848240129 (Il2CppObject * __this /* static, unused */, int32_t ___group, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::ISN_RTM_StartBrowsingForNearbyPlayers()
extern "C"  void GameCenter_RTM_ISN_RTM_StartBrowsingForNearbyPlayers_m1781290570 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::ISN_RTM_StopBrowsingForNearbyPlayers()
extern "C"  void GameCenter_RTM_ISN_RTM_StopBrowsingForNearbyPlayers_m789805502 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::ISN_RTM_Rematch()
extern "C"  void GameCenter_RTM_ISN_RTM_Rematch_m1903510825 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::ISN_RTM_Disconnect()
extern "C"  void GameCenter_RTM_ISN_RTM_Disconnect_m1412166055 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::ISN_RTM_SendData(System.String,System.String,System.Int32)
extern "C"  void GameCenter_RTM_ISN_RTM_SendData_m1456214582 (Il2CppObject * __this /* static, unused */, String_t* ___data, String_t* ___playersIds, int32_t ___dataMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::ISN_RTM_SendDataToAll(System.String,System.Int32)
extern "C"  void GameCenter_RTM_ISN_RTM_SendDataToAll_m3243842304 (Il2CppObject * __this /* static, unused */, String_t* ___data, int32_t ___dataMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::Awake()
extern "C"  void GameCenter_RTM_Awake_m1474244171 (GameCenter_RTM_t3307156755 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::FindMatch(System.Int32,System.Int32,System.String,System.String[])
extern "C"  void GameCenter_RTM_FindMatch_m58342634 (GameCenter_RTM_t3307156755 * __this, int32_t ___minPlayers, int32_t ___maxPlayers, String_t* ___msg, StringU5BU5D_t2956870243* ___playersToInvite, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::FindMatchWithNativeUI(System.Int32,System.Int32,System.String,System.String[])
extern "C"  void GameCenter_RTM_FindMatchWithNativeUI_m1838100377 (GameCenter_RTM_t3307156755 * __this, int32_t ___minPlayers, int32_t ___maxPlayers, String_t* ___msg, StringU5BU5D_t2956870243* ___playersToInvite, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::SetPlayerGroup(System.Int32)
extern "C"  void GameCenter_RTM_SetPlayerGroup_m1027834441 (GameCenter_RTM_t3307156755 * __this, int32_t ___group, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::SetPlayerAttributes(System.Int32)
extern "C"  void GameCenter_RTM_SetPlayerAttributes_m3375018929 (GameCenter_RTM_t3307156755 * __this, int32_t ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::StartMatchWithInvite(GK_Invite,System.Boolean)
extern "C"  void GameCenter_RTM_StartMatchWithInvite_m492606237 (GameCenter_RTM_t3307156755 * __this, GK_Invite_t2990147300 * ___invite, bool ___useNativeUI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::CancelPendingInviteToPlayer(GK_Player)
extern "C"  void GameCenter_RTM_CancelPendingInviteToPlayer_m3805222318 (GameCenter_RTM_t3307156755 * __this, GK_Player_t3188093628 * ___player, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::CancelMatchSearch()
extern "C"  void GameCenter_RTM_CancelMatchSearch_m2283191993 (GameCenter_RTM_t3307156755 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::FinishMatchmaking()
extern "C"  void GameCenter_RTM_FinishMatchmaking_m2339705315 (GameCenter_RTM_t3307156755 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::QueryActivity()
extern "C"  void GameCenter_RTM_QueryActivity_m924595005 (GameCenter_RTM_t3307156755 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::QueryPlayerGroupActivity(System.Int32)
extern "C"  void GameCenter_RTM_QueryPlayerGroupActivity_m1605902802 (GameCenter_RTM_t3307156755 * __this, int32_t ___group, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::StartBrowsingForNearbyPlayers()
extern "C"  void GameCenter_RTM_StartBrowsingForNearbyPlayers_m3001130905 (GameCenter_RTM_t3307156755 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::StopBrowsingForNearbyPlayers()
extern "C"  void GameCenter_RTM_StopBrowsingForNearbyPlayers_m1660439183 (GameCenter_RTM_t3307156755 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::Rematch()
extern "C"  void GameCenter_RTM_Rematch_m3526128568 (GameCenter_RTM_t3307156755 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::Disconnect()
extern "C"  void GameCenter_RTM_Disconnect_m960431288 (GameCenter_RTM_t3307156755 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::SendDataToAll(System.Byte[],GK_MatchSendDataMode)
extern "C"  void GameCenter_RTM_SendDataToAll_m755662456 (GameCenter_RTM_t3307156755 * __this, ByteU5BU5D_t58506160* ___data, int32_t ___dataMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::SendData(System.Byte[],GK_MatchSendDataMode,GK_Player[])
extern "C"  void GameCenter_RTM_SendData_m2265823098 (GameCenter_RTM_t3307156755 * __this, ByteU5BU5D_t58506160* ___data, int32_t ___dataMode, GK_PlayerU5BU5D_t1068965589* ___players, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GK_RTM_Match GameCenter_RTM::get_CurrentMatch()
extern "C"  GK_RTM_Match_t2350619926 * GameCenter_RTM_get_CurrentMatch_m3829749208 (GameCenter_RTM_t3307156755 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GK_Player> GameCenter_RTM::get_NearbyPlayersList()
extern "C"  List_1_t3985052597 * GameCenter_RTM_get_NearbyPlayersList_m1595857841 (GameCenter_RTM_t3307156755 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,GK_Player> GameCenter_RTM::get_NearbyPlayers()
extern "C"  Dictionary_2_t530824236 * GameCenter_RTM_get_NearbyPlayers_m4075923414 (GameCenter_RTM_t3307156755 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::OnMatchStartFailed(System.String)
extern "C"  void GameCenter_RTM_OnMatchStartFailed_m2000413453 (GameCenter_RTM_t3307156755 * __this, String_t* ___errorData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::OnMatchStarted(System.String)
extern "C"  void GameCenter_RTM_OnMatchStarted_m1282287371 (GameCenter_RTM_t3307156755 * __this, String_t* ___matchData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::OnMatchFailed(System.String)
extern "C"  void GameCenter_RTM_OnMatchFailed_m1461635673 (GameCenter_RTM_t3307156755 * __this, String_t* ___errorData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::OnNearbyPlayerInfoReceived(System.String)
extern "C"  void GameCenter_RTM_OnNearbyPlayerInfoReceived_m3863326104 (GameCenter_RTM_t3307156755 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::OnQueryActivity(System.String)
extern "C"  void GameCenter_RTM_OnQueryActivity_m1292462500 (GameCenter_RTM_t3307156755 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::OnQueryActivityFailed(System.String)
extern "C"  void GameCenter_RTM_OnQueryActivityFailed_m751416679 (GameCenter_RTM_t3307156755 * __this, String_t* ___errorData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::OnMatchInfoUpdated(System.String)
extern "C"  void GameCenter_RTM_OnMatchInfoUpdated_m2383939679 (GameCenter_RTM_t3307156755 * __this, String_t* ___matchData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::OnMatchPlayerStateChanged(System.String)
extern "C"  void GameCenter_RTM_OnMatchPlayerStateChanged_m4054969810 (GameCenter_RTM_t3307156755 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::OnDiconnectedPlayerReinvited(System.String)
extern "C"  void GameCenter_RTM_OnDiconnectedPlayerReinvited_m3436815972 (GameCenter_RTM_t3307156755 * __this, String_t* ___playerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::OnMatchDataReceived(System.String)
extern "C"  void GameCenter_RTM_OnMatchDataReceived_m1977900395 (GameCenter_RTM_t3307156755 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::OnSendDataError(System.String)
extern "C"  void GameCenter_RTM_OnSendDataError_m3932733925 (GameCenter_RTM_t3307156755 * __this, String_t* ___errorData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GK_RTM_Match GameCenter_RTM::ParseMatchData(System.String)
extern "C"  GK_RTM_Match_t2350619926 * GameCenter_RTM_ParseMatchData_m3183961411 (GameCenter_RTM_t3307156755 * __this, String_t* ___matchData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::<ActionMatchStarted>m__1C(GK_RTM_MatchStartedResult)
extern "C"  void GameCenter_RTM_U3CActionMatchStartedU3Em__1C_m326688949 (Il2CppObject * __this /* static, unused */, GK_RTM_MatchStartedResult_t273405576 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::<ActionMatchFailed>m__1D(ISN_Error)
extern "C"  void GameCenter_RTM_U3CActionMatchFailedU3Em__1D_m2676790807 (Il2CppObject * __this /* static, unused */, ISN_Error_t3116992077 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::<ActionNearbyPlayerStateUpdated>m__1E(GK_Player,System.Boolean)
extern "C"  void GameCenter_RTM_U3CActionNearbyPlayerStateUpdatedU3Em__1E_m3463364524 (Il2CppObject * __this /* static, unused */, GK_Player_t3188093628 * p0, bool p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::<ActionActivityResultReceived>m__1F(GK_RTM_QueryActivityResult)
extern "C"  void GameCenter_RTM_U3CActionActivityResultReceivedU3Em__1F_m3624638532 (Il2CppObject * __this /* static, unused */, GK_RTM_QueryActivityResult_t1138354309 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::<ActionDataSendError>m__20(ISN_Error)
extern "C"  void GameCenter_RTM_U3CActionDataSendErrorU3Em__20_m3652446584 (Il2CppObject * __this /* static, unused */, ISN_Error_t3116992077 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::<ActionDataReceived>m__21(GK_Player,System.Byte[])
extern "C"  void GameCenter_RTM_U3CActionDataReceivedU3Em__21_m1556282440 (Il2CppObject * __this /* static, unused */, GK_Player_t3188093628 * p0, ByteU5BU5D_t58506160* p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::<ActionPlayerStateChanged>m__22(GK_Player,GK_PlayerConnectionState,GK_RTM_Match)
extern "C"  void GameCenter_RTM_U3CActionPlayerStateChangedU3Em__22_m3223039340 (Il2CppObject * __this /* static, unused */, GK_Player_t3188093628 * p0, int32_t p1, GK_RTM_Match_t2350619926 * p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenter_RTM::<ActionDiconnectedPlayerReinvited>m__23(GK_Player)
extern "C"  void GameCenter_RTM_U3CActionDiconnectedPlayerReinvitedU3Em__23_m2887563115 (Il2CppObject * __this /* static, unused */, GK_Player_t3188093628 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
