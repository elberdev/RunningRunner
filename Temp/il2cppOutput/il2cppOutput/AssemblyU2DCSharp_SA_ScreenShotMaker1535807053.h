#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`1<UnityEngine.Texture2D>
struct Action_1_t2657991227;

#include "AssemblyU2DCSharp_SA_Singleton_1_gen348183589.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA_ScreenShotMaker
struct  SA_ScreenShotMaker_t1535807053  : public SA_Singleton_1_t348183589
{
public:
	// System.Action`1<UnityEngine.Texture2D> SA_ScreenShotMaker::OnScreenshotReady
	Action_1_t2657991227 * ___OnScreenshotReady_4;

public:
	inline static int32_t get_offset_of_OnScreenshotReady_4() { return static_cast<int32_t>(offsetof(SA_ScreenShotMaker_t1535807053, ___OnScreenshotReady_4)); }
	inline Action_1_t2657991227 * get_OnScreenshotReady_4() const { return ___OnScreenshotReady_4; }
	inline Action_1_t2657991227 ** get_address_of_OnScreenshotReady_4() { return &___OnScreenshotReady_4; }
	inline void set_OnScreenshotReady_4(Action_1_t2657991227 * value)
	{
		___OnScreenshotReady_4 = value;
		Il2CppCodeGenWriteBarrier(&___OnScreenshotReady_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
