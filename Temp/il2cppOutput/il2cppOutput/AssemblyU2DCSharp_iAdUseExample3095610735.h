#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GUIStyle
struct GUIStyle_t1006925219;
// iAdBanner
struct iAdBanner_t1347910840;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// iAdUseExample
struct  iAdUseExample_t3095610735  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GUIStyle iAdUseExample::style
	GUIStyle_t1006925219 * ___style_2;
	// UnityEngine.GUIStyle iAdUseExample::style2
	GUIStyle_t1006925219 * ___style2_3;
	// iAdBanner iAdUseExample::banner1
	iAdBanner_t1347910840 * ___banner1_4;
	// iAdBanner iAdUseExample::banner2
	iAdBanner_t1347910840 * ___banner2_5;
	// UnityEngine.GameObject iAdUseExample::Quad
	GameObject_t4012695102 * ___Quad_6;

public:
	inline static int32_t get_offset_of_style_2() { return static_cast<int32_t>(offsetof(iAdUseExample_t3095610735, ___style_2)); }
	inline GUIStyle_t1006925219 * get_style_2() const { return ___style_2; }
	inline GUIStyle_t1006925219 ** get_address_of_style_2() { return &___style_2; }
	inline void set_style_2(GUIStyle_t1006925219 * value)
	{
		___style_2 = value;
		Il2CppCodeGenWriteBarrier(&___style_2, value);
	}

	inline static int32_t get_offset_of_style2_3() { return static_cast<int32_t>(offsetof(iAdUseExample_t3095610735, ___style2_3)); }
	inline GUIStyle_t1006925219 * get_style2_3() const { return ___style2_3; }
	inline GUIStyle_t1006925219 ** get_address_of_style2_3() { return &___style2_3; }
	inline void set_style2_3(GUIStyle_t1006925219 * value)
	{
		___style2_3 = value;
		Il2CppCodeGenWriteBarrier(&___style2_3, value);
	}

	inline static int32_t get_offset_of_banner1_4() { return static_cast<int32_t>(offsetof(iAdUseExample_t3095610735, ___banner1_4)); }
	inline iAdBanner_t1347910840 * get_banner1_4() const { return ___banner1_4; }
	inline iAdBanner_t1347910840 ** get_address_of_banner1_4() { return &___banner1_4; }
	inline void set_banner1_4(iAdBanner_t1347910840 * value)
	{
		___banner1_4 = value;
		Il2CppCodeGenWriteBarrier(&___banner1_4, value);
	}

	inline static int32_t get_offset_of_banner2_5() { return static_cast<int32_t>(offsetof(iAdUseExample_t3095610735, ___banner2_5)); }
	inline iAdBanner_t1347910840 * get_banner2_5() const { return ___banner2_5; }
	inline iAdBanner_t1347910840 ** get_address_of_banner2_5() { return &___banner2_5; }
	inline void set_banner2_5(iAdBanner_t1347910840 * value)
	{
		___banner2_5 = value;
		Il2CppCodeGenWriteBarrier(&___banner2_5, value);
	}

	inline static int32_t get_offset_of_Quad_6() { return static_cast<int32_t>(offsetof(iAdUseExample_t3095610735, ___Quad_6)); }
	inline GameObject_t4012695102 * get_Quad_6() const { return ___Quad_6; }
	inline GameObject_t4012695102 ** get_address_of_Quad_6() { return &___Quad_6; }
	inline void set_Quad_6(GameObject_t4012695102 * value)
	{
		___Quad_6 = value;
		Il2CppCodeGenWriteBarrier(&___Quad_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
