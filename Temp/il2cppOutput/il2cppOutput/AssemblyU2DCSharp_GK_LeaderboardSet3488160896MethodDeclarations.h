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

// GK_LeaderboardSet
struct GK_LeaderboardSet_t3488160896;
// System.Action`1<ISN_LoadSetLeaderboardsInfoResult>
struct Action_1_t1995245315;
// GK_LeaderBoardInfo
struct GK_LeaderBoardInfo_t2762483760;
// System.Collections.Generic.List`1<GK_LeaderBoardInfo>
struct List_1_t3559442729;
// ISN_LoadSetLeaderboardsInfoResult
struct ISN_LoadSetLeaderboardsInfoResult_t1846792610;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GK_LeaderBoardInfo2762483760.h"
#include "AssemblyU2DCSharp_ISN_LoadSetLeaderboardsInfoResul1846792610.h"

// System.Void GK_LeaderboardSet::.ctor()
extern "C"  void GK_LeaderboardSet__ctor_m3408044267 (GK_LeaderboardSet_t3488160896 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GK_LeaderboardSet::add_OnLoaderboardsInfoLoaded(System.Action`1<ISN_LoadSetLeaderboardsInfoResult>)
extern "C"  void GK_LeaderboardSet_add_OnLoaderboardsInfoLoaded_m2818744695 (GK_LeaderboardSet_t3488160896 * __this, Action_1_t1995245315 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GK_LeaderboardSet::remove_OnLoaderboardsInfoLoaded(System.Action`1<ISN_LoadSetLeaderboardsInfoResult>)
extern "C"  void GK_LeaderboardSet_remove_OnLoaderboardsInfoLoaded_m279899076 (GK_LeaderboardSet_t3488160896 * __this, Action_1_t1995245315 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GK_LeaderboardSet::LoadLeaderBoardsInfo()
extern "C"  void GK_LeaderboardSet_LoadLeaderBoardsInfo_m2792462339 (GK_LeaderboardSet_t3488160896 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GK_LeaderboardSet::AddBoardInfo(GK_LeaderBoardInfo)
extern "C"  void GK_LeaderboardSet_AddBoardInfo_m296451676 (GK_LeaderboardSet_t3488160896 * __this, GK_LeaderBoardInfo_t2762483760 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GK_LeaderboardSet::SendFailLoadEvent()
extern "C"  void GK_LeaderboardSet_SendFailLoadEvent_m1462389687 (GK_LeaderboardSet_t3488160896 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GK_LeaderboardSet::SendSuccessLoadEvent()
extern "C"  void GK_LeaderboardSet_SendSuccessLoadEvent_m3353591026 (GK_LeaderboardSet_t3488160896 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GK_LeaderBoardInfo> GK_LeaderboardSet::get_BoardsInfo()
extern "C"  List_1_t3559442729 * GK_LeaderboardSet_get_BoardsInfo_m1882490234 (GK_LeaderboardSet_t3488160896 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GK_LeaderboardSet::<OnLoaderboardsInfoLoaded>m__B(ISN_LoadSetLeaderboardsInfoResult)
extern "C"  void GK_LeaderboardSet_U3COnLoaderboardsInfoLoadedU3Em__B_m3716588242 (Il2CppObject * __this /* static, unused */, ISN_LoadSetLeaderboardsInfoResult_t1846792610 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
