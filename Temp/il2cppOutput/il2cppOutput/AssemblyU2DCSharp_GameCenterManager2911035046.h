#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,GK_Player>
struct Dictionary_2_t530824236;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1765447871;
// System.Collections.Generic.List`1<GK_LeaderboardSet>
struct List_1_t4285119865;
// GK_Player
struct GK_Player_t3188093628;
// System.Action`1<ISN_Result>
struct Action_1_t2646135257;
// System.Action`1<GK_LeaderboardResult>
struct Action_1_t3482402976;
// System.Action`1<GK_AchievementProgressResult>
struct Action_1_t4264058719;
// System.Action
struct Action_t437523947;
// System.Action`1<GK_UserInfoLoadResult>
struct Action_1_t617892184;
// System.Action`1<GK_PlayerSignatureResult>
struct Action_1_t4146793978;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameCenterManager
struct  GameCenterManager_t2911035046  : public MonoBehaviour_t3012272455
{
public:

public:
};

struct GameCenterManager_t2911035046_StaticFields
{
public:
	// System.Boolean GameCenterManager::_IsInitialized
	bool ____IsInitialized_3;
	// System.Boolean GameCenterManager::_IsAchievementsInfoLoaded
	bool ____IsAchievementsInfoLoaded_4;
	// System.Collections.Generic.Dictionary`2<System.String,GK_Player> GameCenterManager::_players
	Dictionary_2_t530824236 * ____players_5;
	// System.Collections.Generic.List`1<System.String> GameCenterManager::_friendsList
	List_1_t1765447871 * ____friendsList_6;
	// System.Collections.Generic.List`1<GK_LeaderboardSet> GameCenterManager::_LeaderboardSets
	List_1_t4285119865 * ____LeaderboardSets_7;
	// GK_Player GameCenterManager::_player
	GK_Player_t3188093628 * ____player_8;
	// System.Action`1<ISN_Result> GameCenterManager::OnAuthFinished
	Action_1_t2646135257 * ___OnAuthFinished_9;
	// System.Action`1<GK_LeaderboardResult> GameCenterManager::OnScoreSubmitted
	Action_1_t3482402976 * ___OnScoreSubmitted_10;
	// System.Action`1<GK_LeaderboardResult> GameCenterManager::OnScoresListLoaded
	Action_1_t3482402976 * ___OnScoresListLoaded_11;
	// System.Action`1<GK_LeaderboardResult> GameCenterManager::OnLeadrboardInfoLoaded
	Action_1_t3482402976 * ___OnLeadrboardInfoLoaded_12;
	// System.Action`1<ISN_Result> GameCenterManager::OnLeaderboardSetsInfoLoaded
	Action_1_t2646135257 * ___OnLeaderboardSetsInfoLoaded_13;
	// System.Action`1<ISN_Result> GameCenterManager::OnAchievementsReset
	Action_1_t2646135257 * ___OnAchievementsReset_14;
	// System.Action`1<ISN_Result> GameCenterManager::OnAchievementsLoaded
	Action_1_t2646135257 * ___OnAchievementsLoaded_15;
	// System.Action`1<GK_AchievementProgressResult> GameCenterManager::OnAchievementsProgress
	Action_1_t4264058719 * ___OnAchievementsProgress_16;
	// System.Action GameCenterManager::OnGameCenterViewDismissed
	Action_t437523947 * ___OnGameCenterViewDismissed_17;
	// System.Action`1<ISN_Result> GameCenterManager::OnFriendsListLoaded
	Action_1_t2646135257 * ___OnFriendsListLoaded_18;
	// System.Action`1<GK_UserInfoLoadResult> GameCenterManager::OnUserInfoLoaded
	Action_1_t617892184 * ___OnUserInfoLoaded_19;
	// System.Action`1<GK_PlayerSignatureResult> GameCenterManager::OnPlayerSignatureRetrieveResult
	Action_1_t4146793978 * ___OnPlayerSignatureRetrieveResult_20;
	// System.Action`1<ISN_Result> GameCenterManager::<>f__am$cache12
	Action_1_t2646135257 * ___U3CU3Ef__amU24cache12_21;
	// System.Action`1<GK_LeaderboardResult> GameCenterManager::<>f__am$cache13
	Action_1_t3482402976 * ___U3CU3Ef__amU24cache13_22;
	// System.Action`1<GK_LeaderboardResult> GameCenterManager::<>f__am$cache14
	Action_1_t3482402976 * ___U3CU3Ef__amU24cache14_23;
	// System.Action`1<GK_LeaderboardResult> GameCenterManager::<>f__am$cache15
	Action_1_t3482402976 * ___U3CU3Ef__amU24cache15_24;
	// System.Action`1<ISN_Result> GameCenterManager::<>f__am$cache16
	Action_1_t2646135257 * ___U3CU3Ef__amU24cache16_25;
	// System.Action`1<ISN_Result> GameCenterManager::<>f__am$cache17
	Action_1_t2646135257 * ___U3CU3Ef__amU24cache17_26;
	// System.Action`1<ISN_Result> GameCenterManager::<>f__am$cache18
	Action_1_t2646135257 * ___U3CU3Ef__amU24cache18_27;
	// System.Action`1<GK_AchievementProgressResult> GameCenterManager::<>f__am$cache19
	Action_1_t4264058719 * ___U3CU3Ef__amU24cache19_28;
	// System.Action GameCenterManager::<>f__am$cache1A
	Action_t437523947 * ___U3CU3Ef__amU24cache1A_29;
	// System.Action`1<ISN_Result> GameCenterManager::<>f__am$cache1B
	Action_1_t2646135257 * ___U3CU3Ef__amU24cache1B_30;
	// System.Action`1<GK_UserInfoLoadResult> GameCenterManager::<>f__am$cache1C
	Action_1_t617892184 * ___U3CU3Ef__amU24cache1C_31;
	// System.Action`1<GK_PlayerSignatureResult> GameCenterManager::<>f__am$cache1D
	Action_1_t4146793978 * ___U3CU3Ef__amU24cache1D_32;

public:
	inline static int32_t get_offset_of__IsInitialized_3() { return static_cast<int32_t>(offsetof(GameCenterManager_t2911035046_StaticFields, ____IsInitialized_3)); }
	inline bool get__IsInitialized_3() const { return ____IsInitialized_3; }
	inline bool* get_address_of__IsInitialized_3() { return &____IsInitialized_3; }
	inline void set__IsInitialized_3(bool value)
	{
		____IsInitialized_3 = value;
	}

