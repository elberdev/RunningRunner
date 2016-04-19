#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.String,GK_TBM_Match>
struct Dictionary_2_t3362561242;
// System.Action`1<GK_TBM_LoadMatchResult>
struct Action_1_t3755147842;
// System.Action`1<GK_TBM_LoadMatchesResult>
struct Action_1_t1773321072;
// System.Action`1<GK_TBM_MatchDataUpdateResult>
struct Action_1_t3912777723;
// System.Action`1<GK_TBM_MatchInitResult>
struct Action_1_t3376985528;
// System.Action`1<GK_TBM_MatchQuitResult>
struct Action_1_t2037598135;
// System.Action`1<GK_TBM_EndTrunResult>
struct Action_1_t2810570197;
// System.Action`1<GK_TBM_MatchEndResult>
struct Action_1_t2782209519;
// System.Action`1<GK_TBM_RematchResult>
struct Action_1_t3221341237;
// System.Action`1<GK_TBM_MatchRemovedResult>
struct Action_1_t669545140;
// System.Action`1<GK_TBM_Match>
struct Action_1_t1873316043;
// System.Action`1<GK_TBM_MatchTurnResult>
struct Action_1_t3218393957;

#include "AssemblyU2DCSharp_ISN_Singleton_1_gen95314661.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameCenter_TBM
struct  GameCenter_TBM_t3307158119  : public ISN_Singleton_1_t95314661
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,GK_TBM_Match> GameCenter_TBM::_Matches
	Dictionary_2_t3362561242 * ____Matches_4;

public:
	inline static int32_t get_offset_of__Matches_4() { return static_cast<int32_t>(offsetof(GameCenter_TBM_t3307158119, ____Matches_4)); }
	inline Dictionary_2_t3362561242 * get__Matches_4() const { return ____Matches_4; }
	inline Dictionary_2_t3362561242 ** get_address_of__Matches_4() { return &____Matches_4; }
	inline void set__Matches_4(Dictionary_2_t3362561242 * value)
	{
		____Matches_4 = value;
		Il2CppCodeGenWriteBarrier(&____Matches_4, value);
	}
};

