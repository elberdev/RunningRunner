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

// GK_Leaderboard
struct GK_Leaderboard_t1569407106;
// System.String
struct String_t;
// GK_Score
struct GK_Score_t4123230039;
// System.Collections.Generic.List`1<GK_Score>
struct List_1_t625221712;
// GK_LeaderBoardInfo
struct GK_LeaderBoardInfo_t2762483760;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_GK_TimeSpan1784601810.h"
#include "AssemblyU2DCSharp_GK_CollectionType2752839635.h"
#include "AssemblyU2DCSharp_GK_Score4123230039.h"

// System.Void GK_Leaderboard::.ctor(System.String)
extern "C"  void GK_Leaderboard__ctor_m522942793 (GK_Leaderboard_t1569407106 * __this, String_t* ___leaderboardId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GK_Leaderboard::Refresh()
extern "C"  void GK_Leaderboard_Refresh_m2689394194 (GK_Leaderboard_t1569407106 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GK_Score GK_Leaderboard::GetCurrentPlayerScore(GK_TimeSpan,GK_CollectionType)
extern "C"  GK_Score_t4123230039 * GK_Leaderboard_GetCurrentPlayerScore_m3090252250 (GK_Leaderboard_t1569407106 * __this, int32_t ___timeSpan, int32_t ___collection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GK_Score GK_Leaderboard::GetScoreByPlayerId(System.String,GK_TimeSpan,GK_CollectionType)
extern "C"  GK_Score_t4123230039 * GK_Leaderboard_GetScoreByPlayerId_m1463432949 (GK_Leaderboard_t1569407106 * __this, String_t* ___playerId, int32_t ___timeSpan, int32_t ___collection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GK_Score> GK_Leaderboard::GetScoresList(GK_TimeSpan,GK_CollectionType)
extern "C"  List_1_t625221712 * GK_Leaderboard_GetScoresList_m1561134775 (GK_Leaderboard_t1569407106 * __this, int32_t ___timeSpan, int32_t ___collection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GK_Score GK_Leaderboard::GetScore(System.Int32,GK_TimeSpan,GK_CollectionType)
extern "C"  GK_Score_t4123230039 * GK_Leaderboard_GetScore_m1328295249 (GK_Leaderboard_t1569407106 * __this, int32_t ___rank, int32_t ___timeSpan, int32_t ___collection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GK_LeaderBoardInfo GK_Leaderboard::get_Info()
extern "C"  GK_LeaderBoardInfo_t2762483760 * GK_Leaderboard_get_Info_m2574311183 (GK_Leaderboard_t1569407106 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GK_Leaderboard::get_Id()
extern "C"  String_t* GK_Leaderboard_get_Id_m1218463762 (GK_Leaderboard_t1569407106 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GK_Leaderboard::get_CurrentPlayerScoreLoaded()
extern "C"  bool GK_Leaderboard_get_CurrentPlayerScoreLoaded_m1022059493 (GK_Leaderboard_t1569407106 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GK_Leaderboard::CreateScoreListener(System.Int32,System.Boolean)
extern "C"  void GK_Leaderboard_CreateScoreListener_m4196843819 (GK_Leaderboard_t1569407106 * __this, int32_t ___requestId, bool ___isInternal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GK_Leaderboard::ReportLocalPlayerScoreUpdate(GK_Score,System.Int32)
extern "C"  void GK_Leaderboard_ReportLocalPlayerScoreUpdate_m1304861728 (GK_Leaderboard_t1569407106 * __this, GK_Score_t4123230039 * ___score, int32_t ___requestId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GK_Leaderboard::UpdateCurrentPlayerScore(System.Collections.Generic.List`1<GK_Score>)
extern "C"  void GK_Leaderboard_UpdateCurrentPlayerScore_m3338684957 (GK_Leaderboard_t1569407106 * __this, List_1_t625221712 * ___newScores, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GK_Leaderboard::UpdateCurrentPlayerScore(GK_Score)
extern "C"  void GK_Leaderboard_UpdateCurrentPlayerScore_m3165162677 (GK_Leaderboard_t1569407106 * __this, GK_Score_t4123230039 * ___score, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GK_Leaderboard::ReportLocalPlayerScoreUpdateFail(System.String,System.Int32)
extern "C"  void GK_Leaderboard_ReportLocalPlayerScoreUpdateFail_m485775073 (GK_Leaderboard_t1569407106 * __this, String_t* ___errorData, int32_t ___requestId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GK_Leaderboard::UpdateScore(GK_Score)
extern "C"  void GK_Leaderboard_UpdateScore_m3766244489 (GK_Leaderboard_t1569407106 * __this, GK_Score_t4123230039 * ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GK_Leaderboard::get_id()
extern "C"  String_t* GK_Leaderboard_get_id_m1219417074 (GK_Leaderboard_t1569407106 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GK_Leaderboard::UpdateMaxRange(System.Int32)
extern "C"  void GK_Leaderboard_UpdateMaxRange_m3469044414 (GK_Leaderboard_t1569407106 * __this, int32_t ___MR, const MethodInfo* method) IL2CPP_METHOD_ATTR;
