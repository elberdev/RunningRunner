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

// JSHelper
struct JSHelper_t2925210199;
// System.String
struct String_t;
// ISN_Result
struct ISN_Result_t2497682552;
// GK_AchievementProgressResult
struct GK_AchievementProgressResult_t4115606014;
// GK_LeaderboardResult
struct GK_LeaderboardResult_t3333950271;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_ISN_Result2497682552.h"
#include "AssemblyU2DCSharp_GK_AchievementProgressResult4115606014.h"
#include "AssemblyU2DCSharp_GK_LeaderboardResult3333950271.h"

// System.Void JSHelper::.ctor()
extern "C"  void JSHelper__ctor_m1644840484 (JSHelper_t2925210199 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSHelper::InitGameCneter()
extern "C"  void JSHelper_InitGameCneter_m799971817 (JSHelper_t2925210199 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSHelper::SubmitScore(System.Int32)
extern "C"  void JSHelper_SubmitScore_m1311846573 (JSHelper_t2925210199 * __this, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSHelper::SubmitAchievement(System.String)
extern "C"  void JSHelper_SubmitAchievement_m2337239977 (JSHelper_t2925210199 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSHelper::HandleOnAchievementsLoaded(ISN_Result)
extern "C"  void JSHelper_HandleOnAchievementsLoaded_m4102887928 (JSHelper_t2925210199 * __this, ISN_Result_t2497682552 * ___res, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSHelper::HandleOnAchievementsProgress(GK_AchievementProgressResult)
extern "C"  void JSHelper_HandleOnAchievementsProgress_m1170686746 (JSHelper_t2925210199 * __this, GK_AchievementProgressResult_t4115606014 * ___progress, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSHelper::HandleOnAchievementsReset(ISN_Result)
extern "C"  void JSHelper_HandleOnAchievementsReset_m1604829998 (JSHelper_t2925210199 * __this, ISN_Result_t2497682552 * ___res, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSHelper::OnScoreSubmitted(GK_LeaderboardResult)
extern "C"  void JSHelper_OnScoreSubmitted_m2324703113 (JSHelper_t2925210199 * __this, GK_LeaderboardResult_t3333950271 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSHelper::HandleOnAuthFinished(ISN_Result)
extern "C"  void JSHelper_HandleOnAuthFinished_m1359068905 (JSHelper_t2925210199 * __this, ISN_Result_t2497682552 * ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
