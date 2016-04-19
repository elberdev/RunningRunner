#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GK_RTM_Match
struct GK_RTM_Match_t2350619926;
// System.Collections.Generic.Dictionary`2<System.String,GK_Player>
struct Dictionary_2_t530824236;
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

#include "AssemblyU2DCSharp_ISN_Singleton_1_gen95313297.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameCenter_RTM
struct  GameCenter_RTM_t3307156755  : public ISN_Singleton_1_t95313297
{
public:
	// GK_RTM_Match GameCenter_RTM::_CurrentMatch
	GK_RTM_Match_t2350619926 * ____CurrentMatch_4;
	// System.Collections.Generic.Dictionary`2<System.String,GK_Player> GameCenter_RTM::_NearbyPlayers
	Dictionary_2_t530824236 * ____NearbyPlayers_5;

public:
	inline static int32_t get_offset_of__CurrentMatch_4() { return static_cast<int32_t>(offsetof(GameCenter_RTM_t3307156755, ____CurrentMatch_4)); }
	inline GK_RTM_Match_t2350619926 * get__CurrentMatch_4() const { return ____CurrentMatch_4; }
	inline GK_RTM_Match_t2350619926 ** get_address_of__CurrentMatch_4() { return &____CurrentMatch_4; }
	inline void set__CurrentMatch_4(GK_RTM_Match_t2350619926 * value)
	{
		____CurrentMatch_4 = value;
		Il2CppCodeGenWriteBarrier(&____CurrentMatch_4, value);
	}

	inline static int32_t get_offset_of__NearbyPlayers_5() { return static_cast<int32_t>(offsetof(GameCenter_RTM_t3307156755, ____NearbyPlayers_5)); }
	inline Dictionary_2_t530824236 * get__NearbyPlayers_5() const { return ____NearbyPlayers_5; }
	inline Dictionary_2_t530824236 ** get_address_of__NearbyPlayers_5() { return &____NearbyPlayers_5; }
	inline void set__NearbyPlayers_5(Dictionary_2_t530824236 * value)
	{
		____NearbyPlayers_5 = value;
		Il2CppCodeGenWriteBarrier(&____NearbyPlayers_5, value);
	}
};

