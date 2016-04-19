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

// GK_SavesResolveResult
struct GK_SavesResolveResult_t4177305998;
// System.Collections.Generic.List`1<GK_SavedGame>
struct List_1_t446990935;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void GK_SavesResolveResult::.ctor(System.Collections.Generic.List`1<GK_SavedGame>)
extern "C"  void GK_SavesResolveResult__ctor_m3563067731 (GK_SavesResolveResult_t4177305998 * __this, List_1_t446990935 * ___saves, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GK_SavesResolveResult::.ctor(System.String)
extern "C"  void GK_SavesResolveResult__ctor_m376139397 (GK_SavesResolveResult_t4177305998 * __this, String_t* ___errorData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GK_SavedGame> GK_SavesResolveResult::get_SavedGames()
extern "C"  List_1_t446990935 * GK_SavesResolveResult_get_SavedGames_m1471223929 (GK_SavesResolveResult_t4177305998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
