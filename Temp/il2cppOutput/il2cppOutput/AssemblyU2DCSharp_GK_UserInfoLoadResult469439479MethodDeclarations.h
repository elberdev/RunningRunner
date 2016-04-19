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

// GK_UserInfoLoadResult
struct GK_UserInfoLoadResult_t469439479;
// System.String
struct String_t;
// GK_Player
struct GK_Player_t3188093628;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_GK_Player3188093628.h"

// System.Void GK_UserInfoLoadResult::.ctor(System.String)
extern "C"  void GK_UserInfoLoadResult__ctor_m1266695214 (GK_UserInfoLoadResult_t469439479 * __this, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GK_UserInfoLoadResult::.ctor(GK_Player)
extern "C"  void GK_UserInfoLoadResult__ctor_m3824736802 (GK_UserInfoLoadResult_t469439479 * __this, GK_Player_t3188093628 * ___tpl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GK_UserInfoLoadResult::get_playerId()
extern "C"  String_t* GK_UserInfoLoadResult_get_playerId_m3051792754 (GK_UserInfoLoadResult_t469439479 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GK_Player GK_UserInfoLoadResult::get_playerTemplate()
extern "C"  GK_Player_t3188093628 * GK_UserInfoLoadResult_get_playerTemplate_m788271901 (GK_UserInfoLoadResult_t469439479 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