struct GameCenter_TBM_t3307158119_StaticFields
{
public:
	// System.Action`1<GK_TBM_LoadMatchResult> GameCenter_TBM::ActionMatchInfoLoaded
	Action_1_t3755147842 * ___ActionMatchInfoLoaded_5;
	// System.Action`1<GK_TBM_LoadMatchesResult> GameCenter_TBM::ActionMatchesInfoLoaded
	Action_1_t1773321072 * ___ActionMatchesInfoLoaded_6;
	// System.Action`1<GK_TBM_MatchDataUpdateResult> GameCenter_TBM::ActionMatchDataUpdated
	Action_1_t3912777723 * ___ActionMatchDataUpdated_7;
	// System.Action`1<GK_TBM_MatchInitResult> GameCenter_TBM::ActionMatchFound
	Action_1_t3376985528 * ___ActionMatchFound_8;
	// System.Action`1<GK_TBM_MatchQuitResult> GameCenter_TBM::ActionMatchQuit
	Action_1_t2037598135 * ___ActionMatchQuit_9;
	// System.Action`1<GK_TBM_EndTrunResult> GameCenter_TBM::ActionTrunEnded
	Action_1_t2810570197 * ___ActionTrunEnded_10;
	// System.Action`1<GK_TBM_MatchEndResult> GameCenter_TBM::ActionMacthEnded
	Action_1_t2782209519 * ___ActionMacthEnded_11;
	// System.Action`1<GK_TBM_RematchResult> GameCenter_TBM::ActionRematched
	Action_1_t3221341237 * ___ActionRematched_12;
	// System.Action`1<GK_TBM_MatchRemovedResult> GameCenter_TBM::ActionMatchRemoved
	Action_1_t669545140 * ___ActionMatchRemoved_13;
	// System.Action`1<GK_TBM_MatchInitResult> GameCenter_TBM::ActionMatchInvitationAccepted
	Action_1_t3376985528 * ___ActionMatchInvitationAccepted_14;
	// System.Action`1<GK_TBM_MatchRemovedResult> GameCenter_TBM::ActionMatchInvitationDeclined
	Action_1_t669545140 * ___ActionMatchInvitationDeclined_15;
	// System.Action`1<GK_TBM_Match> GameCenter_TBM::ActionPlayerQuitForMatch
	Action_1_t1873316043 * ___ActionPlayerQuitForMatch_16;
	// System.Action`1<GK_TBM_MatchTurnResult> GameCenter_TBM::ActionTrunReceived
	Action_1_t3218393957 * ___ActionTrunReceived_17;
	// System.Action`1<GK_TBM_LoadMatchResult> GameCenter_TBM::<>f__am$cacheE
	Action_1_t3755147842 * ___U3CU3Ef__amU24cacheE_18;
	// System.Action`1<GK_TBM_LoadMatchesResult> GameCenter_TBM::<>f__am$cacheF
	Action_1_t1773321072 * ___U3CU3Ef__amU24cacheF_19;
	// System.Action`1<GK_TBM_MatchDataUpdateResult> GameCenter_TBM::<>f__am$cache10
	Action_1_t3912777723 * ___U3CU3Ef__amU24cache10_20;
	// System.Action`1<GK_TBM_MatchInitResult> GameCenter_TBM::<>f__am$cache11
	Action_1_t3376985528 * ___U3CU3Ef__amU24cache11_21;
	// System.Action`1<GK_TBM_MatchQuitResult> GameCenter_TBM::<>f__am$cache12
	Action_1_t2037598135 * ___U3CU3Ef__amU24cache12_22;
	// System.Action`1<GK_TBM_EndTrunResult> GameCenter_TBM::<>f__am$cache13
	Action_1_t2810570197 * ___U3CU3Ef__amU24cache13_23;
	// System.Action`1<GK_TBM_MatchEndResult> GameCenter_TBM::<>f__am$cache14
	Action_1_t2782209519 * ___U3CU3Ef__amU24cache14_24;
	// System.Action`1<GK_TBM_RematchResult> GameCenter_TBM::<>f__am$cache15
	Action_1_t3221341237 * ___U3CU3Ef__amU24cache15_25;
	// System.Action`1<GK_TBM_MatchRemovedResult> GameCenter_TBM::<>f__am$cache16
	Action_1_t669545140 * ___U3CU3Ef__amU24cache16_26;
	// System.Action`1<GK_TBM_MatchInitResult> GameCenter_TBM::<>f__am$cache17
	Action_1_t3376985528 * ___U3CU3Ef__amU24cache17_27;
	// System.Action`1<GK_TBM_MatchRemovedResult> GameCenter_TBM::<>f__am$cache18
	Action_1_t669545140 * ___U3CU3Ef__amU24cache18_28;
	// System.Action`1<GK_TBM_Match> GameCenter_TBM::<>f__am$cache19
	Action_1_t1873316043 * ___U3CU3Ef__amU24cache19_29;
	// System.Action`1<GK_TBM_MatchTurnResult> GameCenter_TBM::<>f__am$cache1A
	Action_1_t3218393957 * ___U3CU3Ef__amU24cache1A_30;

public:
	inline static int32_t get_offset_of_ActionMatchInfoLoaded_5() { return static_cast<int32_t>(offsetof(GameCenter_TBM_t3307158119_StaticFields, ___ActionMatchInfoLoaded_5)); }
	inline Action_1_t3755147842 * get_ActionMatchInfoLoaded_5() const { return ___ActionMatchInfoLoaded_5; }
	inline Action_1_t3755147842 ** get_address_of_ActionMatchInfoLoaded_5() { return &___ActionMatchInfoLoaded_5; }
	inline void set_ActionMatchInfoLoaded_5(Action_1_t3755147842 * value)
	{
		___ActionMatchInfoLoaded_5 = value;
		Il2CppCodeGenWriteBarrier(&___ActionMatchInfoLoaded_5, value);
	}

	inline static int32_t get_offset_of_ActionMatchesInfoLoaded_6() { return static_cast<int32_t>(offsetof(GameCenter_TBM_t3307158119_StaticFields, ___ActionMatchesInfoLoaded_6)); }
	inline Action_1_t1773321072 * get_ActionMatchesInfoLoaded_6() const { return ___ActionMatchesInfoLoaded_6; }
	inline Action_1_t1773321072 ** get_address_of_ActionMatchesInfoLoaded_6() { return &___ActionMatchesInfoLoaded_6; }
	inline void set_ActionMatchesInfoLoaded_6(Action_1_t1773321072 * value)
	{
		___ActionMatchesInfoLoaded_6 = value;
		Il2CppCodeGenWriteBarrier(&___ActionMatchesInfoLoaded_6, value);
	}

