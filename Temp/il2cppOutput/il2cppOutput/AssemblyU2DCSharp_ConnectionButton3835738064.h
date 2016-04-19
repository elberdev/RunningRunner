#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ConnectionButton
struct  ConnectionButton_t3835738064  : public MonoBehaviour_t3012272455
{
public:
	// System.Single ConnectionButton::w
	float ___w_2;
	// System.Single ConnectionButton::h
	float ___h_3;
	// UnityEngine.Rect ConnectionButton::r
	Rect_t1525428817  ___r_4;

public:
	inline static int32_t get_offset_of_w_2() { return static_cast<int32_t>(offsetof(ConnectionButton_t3835738064, ___w_2)); }
	inline float get_w_2() const { return ___w_2; }
	inline float* get_address_of_w_2() { return &___w_2; }
	inline void set_w_2(float value)
	{
		___w_2 = value;
	}

	inline static int32_t get_offset_of_h_3() { return static_cast<int32_t>(offsetof(ConnectionButton_t3835738064, ___h_3)); }
	inline float get_h_3() const { return ___h_3; }
	inline float* get_address_of_h_3() { return &___h_3; }
	inline void set_h_3(float value)
	{
		___h_3 = value;
	}

	inline static int32_t get_offset_of_r_4() { return static_cast<int32_t>(offsetof(ConnectionButton_t3835738064, ___r_4)); }
	inline Rect_t1525428817  get_r_4() const { return ___r_4; }
	inline Rect_t1525428817 * get_address_of_r_4() { return &___r_4; }
	inline void set_r_4(Rect_t1525428817  value)
	{
		___r_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