	inline static int32_t get_offset_of__IsAchievementsInfoLoaded_4() { return static_cast<int32_t>(offsetof(GameCenterManager_t2911035046_StaticFields, ____IsAchievementsInfoLoaded_4)); }
	inline bool get__IsAchievementsInfoLoaded_4() const { return ____IsAchievementsInfoLoaded_4; }
	inline bool* get_address_of__IsAchievementsInfoLoaded_4() { return &____IsAchievementsInfoLoaded_4; }
	inline void set__IsAchievementsInfoLoaded_4(bool value)
	{
		____IsAchievementsInfoLoaded_4 = value;
	}

	inline static int32_t get_offset_of__players_5() { return static_cast<int32_t>(offsetof(GameCenterManager_t2911035046_StaticFields, ____players_5)); }
	inline Dictionary_2_t530824236 * get__players_5() const { return ____players_5; }
	inline Dictionary_2_t530824236 ** get_address_of__players_5() { return &____players_5; }
	inline void set__players_5(Dictionary_2_t530824236 * value)
	{
		____players_5 = value;
		Il2CppCodeGenWriteBarrier(&____players_5, value);
	}

	inline static int32_t get_offset_of__friendsList_6() { return static_cast<int32_t>(offsetof(GameCenterManager_t2911035046_StaticFields, ____friendsList_6)); }
	inline List_1_t1765447871 * get__friendsList_6() const { return ____friendsList_6; }
	inline List_1_t1765447871 ** get_address_of__friendsList_6() { return &____friendsList_6; }
	inline void set__friendsList_6(List_1_t1765447871 * value)
	{
		____friendsList_6 = value;
		Il2CppCodeGenWriteBarrier(&____friendsList_6, value);
	}

	inline static int32_t get_offset_of__LeaderboardSets_7() { return static_cast<int32_t>(offsetof(GameCenterManager_t2911035046_StaticFields, ____LeaderboardSets_7)); }
	inline List_1_t4285119865 * get__LeaderboardSets_7() const { return ____LeaderboardSets_7; }
	inline List_1_t4285119865 ** get_address_of__LeaderboardSets_7() { return &____LeaderboardSets_7; }
	inline void set__LeaderboardSets_7(List_1_t4285119865 * value)
	{
		____LeaderboardSets_7 = value;
		Il2CppCodeGenWriteBarrier(&____LeaderboardSets_7, value);
	}