	inline static int32_t get_offset_of_ActionMatchDataUpdated_7() { return static_cast<int32_t>(offsetof(GameCenter_TBM_t3307158119_StaticFields, ___ActionMatchDataUpdated_7)); }
	inline Action_1_t3912777723 * get_ActionMatchDataUpdated_7() const { return ___ActionMatchDataUpdated_7; }
	inline Action_1_t3912777723 ** get_address_of_ActionMatchDataUpdated_7() { return &___ActionMatchDataUpdated_7; }
	inline void set_ActionMatchDataUpdated_7(Action_1_t3912777723 * value)
	{
		___ActionMatchDataUpdated_7 = value;
		Il2CppCodeGenWriteBarrier(&___ActionMatchDataUpdated_7, value);
	}

	inline static int32_t get_offset_of_ActionMatchFound_8() { return static_cast<int32_t>(offsetof(GameCenter_TBM_t3307158119_StaticFields, ___ActionMatchFound_8)); }
	inline Action_1_t3376985528 * get_ActionMatchFound_8() const { return ___ActionMatchFound_8; }
	inline Action_1_t3376985528 ** get_address_of_ActionMatchFound_8() { return &___ActionMatchFound_8; }
	inline void set_ActionMatchFound_8(Action_1_t3376985528 * value)
	{
		___ActionMatchFound_8 = value;
		Il2CppCodeGenWriteBarrier(&___ActionMatchFound_8, value);
	}

	inline static int32_t get_offset_of_ActionMatchQuit_9() { return static_cast<int32_t>(offsetof(GameCenter_TBM_t3307158119_StaticFields, ___ActionMatchQuit_9)); }
	inline Action_1_t2037598135 * get_ActionMatchQuit_9() const { return ___ActionMatchQuit_9; }
	inline Action_1_t2037598135 ** get_address_of_ActionMatchQuit_9() { return &___ActionMatchQuit_9; }
	inline void set_ActionMatchQuit_9(Action_1_t2037598135 * value)
	{
		___ActionMatchQuit_9 = value;
		Il2CppCodeGenWriteBarrier(&___ActionMatchQuit_9, value);
	}

	inline static int32_t get_offset_of_ActionTrunEnded_10() { return static_cast<int32_t>(offsetof(GameCenter_TBM_t3307158119_StaticFields, ___ActionTrunEnded_10)); }
	inline Action_1_t2810570197 * get_ActionTrunEnded_10() const { return ___ActionTrunEnded_10; }
	inline Action_1_t2810570197 ** get_address_of_ActionTrunEnded_10() { return &___ActionTrunEnded_10; }
	inline void set_ActionTrunEnded_10(Action_1_t2810570197 * value)
	{
		___ActionTrunEnded_10 = value;
		Il2CppCodeGenWriteBarrier(&___ActionTrunEnded_10, value);
	}

	inline static int32_t get_offset_of_ActionMacthEnded_11() { return static_cast<int32_t>(offsetof(GameCenter_TBM_t3307158119_StaticFields, ___ActionMacthEnded_11)); }
	inline Action_1_t2782209519 * get_ActionMacthEnded_11() const { return ___ActionMacthEnded_11; }
	inline Action_1_t2782209519 ** get_address_of_ActionMacthEnded_11() { return &___ActionMacthEnded_11; }
	inline void set_ActionMacthEnded_11(Action_1_t2782209519 * value)
	{
		___ActionMacthEnded_11 = value;
		Il2CppCodeGenWriteBarrier(&___ActionMacthEnded_11, value);
	}

	inline static int32_t get_offset_of_ActionRematched_12() { return static_cast<int32_t>(offsetof(GameCenter_TBM_t3307158119_StaticFields, ___ActionRematched_12)); }
	inline Action_1_t3221341237 * get_ActionRematched_12() const { return ___ActionRematched_12; }
	inline Action_1_t3221341237 ** get_address_of_ActionRematched_12() { return &___ActionRematched_12; }
	inline void set_ActionRematched_12(Action_1_t3221341237 * value)
	{
		___ActionRematched_12 = value;
		Il2CppCodeGenWriteBarrier(&___ActionRematched_12, value);
	}

