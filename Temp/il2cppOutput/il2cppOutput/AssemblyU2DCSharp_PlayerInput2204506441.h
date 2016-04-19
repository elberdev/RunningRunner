#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Character
struct Character_t3568163593;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "AssemblyU2DCSharp_PlayerInput_SimpleTouch238724237.h"
#include "UnityEngine_UnityEngine_Touch1603883884.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerInput
struct  PlayerInput_t2204506441  : public MonoBehaviour_t3012272455
{
public:
	// System.Single PlayerInput::swipeTime
	float ___swipeTime_2;
	// System.Single PlayerInput::swipeDistance
	float ___swipeDistance_3;
	// Character PlayerInput::gameCharacter
	Character_t3568163593 * ___gameCharacter_4;
	// PlayerInput/SimpleTouch PlayerInput::activeTouch
	SimpleTouch_t238724237  ___activeTouch_5;
	// UnityEngine.Touch PlayerInput::deviceTouch
	Touch_t1603883884  ___deviceTouch_6;

public:
	inline static int32_t get_offset_of_swipeTime_2() { return static_cast<int32_t>(offsetof(PlayerInput_t2204506441, ___swipeTime_2)); }
	inline float get_swipeTime_2() const { return ___swipeTime_2; }
	inline float* get_address_of_swipeTime_2() { return &___swipeTime_2; }
	inline void set_swipeTime_2(float value)
	{
		___swipeTime_2 = value;
	}

	inline static int32_t get_offset_of_swipeDistance_3() { return static_cast<int32_t>(offsetof(PlayerInput_t2204506441, ___swipeDistance_3)); }
	inline float get_swipeDistance_3() const { return ___swipeDistance_3; }
	inline float* get_address_of_swipeDistance_3() { return &___swipeDistance_3; }
	inline void set_swipeDistance_3(float value)
	{
		___swipeDistance_3 = value;
	}

	inline static int32_t get_offset_of_gameCharacter_4() { return static_cast<int32_t>(offsetof(PlayerInput_t2204506441, ___gameCharacter_4)); }
	inline Character_t3568163593 * get_gameCharacter_4() const { return ___gameCharacter_4; }
	inline Character_t3568163593 ** get_address_of_gameCharacter_4() { return &___gameCharacter_4; }
	inline void set_gameCharacter_4(Character_t3568163593 * value)
	{
		___gameCharacter_4 = value;
		Il2CppCodeGenWriteBarrier(&___gameCharacter_4, value);
	}

	inline static int32_t get_offset_of_activeTouch_5() { return static_cast<int32_t>(offsetof(PlayerInput_t2204506441, ___activeTouch_5)); }
	inline SimpleTouch_t238724237  get_activeTouch_5() const { return ___activeTouch_5; }
	inline SimpleTouch_t238724237 * get_address_of_activeTouch_5() { return &___activeTouch_5; }
	inline void set_activeTouch_5(SimpleTouch_t238724237  value)
	{
		___activeTouch_5 = value;
	}

	inline static int32_t get_offset_of_deviceTouch_6() { return static_cast<int32_t>(offsetof(PlayerInput_t2204506441, ___deviceTouch_6)); }
	inline Touch_t1603883884  get_deviceTouch_6() const { return ___deviceTouch_6; }
	inline Touch_t1603883884 * get_address_of_deviceTouch_6() { return &___deviceTouch_6; }
	inline void set_deviceTouch_6(Touch_t1603883884  value)
	{
		___deviceTouch_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
