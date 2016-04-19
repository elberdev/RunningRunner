#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// GK_Player
struct GK_Player_t3188093628;
// System.String
struct String_t;
// System.Action`1<GK_UserPhotoLoadResult>
struct Action_1_t2406731408;
// UnityEngine.Texture2D
struct Texture2D_t2509538522;
// GK_UserPhotoLoadResult
struct GK_UserPhotoLoadResult_t2258278703;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_GK_PhotoSize2909568920.h"
#include "UnityEngine_UnityEngine_Texture2D2509538522.h"
#include "AssemblyU2DCSharp_GK_UserPhotoLoadResult2258278703.h"

// System.Void GK_Player::.ctor(System.String,System.String,System.String)
extern "C"  void GK_Player__ctor_m2911087147 (GK_Player_t3188093628 * __this, String_t* ___pId, String_t* ___pName, String_t* ___pAlias, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GK_Player::.cctor()
extern "C"  void GK_Player__cctor_m2812189534 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GK_Player::add_OnPlayerPhotoLoaded(System.Action`1<GK_UserPhotoLoadResult>)
extern "C"  void GK_Player_add_OnPlayerPhotoLoaded_m866387891 (GK_Player_t3188093628 * __this, Action_1_t2406731408 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GK_Player::remove_OnPlayerPhotoLoaded(System.Action`1<GK_UserPhotoLoadResult>)
extern "C"  void GK_Player_remove_OnPlayerPhotoLoaded_m1006933000 (GK_Player_t3188093628 * __this, Action_1_t2406731408 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GK_Player::LoadPhoto(GK_PhotoSize)
extern "C"  void GK_Player_LoadPhoto_m448712353 (GK_Player_t3188093628 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GK_Player::SetPhotoData(GK_PhotoSize,System.String)
extern "C"  void GK_Player_SetPhotoData_m1217971155 (GK_Player_t3188093628 * __this, int32_t ___size, String_t* ___base64String, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GK_Player::SetPhotoLoadFailedEventData(GK_PhotoSize,System.String)
extern "C"  void GK_Player_SetPhotoLoadFailedEventData_m533271170 (GK_Player_t3188093628 * __this, int32_t ___size, String_t* ___errorData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GK_Player::get_Id()
extern "C"  String_t* GK_Player_get_Id_m457400022 (GK_Player_t3188093628 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GK_Player::get_Alias()
extern "C"  String_t* GK_Player_get_Alias_m253572503 (GK_Player_t3188093628 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GK_Player::get_DisplayName()
extern "C"  String_t* GK_Player_get_DisplayName_m1593415156 (GK_Player_t3188093628 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D GK_Player::get_SmallPhoto()
extern "C"  Texture2D_t2509538522 * GK_Player_get_SmallPhoto_m3663443916 (GK_Player_t3188093628 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D GK_Player::get_BigPhoto()
extern "C"  Texture2D_t2509538522 * GK_Player_get_BigPhoto_m3720158643 (GK_Player_t3188093628 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GK_Player::get_SmallPhotoCacheKey()
extern "C"  String_t* GK_Player_get_SmallPhotoCacheKey_m421614723 (GK_Player_t3188093628 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GK_Player::get_BigPhotoCacheKey()
extern "C"  String_t* GK_Player_get_BigPhotoCacheKey_m1863840234 (GK_Player_t3188093628 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GK_Player::UpdatePhotosCache(System.String,UnityEngine.Texture2D)
extern "C"  void GK_Player_UpdatePhotosCache_m1916895859 (Il2CppObject * __this /* static, unused */, String_t* ___key, Texture2D_t2509538522 * ___photo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D GK_Player::GetLocalCachedPhotoByKey(System.String)
extern "C"  Texture2D_t2509538522 * GK_Player_GetLocalCachedPhotoByKey_m3684494909 (Il2CppObject * __this /* static, unused */, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GK_Player::<OnPlayerPhotoLoaded>m__C(GK_UserPhotoLoadResult)
extern "C"  void GK_Player_U3COnPlayerPhotoLoadedU3Em__C_m662163927 (Il2CppObject * __this /* static, unused */, GK_UserPhotoLoadResult_t2258278703 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