	inline static int32_t get_offset_of_ActionMatchRemoved_13() { return static_cast<int32_t>(offsetof(GameCenter_TBM_t3307158119_StaticFields, ___ActionMatchRemoved_13)); }
	inline Action_1_t669545140 * get_ActionMatchRemoved_13() const { return ___ActionMatchRemoved_13; }
	inline Action_1_t669545140 ** get_address_of_ActionMatchRemoved_13() { return &___ActionMatchRemoved_13; }
	inline void set_ActionMatchRemoved_13(Action_1_t669545140 * value)
	{
		___ActionMatchRemoved_13 = value;
		Il2CppCodeGenWriteBarrier(&___ActionMatchRemoved_13, value);
	}

	inline static int32_t get_offset_of_ActionMatchInvitationAccepted_14() { return static_cast<int32_t>(offsetof(GameCenter_TBM_t3307158119_StaticFields, ___ActionMatchInvitationAccepted_14)); }
	inline Action_1_t3376985528 * get_ActionMatchInvitationAccepted_14() const { return ___ActionMatchInvitationAccepted_14; }
	inline Action_1_t3376985528 ** get_address_of_ActionMatchInvitationAccepted_14() { return &___ActionMatchInvitationAccepted_14; }
	inline void set_ActionMatchInvitationAccepted_14(Action_1_t3376985528 * value)
	{
		___ActionMatchInvitationAccepted_14 = value;
		Il2CppCodeGenWriteBarrier(&___ActionMatchInvitationAccepted_14, value);
	}

	inline static int32_t get_offset_of_ActionMatchInvitationDeclined_15() { return static_cast<int32_t>(offsetof(GameCenter_TBM_t3307158119_StaticFields, ___ActionMatchInvitationDeclined_15)); }
	inline Action_1_t669545140 * get_ActionMatchInvitationDeclined_15() const { return ___ActionMatchInvitationDeclined_15; }
	inline Action_1_t669545140 ** get_address_of_ActionMatchInvitationDeclined_15() { return &___ActionMatchInvitationDeclined_15; }
	inline void set_ActionMatchInvitationDeclined_15(Action_1_t669545140 * value)
	{
		___ActionMatchInvitationDeclined_15 = value;
		Il2CppCodeGenWriteBarrier(&___ActionMatchInvitationDeclined_15, value);
	}

	inline static int32_t get_offset_of_ActionPlayerQuitForMatch_16() { return static_cast<int32_t>(offsetof(GameCenter_TBM_t3307158119_StaticFields, ___ActionPlayerQuitForMatch_16)); }
	inline Action_1_t1873316043 * get_ActionPlayerQuitForMatch_16() const { return ___ActionPlayerQuitForMatch_16; }
	inline Action_1_t1873316043 ** get_address_of_ActionPlayerQuitForMatch_16() { return &___ActionPlayerQuitForMatch_16; }
	inline void set_ActionPlayerQuitForMatch_16(Action_1_t1873316043 * value)
	{
		___ActionPlayerQuitForMatch_16 = value;
		Il2CppCodeGenWriteBarrier(&___ActionPlayerQuitForMatch_16, value);
	}

