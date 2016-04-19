#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// iAdBannerController
struct iAdBannerController_t2002597492;
// System.Collections.Generic.Dictionary`2<System.Int32,iAdBanner>
struct Dictionary_2_t1838721623;
// System.Action
struct Action_t437523947;

#include "AssemblyU2DCSharp_ISN_Singleton_1_gen3085721330.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// iAdBannerController
struct  iAdBannerController_t2002597492  : public ISN_Singleton_1_t3085721330
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,iAdBanner> iAdBannerController::_banners
	Dictionary_2_t1838721623 * ____banners_6;
	// System.Boolean iAdBannerController::_IsInterstisialsAdReady
	bool ____IsInterstisialsAdReady_7;

public:
	inline static int32_t get_offset_of__banners_6() { return static_cast<int32_t>(offsetof(iAdBannerController_t2002597492, ____banners_6)); }
	inline Dictionary_2_t1838721623 * get__banners_6() const { return ____banners_6; }
	inline Dictionary_2_t1838721623 ** get_address_of__banners_6() { return &____banners_6; }
	inline void set__banners_6(Dictionary_2_t1838721623 * value)
	{
		____banners_6 = value;
		Il2CppCodeGenWriteBarrier(&____banners_6, value);
	}

	inline static int32_t get_offset_of__IsInterstisialsAdReady_7() { return static_cast<int32_t>(offsetof(iAdBannerController_t2002597492, ____IsInterstisialsAdReady_7)); }
	inline bool get__IsInterstisialsAdReady_7() const { return ____IsInterstisialsAdReady_7; }
	inline bool* get_address_of__IsInterstisialsAdReady_7() { return &____IsInterstisialsAdReady_7; }
	inline void set__IsInterstisialsAdReady_7(bool value)
	{
		____IsInterstisialsAdReady_7 = value;
	}
};

struct iAdBannerController_t2002597492_StaticFields
{
public:
	// System.Int32 iAdBannerController::_nextId
	int32_t ____nextId_4;
	// iAdBannerController iAdBannerController::_instance
	iAdBannerController_t2002597492 * ____instance_5;
	// System.Action iAdBannerController::InterstitialDidFailWithErrorAction
	Action_t437523947 * ___InterstitialDidFailWithErrorAction_8;
	// System.Action iAdBannerController::InterstitialAdWillLoadAction
	Action_t437523947 * ___InterstitialAdWillLoadAction_9;
	// System.Action iAdBannerController::InterstitialAdDidLoadAction
	Action_t437523947 * ___InterstitialAdDidLoadAction_10;
	// System.Action iAdBannerController::InterstitialAdDidFinishAction
	Action_t437523947 * ___InterstitialAdDidFinishAction_11;
	// System.Action iAdBannerController::<>f__am$cache8
	Action_t437523947 * ___U3CU3Ef__amU24cache8_12;
	// System.Action iAdBannerController::<>f__am$cache9
	Action_t437523947 * ___U3CU3Ef__amU24cache9_13;
	// System.Action iAdBannerController::<>f__am$cacheA
	Action_t437523947 * ___U3CU3Ef__amU24cacheA_14;
	// System.Action iAdBannerController::<>f__am$cacheB
	Action_t437523947 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of__nextId_4() { return static_cast<int32_t>(offsetof(iAdBannerController_t2002597492_StaticFields, ____nextId_4)); }
	inline int32_t get__nextId_4() const { return ____nextId_4; }
	inline int32_t* get_address_of__nextId_4() { return &____nextId_4; }
	inline void set__nextId_4(int32_t value)
	{
		____nextId_4 = value;
	}

	inline static int32_t get_offset_of__instance_5() { return static_cast<int32_t>(offsetof(iAdBannerController_t2002597492_StaticFields, ____instance_5)); }
	inline iAdBannerController_t2002597492 * get__instance_5() const { return ____instance_5; }
	inline iAdBannerController_t2002597492 ** get_address_of__instance_5() { return &____instance_5; }
	inline void set__instance_5(iAdBannerController_t2002597492 * value)
	{
		____instance_5 = value;
		Il2CppCodeGenWriteBarrier(&____instance_5, value);
	}

	inline static int32_t get_offset_of_InterstitialDidFailWithErrorAction_8() { return static_cast<int32_t>(offsetof(iAdBannerController_t2002597492_StaticFields, ___InterstitialDidFailWithErrorAction_8)); }
	inline Action_t437523947 * get_InterstitialDidFailWithErrorAction_8() const { return ___InterstitialDidFailWithErrorAction_8; }
	inline Action_t437523947 ** get_address_of_InterstitialDidFailWithErrorAction_8() { return &___InterstitialDidFailWithErrorAction_8; }
	inline void set_InterstitialDidFailWithErrorAction_8(Action_t437523947 * value)
	{
		___InterstitialDidFailWithErrorAction_8 = value;
		Il2CppCodeGenWriteBarrier(&___InterstitialDidFailWithErrorAction_8, value);
	}

