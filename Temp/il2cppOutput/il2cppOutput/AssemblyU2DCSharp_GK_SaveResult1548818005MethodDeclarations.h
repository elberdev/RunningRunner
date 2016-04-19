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

// GK_SaveResult
struct GK_SaveResult_t1548818005;
// GK_SavedGame
struct GK_SavedGame_t3944999262;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GK_SavedGame3944999262.h"
#include "mscorlib_System_String968488902.h"

// System.Void GK_SaveResult::.ctor(GK_SavedGame)
extern "C"  void GK_SaveResult__ctor_m2500948376 (GK_SaveResult_t1548818005 * __this, GK_SavedGame_t3944999262 * ___save, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GK_SaveResult::.ctor(System.String)
extern "C"  void GK_SaveResult__ctor_m1580506124 (GK_SaveResult_t1548818005 * __this, String_t* ___errorData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GK_SavedGame GK_SaveResult::get_SavedGame()
extern "C"  GK_SavedGame_t3944999262 * GK_SaveResult_get_SavedGame_m108215971 (GK_SaveResult_t1548818005 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