	inline static int32_t get_offset_of_ActionTrunReceived_17() { return static_cast<int32_t>(offsetof(GameCenter_TBM_t3307158119_StaticFields, ___ActionTrunReceived_17)); }
	inline Action_1_t3218393957 * get_ActionTrunReceived_17() const { return ___ActionTrunReceived_17; }
	inline Action_1_t3218393957 ** get_address_of_ActionTrunReceived_17() { return &___ActionTrunReceived_17; }
	inline void set_ActionTrunReceived_17(Action_1_t3218393957 * value)
	{
		___ActionTrunReceived_17 = value;
		Il2CppCodeGenWriteBarrier(&___ActionTrunReceived_17, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheE_18() { return static_cast<int32_t>(offsetof(GameCenter_TBM_t3307158119_StaticFields, ___U3CU3Ef__amU24cacheE_18)); }
	inline Action_1_t3755147842 * get_U3CU3Ef__amU24cacheE_18() const { return ___U3CU3Ef__amU24cacheE_18; }
	inline Action_1_t3755147842 ** get_address_of_U3CU3Ef__amU24cacheE_18() { return &___U3CU3Ef__amU24cacheE_18; }
	inline void set_U3CU3Ef__amU24cacheE_18(Action_1_t3755147842 * value)
	{
		___U3CU3Ef__amU24cacheE_18 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheE_18, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheF_19() { return static_cast<int32_t>(offsetof(GameCenter_TBM_t3307158119_StaticFields, ___U3CU3Ef__amU24cacheF_19)); }
	inline Action_1_t1773321072 * get_U3CU3Ef__amU24cacheF_19() const { return ___U3CU3Ef__amU24cacheF_19; }
	inline Action_1_t1773321072 ** get_address_of_U3CU3Ef__amU24cacheF_19() { return &___U3CU3Ef__amU24cacheF_19; }
	inline void set_U3CU3Ef__amU24cacheF_19(Action_1_t1773321072 * value)
	{
		___U3CU3Ef__amU24cacheF_19 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheF_19, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache10_20() { return static_cast<int32_t>(offsetof(GameCenter_TBM_t3307158119_StaticFields, ___U3CU3Ef__amU24cache10_20)); }
	inline Action_1_t3912777723 * get_U3CU3Ef__amU24cache10_20() const { return ___U3CU3Ef__amU24cache10_20; }
	inline Action_1_t3912777723 ** get_address_of_U3CU3Ef__amU24cache10_20() { return &___U3CU3Ef__amU24cache10_20; }
	inline void set_U3CU3Ef__amU24cache10_20(Action_1_t3912777723 * value)
	{
		___U3CU3Ef__amU24cache10_20 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache10_20, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache11_21() { return static_cast<int32_t>(offsetof(GameCenter_TBM_t3307158119_StaticFields, ___U3CU3Ef__amU24cache11_21)); }
	inline Action_1_t3376985528 * get_U3CU3Ef__amU24cache11_21() const { return ___U3CU3Ef__amU24cache11_21; }
	inline Action_1_t3376985528 ** get_address_of_U3CU3Ef__amU24cache11_21() { return &___U3CU3Ef__amU24cache11_21; }
	inline void set_U3CU3Ef__amU24cache11_21(Action_1_t3376985528 * value)
	{
		___U3CU3Ef__amU24cache11_21 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache11_21, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache12_22() { return static_cast<int32_t>(offsetof(GameCenter_TBM_t3307158119_StaticFields, ___U3CU3Ef__amU24cache12_22)); }
	inline Action_1_t2037598135 * get_U3CU3Ef__amU24cache12_22() const { return ___U3CU3Ef__amU24cache12_22; }
	inline Action_1_t2037598135 ** get_address_of_U3CU3Ef__amU24cache12_22() { return &___U3CU3Ef__amU24cache12_22; }
	inline void set_U3CU3Ef__amU24cache12_22(Action_1_t2037598135 * value)
	{
		___U3CU3Ef__amU24cache12_22 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache12_22, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache13_23() { return static_cast<int32_t>(offsetof(GameCenter_TBM_t3307158119_StaticFields, ___U3CU3Ef__amU24cache13_23)); }
	inline Action_1_t2810570197 * get_U3CU3Ef__amU24cache13_23() const { return ___U3CU3Ef__amU24cache13_23; }
	inline Action_1_t2810570197 ** get_address_of_U3CU3Ef__amU24cache13_23() { return &___U3CU3Ef__amU24cache13_23; }
	inline void set_U3CU3Ef__amU24cache13_23(Action_1_t2810570197 * value)
	{
		___U3CU3Ef__amU24cache13_23 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache13_23, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache14_24() { return static_cast<int32_t>(offsetof(GameCenter_TBM_t3307158119_StaticFields, ___U3CU3Ef__amU24cache14_24)); }
	inline Action_1_t2782209519 * get_U3CU3Ef__amU24cache14_24() const { return ___U3CU3Ef__amU24cache14_24; }
	inline Action_1_t2782209519 ** get_address_of_U3CU3Ef__amU24cache14_24() { return &___U3CU3Ef__amU24cache14_24; }
	inline void set_U3CU3Ef__amU24cache14_24(Action_1_t2782209519 * value)
	{
		___U3CU3Ef__amU24cache14_24 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache14_24, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache15_25() { return static_cast<int32_t>(offsetof(GameCenter_TBM_t3307158119_StaticFields, ___U3CU3Ef__amU24cache15_25)); }
	inline Action_1_t3221341237 * get_U3CU3Ef__amU24cache15_25() const { return ___U3CU3Ef__amU24cache15_25; }
	inline Action_1_t3221341237 ** get_address_of_U3CU3Ef__amU24cache15_25() { return &___U3CU3Ef__amU24cache15_25; }
	inline void set_U3CU3Ef__amU24cache15_25(Action_1_t3221341237 * value)
	{
		___U3CU3Ef__amU24cache15_25 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache15_25, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache16_26() { return static_cast<int32_t>(offsetof(GameCenter_TBM_t3307158119_StaticFields, ___U3CU3Ef__amU24cache16_26)); }
	inline Action_1_t669545140 * get_U3CU3Ef__amU24cache16_26() const { return ___U3CU3Ef__amU24cache16_26; }
	inline Action_1_t669545140 ** get_address_of_U3CU3Ef__amU24cache16_26() { return &___U3CU3Ef__amU24cache16_26; }
	inline void set_U3CU3Ef__amU24cache16_26(Action_1_t669545140 * value)
	{
		___U3CU3Ef__amU24cache16_26 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache16_26, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache17_27() { return static_cast<int32_t>(offsetof(GameCenter_TBM_t3307158119_StaticFields, ___U3CU3Ef__amU24cache17_27)); }
	inline Action_1_t3376985528 * get_U3CU3Ef__amU24cache17_27() const { return ___U3CU3Ef__amU24cache17_27; }
	inline Action_1_t3376985528 ** get_address_of_U3CU3Ef__amU24cache17_27() { return &___U3CU3Ef__amU24cache17_27; }
	inline void set_U3CU3Ef__amU24cache17_27(Action_1_t3376985528 * value)
	{
		___U3CU3Ef__amU24cache17_27 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache17_27, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache18_28() { return static_cast<int32_t>(offsetof(GameCenter_TBM_t3307158119_StaticFields, ___U3CU3Ef__amU24cache18_28)); }
	inline Action_1_t669545140 * get_U3CU3Ef__amU24cache18_28() const { return ___U3CU3Ef__amU24cache18_28; }
	inline Action_1_t669545140 ** get_address_of_U3CU3Ef__amU24cache18_28() { return &___U3CU3Ef__amU24cache18_28; }
	inline void set_U3CU3Ef__amU24cache18_28(Action_1_t669545140 * value)
	{
		___U3CU3Ef__amU24cache18_28 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache18_28, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache19_29() { return static_cast<int32_t>(offsetof(GameCenter_TBM_t3307158119_StaticFields, ___U3CU3Ef__amU24cache19_29)); }
	inline Action_1_t1873316043 * get_U3CU3Ef__amU24cache19_29() const { return ___U3CU3Ef__amU24cache19_29; }
	inline Action_1_t1873316043 ** get_address_of_U3CU3Ef__amU24cache19_29() { return &___U3CU3Ef__amU24cache19_29; }
	inline void set_U3CU3Ef__amU24cache19_29(Action_1_t1873316043 * value)
	{
		___U3CU3Ef__amU24cache19_29 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache19_29, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1A_30() { return static_cast<int32_t>(offsetof(GameCenter_TBM_t3307158119_StaticFields, ___U3CU3Ef__amU24cache1A_30)); }
	inline Action_1_t3218393957 * get_U3CU3Ef__amU24cache1A_30() const { return ___U3CU3Ef__amU24cache1A_30; }
	inline Action_1_t3218393957 ** get_address_of_U3CU3Ef__amU24cache1A_30() { return &___U3CU3Ef__amU24cache1A_30; }
	inline void set_U3CU3Ef__amU24cache1A_30(Action_1_t3218393957 * value)
	{
		___U3CU3Ef__amU24cache1A_30 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1A_30, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