	inline static int32_t get_offset_of_InterstitialAdWillLoadAction_9() { return static_cast<int32_t>(offsetof(iAdBannerController_t2002597492_StaticFields, ___InterstitialAdWillLoadAction_9)); }
	inline Action_t437523947 * get_InterstitialAdWillLoadAction_9() const { return ___InterstitialAdWillLoadAction_9; }
	inline Action_t437523947 ** get_address_of_InterstitialAdWillLoadAction_9() { return &___InterstitialAdWillLoadAction_9; }
	inline void set_InterstitialAdWillLoadAction_9(Action_t437523947 * value)
	{
		___InterstitialAdWillLoadAction_9 = value;
		Il2CppCodeGenWriteBarrier(&___InterstitialAdWillLoadAction_9, value);
	}

	inline static int32_t get_offset_of_InterstitialAdDidLoadAction_10() { return static_cast<int32_t>(offsetof(iAdBannerController_t2002597492_StaticFields, ___InterstitialAdDidLoadAction_10)); }
	inline Action_t437523947 * get_InterstitialAdDidLoadAction_10() const { return ___InterstitialAdDidLoadAction_10; }
	inline Action_t437523947 ** get_address_of_InterstitialAdDidLoadAction_10() { return &___InterstitialAdDidLoadAction_10; }
	inline void set_InterstitialAdDidLoadAction_10(Action_t437523947 * value)
	{
		___InterstitialAdDidLoadAction_10 = value;
		Il2CppCodeGenWriteBarrier(&___InterstitialAdDidLoadAction_10, value);
	}

	inline static int32_t get_offset_of_InterstitialAdDidFinishAction_11() { return static_cast<int32_t>(offsetof(iAdBannerController_t2002597492_StaticFields, ___InterstitialAdDidFinishAction_11)); }
	inline Action_t437523947 * get_InterstitialAdDidFinishAction_11() const { return ___InterstitialAdDidFinishAction_11; }
	inline Action_t437523947 ** get_address_of_InterstitialAdDidFinishAction_11() { return &___InterstitialAdDidFinishAction_11; }
	inline void set_InterstitialAdDidFinishAction_11(Action_t437523947 * value)
	{
		___InterstitialAdDidFinishAction_11 = value;
		Il2CppCodeGenWriteBarrier(&___InterstitialAdDidFinishAction_11, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache8_12() { return static_cast<int32_t>(offsetof(iAdBannerController_t2002597492_StaticFields, ___U3CU3Ef__amU24cache8_12)); }
	inline Action_t437523947 * get_U3CU3Ef__amU24cache8_12() const { return ___U3CU3Ef__amU24cache8_12; }
	inline Action_t437523947 ** get_address_of_U3CU3Ef__amU24cache8_12() { return &___U3CU3Ef__amU24cache8_12; }
	inline void set_U3CU3Ef__amU24cache8_12(Action_t437523947 * value)
	{
		___U3CU3Ef__amU24cache8_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache8_12, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache9_13() { return static_cast<int32_t>(offsetof(iAdBannerController_t2002597492_StaticFields, ___U3CU3Ef__amU24cache9_13)); }
	inline Action_t437523947 * get_U3CU3Ef__amU24cache9_13() const { return ___U3CU3Ef__amU24cache9_13; }
	inline Action_t437523947 ** get_address_of_U3CU3Ef__amU24cache9_13() { return &___U3CU3Ef__amU24cache9_13; }
	inline void set_U3CU3Ef__amU24cache9_13(Action_t437523947 * value)
	{
		___U3CU3Ef__amU24cache9_13 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache9_13, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheA_14() { return static_cast<int32_t>(offsetof(iAdBannerController_t2002597492_StaticFields, ___U3CU3Ef__amU24cacheA_14)); }
	inline Action_t437523947 * get_U3CU3Ef__amU24cacheA_14() const { return ___U3CU3Ef__amU24cacheA_14; }
	inline Action_t437523947 ** get_address_of_U3CU3Ef__amU24cacheA_14() { return &___U3CU3Ef__amU24cacheA_14; }
	inline void set_U3CU3Ef__amU24cacheA_14(Action_t437523947 * value)
	{
		___U3CU3Ef__amU24cacheA_14 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheA_14, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(iAdBannerController_t2002597492_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Action_t437523947 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Action_t437523947 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Action_t437523947 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheB_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