	inline static int32_t get_offset_of__player_8() { return static_cast<int32_t>(offsetof(GameCenterManager_t2911035046_StaticFields, ____player_8)); }
	inline GK_Player_t3188093628 * get__player_8() const { return ____player_8; }
	inline GK_Player_t3188093628 ** get_address_of__player_8() { return &____player_8; }
	inline void set__player_8(GK_Player_t3188093628 * value)
	{
		____player_8 = value;
		Il2CppCodeGenWriteBarrier(&____player_8, value);
	}

	inline static int32_t get_offset_of_OnAuthFinished_9() { return static_cast<int32_t>(offsetof(GameCenterManager_t2911035046_StaticFields, ___OnAuthFinished_9)); }
	inline Action_1_t2646135257 * get_OnAuthFinished_9() const { return ___OnAuthFinished_9; }
	inline Action_1_t2646135257 ** get_address_of_OnAuthFinished_9() { return &___OnAuthFinished_9; }
	inline void set_OnAuthFinished_9(Action_1_t2646135257 * value)
	{
		___OnAuthFinished_9 = value;
		Il2CppCodeGenWriteBarrier(&___OnAuthFinished_9, value);
	}

	inline static int32_t get_offset_of_OnScoreSubmitted_10() { return static_cast<int32_t>(offsetof(GameCenterManager_t2911035046_StaticFields, ___OnScoreSubmitted_10)); }
	inline Action_1_t3482402976 * get_OnScoreSubmitted_10() const { return ___OnScoreSubmitted_10; }
	inline Action_1_t3482402976 ** get_address_of_OnScoreSubmitted_10() { return &___OnScoreSubmitted_10; }
	inline void set_OnScoreSubmitted_10(Action_1_t3482402976 * value)
	{
		___OnScoreSubmitted_10 = value;
		Il2CppCodeGenWriteBarrier(&___OnScoreSubmitted_10, value);
	}

	inline static int32_t get_offset_of_OnScoresListLoaded_11() { return static_cast<int32_t>(offsetof(GameCenterManager_t2911035046_StaticFields, ___OnScoresListLoaded_11)); }
	inline Action_1_t3482402976 * get_OnScoresListLoaded_11() const { return ___OnScoresListLoaded_11; }
	inline Action_1_t3482402976 ** get_address_of_OnScoresListLoaded_11() { return &___OnScoresListLoaded_11; }
	inline void set_OnScoresListLoaded_11(Action_1_t3482402976 * value)
	{
		___OnScoresListLoaded_11 = value;
		Il2CppCodeGenWriteBarrier(&___OnScoresListLoaded_11, value);
	}

	inline static int32_t get_offset_of_OnLeadrboardInfoLoaded_12() { return static_cast<int32_t>(offsetof(GameCenterManager_t2911035046_StaticFields, ___OnLeadrboardInfoLoaded_12)); }
	inline Action_1_t3482402976 * get_OnLeadrboardInfoLoaded_12() const { return ___OnLeadrboardInfoLoaded_12; }
	inline Action_1_t3482402976 ** get_address_of_OnLeadrboardInfoLoaded_12() { return &___OnLeadrboardInfoLoaded_12; }
	inline void set_OnLeadrboardInfoLoaded_12(Action_1_t3482402976 * value)
	{
		___OnLeadrboardInfoLoaded_12 = value;
		Il2CppCodeGenWriteBarrier(&___OnLeadrboardInfoLoaded_12, value);
	}

	inline static int32_t get_offset_of_OnLeaderboardSetsInfoLoaded_13() { return static_cast<int32_t>(offsetof(GameCenterManager_t2911035046_StaticFields, ___OnLeaderboardSetsInfoLoaded_13)); }
	inline Action_1_t2646135257 * get_OnLeaderboardSetsInfoLoaded_13() const { return ___OnLeaderboardSetsInfoLoaded_13; }
	inline Action_1_t2646135257 ** get_address_of_OnLeaderboardSetsInfoLoaded_13() { return &___OnLeaderboardSetsInfoLoaded_13; }
	inline void set_OnLeaderboardSetsInfoLoaded_13(Action_1_t2646135257 * value)
	{
		___OnLeaderboardSetsInfoLoaded_13 = value;
		Il2CppCodeGenWriteBarrier(&___OnLeaderboardSetsInfoLoaded_13, value);
	}

