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

// WWWTextureLoader
struct WWWTextureLoader_t695118039;
// System.Action`1<UnityEngine.Texture2D>
struct Action_1_t2657991227;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// UnityEngine.Texture2D
struct Texture2D_t2509538522;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_Texture2D2509538522.h"

// System.Void WWWTextureLoader::.ctor()
extern "C"  void WWWTextureLoader__ctor_m3599859620 (WWWTextureLoader_t695118039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WWWTextureLoader::.cctor()
extern "C"  void WWWTextureLoader__cctor_m3739369609 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WWWTextureLoader::add_OnLoad(System.Action`1<UnityEngine.Texture2D>)
extern "C"  void WWWTextureLoader_add_OnLoad_m4269781349 (WWWTextureLoader_t695118039 * __this, Action_1_t2657991227 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WWWTextureLoader::remove_OnLoad(System.Action`1<UnityEngine.Texture2D>)
extern "C"  void WWWTextureLoader_remove_OnLoad_m4091513796 (WWWTextureLoader_t695118039 * __this, Action_1_t2657991227 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WWWTextureLoader WWWTextureLoader::Create()
extern "C"  WWWTextureLoader_t695118039 * WWWTextureLoader_Create_m3689147810 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WWWTextureLoader::LoadTexture(System.String)
extern "C"  void WWWTextureLoader_LoadTexture_m3209360459 (WWWTextureLoader_t695118039 * __this, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator WWWTextureLoader::LoadCoroutin()
extern "C"  Il2CppObject * WWWTextureLoader_LoadCoroutin_m402013659 (WWWTextureLoader_t695118039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WWWTextureLoader::UpdateLocalCache(System.String,UnityEngine.Texture2D)
extern "C"  void WWWTextureLoader_UpdateLocalCache_m1024541624 (Il2CppObject * __this /* static, unused */, String_t* ___url, Texture2D_t2509538522 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WWWTextureLoader::<OnLoad>m__72(UnityEngine.Texture2D)
extern "C"  void WWWTextureLoader_U3COnLoadU3Em__72_m3717937647 (Il2CppObject * __this /* static, unused */, Texture2D_t2509538522 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
