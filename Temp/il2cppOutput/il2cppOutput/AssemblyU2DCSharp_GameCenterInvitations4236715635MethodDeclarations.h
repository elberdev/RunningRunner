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

// GameCenterInvitations
struct GameCenterInvitations_t4236715635;
// System.Action`2<GK_Player,GK_InviteRecipientResponse>
struct Action_2_t3597305064;
// System.Action`2<GK_MatchType,GK_Invite>
struct Action_2_t3168301326;
// System.Action`3<GK_MatchType,System.String[],GK_Player[]>
struct Action_3_t4119704165;
// System.String
struct String_t;
// GK_Player
struct GK_Player_t3188093628;
// GK_Invite
struct GK_Invite_t2990147300;
// System.String[]
struct StringU5BU5D_t2956870243;
// GK_Player[]
struct GK_PlayerU5BU5D_t1068965589;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_GK_Player3188093628.h"
#include "AssemblyU2DCSharp_GK_InviteRecipientResponse3566477046.h"
#include "AssemblyU2DCSharp_GK_MatchType76663012.h"
#include "AssemblyU2DCSharp_GK_Invite2990147300.h"

// System.Void GameCenterInvitations::.ctor()
extern "C"  void GameCenterInvitations__ctor_m310928472 (GameCenterInvitations_t4236715635 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterInvitations::.cctor()
extern "C"  void GameCenterInvitations__cctor_m566751829 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterInvitations::add_ActionInviteeResponse(System.Action`2<GK_Player,GK_InviteRecipientResponse>)
extern "C"  void GameCenterInvitations_add_ActionInviteeResponse_m3928917136 (Il2CppObject * __this /* static, unused */, Action_2_t3597305064 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterInvitations::remove_ActionInviteeResponse(System.Action`2<GK_Player,GK_InviteRecipientResponse>)
extern "C"  void GameCenterInvitations_remove_ActionInviteeResponse_m1928347543 (Il2CppObject * __this /* static, unused */, Action_2_t3597305064 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterInvitations::add_ActionPlayerAcceptedInvitation(System.Action`2<GK_MatchType,GK_Invite>)
extern "C"  void GameCenterInvitations_add_ActionPlayerAcceptedInvitation_m1991235620 (Il2CppObject * __this /* static, unused */, Action_2_t3168301326 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterInvitations::remove_ActionPlayerAcceptedInvitation(System.Action`2<GK_MatchType,GK_Invite>)
extern "C"  void GameCenterInvitations_remove_ActionPlayerAcceptedInvitation_m560534717 (Il2CppObject * __this /* static, unused */, Action_2_t3168301326 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterInvitations::add_ActionPlayerRequestedMatchWithRecipients(System.Action`3<GK_MatchType,System.String[],GK_Player[]>)
extern "C"  void GameCenterInvitations_add_ActionPlayerRequestedMatchWithRecipients_m1241004652 (Il2CppObject * __this /* static, unused */, Action_3_t4119704165 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterInvitations::remove_ActionPlayerRequestedMatchWithRecipients(System.Action`3<GK_MatchType,System.String[],GK_Player[]>)
extern "C"  void GameCenterInvitations_remove_ActionPlayerRequestedMatchWithRecipients_m2139031429 (Il2CppObject * __this /* static, unused */, Action_3_t4119704165 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterInvitations::Awake()
extern "C"  void GameCenterInvitations_Awake_m548533691 (GameCenterInvitations_t4236715635 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterInvitations::Init()
extern "C"  void GameCenterInvitations_Init_m377208572 (GameCenterInvitations_t4236715635 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterInvitations::OnInviteeResponse(System.String)
extern "C"  void GameCenterInvitations_OnInviteeResponse_m1015112206 (GameCenterInvitations_t4236715635 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterInvitations::OnPlayerAcceptedInvitation_RTM(System.String)
extern "C"  void GameCenterInvitations_OnPlayerAcceptedInvitation_RTM_m1816305898 (GameCenterInvitations_t4236715635 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterInvitations::OnPlayerRequestedMatchWithRecipients_RTM(System.String)
extern "C"  void GameCenterInvitations_OnPlayerRequestedMatchWithRecipients_RTM_m3761024563 (GameCenterInvitations_t4236715635 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterInvitations::OnPlayerAcceptedInvitation_TBM(System.String)
extern "C"  void GameCenterInvitations_OnPlayerAcceptedInvitation_TBM_m1232390422 (GameCenterInvitations_t4236715635 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterInvitations::OnPlayerRequestedMatchWithRecipients_TBM(System.String)
extern "C"  void GameCenterInvitations_OnPlayerRequestedMatchWithRecipients_TBM_m3177109087 (GameCenterInvitations_t4236715635 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterInvitations::<ActionInviteeResponse>m__D(GK_Player,GK_InviteRecipientResponse)
extern "C"  void GameCenterInvitations_U3CActionInviteeResponseU3Em__D_m1591526586 (Il2CppObject * __this /* static, unused */, GK_Player_t3188093628 * p0, int32_t p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterInvitations::<ActionPlayerAcceptedInvitation>m__E(GK_MatchType,GK_Invite)
extern "C"  void GameCenterInvitations_U3CActionPlayerAcceptedInvitationU3Em__E_m3012585171 (Il2CppObject * __this /* static, unused */, int32_t p0, GK_Invite_t2990147300 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterInvitations::<ActionPlayerRequestedMatchWithRecipients>m__F(GK_MatchType,System.String[],GK_Player[])
extern "C"  void GameCenterInvitations_U3CActionPlayerRequestedMatchWithRecipientsU3Em__F_m3623430781 (Il2CppObject * __this /* static, unused */, int32_t p0, StringU5BU5D_t2956870243* p1, GK_PlayerU5BU5D_t1068965589* p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
