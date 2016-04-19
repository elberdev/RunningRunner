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

// GK_FetchResult
struct GK_FetchResult_t3785760892;
// System.Collections.Generic.List`1<GK_SavedGame>
struct List_1_t446990935;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void GK_FetchResult::.ctor(System.Collections.Generic.List`1<GK_SavedGame>)
extern "C"  void GK_FetchResult__ctor_m4145224977 (GK_FetchResult_t3785760892 * __this, List_1_t446990935 * ___saves, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GK_FetchResult::.ctor(System.String)
extern "C"  void GK_FetchResult__ctor_m3702833603 (GK_FetchResult_t3785760892 * __this, String_t* ___errorData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GK_SavedGame> GK_FetchResult::get_SavedGames()
extern "C"  List_1_t446990935 * GK_FetchResult_get_SavedGames_m109493817 (GK_FetchResult_t3785760892 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
