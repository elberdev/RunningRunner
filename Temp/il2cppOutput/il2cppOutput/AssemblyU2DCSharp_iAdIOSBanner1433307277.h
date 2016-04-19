#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.String,iAdBanner>
struct Dictionary_2_t2985608744;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_TextAnchor551935663.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// iAdIOSBanner
struct  iAdIOSBanner_t1433307277  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.TextAnchor iAdIOSBanner::anchor
	int32_t ___anchor_2;

public:
	inline static int32_t get_offset_of_anchor_2() { return static_cast<int32_t>(offsetof(iAdIOSBanner_t1433307277, ___anchor_2)); }
	inline int32_t get_anchor_2() const { return ___anchor_2; }
	inline int32_t* get_address_of_anchor_2() { return &___anchor_2; }
	inline void set_anchor_2(int32_t value)
	{
		___anchor_2 = value;
	}
};

struct iAdIOSBanner_t1433307277_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,iAdBanner> iAdIOSBanner::_registeredBanners
	Dictionary_2_t2985608744 * ____registeredBanners_3;

public:
	inline static int32_t get_offset_of__registeredBanners_3() { return static_cast<int32_t>(offsetof(iAdIOSBanner_t1433307277_StaticFields, ____registeredBanners_3)); }
	inline Dictionary_2_t2985608744 * get__registeredBanners_3() const { return ____registeredBanners_3; }
	inline Dictionary_2_t2985608744 ** get_address_of__registeredBanners_3() { return &____registeredBanners_3; }
	inline void set__registeredBanners_3(Dictionary_2_t2985608744 * value)
	{
		____registeredBanners_3 = value;
		Il2CppCodeGenWriteBarrier(&____registeredBanners_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
