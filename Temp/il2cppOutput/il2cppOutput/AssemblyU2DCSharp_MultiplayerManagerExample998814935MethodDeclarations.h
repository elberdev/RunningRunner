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

// MultiplayerManagerExample
struct MultiplayerManagerExample_t998814935;
// GK_Invite
struct GK_Invite_t2990147300;
// System.String[]
struct StringU5BU5D_t2956870243;
// GK_Player[]
struct GK_PlayerU5BU5D_t1068965589;
// GK_Player
struct GK_Player_t3188093628;
// GK_RTM_Match
struct GK_RTM_Match_t2350619926;
// GK_RTM_MatchStartedResult
struct GK_RTM_MatchStartedResult_t273405576;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GK_MatchType76663012.h"
#include "AssemblyU2DCSharp_GK_Invite2990147300.h"
#include "AssemblyU2DCSharp_GK_Player3188093628.h"
#include "AssemblyU2DCSharp_GK_PlayerConnectionState1085203959.h"
#include "AssemblyU2DCSharp_GK_RTM_Match2350619926.h"
#include "AssemblyU2DCSharp_GK_RTM_MatchStartedResult273405576.h"

// System.Void MultiplayerManagerExample::.ctor()
extern "C"  void MultiplayerManagerExample__ctor_m656675444 (MultiplayerManagerExample_t998814935 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MultiplayerManagerExample::Awake()
extern "C"  void MultiplayerManagerExample_Awake_m894280663 (MultiplayerManagerExample_t998814935 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MultiplayerManagerExample::HandleActionPlayerAcceptedInvitation(GK_MatchType,GK_Invite)
extern "C"  void MultiplayerManagerExample_HandleActionPlayerAcceptedInvitation_m1852821363 (MultiplayerManagerExample_t998814935 * __this, int32_t ___math, GK_Invite_t2990147300 * ___invite, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MultiplayerManagerExample::HandleActionPlayerRequestedMatchWithRecipients(GK_MatchType,System.String[],GK_Player[])
extern "C"  void MultiplayerManagerExample_HandleActionPlayerRequestedMatchWithRecipients_m4187100970 (MultiplayerManagerExample_t998814935 * __this, int32_t ___matchType, StringU5BU5D_t2956870243* ___recepientIds, GK_PlayerU5BU5D_t1068965589* ___recepients, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MultiplayerManagerExample::OnGUI()
extern "C"  void MultiplayerManagerExample_OnGUI_m152074094 (MultiplayerManagerExample_t998814935 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MultiplayerManagerExample::HandleActionPlayerStateChanged(GK_Player,GK_PlayerConnectionState,GK_RTM_Match)
extern "C"  void MultiplayerManagerExample_HandleActionPlayerStateChanged_m3863094341 (MultiplayerManagerExample_t998814935 * __this, GK_Player_t3188093628 * ___player, int32_t ___state, GK_RTM_Match_t2350619926 * ___match, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MultiplayerManagerExample::HandleActionMatchStarted(GK_RTM_MatchStartedResult)
extern "C"  void MultiplayerManagerExample_HandleActionMatchStarted_m3632733440 (MultiplayerManagerExample_t998814935 * __this, GK_RTM_MatchStartedResult_t273405576 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MultiplayerManagerExample::HandleActionDataReceived(GK_Player,System.Byte[])
extern "C"  void MultiplayerManagerExample_HandleActionDataReceived_m2102116224 (MultiplayerManagerExample_t998814935 * __this, GK_Player_t3188093628 * ___player, ByteU5BU5D_t58506160* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
