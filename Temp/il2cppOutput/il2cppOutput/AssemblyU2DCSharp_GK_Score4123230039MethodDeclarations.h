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

// GK_Score
struct GK_Score_t4123230039;
// System.String
struct String_t;
// GK_Player
struct GK_Player_t3188093628;
// GK_Leaderboard
struct GK_Leaderboard_t1569407106;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GK_TimeSpan1784601810.h"
#include "AssemblyU2DCSharp_GK_CollectionType2752839635.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_TimeSpan763862892.h"

// System.Void GK_Score::.ctor(System.Int64,System.Int32,GK_TimeSpan,GK_CollectionType,System.String,System.String)
extern "C"  void GK_Score__ctor_m3788624108 (GK_Score_t4123230039 * __this, int64_t ___vScore, int32_t ___vRank, int32_t ___vTimeSpan, int32_t ___sCollection, String_t* ___lid, String_t* ___pid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GK_Score::get_Rank()
extern "C"  int32_t GK_Score_get_Rank_m1120743779 (GK_Score_t4123230039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 GK_Score::get_LongScore()
extern "C"  int64_t GK_Score_get_LongScore_m2347254560 (GK_Score_t4123230039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GK_Score::get_CurrencyScore()
extern "C"  float GK_Score_get_CurrencyScore_m2586063182 (GK_Score_t4123230039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GK_Score::get_DecimalFloat_1()
extern "C"  float GK_Score_get_DecimalFloat_1_m2458124850 (GK_Score_t4123230039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GK_Score::get_DecimalFloat_2()
extern "C"  float GK_Score_get_DecimalFloat_2_m2458125811 (GK_Score_t4123230039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GK_Score::get_DecimalFloat_3()
extern "C"  float GK_Score_get_DecimalFloat_3_m2458126772 (GK_Score_t4123230039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan GK_Score::get_Minutes()
extern "C"  TimeSpan_t763862892  GK_Score_get_Minutes_m126762011 (GK_Score_t4123230039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan GK_Score::get_Seconds()
extern "C"  TimeSpan_t763862892  GK_Score_get_Seconds_m2435678651 (GK_Score_t4123230039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan GK_Score::get_Milliseconds()
extern "C"  TimeSpan_t763862892  GK_Score_get_Milliseconds_m1671590264 (GK_Score_t4123230039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GK_Score::get_PlayerId()
extern "C"  String_t* GK_Score_get_PlayerId_m3464857384 (GK_Score_t4123230039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GK_Player GK_Score::get_Player()
extern "C"  GK_Player_t3188093628 * GK_Score_get_Player_m2614554017 (GK_Score_t4123230039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GK_Score::get_LeaderboardId()
extern "C"  String_t* GK_Score_get_LeaderboardId_m601655822 (GK_Score_t4123230039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GK_Leaderboard GK_Score::get_Leaderboard()
extern "C"  GK_Leaderboard_t1569407106 * GK_Score_get_Leaderboard_m2142516859 (GK_Score_t4123230039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GK_CollectionType GK_Score::get_Collection()
extern "C"  int32_t GK_Score_get_Collection_m3149160487 (GK_Score_t4123230039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GK_TimeSpan GK_Score::get_TimeSpan()
extern "C"  int32_t GK_Score_get_TimeSpan_m2795036961 (GK_Score_t4123230039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GK_Score::get_rank()
extern "C"  int32_t GK_Score_get_rank_m2036876611 (GK_Score_t4123230039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 GK_Score::get_score()
extern "C"  int64_t GK_Score_get_score_m1953126876 (GK_Score_t4123230039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GK_Score::get_playerId()
extern "C"  String_t* GK_Score_get_playerId_m1471392520 (GK_Score_t4123230039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GK_Score::get_leaderboardId()
extern "C"  String_t* GK_Score_get_leaderboardId_m1598673454 (GK_Score_t4123230039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GK_TimeSpan GK_Score::get_timeSpan()
extern "C"  int32_t GK_Score_get_timeSpan_m801572097 (GK_Score_t4123230039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GK_CollectionType GK_Score::get_collection()
extern "C"  int32_t GK_Score_get_collection_m2984840199 (GK_Score_t4123230039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
