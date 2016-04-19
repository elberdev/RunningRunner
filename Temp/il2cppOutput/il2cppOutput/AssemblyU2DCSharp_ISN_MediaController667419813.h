#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MP_MediaItem
struct MP_MediaItem_t1982431579;
// System.Collections.Generic.List`1<MP_MediaItem>
struct List_1_t2779390548;
// System.Action`1<MP_MediaPickerResult>
struct Action_1_t1363217908;
// System.Action`1<System.Collections.Generic.List`1<MP_MediaItem>>
struct Action_1_t2927843253;
// System.Action`1<MP_MediaItem>
struct Action_1_t2130884284;
// System.Action`1<MP_MusicPlaybackState>
struct Action_1_t94620334;

#include "AssemblyU2DCSharp_ISN_Singleton_1_gen1750543651.h"
#include "AssemblyU2DCSharp_MP_MusicPlaybackState4241134925.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ISN_MediaController
struct  ISN_MediaController_t667419813  : public ISN_Singleton_1_t1750543651
{
public:
	// MP_MediaItem ISN_MediaController::_NowPlayingItem
	MP_MediaItem_t1982431579 * ____NowPlayingItem_4;
	// MP_MusicPlaybackState ISN_MediaController::_State
	int32_t ____State_5;
	// System.Collections.Generic.List`1<MP_MediaItem> ISN_MediaController::_CurrentQueue
	List_1_t2779390548 * ____CurrentQueue_6;

public:
	inline static int32_t get_offset_of__NowPlayingItem_4() { return static_cast<int32_t>(offsetof(ISN_MediaController_t667419813, ____NowPlayingItem_4)); }
	inline MP_MediaItem_t1982431579 * get__NowPlayingItem_4() const { return ____NowPlayingItem_4; }
	inline MP_MediaItem_t1982431579 ** get_address_of__NowPlayingItem_4() { return &____NowPlayingItem_4; }
	inline void set__NowPlayingItem_4(MP_MediaItem_t1982431579 * value)
	{
		____NowPlayingItem_4 = value;
		Il2CppCodeGenWriteBarrier(&____NowPlayingItem_4, value);
	}

	inline static int32_t get_offset_of__State_5() { return static_cast<int32_t>(offsetof(ISN_MediaController_t667419813, ____State_5)); }
	inline int32_t get__State_5() const { return ____State_5; }
	inline int32_t* get_address_of__State_5() { return &____State_5; }
	inline void set__State_5(int32_t value)
	{
		____State_5 = value;
	}

	inline static int32_t get_offset_of__CurrentQueue_6() { return static_cast<int32_t>(offsetof(ISN_MediaController_t667419813, ____CurrentQueue_6)); }
	inline List_1_t2779390548 * get__CurrentQueue_6() const { return ____CurrentQueue_6; }
	inline List_1_t2779390548 ** get_address_of__CurrentQueue_6() { return &____CurrentQueue_6; }
	inline void set__CurrentQueue_6(List_1_t2779390548 * value)
	{
		____CurrentQueue_6 = value;
		Il2CppCodeGenWriteBarrier(&____CurrentQueue_6, value);
	}
};

struct ISN_MediaController_t667419813_StaticFields
{
public:
	// System.Action`1<MP_MediaPickerResult> ISN_MediaController::ActionMediaPickerResult
	Action_1_t1363217908 * ___ActionMediaPickerResult_7;
	// System.Action`1<System.Collections.Generic.List`1<MP_MediaItem>> ISN_MediaController::ActionQueueUpdated
	Action_1_t2927843253 * ___ActionQueueUpdated_8;
	// System.Action`1<MP_MediaItem> ISN_MediaController::ActionNowPlayingItemChanged
	Action_1_t2130884284 * ___ActionNowPlayingItemChanged_9;
	// System.Action`1<MP_MusicPlaybackState> ISN_MediaController::ActionPlaybackStateChanged
	Action_1_t94620334 * ___ActionPlaybackStateChanged_10;
	// System.Action`1<MP_MediaPickerResult> ISN_MediaController::<>f__am$cache7
	Action_1_t1363217908 * ___U3CU3Ef__amU24cache7_11;
	// System.Action`1<System.Collections.Generic.List`1<MP_MediaItem>> ISN_MediaController::<>f__am$cache8
	Action_1_t2927843253 * ___U3CU3Ef__amU24cache8_12;
	// System.Action`1<MP_MediaItem> ISN_MediaController::<>f__am$cache9
	Action_1_t2130884284 * ___U3CU3Ef__amU24cache9_13;
	// System.Action`1<MP_MusicPlaybackState> ISN_MediaController::<>f__am$cacheA
	Action_1_t94620334 * ___U3CU3Ef__amU24cacheA_14;

public:
	inline static int32_t get_offset_of_ActionMediaPickerResult_7() { return static_cast<int32_t>(offsetof(ISN_MediaController_t667419813_StaticFields, ___ActionMediaPickerResult_7)); }
	inline Action_1_t1363217908 * get_ActionMediaPickerResult_7() const { return ___ActionMediaPickerResult_7; }
	inline Action_1_t1363217908 ** get_address_of_ActionMediaPickerResult_7() { return &___ActionMediaPickerResult_7; }
	inline void set_ActionMediaPickerResult_7(Action_1_t1363217908 * value)
	{
		___ActionMediaPickerResult_7 = value;
		Il2CppCodeGenWriteBarrier(&___ActionMediaPickerResult_7, value);
	}

