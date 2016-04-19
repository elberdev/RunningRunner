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

// GK_TBM_Participant
struct GK_TBM_Participant_t3154434328;
// System.String
struct String_t;
// GK_Player
struct GK_Player_t3188093628;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_GK_TurnBasedMatchOutcome2570100968.h"
#include "mscorlib_System_DateTime339033936.h"
#include "AssemblyU2DCSharp_GK_TurnBasedParticipantStatus4233723594.h"

// System.Void GK_TBM_Participant::.ctor(System.String,System.String,System.String,System.String,System.String)
extern "C"  void GK_TBM_Participant__ctor_m1320454991 (GK_TBM_Participant_t3154434328 * __this, String_t* ___playerId, String_t* ___status, String_t* ___outcome, String_t* ___timeoutDate, String_t* ___lastTurnDate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GK_TBM_Participant::SetOutcome(GK_TurnBasedMatchOutcome)
extern "C"  void GK_TBM_Participant_SetOutcome_m133674761 (GK_TBM_Participant_t3154434328 * __this, int32_t ___outcome, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GK_TBM_Participant::SetMatchId(System.String)
extern "C"  void GK_TBM_Participant_SetMatchId_m1186640771 (GK_TBM_Participant_t3154434328 * __this, String_t* ___matchId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GK_TBM_Participant::get_PlayerId()
extern "C"  String_t* GK_TBM_Participant_get_PlayerId_m3044601129 (GK_TBM_Participant_t3154434328 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GK_Player GK_TBM_Participant::get_Player()
extern "C"  GK_Player_t3188093628 * GK_TBM_Participant_get_Player_m525795042 (GK_TBM_Participant_t3154434328 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GK_TBM_Participant::get_MatchId()
extern "C"  String_t* GK_TBM_Participant_get_MatchId_m90112501 (GK_TBM_Participant_t3154434328 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime GK_TBM_Participant::get_TimeoutDate()
extern "C"  DateTime_t339033936  GK_TBM_Participant_get_TimeoutDate_m4112554542 (GK_TBM_Participant_t3154434328 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime GK_TBM_Participant::get_LastTurnDate()
extern "C"  DateTime_t339033936  GK_TBM_Participant_get_LastTurnDate_m4215300804 (GK_TBM_Participant_t3154434328 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GK_TurnBasedParticipantStatus GK_TBM_Participant::get_Status()
extern "C"  int32_t GK_TBM_Participant_get_Status_m3710895589 (GK_TBM_Participant_t3154434328 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GK_TurnBasedMatchOutcome GK_TBM_Participant::get_MatchOutcome()
extern "C"  int32_t GK_TBM_Participant_get_MatchOutcome_m2947488780 (GK_TBM_Participant_t3154434328 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
