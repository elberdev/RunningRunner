#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action
struct Action_t437523947;

#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_TextAnchor551935663.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// iAdBanner
struct  iAdBanner_t1347910840  : public Il2CppObject
{
public:
	// System.Boolean iAdBanner::_IsLoaded
	bool ____IsLoaded_0;
	// System.Boolean iAdBanner::_IsOnScreen
	bool ____IsOnScreen_1;
	// System.Boolean iAdBanner::firstLoad
	bool ___firstLoad_2;
	// System.Boolean iAdBanner::_ShowOnLoad
	bool ____ShowOnLoad_3;
	// System.Int32 iAdBanner::_id
	int32_t ____id_4;
	// UnityEngine.TextAnchor iAdBanner::_anchor
	int32_t ____anchor_5;
	// System.Action iAdBanner::AdLoadedAction
	Action_t437523947 * ___AdLoadedAction_6;
	// System.Action iAdBanner::FailToReceiveAdAction
	Action_t437523947 * ___FailToReceiveAdAction_7;
	// System.Action iAdBanner::AdWiewLoadedAction
	Action_t437523947 * ___AdWiewLoadedAction_8;
	// System.Action iAdBanner::AdViewActionBeginAction
	Action_t437523947 * ___AdViewActionBeginAction_9;
	// System.Action iAdBanner::AdViewFinishedAction
	Action_t437523947 * ___AdViewFinishedAction_10;

public:
	inline static int32_t get_offset_of__IsLoaded_0() { return static_cast<int32_t>(offsetof(iAdBanner_t1347910840, ____IsLoaded_0)); }
	inline bool get__IsLoaded_0() const { return ____IsLoaded_0; }
	inline bool* get_address_of__IsLoaded_0() { return &____IsLoaded_0; }
	inline void set__IsLoaded_0(bool value)
	{
		____IsLoaded_0 = value;
	}

	inline static int32_t get_offset_of__IsOnScreen_1() { return static_cast<int32_t>(offsetof(iAdBanner_t1347910840, ____IsOnScreen_1)); }
	inline bool get__IsOnScreen_1() const { return ____IsOnScreen_1; }
	inline bool* get_address_of__IsOnScreen_1() { return &____IsOnScreen_1; }
	inline void set__IsOnScreen_1(bool value)
	{
		____IsOnScreen_1 = value;
	}

	inline static int32_t get_offset_of_firstLoad_2() { return static_cast<int32_t>(offsetof(iAdBanner_t1347910840, ___firstLoad_2)); }
	inline bool get_firstLoad_2() const { return ___firstLoad_2; }
	inline bool* get_address_of_firstLoad_2() { return &___firstLoad_2; }
	inline void set_firstLoad_2(bool value)
	{
		___firstLoad_2 = value;
	}

	inline static int32_t get_offset_of__ShowOnLoad_3() { return static_cast<int32_t>(offsetof(iAdBanner_t1347910840, ____ShowOnLoad_3)); }
	inline bool get__ShowOnLoad_3() const { return ____ShowOnLoad_3; }
	inline bool* get_address_of__ShowOnLoad_3() { return &____ShowOnLoad_3; }
	inline void set__ShowOnLoad_3(bool value)
	{
		____ShowOnLoad_3 = value;
	}

	inline static int32_t get_offset_of__id_4() { return static_cast<int32_t>(offsetof(iAdBanner_t1347910840, ____id_4)); }
	inline int32_t get__id_4() const { return ____id_4; }
	inline int32_t* get_address_of__id_4() { return &____id_4; }
	inline void set__id_4(int32_t value)
	{
		____id_4 = value;
	}

	inline static int32_t get_offset_of__anchor_5() { return static_cast<int32_t>(offsetof(iAdBanner_t1347910840, ____anchor_5)); }
	inline int32_t get__anchor_5() const { return ____anchor_5; }
	inline int32_t* get_address_of__anchor_5() { return &____anchor_5; }
	inline void set__anchor_5(int32_t value)
	{
		____anchor_5 = value;
	}

	inline static int32_t get_offset_of_AdLoadedAction_6() { return static_cast<int32_t>(offsetof(iAdBanner_t1347910840, ___AdLoadedAction_6)); }
	inline Action_t437523947 * get_AdLoadedAction_6() const { return ___AdLoadedAction_6; }
	inline Action_t437523947 ** get_address_of_AdLoadedAction_6() { return &___AdLoadedAction_6; }
	inline void set_AdLoadedAction_6(Action_t437523947 * value)
	{
		___AdLoadedAction_6 = value;
		Il2CppCodeGenWriteBarrier(&___AdLoadedAction_6, value);
	}

	inline static int32_t get_offset_of_FailToReceiveAdAction_7() { return static_cast<int32_t>(offsetof(iAdBanner_t1347910840, ___FailToReceiveAdAction_7)); }
	inline Action_t437523947 * get_FailToReceiveAdAction_7() const { return ___FailToReceiveAdAction_7; }
	inline Action_t437523947 ** get_address_of_FailToReceiveAdAction_7() { return &___FailToReceiveAdAction_7; }
	inline void set_FailToReceiveAdAction_7(Action_t437523947 * value)
	{
		___FailToReceiveAdAction_7 = value;
		Il2CppCodeGenWriteBarrier(&___FailToReceiveAdAction_7, value);
	}

	inline static int32_t get_offset_of_AdWiewLoadedAction_8() { return static_cast<int32_t>(offsetof(iAdBanner_t1347910840, ___AdWiewLoadedAction_8)); }
	inline Action_t437523947 * get_AdWiewLoadedAction_8() const { return ___AdWiewLoadedAction_8; }
	inline Action_t437523947 ** get_address_of_AdWiewLoadedAction_8() { return &___AdWiewLoadedAction_8; }
	inline void set_AdWiewLoadedAction_8(Action_t437523947 * value)
	{
		___AdWiewLoadedAction_8 = value;
		Il2CppCodeGenWriteBarrier(&___AdWiewLoadedAction_8, value);
	}

