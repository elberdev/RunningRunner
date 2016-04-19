#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType4014882752.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "mscorlib_System_DateTime339033936.h"
#include "UnityEngine_UnityEngine_TouchPhase1905076713.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerInput/SimpleTouch
struct  SimpleTouch_t238724237 
{
public:
	// UnityEngine.Vector2 PlayerInput/SimpleTouch::startTouchLocation
	Vector2_t3525329788  ___startTouchLocation_0;
	// UnityEngine.Vector2 PlayerInput/SimpleTouch::currentTouchLocation
	Vector2_t3525329788  ___currentTouchLocation_1;
	// System.DateTime PlayerInput/SimpleTouch::startTime
	DateTime_t339033936  ___startTime_2;
	// UnityEngine.TouchPhase PlayerInput/SimpleTouch::phase
	int32_t ___phase_3;

public:
	inline static int32_t get_offset_of_startTouchLocation_0() { return static_cast<int32_t>(offsetof(SimpleTouch_t238724237, ___startTouchLocation_0)); }
	inline Vector2_t3525329788  get_startTouchLocation_0() const { return ___startTouchLocation_0; }
	inline Vector2_t3525329788 * get_address_of_startTouchLocation_0() { return &___startTouchLocation_0; }
	inline void set_startTouchLocation_0(Vector2_t3525329788  value)
	{
		___startTouchLocation_0 = value;
	}

	inline static int32_t get_offset_of_currentTouchLocation_1() { return static_cast<int32_t>(offsetof(SimpleTouch_t238724237, ___currentTouchLocation_1)); }
	inline Vector2_t3525329788  get_currentTouchLocation_1() const { return ___currentTouchLocation_1; }
	inline Vector2_t3525329788 * get_address_of_currentTouchLocation_1() { return &___currentTouchLocation_1; }
	inline void set_currentTouchLocation_1(Vector2_t3525329788  value)
	{
		___currentTouchLocation_1 = value;
	}

	inline static int32_t get_offset_of_startTime_2() { return static_cast<int32_t>(offsetof(SimpleTouch_t238724237, ___startTime_2)); }
	inline DateTime_t339033936  get_startTime_2() const { return ___startTime_2; }
	inline DateTime_t339033936 * get_address_of_startTime_2() { return &___startTime_2; }
	inline void set_startTime_2(DateTime_t339033936  value)
	{
		___startTime_2 = value;
	}

	inline static int32_t get_offset_of_phase_3() { return static_cast<int32_t>(offsetof(SimpleTouch_t238724237, ___phase_3)); }
	inline int32_t get_phase_3() const { return ___phase_3; }
	inline int32_t* get_address_of_phase_3() { return &___phase_3; }
	inline void set_phase_3(int32_t value)
	{
		___phase_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
