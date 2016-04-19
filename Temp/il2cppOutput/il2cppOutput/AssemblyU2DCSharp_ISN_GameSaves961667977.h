#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.String,GK_SavedGame>
struct Dictionary_2_t1287729870;
// System.Action`1<GK_SaveRemoveResult>
struct Action_1_t3517002586;
// System.Action`1<GK_SaveResult>
struct Action_1_t1697270710;
// System.Action`1<GK_FetchResult>
struct Action_1_t3934213597;
// System.Action`1<GK_SavesResolveResult>
struct Action_1_t30791407;

#include "AssemblyU2DCSharp_ISN_Singleton_1_gen2044791815.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ISN_GameSaves
struct  ISN_GameSaves_t961667977  : public ISN_Singleton_1_t2044791815
{
public:

public:
};

struct ISN_GameSaves_t961667977_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,GK_SavedGame> ISN_GameSaves::_CachedGameSaves
	Dictionary_2_t1287729870 * ____CachedGameSaves_4;
	// System.Action`1<GK_SaveRemoveResult> ISN_GameSaves::ActionSaveRemoved
	Action_1_t3517002586 * ___ActionSaveRemoved_5;
	// System.Action`1<GK_SaveResult> ISN_GameSaves::ActionGameSaved
	Action_1_t1697270710 * ___ActionGameSaved_6;
	// System.Action`1<GK_FetchResult> ISN_GameSaves::ActionSavesFetched
	Action_1_t3934213597 * ___ActionSavesFetched_7;
	// System.Action`1<GK_SavesResolveResult> ISN_GameSaves::ActionSavesResolved
	Action_1_t30791407 * ___ActionSavesResolved_8;
	// System.Action`1<GK_SaveRemoveResult> ISN_GameSaves::<>f__am$cache5
	Action_1_t3517002586 * ___U3CU3Ef__amU24cache5_9;
	// System.Action`1<GK_SaveResult> ISN_GameSaves::<>f__am$cache6
	Action_1_t1697270710 * ___U3CU3Ef__amU24cache6_10;
	// System.Action`1<GK_FetchResult> ISN_GameSaves::<>f__am$cache7
	Action_1_t3934213597 * ___U3CU3Ef__amU24cache7_11;
	// System.Action`1<GK_SavesResolveResult> ISN_GameSaves::<>f__am$cache8
	Action_1_t30791407 * ___U3CU3Ef__amU24cache8_12;