	inline static int32_t get_offset_of_AdViewActionBeginAction_9() { return static_cast<int32_t>(offsetof(iAdBanner_t1347910840, ___AdViewActionBeginAction_9)); }
	inline Action_t437523947 * get_AdViewActionBeginAction_9() const { return ___AdViewActionBeginAction_9; }
	inline Action_t437523947 ** get_address_of_AdViewActionBeginAction_9() { return &___AdViewActionBeginAction_9; }
	inline void set_AdViewActionBeginAction_9(Action_t437523947 * value)
	{
		___AdViewActionBeginAction_9 = value;
		Il2CppCodeGenWriteBarrier(&___AdViewActionBeginAction_9, value);
	}

	inline static int32_t get_offset_of_AdViewFinishedAction_10() { return static_cast<int32_t>(offsetof(iAdBanner_t1347910840, ___AdViewFinishedAction_10)); }
	inline Action_t437523947 * get_AdViewFinishedAction_10() const { return ___AdViewFinishedAction_10; }
	inline Action_t437523947 ** get_address_of_AdViewFinishedAction_10() { return &___AdViewFinishedAction_10; }
	inline void set_AdViewFinishedAction_10(Action_t437523947 * value)
	{
		___AdViewFinishedAction_10 = value;
		Il2CppCodeGenWriteBarrier(&___AdViewFinishedAction_10, value);
	}
};

struct iAdBanner_t1347910840_StaticFields
{
public:
	// System.Action iAdBanner::<>f__am$cacheB
	Action_t437523947 * ___U3CU3Ef__amU24cacheB_11;
	// System.Action iAdBanner::<>f__am$cacheC
	Action_t437523947 * ___U3CU3Ef__amU24cacheC_12;
	// System.Action iAdBanner::<>f__am$cacheD
	Action_t437523947 * ___U3CU3Ef__amU24cacheD_13;
	// System.Action iAdBanner::<>f__am$cacheE
	Action_t437523947 * ___U3CU3Ef__amU24cacheE_14;
	// System.Action iAdBanner::<>f__am$cacheF
	Action_t437523947 * ___U3CU3Ef__amU24cacheF_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_11() { return static_cast<int32_t>(offsetof(iAdBanner_t1347910840_StaticFields, ___U3CU3Ef__amU24cacheB_11)); }
	inline Action_t437523947 * get_U3CU3Ef__amU24cacheB_11() const { return ___U3CU3Ef__amU24cacheB_11; }
	inline Action_t437523947 ** get_address_of_U3CU3Ef__amU24cacheB_11() { return &___U3CU3Ef__amU24cacheB_11; }
	inline void set_U3CU3Ef__amU24cacheB_11(Action_t437523947 * value)
	{
		___U3CU3Ef__amU24cacheB_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheB_11, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheC_12() { return static_cast<int32_t>(offsetof(iAdBanner_t1347910840_StaticFields, ___U3CU3Ef__amU24cacheC_12)); }
	inline Action_t437523947 * get_U3CU3Ef__amU24cacheC_12() const { return ___U3CU3Ef__amU24cacheC_12; }
	inline Action_t437523947 ** get_address_of_U3CU3Ef__amU24cacheC_12() { return &___U3CU3Ef__amU24cacheC_12; }
	inline void set_U3CU3Ef__amU24cacheC_12(Action_t437523947 * value)
	{
		___U3CU3Ef__amU24cacheC_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheC_12, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheD_13() { return static_cast<int32_t>(offsetof(iAdBanner_t1347910840_StaticFields, ___U3CU3Ef__amU24cacheD_13)); }
	inline Action_t437523947 * get_U3CU3Ef__amU24cacheD_13() const { return ___U3CU3Ef__amU24cacheD_13; }
	inline Action_t437523947 ** get_address_of_U3CU3Ef__amU24cacheD_13() { return &___U3CU3Ef__amU24cacheD_13; }
	inline void set_U3CU3Ef__amU24cacheD_13(Action_t437523947 * value)
	{
		___U3CU3Ef__amU24cacheD_13 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheD_13, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheE_14() { return static_cast<int32_t>(offsetof(iAdBanner_t1347910840_StaticFields, ___U3CU3Ef__amU24cacheE_14)); }
	inline Action_t437523947 * get_U3CU3Ef__amU24cacheE_14() const { return ___U3CU3Ef__amU24cacheE_14; }
	inline Action_t437523947 ** get_address_of_U3CU3Ef__amU24cacheE_14() { return &___U3CU3Ef__amU24cacheE_14; }
	inline void set_U3CU3Ef__amU24cacheE_14(Action_t437523947 * value)
	{
		___U3CU3Ef__amU24cacheE_14 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheE_14, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheF_15() { return static_cast<int32_t>(offsetof(iAdBanner_t1347910840_StaticFields, ___U3CU3Ef__amU24cacheF_15)); }
	inline Action_t437523947 * get_U3CU3Ef__amU24cacheF_15() const { return ___U3CU3Ef__amU24cacheF_15; }
	inline Action_t437523947 ** get_address_of_U3CU3Ef__amU24cacheF_15() { return &___U3CU3Ef__amU24cacheF_15; }
	inline void set_U3CU3Ef__amU24cacheF_15(Action_t437523947 * value)
	{
		___U3CU3Ef__amU24cacheF_15 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheF_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