struct GameCenter_RTM_t3307156755_StaticFields
{
public:
	// System.Action`1<GK_RTM_MatchStartedResult> GameCenter_RTM::ActionMatchStarted
	Action_1_t421858281 * ___ActionMatchStarted_6;
	// System.Action`1<ISN_Error> GameCenter_RTM::ActionMatchFailed
	Action_1_t3265444782 * ___ActionMatchFailed_7;
	// System.Action`2<GK_Player,System.Boolean> GameCenter_RTM::ActionNearbyPlayerStateUpdated
	Action_2_t241833359 * ___ActionNearbyPlayerStateUpdated_8;
	// System.Action`1<GK_RTM_QueryActivityResult> GameCenter_RTM::ActionActivityResultReceived
	Action_1_t1286807014 * ___ActionActivityResultReceived_9;
	// System.Action`1<ISN_Error> GameCenter_RTM::ActionDataSendError
	Action_1_t3265444782 * ___ActionDataSendError_10;
	// System.Action`2<GK_Player,System.Byte[]> GameCenter_RTM::ActionDataReceived
	Action_2_t89334178 * ___ActionDataReceived_11;
	// System.Action`3<GK_Player,GK_PlayerConnectionState,GK_RTM_Match> GameCenter_RTM::ActionPlayerStateChanged
	Action_3_t3017981018 * ___ActionPlayerStateChanged_12;
	// System.Action`1<GK_Player> GameCenter_RTM::ActionDiconnectedPlayerReinvited
	Action_1_t3336546333 * ___ActionDiconnectedPlayerReinvited_13;
	// System.Action`1<GK_RTM_MatchStartedResult> GameCenter_RTM::<>f__am$cacheA
	Action_1_t421858281 * ___U3CU3Ef__amU24cacheA_14;
	// System.Action`1<ISN_Error> GameCenter_RTM::<>f__am$cacheB
	Action_1_t3265444782 * ___U3CU3Ef__amU24cacheB_15;
	// System.Action`2<GK_Player,System.Boolean> GameCenter_RTM::<>f__am$cacheC
	Action_2_t241833359 * ___U3CU3Ef__amU24cacheC_16;
	// System.Action`1<GK_RTM_QueryActivityResult> GameCenter_RTM::<>f__am$cacheD
	Action_1_t1286807014 * ___U3CU3Ef__amU24cacheD_17;
	// System.Action`1<ISN_Error> GameCenter_RTM::<>f__am$cacheE
	Action_1_t3265444782 * ___U3CU3Ef__amU24cacheE_18;
	// System.Action`2<GK_Player,System.Byte[]> GameCenter_RTM::<>f__am$cacheF
	Action_2_t89334178 * ___U3CU3Ef__amU24cacheF_19;
	// System.Action`3<GK_Player,GK_PlayerConnectionState,GK_RTM_Match> GameCenter_RTM::<>f__am$cache10
	Action_3_t3017981018 * ___U3CU3Ef__amU24cache10_20;
	// System.Action`1<GK_Player> GameCenter_RTM::<>f__am$cache11
	Action_1_t3336546333 * ___U3CU3Ef__amU24cache11_21;

public:
	inline static int32_t get_offset_of_ActionMatchStarted_6() { return static_cast<int32_t>(offsetof(GameCenter_RTM_t3307156755_StaticFields, ___ActionMatchStarted_6)); }
	inline Action_1_t421858281 * get_ActionMatchStarted_6() const { return ___ActionMatchStarted_6; }
	inline Action_1_t421858281 ** get_address_of_ActionMatchStarted_6() { return &___ActionMatchStarted_6; }
	inline void set_ActionMatchStarted_6(Action_1_t421858281 * value)
	{
		___ActionMatchStarted_6 = value;
		Il2CppCodeGenWriteBarrier(&___ActionMatchStarted_6, value);
	}

	inline static int32_t get_offset_of_ActionMatchFailed_7() { return static_cast<int32_t>(offsetof(GameCenter_RTM_t3307156755_StaticFields, ___ActionMatchFailed_7)); }
	inline Action_1_t3265444782 * get_ActionMatchFailed_7() const { return ___ActionMatchFailed_7; }
	inline Action_1_t3265444782 ** get_address_of_ActionMatchFailed_7() { return &___ActionMatchFailed_7; }
	inline void set_ActionMatchFailed_7(Action_1_t3265444782 * value)
	{
		___ActionMatchFailed_7 = value;
		Il2CppCodeGenWriteBarrier(&___ActionMatchFailed_7, value);
	}

	inline static int32_t get_offset_of_ActionNearbyPlayerStateUpdated_8() { return static_cast<int32_t>(offsetof(GameCenter_RTM_t3307156755_StaticFields, ___ActionNearbyPlayerStateUpdated_8)); }
	inline Action_2_t241833359 * get_ActionNearbyPlayerStateUpdated_8() const { return ___ActionNearbyPlayerStateUpdated_8; }
	inline Action_2_t241833359 ** get_address_of_ActionNearbyPlayerStateUpdated_8() { return &___ActionNearbyPlayerStateUpdated_8; }
	inline void set_ActionNearbyPlayerStateUpdated_8(Action_2_t241833359 * value)
	{
		___ActionNearbyPlayerStateUpdated_8 = value;
		Il2CppCodeGenWriteBarrier(&___ActionNearbyPlayerStateUpdated_8, value);
	}

	inline static int32_t get_offset_of_ActionActivityResultReceived_9() { return static_cast<int32_t>(offsetof(GameCenter_RTM_t3307156755_StaticFields, ___ActionActivityResultReceived_9)); }
	inline Action_1_t1286807014 * get_ActionActivityResultReceived_9() const { return ___ActionActivityResultReceived_9; }
	inline Action_1_t1286807014 ** get_address_of_ActionActivityResultReceived_9() { return &___ActionActivityResultReceived_9; }
	inline void set_ActionActivityResultReceived_9(Action_1_t1286807014 * value)
	{
		___ActionActivityResultReceived_9 = value;
		Il2CppCodeGenWriteBarrier(&___ActionActivityResultReceived_9, value);
	}

