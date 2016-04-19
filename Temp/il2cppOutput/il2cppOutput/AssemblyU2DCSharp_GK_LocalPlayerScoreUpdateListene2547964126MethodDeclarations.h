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

// GK_LocalPlayerScoreUpdateListener
struct GK_LocalPlayerScoreUpdateListener_t2547964126;
// System.String
struct String_t;
// GK_Score
struct GK_Score_t4123230039;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_GK_Score4123230039.h"

// System.Void GK_LocalPlayerScoreUpdateListener::.ctor(System.Int32,System.String,System.Boolean)
extern "C"  void GK_LocalPlayerScoreUpdateListener__ctor_m4124606563 (GK_LocalPlayerScoreUpdateListener_t2547964126 * __this, int32_t ___requestId, String_t* ___leaderboardId, bool ___isInternal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GK_LocalPlayerScoreUpdateListener::ReportScoreUpdate(GK_Score)
extern "C"  void GK_LocalPlayerScoreUpdateListener_ReportScoreUpdate_m2557604187 (GK_LocalPlayerScoreUpdateListener_t2547964126 * __this, GK_Score_t4123230039 * ___score, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GK_LocalPlayerScoreUpdateListener::ReportScoreUpdateFail(System.String)
extern "C"  void GK_LocalPlayerScoreUpdateListener_ReportScoreUpdateFail_m633280242 (GK_LocalPlayerScoreUpdateListener_t2547964126 * __this, String_t* ___errorData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GK_LocalPlayerScoreUpdateListener::get_RequestId()
extern "C"  int32_t GK_LocalPlayerScoreUpdateListener_get_RequestId_m2140209690 (GK_LocalPlayerScoreUpdateListener_t2547964126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GK_LocalPlayerScoreUpdateListener::DispatchUpdate()
extern "C"  void GK_LocalPlayerScoreUpdateListener_DispatchUpdate_m1426315002 (GK_LocalPlayerScoreUpdateListener_t2547964126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
