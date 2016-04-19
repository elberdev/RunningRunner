#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t284553113;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Obstacle
struct  Obstacle_t426579631  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Transform Obstacle::pivot
	Transform_t284553113 * ___pivot_2;
	// UnityEngine.Vector2 Obstacle::rotationSpeedGap
	Vector2_t3525329788  ___rotationSpeedGap_3;
	// System.Single Obstacle::rotationSpeed
	float ___rotationSpeed_4;

public:
	inline static int32_t get_offset_of_pivot_2() { return static_cast<int32_t>(offsetof(Obstacle_t426579631, ___pivot_2)); }
	inline Transform_t284553113 * get_pivot_2() const { return ___pivot_2; }
	inline Transform_t284553113 ** get_address_of_pivot_2() { return &___pivot_2; }
	inline void set_pivot_2(Transform_t284553113 * value)
	{
		___pivot_2 = value;
		Il2CppCodeGenWriteBarrier(&___pivot_2, value);
	}

	inline static int32_t get_offset_of_rotationSpeedGap_3() { return static_cast<int32_t>(offsetof(Obstacle_t426579631, ___rotationSpeedGap_3)); }
	inline Vector2_t3525329788  get_rotationSpeedGap_3() const { return ___rotationSpeedGap_3; }
	inline Vector2_t3525329788 * get_address_of_rotationSpeedGap_3() { return &___rotationSpeedGap_3; }
	inline void set_rotationSpeedGap_3(Vector2_t3525329788  value)
	{
		___rotationSpeedGap_3 = value;
	}

	inline static int32_t get_offset_of_rotationSpeed_4() { return static_cast<int32_t>(offsetof(Obstacle_t426579631, ___rotationSpeed_4)); }
	inline float get_rotationSpeed_4() const { return ___rotationSpeed_4; }
	inline float* get_address_of_rotationSpeed_4() { return &___rotationSpeed_4; }
	inline void set_rotationSpeed_4(float value)
	{
		___rotationSpeed_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