	inline static int32_t get_offset_of_ActionDataSendError_10() { return static_cast<int32_t>(offsetof(GameCenter_RTM_t3307156755_StaticFields, ___ActionDataSendError_10)); }
	inline Action_1_t3265444782 * get_ActionDataSendError_10() const { return ___ActionDataSendError_10; }
	inline Action_1_t3265444782 ** get_address_of_ActionDataSendError_10() { return &___ActionDataSendError_10; }
	inline void set_ActionDataSendError_10(Action_1_t3265444782 * value)
	{
		___ActionDataSendError_10 = value;
		Il2CppCodeGenWriteBarrier(&___ActionDataSendError_10, value);
	}

	inline static int32_t get_offset_of_ActionDataReceived_11() { return static_cast<int32_t>(offsetof(GameCenter_RTM_t3307156755_StaticFields, ___ActionDataReceived_11)); }
	inline Action_2_t89334178 * get_ActionDataReceived_11() const { return ___ActionDataReceived_11; }
	inline Action_2_t89334178 ** get_address_of_ActionDataReceived_11() { return &___ActionDataReceived_11; }
	inline void set_ActionDataReceived_11(Action_2_t89334178 * value)
	{
		___ActionDataReceived_11 = value;
		Il2CppCodeGenWriteBarrier(&___ActionDataReceived_11, value);
	}

	inline static int32_t get_offset_of_ActionPlayerStateChanged_12() { return static_cast<int32_t>(offsetof(GameCenter_RTM_t3307156755_StaticFields, ___ActionPlayerStateChanged_12)); }
	inline Action_3_t3017981018 * get_ActionPlayerStateChanged_12() const { return ___ActionPlayerStateChanged_12; }
	inline Action_3_t3017981018 ** get_address_of_ActionPlayerStateChanged_12() { return &___ActionPlayerStateChanged_12; }
	inline void set_ActionPlayerStateChanged_12(Action_3_t3017981018 * value)
	{
		___ActionPlayerStateChanged_12 = value;
		Il2CppCodeGenWriteBarrier(&___ActionPlayerStateChanged_12, value);
	}

