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
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Texture2D>
struct Dictionary_2_t4147236426;
// System.Action`1<GK_UserPhotoLoadResult>
struct Action_1_t2406731408;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GK_Player
struct  GK_Player_t3188093628  : public Il2CppObject
{
public:
	// System.String GK_Player::_PlayerId
	String_t* ____PlayerId_0;
	// System.String GK_Player::_DisplayName
	String_t* ____DisplayName_1;
	// System.String GK_Player::_Alias
	String_t* ____Alias_2;
	// UnityEngine.Texture2D GK_Player::_SmallPhoto
	Texture2D_t2509538522 * ____SmallPhoto_3;
	// UnityEngine.Texture2D GK_Player::_BigPhoto
	Texture2D_t2509538522 * ____BigPhoto_4;
	// System.Action`1<GK_UserPhotoLoadResult> GK_Player::OnPlayerPhotoLoaded
	Action_1_t2406731408 * ___OnPlayerPhotoLoaded_6;

public:
	inline static int32_t get_offset_of__PlayerId_0() { return static_cast<int32_t>(offsetof(GK_Player_t3188093628, ____PlayerId_0)); }
	inline String_t* get__PlayerId_0() const { return ____PlayerId_0; }
	inline String_t** get_address_of__PlayerId_0() { return &____PlayerId_0; }
	inline void set__PlayerId_0(String_t* value)
	{
		____PlayerId_0 = value;
		Il2CppCodeGenWriteBarrier(&____PlayerId_0, value);
	}

	inline static int32_t get_offset_of__DisplayName_1() { return static_cast<int32_t>(offsetof(GK_Player_t3188093628, ____DisplayName_1)); }
	inline String_t* get__DisplayName_1() const { return ____DisplayName_1; }
	inline String_t** get_address_of__DisplayName_1() { return &____DisplayName_1; }
	inline void set__DisplayName_1(String_t* value)
	{
		____DisplayName_1 = value;
		Il2CppCodeGenWriteBarrier(&____DisplayName_1, value);
	}

	inline static int32_t get_offset_of__Alias_2() { return static_cast<int32_t>(offsetof(GK_Player_t3188093628, ____Alias_2)); }
	inline String_t* get__Alias_2() const { return ____Alias_2; }
	inline String_t** get_address_of__Alias_2() { return &____Alias_2; }
	inline void set__Alias_2(String_t* value)
	{
		____Alias_2 = value;
		Il2CppCodeGenWriteBarrier(&____Alias_2, value);
	}

	inline static int32_t get_offset_of__SmallPhoto_3() { return static_cast<int32_t>(offsetof(GK_Player_t3188093628, ____SmallPhoto_3)); }
	inline Texture2D_t2509538522 * get__SmallPhoto_3() const { return ____SmallPhoto_3; }
	inline Texture2D_t2509538522 ** get_address_of__SmallPhoto_3() { return &____SmallPhoto_3; }
	inline void set__SmallPhoto_3(Texture2D_t2509538522 * value)
	{
		____SmallPhoto_3 = value;
		Il2CppCodeGenWriteBarrier(&____SmallPhoto_3, value);
	}

	inline static int32_t get_offset_of__BigPhoto_4() { return static_cast<int32_t>(offsetof(GK_Player_t3188093628, ____BigPhoto_4)); }
	inline Texture2D_t2509538522 * get__BigPhoto_4() const { return ____BigPhoto_4; }
	inline Texture2D_t2509538522 ** get_address_of__BigPhoto_4() { return &____BigPhoto_4; }
	inline void set__BigPhoto_4(Texture2D_t2509538522 * value)
	{
		____BigPhoto_4 = value;
		Il2CppCodeGenWriteBarrier(&____BigPhoto_4, value);
	}

	inline static int32_t get_offset_of_OnPlayerPhotoLoaded_6() { return static_cast<int32_t>(offsetof(GK_Player_t3188093628, ___OnPlayerPhotoLoaded_6)); }
	inline Action_1_t2406731408 * get_OnPlayerPhotoLoaded_6() const { return ___OnPlayerPhotoLoaded_6; }
	inline Action_1_t2406731408 ** get_address_of_OnPlayerPhotoLoaded_6() { return &___OnPlayerPhotoLoaded_6; }
	inline void set_OnPlayerPhotoLoaded_6(Action_1_t2406731408 * value)
	{
		___OnPlayerPhotoLoaded_6 = value;
		Il2CppCodeGenWriteBarrier(&___OnPlayerPhotoLoaded_6, value);
	}
};

struct GK_Player_t3188093628_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Texture2D> GK_Player::LocalPhotosCache
	Dictionary_2_t4147236426 * ___LocalPhotosCache_5;
	// System.Action`1<GK_UserPhotoLoadResult> GK_Player::<>f__am$cache7
	Action_1_t2406731408 * ___U3CU3Ef__amU24cache7_7;

public:
	inline static int32_t get_offset_of_LocalPhotosCache_5() { return static_cast<int32_t>(offsetof(GK_Player_t3188093628_StaticFields, ___LocalPhotosCache_5)); }
	inline Dictionary_2_t4147236426 * get_LocalPhotosCache_5() const { return ___LocalPhotosCache_5; }
	inline Dictionary_2_t4147236426 ** get_address_of_LocalPhotosCache_5() { return &___LocalPhotosCache_5; }
	inline void set_LocalPhotosCache_5(Dictionary_2_t4147236426 * value)
	{
		___LocalPhotosCache_5 = value;
		Il2CppCodeGenWriteBarrier(&___LocalPhotosCache_5, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache7_7() { return static_cast<int32_t>(offsetof(GK_Player_t3188093628_StaticFields, ___U3CU3Ef__amU24cache7_7)); }
	inline Action_1_t2406731408 * get_U3CU3Ef__amU24cache7_7() const { return ___U3CU3Ef__amU24cache7_7; }
	inline Action_1_t2406731408 ** get_address_of_U3CU3Ef__amU24cache7_7() { return &___U3CU3Ef__amU24cache7_7; }
	inline void set_U3CU3Ef__amU24cache7_7(Action_1_t2406731408 * value)
	{
		___U3CU3Ef__amU24cache7_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache7_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