public:
	inline static int32_t get_offset_of__CachedGameSaves_4() { return static_cast<int32_t>(offsetof(ISN_GameSaves_t961667977_StaticFields, ____CachedGameSaves_4)); }
	inline Dictionary_2_t1287729870 * get__CachedGameSaves_4() const { return ____CachedGameSaves_4; }
	inline Dictionary_2_t1287729870 ** get_address_of__CachedGameSaves_4() { return &____CachedGameSaves_4; }
	inline void set__CachedGameSaves_4(Dictionary_2_t1287729870 * value)
	{
		____CachedGameSaves_4 = value;
		Il2CppCodeGenWriteBarrier(&____CachedGameSaves_4, value);
	}

	inline static int32_t get_offset_of_ActionSaveRemoved_5() { return static_cast<int32_t>(offsetof(ISN_GameSaves_t961667977_StaticFields, ___ActionSaveRemoved_5)); }
	inline Action_1_t3517002586 * get_ActionSaveRemoved_5() const { return ___ActionSaveRemoved_5; }
	inline Action_1_t3517002586 ** get_address_of_ActionSaveRemoved_5() { return &___ActionSaveRemoved_5; }
	inline void set_ActionSaveRemoved_5(Action_1_t3517002586 * value)
	{
		___ActionSaveRemoved_5 = value;
		Il2CppCodeGenWriteBarrier(&___ActionSaveRemoved_5, value);
	}

	inline static int32_t get_offset_of_ActionGameSaved_6() { return static_cast<int32_t>(offsetof(ISN_GameSaves_t961667977_StaticFields, ___ActionGameSaved_6)); }
	inline Action_1_t1697270710 * get_ActionGameSaved_6() const { return ___ActionGameSaved_6; }
	inline Action_1_t1697270710 ** get_address_of_ActionGameSaved_6() { return &___ActionGameSaved_6; }
	inline void set_ActionGameSaved_6(Action_1_t1697270710 * value)
	{
		___ActionGameSaved_6 = value;
		Il2CppCodeGenWriteBarrier(&___ActionGameSaved_6, value);
	}

	inline static int32_t get_offset_of_ActionSavesFetched_7() { return static_cast<int32_t>(offsetof(ISN_GameSaves_t961667977_StaticFields, ___ActionSavesFetched_7)); }
	inline Action_1_t3934213597 * get_ActionSavesFetched_7() const { return ___ActionSavesFetched_7; }
	inline Action_1_t3934213597 ** get_address_of_ActionSavesFetched_7() { return &___ActionSavesFetched_7; }
	inline void set_ActionSavesFetched_7(Action_1_t3934213597 * value)
	{
		___ActionSavesFetched_7 = value;
		Il2CppCodeGenWriteBarrier(&___ActionSavesFetched_7, value);
	}

	inline static int32_t get_offset_of_ActionSavesResolved_8() { return static_cast<int32_t>(offsetof(ISN_GameSaves_t961667977_StaticFields, ___ActionSavesResolved_8)); }
	inline Action_1_t30791407 * get_ActionSavesResolved_8() const { return ___ActionSavesResolved_8; }
	inline Action_1_t30791407 ** get_address_of_ActionSavesResolved_8() { return &___ActionSavesResolved_8; }
	inline void set_ActionSavesResolved_8(Action_1_t30791407 * value)
	{
		___ActionSavesResolved_8 = value;
		Il2CppCodeGenWriteBarrier(&___ActionSavesResolved_8, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache5_9() { return static_cast<int32_t>(offsetof(ISN_GameSaves_t961667977_StaticFields, ___U3CU3Ef__amU24cache5_9)); }
	inline Action_1_t3517002586 * get_U3CU3Ef__amU24cache5_9() const { return ___U3CU3Ef__amU24cache5_9; }
	inline Action_1_t3517002586 ** get_address_of_U3CU3Ef__amU24cache5_9() { return &___U3CU3Ef__amU24cache5_9; }
	inline void set_U3CU3Ef__amU24cache5_9(Action_1_t3517002586 * value)
	{
		___U3CU3Ef__amU24cache5_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache5_9, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache6_10() { return static_cast<int32_t>(offsetof(ISN_GameSaves_t961667977_StaticFields, ___U3CU3Ef__amU24cache6_10)); }
	inline Action_1_t1697270710 * get_U3CU3Ef__amU24cache6_10() const { return ___U3CU3Ef__amU24cache6_10; }
	inline Action_1_t1697270710 ** get_address_of_U3CU3Ef__amU24cache6_10() { return &___U3CU3Ef__amU24cache6_10; }
	inline void set_U3CU3Ef__amU24cache6_10(Action_1_t1697270710 * value)
	{
		___U3CU3Ef__amU24cache6_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache6_10, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache7_11() { return static_cast<int32_t>(offsetof(ISN_GameSaves_t961667977_StaticFields, ___U3CU3Ef__amU24cache7_11)); }
	inline Action_1_t3934213597 * get_U3CU3Ef__amU24cache7_11() const { return ___U3CU3Ef__amU24cache7_11; }
	inline Action_1_t3934213597 ** get_address_of_U3CU3Ef__amU24cache7_11() { return &___U3CU3Ef__amU24cache7_11; }
	inline void set_U3CU3Ef__amU24cache7_11(Action_1_t3934213597 * value)
	{
		___U3CU3Ef__amU24cache7_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache7_11, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache8_12() { return static_cast<int32_t>(offsetof(ISN_GameSaves_t961667977_StaticFields, ___U3CU3Ef__amU24cache8_12)); }
	inline Action_1_t30791407 * get_U3CU3Ef__amU24cache8_12() const { return ___U3CU3Ef__amU24cache8_12; }
	inline Action_1_t30791407 ** get_address_of_U3CU3Ef__amU24cache8_12() { return &___U3CU3Ef__amU24cache8_12; }
	inline void set_U3CU3Ef__amU24cache8_12(Action_1_t30791407 * value)
	{
		___U3CU3Ef__amU24cache8_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache8_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
