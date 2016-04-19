#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SceneBackground/BackgroundElement[]
struct BackgroundElementU5BU5D_t701208379;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SceneBackground
struct  SceneBackground_t3365126842  : public MonoBehaviour_t3012272455
{
public:
	// SceneBackground/BackgroundElement[] SceneBackground::sceneBackgroundElements
	BackgroundElementU5BU5D_t701208379* ___sceneBackgroundElements_2;

public:
	inline static int32_t get_offset_of_sceneBackgroundElements_2() { return static_cast<int32_t>(offsetof(SceneBackground_t3365126842, ___sceneBackgroundElements_2)); }
	inline BackgroundElementU5BU5D_t701208379* get_sceneBackgroundElements_2() const { return ___sceneBackgroundElements_2; }
	inline BackgroundElementU5BU5D_t701208379** get_address_of_sceneBackgroundElements_2() { return &___sceneBackgroundElements_2; }
	inline void set_sceneBackgroundElements_2(BackgroundElementU5BU5D_t701208379* value)
	{
		___sceneBackgroundElements_2 = value;
		Il2CppCodeGenWriteBarrier(&___sceneBackgroundElements_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
