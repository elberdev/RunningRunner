#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Sprite
struct Sprite_t4006040370;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "mscorlib_System_ValueType4014882752.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SceneBackground/BackgroundElement
struct  BackgroundElement_t1302598094 
{
public:
	// UnityEngine.Sprite SceneBackground/BackgroundElement::backgroundSprite
	Sprite_t4006040370 * ___backgroundSprite_0;
	// System.Single SceneBackground/BackgroundElement::movementSpeed
	float ___movementSpeed_1;
	// System.Single SceneBackground/BackgroundElement::movementDistance
	float ___movementDistance_2;
	// UnityEngine.Vector3 SceneBackground/BackgroundElement::spriteLocation
	Vector3_t3525329789  ___spriteLocation_3;
	// UnityEngine.Vector3 SceneBackground/BackgroundElement::spriteScale
	Vector3_t3525329789  ___spriteScale_4;
	// UnityEngine.Vector3 SceneBackground/BackgroundElement::objectStartLocation
	Vector3_t3525329789  ___objectStartLocation_5;
	// UnityEngine.GameObject SceneBackground/BackgroundElement::childObject
	GameObject_t4012695102 * ___childObject_6;
	// System.Boolean SceneBackground/BackgroundElement::bMoveBackwards
	bool ___bMoveBackwards_7;

public:
	inline static int32_t get_offset_of_backgroundSprite_0() { return static_cast<int32_t>(offsetof(BackgroundElement_t1302598094, ___backgroundSprite_0)); }
	inline Sprite_t4006040370 * get_backgroundSprite_0() const { return ___backgroundSprite_0; }
	inline Sprite_t4006040370 ** get_address_of_backgroundSprite_0() { return &___backgroundSprite_0; }
	inline void set_backgroundSprite_0(Sprite_t4006040370 * value)
	{
		___backgroundSprite_0 = value;
		Il2CppCodeGenWriteBarrier(&___backgroundSprite_0, value);
	}

	inline static int32_t get_offset_of_movementSpeed_1() { return static_cast<int32_t>(offsetof(BackgroundElement_t1302598094, ___movementSpeed_1)); }
	inline float get_movementSpeed_1() const { return ___movementSpeed_1; }
	inline float* get_address_of_movementSpeed_1() { return &___movementSpeed_1; }
	inline void set_movementSpeed_1(float value)
	{
		___movementSpeed_1 = value;
	}

	inline static int32_t get_offset_of_movementDistance_2() { return static_cast<int32_t>(offsetof(BackgroundElement_t1302598094, ___movementDistance_2)); }
	inline float get_movementDistance_2() const { return ___movementDistance_2; }
	inline float* get_address_of_movementDistance_2() { return &___movementDistance_2; }
	inline void set_movementDistance_2(float value)
	{
		___movementDistance_2 = value;
	}

	inline static int32_t get_offset_of_spriteLocation_3() { return static_cast<int32_t>(offsetof(BackgroundElement_t1302598094, ___spriteLocation_3)); }
	inline Vector3_t3525329789  get_spriteLocation_3() const { return ___spriteLocation_3; }
	inline Vector3_t3525329789 * get_address_of_spriteLocation_3() { return &___spriteLocation_3; }
	inline void set_spriteLocation_3(Vector3_t3525329789  value)
	{
		___spriteLocation_3 = value;
	}

	inline static int32_t get_offset_of_spriteScale_4() { return static_cast<int32_t>(offsetof(BackgroundElement_t1302598094, ___spriteScale_4)); }
	inline Vector3_t3525329789  get_spriteScale_4() const { return ___spriteScale_4; }
	inline Vector3_t3525329789 * get_address_of_spriteScale_4() { return &___spriteScale_4; }
	inline void set_spriteScale_4(Vector3_t3525329789  value)
	{
		___spriteScale_4 = value;
	}

	inline static int32_t get_offset_of_objectStartLocation_5() { return static_cast<int32_t>(offsetof(BackgroundElement_t1302598094, ___objectStartLocation_5)); }
	inline Vector3_t3525329789  get_objectStartLocation_5() const { return ___objectStartLocation_5; }
	inline Vector3_t3525329789 * get_address_of_objectStartLocation_5() { return &___objectStartLocation_5; }
	inline void set_objectStartLocation_5(Vector3_t3525329789  value)
	{
		___objectStartLocation_5 = value;
	}

	inline static int32_t get_offset_of_childObject_6() { return static_cast<int32_t>(offsetof(BackgroundElement_t1302598094, ___childObject_6)); }
	inline GameObject_t4012695102 * get_childObject_6() const { return ___childObject_6; }
	inline GameObject_t4012695102 ** get_address_of_childObject_6() { return &___childObject_6; }
	inline void set_childObject_6(GameObject_t4012695102 * value)
	{
		___childObject_6 = value;
		Il2CppCodeGenWriteBarrier(&___childObject_6, value);
	}

	inline static int32_t get_offset_of_bMoveBackwards_7() { return static_cast<int32_t>(offsetof(BackgroundElement_t1302598094, ___bMoveBackwards_7)); }
	inline bool get_bMoveBackwards_7() const { return ___bMoveBackwards_7; }
	inline bool* get_address_of_bMoveBackwards_7() { return &___bMoveBackwards_7; }
	inline void set_bMoveBackwards_7(bool value)
	{
		___bMoveBackwards_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
