#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;
// Character
struct Character_t3568163593;
// LevelPieceManager
struct LevelPieceManager_t3648953955;
// UnityEngine.Transform
struct Transform_t284553113;
// UnityEngine.GUITexture
struct GUITexture_t63494093;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameInfo
struct  GameInfo_t2590130144  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject GameInfo::gameUI
	GameObject_t4012695102 * ___gameUI_2;
	// Character GameInfo::gameCharacter
	Character_t3568163593 * ___gameCharacter_3;
	// LevelPieceManager GameInfo::levelManager
	LevelPieceManager_t3648953955 * ___levelManager_4;
	// UnityEngine.Transform GameInfo::fadeObject
	Transform_t284553113 * ___fadeObject_5;
	// UnityEngine.GUITexture GameInfo::fadeTexture
	GUITexture_t63494093 * ___fadeTexture_6;
	// System.Boolean GameInfo::shouldRestartGame
	bool ___shouldRestartGame_7;
	// System.Boolean GameInfo::shouldFade
	bool ___shouldFade_8;
	// System.Boolean GameInfo::shouldRestartLevelAndCharacter
	bool ___shouldRestartLevelAndCharacter_9;

public:
	inline static int32_t get_offset_of_gameUI_2() { return static_cast<int32_t>(offsetof(GameInfo_t2590130144, ___gameUI_2)); }
	inline GameObject_t4012695102 * get_gameUI_2() const { return ___gameUI_2; }
	inline GameObject_t4012695102 ** get_address_of_gameUI_2() { return &___gameUI_2; }
	inline void set_gameUI_2(GameObject_t4012695102 * value)
	{
		___gameUI_2 = value;
		Il2CppCodeGenWriteBarrier(&___gameUI_2, value);
	}

	inline static int32_t get_offset_of_gameCharacter_3() { return static_cast<int32_t>(offsetof(GameInfo_t2590130144, ___gameCharacter_3)); }
	inline Character_t3568163593 * get_gameCharacter_3() const { return ___gameCharacter_3; }
	inline Character_t3568163593 ** get_address_of_gameCharacter_3() { return &___gameCharacter_3; }
	inline void set_gameCharacter_3(Character_t3568163593 * value)
	{
		___gameCharacter_3 = value;
		Il2CppCodeGenWriteBarrier(&___gameCharacter_3, value);
	}

	inline static int32_t get_offset_of_levelManager_4() { return static_cast<int32_t>(offsetof(GameInfo_t2590130144, ___levelManager_4)); }
	inline LevelPieceManager_t3648953955 * get_levelManager_4() const { return ___levelManager_4; }
	inline LevelPieceManager_t3648953955 ** get_address_of_levelManager_4() { return &___levelManager_4; }
	inline void set_levelManager_4(LevelPieceManager_t3648953955 * value)
	{
		___levelManager_4 = value;
		Il2CppCodeGenWriteBarrier(&___levelManager_4, value);
	}

	inline static int32_t get_offset_of_fadeObject_5() { return static_cast<int32_t>(offsetof(GameInfo_t2590130144, ___fadeObject_5)); }
	inline Transform_t284553113 * get_fadeObject_5() const { return ___fadeObject_5; }
	inline Transform_t284553113 ** get_address_of_fadeObject_5() { return &___fadeObject_5; }
	inline void set_fadeObject_5(Transform_t284553113 * value)
	{
		___fadeObject_5 = value;
		Il2CppCodeGenWriteBarrier(&___fadeObject_5, value);
	}

	inline static int32_t get_offset_of_fadeTexture_6() { return static_cast<int32_t>(offsetof(GameInfo_t2590130144, ___fadeTexture_6)); }
	inline GUITexture_t63494093 * get_fadeTexture_6() const { return ___fadeTexture_6; }
	inline GUITexture_t63494093 ** get_address_of_fadeTexture_6() { return &___fadeTexture_6; }
	inline void set_fadeTexture_6(GUITexture_t63494093 * value)
	{
		___fadeTexture_6 = value;
		Il2CppCodeGenWriteBarrier(&___fadeTexture_6, value);
	}

	inline static int32_t get_offset_of_shouldRestartGame_7() { return static_cast<int32_t>(offsetof(GameInfo_t2590130144, ___shouldRestartGame_7)); }
	inline bool get_shouldRestartGame_7() const { return ___shouldRestartGame_7; }
	inline bool* get_address_of_shouldRestartGame_7() { return &___shouldRestartGame_7; }
	inline void set_shouldRestartGame_7(bool value)
	{
		___shouldRestartGame_7 = value;
	}

	inline static int32_t get_offset_of_shouldFade_8() { return static_cast<int32_t>(offsetof(GameInfo_t2590130144, ___shouldFade_8)); }
	inline bool get_shouldFade_8() const { return ___shouldFade_8; }
	inline bool* get_address_of_shouldFade_8() { return &___shouldFade_8; }
	inline void set_shouldFade_8(bool value)
	{
		___shouldFade_8 = value;
	}

	inline static int32_t get_offset_of_shouldRestartLevelAndCharacter_9() { return static_cast<int32_t>(offsetof(GameInfo_t2590130144, ___shouldRestartLevelAndCharacter_9)); }
	inline bool get_shouldRestartLevelAndCharacter_9() const { return ___shouldRestartLevelAndCharacter_9; }
	inline bool* get_address_of_shouldRestartLevelAndCharacter_9() { return &___shouldRestartLevelAndCharacter_9; }
	inline void set_shouldRestartLevelAndCharacter_9(bool value)
	{
		___shouldRestartLevelAndCharacter_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
