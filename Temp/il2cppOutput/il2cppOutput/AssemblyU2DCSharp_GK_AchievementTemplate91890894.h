#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t2509538522;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GK_AchievementTemplate
struct  GK_AchievementTemplate_t91890894  : public Il2CppObject
{
public:
	// System.Boolean GK_AchievementTemplate::IsOpen
	bool ___IsOpen_0;
	// System.String GK_AchievementTemplate::Id
	String_t* ___Id_1;
	// System.String GK_AchievementTemplate::Title
	String_t* ___Title_2;
	// System.String GK_AchievementTemplate::Description
	String_t* ___Description_3;
	// System.Single GK_AchievementTemplate::_progress
	float ____progress_4;
	// UnityEngine.Texture2D GK_AchievementTemplate::Texture
	Texture2D_t2509538522 * ___Texture_5;

public:
	inline static int32_t get_offset_of_IsOpen_0() { return static_cast<int32_t>(offsetof(GK_AchievementTemplate_t91890894, ___IsOpen_0)); }
	inline bool get_IsOpen_0() const { return ___IsOpen_0; }
	inline bool* get_address_of_IsOpen_0() { return &___IsOpen_0; }
	inline void set_IsOpen_0(bool value)
	{
		___IsOpen_0 = value;
	}

	inline static int32_t get_offset_of_Id_1() { return static_cast<int32_t>(offsetof(GK_AchievementTemplate_t91890894, ___Id_1)); }
	inline String_t* get_Id_1() const { return ___Id_1; }
	inline String_t** get_address_of_Id_1() { return &___Id_1; }
	inline void set_Id_1(String_t* value)
	{
		___Id_1 = value;
		Il2CppCodeGenWriteBarrier(&___Id_1, value);
	}

	inline static int32_t get_offset_of_Title_2() { return static_cast<int32_t>(offsetof(GK_AchievementTemplate_t91890894, ___Title_2)); }
	inline String_t* get_Title_2() const { return ___Title_2; }
	inline String_t** get_address_of_Title_2() { return &___Title_2; }
	inline void set_Title_2(String_t* value)
	{
		___Title_2 = value;
		Il2CppCodeGenWriteBarrier(&___Title_2, value);
	}

	inline static int32_t get_offset_of_Description_3() { return static_cast<int32_t>(offsetof(GK_AchievementTemplate_t91890894, ___Description_3)); }
	inline String_t* get_Description_3() const { return ___Description_3; }
	inline String_t** get_address_of_Description_3() { return &___Description_3; }
	inline void set_Description_3(String_t* value)
	{
		___Description_3 = value;
		Il2CppCodeGenWriteBarrier(&___Description_3, value);
	}

	inline static int32_t get_offset_of__progress_4() { return static_cast<int32_t>(offsetof(GK_AchievementTemplate_t91890894, ____progress_4)); }
	inline float get__progress_4() const { return ____progress_4; }
	inline float* get_address_of__progress_4() { return &____progress_4; }
	inline void set__progress_4(float value)
	{
		____progress_4 = value;
	}

	inline static int32_t get_offset_of_Texture_5() { return static_cast<int32_t>(offsetof(GK_AchievementTemplate_t91890894, ___Texture_5)); }
	inline Texture2D_t2509538522 * get_Texture_5() const { return ___Texture_5; }
	inline Texture2D_t2509538522 ** get_address_of_Texture_5() { return &___Texture_5; }
	inline void set_Texture_5(Texture2D_t2509538522 * value)
	{
		___Texture_5 = value;
		Il2CppCodeGenWriteBarrier(&___Texture_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