	inline static int32_t get_offset_of_ActionDiconnectedPlayerReinvited_13() { return static_cast<int32_t>(offsetof(GameCenter_RTM_t3307156755_StaticFields, ___ActionDiconnectedPlayerReinvited_13)); }
	inline Action_1_t3336546333 * get_ActionDiconnectedPlayerReinvited_13() const { return ___ActionDiconnectedPlayerReinvited_13; }
	inline Action_1_t3336546333 ** get_address_of_ActionDiconnectedPlayerReinvited_13() { return &___ActionDiconnectedPlayerReinvited_13; }
	inline void set_ActionDiconnectedPlayerReinvited_13(Action_1_t3336546333 * value)
	{
		___ActionDiconnectedPlayerReinvited_13 = value;
		Il2CppCodeGenWriteBarrier(&___ActionDiconnectedPlayerReinvited_13, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheA_14() { return static_cast<int32_t>(offsetof(GameCenter_RTM_t3307156755_StaticFields, ___U3CU3Ef__amU24cacheA_14)); }
	inline Action_1_t421858281 * get_U3CU3Ef__amU24cacheA_14() const { return ___U3CU3Ef__amU24cacheA_14; }
	inline Action_1_t421858281 ** get_address_of_U3CU3Ef__amU24cacheA_14() { return &___U3CU3Ef__amU24cacheA_14; }
	inline void set_U3CU3Ef__amU24cacheA_14(Action_1_t421858281 * value)
	{
		___U3CU3Ef__amU24cacheA_14 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheA_14, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(GameCenter_RTM_t3307156755_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Action_1_t3265444782 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Action_1_t3265444782 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Action_1_t3265444782 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheB_15, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheC_16() { return static_cast<int32_t>(offsetof(GameCenter_RTM_t3307156755_StaticFields, ___U3CU3Ef__amU24cacheC_16)); }
	inline Action_2_t241833359 * get_U3CU3Ef__amU24cacheC_16() const { return ___U3CU3Ef__amU24cacheC_16; }
	inline Action_2_t241833359 ** get_address_of_U3CU3Ef__amU24cacheC_16() { return &___U3CU3Ef__amU24cacheC_16; }
	inline void set_U3CU3Ef__amU24cacheC_16(Action_2_t241833359 * value)
	{
		___U3CU3Ef__amU24cacheC_16 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheC_16, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheD_17() { return static_cast<int32_t>(offsetof(GameCenter_RTM_t3307156755_StaticFields, ___U3CU3Ef__amU24cacheD_17)); }
	inline Action_1_t1286807014 * get_U3CU3Ef__amU24cacheD_17() const { return ___U3CU3Ef__amU24cacheD_17; }
	inline Action_1_t1286807014 ** get_address_of_U3CU3Ef__amU24cacheD_17() { return &___U3CU3Ef__amU24cacheD_17; }
	inline void set_U3CU3Ef__amU24cacheD_17(Action_1_t1286807014 * value)
	{
		___U3CU3Ef__amU24cacheD_17 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheD_17, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheE_18() { return static_cast<int32_t>(offsetof(GameCenter_RTM_t3307156755_StaticFields, ___U3CU3Ef__amU24cacheE_18)); }
	inline Action_1_t3265444782 * get_U3CU3Ef__amU24cacheE_18() const { return ___U3CU3Ef__amU24cacheE_18; }
	inline Action_1_t3265444782 ** get_address_of_U3CU3Ef__amU24cacheE_18() { return &___U3CU3Ef__amU24cacheE_18; }
	inline void set_U3CU3Ef__amU24cacheE_18(Action_1_t3265444782 * value)
	{
		___U3CU3Ef__amU24cacheE_18 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheE_18, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheF_19() { return static_cast<int32_t>(offsetof(GameCenter_RTM_t3307156755_StaticFields, ___U3CU3Ef__amU24cacheF_19)); }
	inline Action_2_t89334178 * get_U3CU3Ef__amU24cacheF_19() const { return ___U3CU3Ef__amU24cacheF_19; }
	inline Action_2_t89334178 ** get_address_of_U3CU3Ef__amU24cacheF_19() { return &___U3CU3Ef__amU24cacheF_19; }
	inline void set_U3CU3Ef__amU24cacheF_19(Action_2_t89334178 * value)
	{
		___U3CU3Ef__amU24cacheF_19 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheF_19, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache10_20() { return static_cast<int32_t>(offsetof(GameCenter_RTM_t3307156755_StaticFields, ___U3CU3Ef__amU24cache10_20)); }
	inline Action_3_t3017981018 * get_U3CU3Ef__amU24cache10_20() const { return ___U3CU3Ef__amU24cache10_20; }
	inline Action_3_t3017981018 ** get_address_of_U3CU3Ef__amU24cache10_20() { return &___U3CU3Ef__amU24cache10_20; }
	inline void set_U3CU3Ef__amU24cache10_20(Action_3_t3017981018 * value)
	{
		___U3CU3Ef__amU24cache10_20 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache10_20, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache11_21() { return static_cast<int32_t>(offsetof(GameCenter_RTM_t3307156755_StaticFields, ___U3CU3Ef__amU24cache11_21)); }
	inline Action_1_t3336546333 * get_U3CU3Ef__amU24cache11_21() const { return ___U3CU3Ef__amU24cache11_21; }
	inline Action_1_t3336546333 ** get_address_of_U3CU3Ef__amU24cache11_21() { return &___U3CU3Ef__amU24cache11_21; }
	inline void set_U3CU3Ef__amU24cache11_21(Action_1_t3336546333 * value)
	{
		___U3CU3Ef__amU24cache11_21 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache11_21, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
