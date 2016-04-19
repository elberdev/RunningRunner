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

// GK_UserPhotoLoadResult
struct GK_UserPhotoLoadResult_t2258278703;
// UnityEngine.Texture2D
struct Texture2D_t2509538522;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GK_PhotoSize2909568920.h"
#include "UnityEngine_UnityEngine_Texture2D2509538522.h"
#include "mscorlib_System_String968488902.h"

// System.Void GK_UserPhotoLoadResult::.ctor(GK_PhotoSize,UnityEngine.Texture2D)
extern "C"  void GK_UserPhotoLoadResult__ctor_m273861002 (GK_UserPhotoLoadResult_t2258278703 * __this, int32_t ___size, Texture2D_t2509538522 * ___photo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GK_UserPhotoLoadResult::.ctor(GK_PhotoSize,System.String)
extern "C"  void GK_UserPhotoLoadResult__ctor_m1783452784 (GK_UserPhotoLoadResult_t2258278703 * __this, int32_t ___size, String_t* ___errorData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D GK_UserPhotoLoadResult::get_Photo()
extern "C"  Texture2D_t2509538522 * GK_UserPhotoLoadResult_get_Photo_m3926242902 (GK_UserPhotoLoadResult_t2258278703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GK_PhotoSize GK_UserPhotoLoadResult::get_Size()
extern "C"  int32_t GK_UserPhotoLoadResult_get_Size_m3995574567 (GK_UserPhotoLoadResult_t2258278703 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
