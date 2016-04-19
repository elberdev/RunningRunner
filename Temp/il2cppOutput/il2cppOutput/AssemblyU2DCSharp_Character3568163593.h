#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GameInfo
struct GameInfo_t2590130144;
// UnityEngine.Canvas
struct Canvas_t3534013893;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t2223784725;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t3632243084;
// UnityEngine.Animator
struct Animator_t792326996;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Character
struct  Character_t3568163593  : public MonoBehaviour_t3012272455
{
public:
	// GameInfo Character::game
	GameInfo_t2590130144 * ___game_2;
	// System.Boolean Character::isJumping
	bool ___isJumping_3;
	// System.Boolean Character::isDead
	bool ___isDead_4;
	// System.Int32 Character::coinCount
	int32_t ___coinCount_5;
	// UnityEngine.Canvas Character::gameUI
	Canvas_t3534013893 * ___gameUI_6;
	// System.Int32 Character::distanceCount
	int32_t ___distanceCount_7;
	// System.Single Character::currentTime
	float ___currentTime_8;
	// UnityEngine.Vector3 Character::restartLocation
	Vector3_t3525329789  ___restartLocation_9;
	// System.Boolean Character::isFadeOut
	bool ___isFadeOut_10;
	// UnityEngine.SpriteRenderer Character::gameCharacterSprite
	SpriteRenderer_t2223784725 * ___gameCharacterSprite_11;
	// UnityEngine.Rigidbody2D Character::characterRigidbody
	Rigidbody2D_t3632243084 * ___characterRigidbody_12;
	// UnityEngine.Animator Character::characterAnimator
	Animator_t792326996 * ___characterAnimator_13;

public:
	inline static int32_t get_offset_of_game_2() { return static_cast<int32_t>(offsetof(Character_t3568163593, ___game_2)); }
	inline GameInfo_t2590130144 * get_game_2() const { return ___game_2; }
	inline GameInfo_t2590130144 ** get_address_of_game_2() { return &___game_2; }
	inline void set_game_2(GameInfo_t2590130144 * value)
	{
		___game_2 = value;
		Il2CppCodeGenWriteBarrier(&___game_2, value);
	}

	inline static int32_t get_offset_of_isJumping_3() { return static_cast<int32_t>(offsetof(Character_t3568163593, ___isJumping_3)); }
	inline bool get_isJumping_3() const { return ___isJumping_3; }
	inline bool* get_address_of_isJumping_3() { return &___isJumping_3; }
	inline void set_isJumping_3(bool value)
	{
		___isJumping_3 = value;
	}

	inline static int32_t get_offset_of_isDead_4() { return static_cast<int32_t>(offsetof(Character_t3568163593, ___isDead_4)); }
	inline bool get_isDead_4() const { return ___isDead_4; }
	inline bool* get_address_of_isDead_4() { return &___isDead_4; }
	inline void set_isDead_4(bool value)
	{
		___isDead_4 = value;
	}

	inline static int32_t get_offset_of_coinCount_5() { return static_cast<int32_t>(offsetof(Character_t3568163593, ___coinCount_5)); }
	inline int32_t get_coinCount_5() const { return ___coinCount_5; }
	inline int32_t* get_address_of_coinCount_5() { return &___coinCount_5; }
	inline void set_coinCount_5(int32_t value)
	{
		___coinCount_5 = value;
	}

	inline static int32_t get_offset_of_gameUI_6() { return static_cast<int32_t>(offsetof(Character_t3568163593, ___gameUI_6)); }
	inline Canvas_t3534013893 * get_gameUI_6() const { return ___gameUI_6; }
	inline Canvas_t3534013893 ** get_address_of_gameUI_6() { return &___gameUI_6; }
	inline void set_gameUI_6(Canvas_t3534013893 * value)
	{
		___gameUI_6 = value;
		Il2CppCodeGenWriteBarrier(&___gameUI_6, value);
	}

	inline static int32_t get_offset_of_distanceCount_7() { return static_cast<int32_t>(offsetof(Character_t3568163593, ___distanceCount_7)); }
	inline int32_t get_distanceCount_7() const { return ___distanceCount_7; }
	inline int32_t* get_address_of_distanceCount_7() { return &___distanceCount_7; }
	inline void set_distanceCount_7(int32_t value)
	{
		___distanceCount_7 = value;
	}

	inline static int32_t get_offset_of_currentTime_8() { return static_cast<int32_t>(offsetof(Character_t3568163593, ___currentTime_8)); }
	inline float get_currentTime_8() const { return ___currentTime_8; }
	inline float* get_address_of_currentTime_8() { return &___currentTime_8; }
	inline void set_currentTime_8(float value)
	{
		___currentTime_8 = value;
	}

	inline static int32_t get_offset_of_restartLocation_9() { return static_cast<int32_t>(offsetof(Character_t3568163593, ___restartLocation_9)); }
	inline Vector3_t3525329789  get_restartLocation_9() const { return ___restartLocation_9; }
	inline Vector3_t3525329789 * get_address_of_restartLocation_9() { return &___restartLocation_9; }
	inline void set_restartLocation_9(Vector3_t3525329789  value)
	{
		___restartLocation_9 = value;
	}

	inline static int32_t get_offset_of_isFadeOut_10() { return static_cast<int32_t>(offsetof(Character_t3568163593, ___isFadeOut_10)); }
	inline bool get_isFadeOut_10() const { return ___isFadeOut_10; }
	inline bool* get_address_of_isFadeOut_10() { return &___isFadeOut_10; }
	inline void set_isFadeOut_10(bool value)
	{
		___isFadeOut_10 = value;
	}

	inline static int32_t get_offset_of_gameCharacterSprite_11() { return static_cast<int32_t>(offsetof(Character_t3568163593, ___gameCharacterSprite_11)); }
	inline SpriteRenderer_t2223784725 * get_gameCharacterSprite_11() const { return ___gameCharacterSprite_11; }
	inline SpriteRenderer_t2223784725 ** get_address_of_gameCharacterSprite_11() { return &___gameCharacterSprite_11; }
	inline void set_gameCharacterSprite_11(SpriteRenderer_t2223784725 * value)
	{
		___gameCharacterSprite_11 = value;
		Il2CppCodeGenWriteBarrier(&___gameCharacterSprite_11, value);
	}

	inline static int32_t get_offset_of_characterRigidbody_12() { return static_cast<int32_t>(offsetof(Character_t3568163593, ___characterRigidbody_12)); }
	inline Rigidbody2D_t3632243084 * get_characterRigidbody_12() const { return ___characterRigidbody_12; }
	inline Rigidbody2D_t3632243084 ** get_address_of_characterRigidbody_12() { return &___characterRigidbody_12; }
	inline void set_characterRigidbody_12(Rigidbody2D_t3632243084 * value)
	{
		___characterRigidbody_12 = value;
		Il2CppCodeGenWriteBarrier(&___characterRigidbody_12, value);
	}

	inline static int32_t get_offset_of_characterAnimator_13() { return static_cast<int32_t>(offsetof(Character_t3568163593, ___characterAnimator_13)); }
	inline Animator_t792326996 * get_characterAnimator_13() const { return ___characterAnimator_13; }
	inline Animator_t792326996 ** get_address_of_characterAnimator_13() { return &___characterAnimator_13; }
	inline void set_characterAnimator_13(Animator_t792326996 * value)
	{
		___characterAnimator_13 = value;
		Il2CppCodeGenWriteBarrier(&___characterAnimator_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