	inline static int32_t get_offset_of_OnAchievementsReset_14() { return static_cast<int32_t>(offsetof(GameCenterManager_t2911035046_StaticFields, ___OnAchievementsReset_14)); }
	inline Action_1_t2646135257 * get_OnAchievementsReset_14() const { return ___OnAchievementsReset_14; }
	inline Action_1_t2646135257 ** get_address_of_OnAchievementsReset_14() { return &___OnAchievementsReset_14; }
	inline void set_OnAchievementsReset_14(Action_1_t2646135257 * value)
	{
		___OnAchievementsReset_14 = value;
		Il2CppCodeGenWriteBarrier(&___OnAchievementsReset_14, value);
	}

	inline static int32_t get_offset_of_OnAchievementsLoaded_15() { return static_cast<int32_t>(offsetof(GameCenterManager_t2911035046_StaticFields, ___OnAchievementsLoaded_15)); }
	inline Action_1_t2646135257 * get_OnAchievementsLoaded_15() const { return ___OnAchievementsLoaded_15; }
	inline Action_1_t2646135257 ** get_address_of_OnAchievementsLoaded_15() { return &___OnAchievementsLoaded_15; }
	inline void set_OnAchievementsLoaded_15(Action_1_t2646135257 * value)
	{
		___OnAchievementsLoaded_15 = value;
		Il2CppCodeGenWriteBarrier(&___OnAchievementsLoaded_15, value);
	}

	inline static int32_t get_offset_of_OnAchievementsProgress_16() { return static_cast<int32_t>(offsetof(GameCenterManager_t2911035046_StaticFields, ___OnAchievementsProgress_16)); }
	inline Action_1_t4264058719 * get_OnAchievementsProgress_16() const { return ___OnAchievementsProgress_16; }
	inline Action_1_t4264058719 ** get_address_of_OnAchievementsProgress_16() { return &___OnAchievementsProgress_16; }
	inline void set_OnAchievementsProgress_16(Action_1_t4264058719 * value)
	{
		___OnAchievementsProgress_16 = value;
		Il2CppCodeGenWriteBarrier(&___OnAchievementsProgress_16, value);
	}

	inline static int32_t get_offset_of_OnGameCenterViewDismissed_17() { return static_cast<int32_t>(offsetof(GameCenterManager_t2911035046_StaticFields, ___OnGameCenterViewDismissed_17)); }
	inline Action_t437523947 * get_OnGameCenterViewDismissed_17() const { return ___OnGameCenterViewDismissed_17; }
	inline Action_t437523947 ** get_address_of_OnGameCenterViewDismissed_17() { return &___OnGameCenterViewDismissed_17; }
	inline void set_OnGameCenterViewDismissed_17(Action_t437523947 * value)
	{
		___OnGameCenterViewDismissed_17 = value;
		Il2CppCodeGenWriteBarrier(&___OnGameCenterViewDismissed_17, value);
	}

	inline static int32_t get_offset_of_OnFriendsListLoaded_18() { return static_cast<int32_t>(offsetof(GameCenterManager_t2911035046_StaticFields, ___OnFriendsListLoaded_18)); }
	inline Action_1_t2646135257 * get_OnFriendsListLoaded_18() const { return ___OnFriendsListLoaded_18; }
	inline Action_1_t2646135257 ** get_address_of_OnFriendsListLoaded_18() { return &___OnFriendsListLoaded_18; }
	inline void set_OnFriendsListLoaded_18(Action_1_t2646135257 * value)
	{
		___OnFriendsListLoaded_18 = value;
		Il2CppCodeGenWriteBarrier(&___OnFriendsListLoaded_18, value);
	}

	inline static int32_t get_offset_of_OnUserInfoLoaded_19() { return static_cast<int32_t>(offsetof(GameCenterManager_t2911035046_StaticFields, ___OnUserInfoLoaded_19)); }
	inline Action_1_t617892184 * get_OnUserInfoLoaded_19() const { return ___OnUserInfoLoaded_19; }
	inline Action_1_t617892184 ** get_address_of_OnUserInfoLoaded_19() { return &___OnUserInfoLoaded_19; }
	inline void set_OnUserInfoLoaded_19(Action_1_t617892184 * value)
	{
		___OnUserInfoLoaded_19 = value;
		Il2CppCodeGenWriteBarrier(&___OnUserInfoLoaded_19, value);
	}