	inline static int32_t get_offset_of_ActionQueueUpdated_8() { return static_cast<int32_t>(offsetof(ISN_MediaController_t667419813_StaticFields, ___ActionQueueUpdated_8)); }
	inline Action_1_t2927843253 * get_ActionQueueUpdated_8() const { return ___ActionQueueUpdated_8; }
	inline Action_1_t2927843253 ** get_address_of_ActionQueueUpdated_8() { return &___ActionQueueUpdated_8; }
	inline void set_ActionQueueUpdated_8(Action_1_t2927843253 * value)
	{
		___ActionQueueUpdated_8 = value;
		Il2CppCodeGenWriteBarrier(&___ActionQueueUpdated_8, value);
	}

	inline static int32_t get_offset_of_ActionNowPlayingItemChanged_9() { return static_cast<int32_t>(offsetof(ISN_MediaController_t667419813_StaticFields, ___ActionNowPlayingItemChanged_9)); }
	inline Action_1_t2130884284 * get_ActionNowPlayingItemChanged_9() const { return ___ActionNowPlayingItemChanged_9; }
	inline Action_1_t2130884284 ** get_address_of_ActionNowPlayingItemChanged_9() { return &___ActionNowPlayingItemChanged_9; }
	inline void set_ActionNowPlayingItemChanged_9(Action_1_t2130884284 * value)
	{
		___ActionNowPlayingItemChanged_9 = value;
		Il2CppCodeGenWriteBarrier(&___ActionNowPlayingItemChanged_9, value);
	}

	inline static int32_t get_offset_of_ActionPlaybackStateChanged_10() { return static_cast<int32_t>(offsetof(ISN_MediaController_t667419813_StaticFields, ___ActionPlaybackStateChanged_10)); }
	inline Action_1_t94620334 * get_ActionPlaybackStateChanged_10() const { return ___ActionPlaybackStateChanged_10; }
	inline Action_1_t94620334 ** get_address_of_ActionPlaybackStateChanged_10() { return &___ActionPlaybackStateChanged_10; }
	inline void set_ActionPlaybackStateChanged_10(Action_1_t94620334 * value)
	{
		___ActionPlaybackStateChanged_10 = value;
		Il2CppCodeGenWriteBarrier(&___ActionPlaybackStateChanged_10, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache7_11() { return static_cast<int32_t>(offsetof(ISN_MediaController_t667419813_StaticFields, ___U3CU3Ef__amU24cache7_11)); }
	inline Action_1_t1363217908 * get_U3CU3Ef__amU24cache7_11() const { return ___U3CU3Ef__amU24cache7_11; }
	inline Action_1_t1363217908 ** get_address_of_U3CU3Ef__amU24cache7_11() { return &___U3CU3Ef__amU24cache7_11; }
	inline void set_U3CU3Ef__amU24cache7_11(Action_1_t1363217908 * value)
	{
		___U3CU3Ef__amU24cache7_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache7_11, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache8_12() { return static_cast<int32_t>(offsetof(ISN_MediaController_t667419813_StaticFields, ___U3CU3Ef__amU24cache8_12)); }
	inline Action_1_t2927843253 * get_U3CU3Ef__amU24cache8_12() const { return ___U3CU3Ef__amU24cache8_12; }
	inline Action_1_t2927843253 ** get_address_of_U3CU3Ef__amU24cache8_12() { return &___U3CU3Ef__amU24cache8_12; }
	inline void set_U3CU3Ef__amU24cache8_12(Action_1_t2927843253 * value)
	{
		___U3CU3Ef__amU24cache8_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache8_12, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache9_13() { return static_cast<int32_t>(offsetof(ISN_MediaController_t667419813_StaticFields, ___U3CU3Ef__amU24cache9_13)); }
	inline Action_1_t2130884284 * get_U3CU3Ef__amU24cache9_13() const { return ___U3CU3Ef__amU24cache9_13; }
	inline Action_1_t2130884284 ** get_address_of_U3CU3Ef__amU24cache9_13() { return &___U3CU3Ef__amU24cache9_13; }
	inline void set_U3CU3Ef__amU24cache9_13(Action_1_t2130884284 * value)
	{
		___U3CU3Ef__amU24cache9_13 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache9_13, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheA_14() { return static_cast<int32_t>(offsetof(ISN_MediaController_t667419813_StaticFields, ___U3CU3Ef__amU24cacheA_14)); }
	inline Action_1_t94620334 * get_U3CU3Ef__amU24cacheA_14() const { return ___U3CU3Ef__amU24cacheA_14; }
	inline Action_1_t94620334 ** get_address_of_U3CU3Ef__amU24cacheA_14() { return &___U3CU3Ef__amU24cacheA_14; }
	inline void set_U3CU3Ef__amU24cacheA_14(Action_1_t94620334 * value)
	{
		___U3CU3Ef__amU24cacheA_14 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheA_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
