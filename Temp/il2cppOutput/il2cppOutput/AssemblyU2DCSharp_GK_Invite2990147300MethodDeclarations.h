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

// GK_Invite
struct GK_Invite_t2990147300;
// System.String
struct String_t;
// GK_Player
struct GK_Player_t3188093628;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void GK_Invite::.ctor(System.String)
extern "C"  void GK_Invite__ctor_m2128737115 (GK_Invite_t2990147300 * __this, String_t* ___inviteData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GK_Invite::get_Id()
extern "C"  String_t* GK_Invite_get_Id_m650764542 (GK_Invite_t2990147300 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GK_Player GK_Invite::get_Sender()
extern "C"  GK_Player_t3188093628 * GK_Invite_get_Sender_m1093835556 (GK_Invite_t2990147300 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GK_Invite::get_PlayerGroup()
extern "C"  int32_t GK_Invite_get_PlayerGroup_m4028709800 (GK_Invite_t2990147300 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GK_Invite::get_PlayerAttributes()
extern "C"  int32_t GK_Invite_get_PlayerAttributes_m2057241008 (GK_Invite_t2990147300 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