	inline static int32_t get_offset_of_OnPlayerSignatureRetrieveResult_20() { return static_cast<int32_t>(offsetof(GameCenterManager_t2911035046_StaticFields, ___OnPlayerSignatureRetrieveResult_20)); }
	inline Action_1_t4146793978 * get_OnPlayerSignatureRetrieveResult_20() const { return ___OnPlayerSignatureRetrieveResult_20; }
	inline Action_1_t4146793978 ** get_address_of_OnPlayerSignatureRetrieveResult_20() { return &___OnPlayerSignatureRetrieveResult_20; }
	inline void set_OnPlayerSignatureRetrieveResult_20(Action_1_t4146793978 * value)
	{
		___OnPlayerSignatureRetrieveResult_20 = value;
		Il2CppCodeGenWriteBarrier(&___OnPlayerSignatureRetrieveResult_20, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache12_21() { return static_cast<int32_t>(offsetof(GameCenterManager_t2911035046_StaticFields, ___U3CU3Ef__amU24cache12_21)); }
	inline Action_1_t2646135257 * get_U3CU3Ef__amU24cache12_21() const { return ___U3CU3Ef__amU24cache12_21; }
	inline Action_1_t2646135257 ** get_address_of_U3CU3Ef__amU24cache12_21() { return &___U3CU3Ef__amU24cache12_21; }
	inline void set_U3CU3Ef__amU24cache12_21(Action_1_t2646135257 * value)
	{
		___U3CU3Ef__amU24cache12_21 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache12_21, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache13_22() { return static_cast<int32_t>(offsetof(GameCenterManager_t2911035046_StaticFields, ___U3CU3Ef__amU24cache13_22)); }
	inline Action_1_t3482402976 * get_U3CU3Ef__amU24cache13_22() const { return ___U3CU3Ef__amU24cache13_22; }
	inline Action_1_t3482402976 ** get_address_of_U3CU3Ef__amU24cache13_22() { return &___U3CU3Ef__amU24cache13_22; }
	inline void set_U3CU3Ef__amU24cache13_22(Action_1_t3482402976 * value)
	{
		___U3CU3Ef__amU24cache13_22 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache13_22, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache14_23() { return static_cast<int32_t>(offsetof(GameCenterManager_t2911035046_StaticFields, ___U3CU3Ef__amU24cache14_23)); }
	inline Action_1_t3482402976 * get_U3CU3Ef__amU24cache14_23() const { return ___U3CU3Ef__amU24cache14_23; }
	inline Action_1_t3482402976 ** get_address_of_U3CU3Ef__amU24cache14_23() { return &___U3CU3Ef__amU24cache14_23; }
	inline void set_U3CU3Ef__amU24cache14_23(Action_1_t3482402976 * value)
	{
		___U3CU3Ef__amU24cache14_23 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache14_23, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache15_24() { return static_cast<int32_t>(offsetof(GameCenterManager_t2911035046_StaticFields, ___U3CU3Ef__amU24cache15_24)); }
	inline Action_1_t3482402976 * get_U3CU3Ef__amU24cache15_24() const { return ___U3CU3Ef__amU24cache15_24; }
	inline Action_1_t3482402976 ** get_address_of_U3CU3Ef__amU24cache15_24() { return &___U3CU3Ef__amU24cache15_24; }
	inline void set_U3CU3Ef__amU24cache15_24(Action_1_t3482402976 * value)
	{
		___U3CU3Ef__amU24cache15_24 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache15_24, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache16_25() { return static_cast<int32_t>(offsetof(GameCenterManager_t2911035046_StaticFields, ___U3CU3Ef__amU24cache16_25)); }
	inline Action_1_t2646135257 * get_U3CU3Ef__amU24cache16_25() const { return ___U3CU3Ef__amU24cache16_25; }
	inline Action_1_t2646135257 ** get_address_of_U3CU3Ef__amU24cache16_25() { return &___U3CU3Ef__amU24cache16_25; }
	inline void set_U3CU3Ef__amU24cache16_25(Action_1_t2646135257 * value)
	{
		___U3CU3Ef__amU24cache16_25 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache16_25, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache17_26() { return static_cast<int32_t>(offsetof(GameCenterManager_t2911035046_StaticFields, ___U3CU3Ef__amU24cache17_26)); }
	inline Action_1_t2646135257 * get_U3CU3Ef__amU24cache17_26() const { return ___U3CU3Ef__amU24cache17_26; }
	inline Action_1_t2646135257 ** get_address_of_U3CU3Ef__amU24cache17_26() { return &___U3CU3Ef__amU24cache17_26; }
	inline void set_U3CU3Ef__amU24cache17_26(Action_1_t2646135257 * value)
	{
		___U3CU3Ef__amU24cache17_26 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache17_26, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache18_27() { return static_cast<int32_t>(offsetof(GameCenterManager_t2911035046_StaticFields, ___U3CU3Ef__amU24cache18_27)); }
	inline Action_1_t2646135257 * get_U3CU3Ef__amU24cache18_27() const { return ___U3CU3Ef__amU24cache18_27; }
	inline Action_1_t2646135257 ** get_address_of_U3CU3Ef__amU24cache18_27() { return &___U3CU3Ef__amU24cache18_27; }
	inline void set_U3CU3Ef__amU24cache18_27(Action_1_t2646135257 * value)
	{
		___U3CU3Ef__amU24cache18_27 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache18_27, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache19_28() { return static_cast<int32_t>(offsetof(GameCenterManager_t2911035046_StaticFields, ___U3CU3Ef__amU24cache19_28)); }
	inline Action_1_t4264058719 * get_U3CU3Ef__amU24cache19_28() const { return ___U3CU3Ef__amU24cache19_28; }
	inline Action_1_t4264058719 ** get_address_of_U3CU3Ef__amU24cache19_28() { return &___U3CU3Ef__amU24cache19_28; }
	inline void set_U3CU3Ef__amU24cache19_28(Action_1_t4264058719 * value)
	{
		___U3CU3Ef__amU24cache19_28 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache19_28, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1A_29() { return static_cast<int32_t>(offsetof(GameCenterManager_t2911035046_StaticFields, ___U3CU3Ef__amU24cache1A_29)); }
	inline Action_t437523947 * get_U3CU3Ef__amU24cache1A_29() const { return ___U3CU3Ef__amU24cache1A_29; }
	inline Action_t437523947 ** get_address_of_U3CU3Ef__amU24cache1A_29() { return &___U3CU3Ef__amU24cache1A_29; }
	inline void set_U3CU3Ef__amU24cache1A_29(Action_t437523947 * value)
	{
		___U3CU3Ef__amU24cache1A_29 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1A_29, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1B_30() { return static_cast<int32_t>(offsetof(GameCenterManager_t2911035046_StaticFields, ___U3CU3Ef__amU24cache1B_30)); }
	inline Action_1_t2646135257 * get_U3CU3Ef__amU24cache1B_30() const { return ___U3CU3Ef__amU24cache1B_30; }
	inline Action_1_t2646135257 ** get_address_of_U3CU3Ef__amU24cache1B_30() { return &___U3CU3Ef__amU24cache1B_30; }
	inline void set_U3CU3Ef__amU24cache1B_30(Action_1_t2646135257 * value)
	{
		___U3CU3Ef__amU24cache1B_30 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1B_30, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1C_31() { return static_cast<int32_t>(offsetof(GameCenterManager_t2911035046_StaticFields, ___U3CU3Ef__amU24cache1C_31)); }
	inline Action_1_t617892184 * get_U3CU3Ef__amU24cache1C_31() const { return ___U3CU3Ef__amU24cache1C_31; }
	inline Action_1_t617892184 ** get_address_of_U3CU3Ef__amU24cache1C_31() { return &___U3CU3Ef__amU24cache1C_31; }
	inline void set_U3CU3Ef__amU24cache1C_31(Action_1_t617892184 * value)
	{
		___U3CU3Ef__amU24cache1C_31 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1C_31, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1D_32() { return static_cast<int32_t>(offsetof(GameCenterManager_t2911035046_StaticFields, ___U3CU3Ef__amU24cache1D_32)); }
	inline Action_1_t4146793978 * get_U3CU3Ef__amU24cache1D_32() const { return ___U3CU3Ef__amU24cache1D_32; }
	inline Action_1_t4146793978 ** get_address_of_U3CU3Ef__amU24cache1D_32() { return &___U3CU3Ef__amU24cache1D_32; }
	inline void set_U3CU3Ef__amU24cache1D_32(Action_1_t4146793978 * value)
	{
		___U3CU3Ef__amU24cache1D_32 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1D_32, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
