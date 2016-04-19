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

// GK_TBM_Match
struct GK_TBM_Match_t1724863338;
// System.String
struct String_t;
// GK_TBM_Participant
struct GK_TBM_Participant_t3154434328;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void GK_TBM_Match::.ctor()
extern "C"  void GK_TBM_Match__ctor_m1341052529 (GK_TBM_Match_t1724863338 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GK_TBM_Match::SetData(System.String)
extern "C"  void GK_TBM_Match_SetData_m3756704423 (GK_TBM_Match_t1724863338 * __this, String_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GK_TBM_Match::get_UTF8StringData()
extern "C"  String_t* GK_TBM_Match_get_UTF8StringData_m1652465419 (GK_TBM_Match_t1724863338 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GK_TBM_Participant GK_TBM_Match::GetParticipantByPlayerId(System.String)
extern "C"  GK_TBM_Participant_t3154434328 * GK_TBM_Match_GetParticipantByPlayerId_m2118814138 (GK_TBM_Match_t1724863338 * __this, String_t* ___playerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GK_TBM_Participant GK_TBM_Match::get_LocalParticipant()
extern "C"  GK_TBM_Participant_t3154434328 * GK_TBM_Match_get_LocalParticipant_m962066153 (GK_TBM_Match_t1724863338 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
