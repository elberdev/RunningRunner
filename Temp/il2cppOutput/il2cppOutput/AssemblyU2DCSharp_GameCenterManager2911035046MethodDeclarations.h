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

// GameCenterManager
struct GameCenterManager_t2911035046;
// System.Action`1<ISN_Result>
struct Action_1_t2646135257;
// System.Action`1<GK_LeaderboardResult>
struct Action_1_t3482402976;
// System.Action`1<GK_AchievementProgressResult>
struct Action_1_t4264058719;
// System.Action
struct Action_t437523947;
// System.Action`1<GK_UserInfoLoadResult>
struct Action_1_t617892184;
// System.Action`1<GK_PlayerSignatureResult>
struct Action_1_t4146793978;
// System.String
struct String_t;
// GK_AchievementTemplate
struct GK_AchievementTemplate_t91890894;
// System.String[]
struct StringU5BU5D_t2956870243;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// GK_Leaderboard
struct GK_Leaderboard_t1569407106;
// GK_Player
struct GK_Player_t3188093628;
// System.Collections.Generic.List`1<GK_AchievementTemplate>
struct List_1_t888849863;
// System.Collections.Generic.List`1<GK_Leaderboard>
struct List_1_t2366366075;
// System.Collections.Generic.Dictionary`2<System.String,GK_Player>
struct Dictionary_2_t530824236;
// System.Collections.Generic.List`1<GK_LeaderboardSet>
struct List_1_t4285119865;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1765447871;
// GK_LeaderboardResult
struct GK_LeaderboardResult_t3333950271;
// System.Collections.Generic.List`1<GK_TBM_Participant>
struct List_1_t3951393297;
// GK_TBM_Participant
struct GK_TBM_Participant_t3154434328;
// ISN_Result
struct ISN_Result_t2497682552;
// GK_AchievementProgressResult
struct GK_AchievementProgressResult_t4115606014;
// GK_UserInfoLoadResult
struct GK_UserInfoLoadResult_t469439479;
// GK_PlayerSignatureResult
struct GK_PlayerSignatureResult_t3998341273;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Action437523947.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_GK_AchievementTemplate91890894.h"
#include "AssemblyU2DCSharp_GK_TimeSpan1784601810.h"
#include "AssemblyU2DCSharp_GK_PhotoSize2909568920.h"
#include "AssemblyU2DCSharp_GK_CollectionType2752839635.h"
#include "AssemblyU2DCSharp_GK_LeaderboardResult3333950271.h"
#include "AssemblyU2DCSharp_ISN_Result2497682552.h"
#include "AssemblyU2DCSharp_GK_AchievementProgressResult4115606014.h"
#include "AssemblyU2DCSharp_GK_UserInfoLoadResult469439479.h"
#include "AssemblyU2DCSharp_GK_PlayerSignatureResult3998341273.h"

// System.Void GameCenterManager::.ctor()
extern "C"  void GameCenterManager__ctor_m340388229 (GameCenterManager_t2911035046 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::.cctor()
extern "C"  void GameCenterManager__cctor_m1480004296 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::add_OnAuthFinished(System.Action`1<ISN_Result>)
extern "C"  void GameCenterManager_add_OnAuthFinished_m676509388 (Il2CppObject * __this /* static, unused */, Action_1_t2646135257 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::remove_OnAuthFinished(System.Action`1<ISN_Result>)
extern "C"  void GameCenterManager_remove_OnAuthFinished_m3619975019 (Il2CppObject * __this /* static, unused */, Action_1_t2646135257 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::add_OnScoreSubmitted(System.Action`1<GK_LeaderboardResult>)
extern "C"  void GameCenterManager_add_OnScoreSubmitted_m539647012 (Il2CppObject * __this /* static, unused */, Action_1_t3482402976 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::remove_OnScoreSubmitted(System.Action`1<GK_LeaderboardResult>)
extern "C"  void GameCenterManager_remove_OnScoreSubmitted_m2116623939 (Il2CppObject * __this /* static, unused */, Action_1_t3482402976 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::add_OnScoresListLoaded(System.Action`1<GK_LeaderboardResult>)
extern "C"  void GameCenterManager_add_OnScoresListLoaded_m217169865 (Il2CppObject * __this /* static, unused */, Action_1_t3482402976 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::remove_OnScoresListLoaded(System.Action`1<GK_LeaderboardResult>)
extern "C"  void GameCenterManager_remove_OnScoresListLoaded_m3863508520 (Il2CppObject * __this /* static, unused */, Action_1_t3482402976 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::add_OnLeadrboardInfoLoaded(System.Action`1<GK_LeaderboardResult>)
extern "C"  void GameCenterManager_add_OnLeadrboardInfoLoaded_m309282602 (Il2CppObject * __this /* static, unused */, Action_1_t3482402976 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::remove_OnLeadrboardInfoLoaded(System.Action`1<GK_LeaderboardResult>)
extern "C"  void GameCenterManager_remove_OnLeadrboardInfoLoaded_m1521858057 (Il2CppObject * __this /* static, unused */, Action_1_t3482402976 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::add_OnLeaderboardSetsInfoLoaded(System.Action`1<ISN_Result>)
extern "C"  void GameCenterManager_add_OnLeaderboardSetsInfoLoaded_m2129412187 (Il2CppObject * __this /* static, unused */, Action_1_t2646135257 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::remove_OnLeaderboardSetsInfoLoaded(System.Action`1<ISN_Result>)
extern "C"  void GameCenterManager_remove_OnLeaderboardSetsInfoLoaded_m3771056668 (Il2CppObject * __this /* static, unused */, Action_1_t2646135257 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::add_OnAchievementsReset(System.Action`1<ISN_Result>)
extern "C"  void GameCenterManager_add_OnAchievementsReset_m34127217 (Il2CppObject * __this /* static, unused */, Action_1_t2646135257 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::remove_OnAchievementsReset(System.Action`1<ISN_Result>)
extern "C"  void GameCenterManager_remove_OnAchievementsReset_m1547472946 (Il2CppObject * __this /* static, unused */, Action_1_t2646135257 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::add_OnAchievementsLoaded(System.Action`1<ISN_Result>)
extern "C"  void GameCenterManager_add_OnAchievementsLoaded_m1624577885 (Il2CppObject * __this /* static, unused */, Action_1_t2646135257 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::remove_OnAchievementsLoaded(System.Action`1<ISN_Result>)
extern "C"  void GameCenterManager_remove_OnAchievementsLoaded_m1293655228 (Il2CppObject * __this /* static, unused */, Action_1_t2646135257 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::add_OnAchievementsProgress(System.Action`1<GK_AchievementProgressResult>)
extern "C"  void GameCenterManager_add_OnAchievementsProgress_m811971963 (Il2CppObject * __this /* static, unused */, Action_1_t4264058719 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::remove_OnAchievementsProgress(System.Action`1<GK_AchievementProgressResult>)
extern "C"  void GameCenterManager_remove_OnAchievementsProgress_m1643828570 (Il2CppObject * __this /* static, unused */, Action_1_t4264058719 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::add_OnGameCenterViewDismissed(System.Action)
extern "C"  void GameCenterManager_add_OnGameCenterViewDismissed_m825584858 (Il2CppObject * __this /* static, unused */, Action_t437523947 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::remove_OnGameCenterViewDismissed(System.Action)
extern "C"  void GameCenterManager_remove_OnGameCenterViewDismissed_m1201967259 (Il2CppObject * __this /* static, unused */, Action_t437523947 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::add_OnFriendsListLoaded(System.Action`1<ISN_Result>)
extern "C"  void GameCenterManager_add_OnFriendsListLoaded_m1151854436 (Il2CppObject * __this /* static, unused */, Action_1_t2646135257 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::remove_OnFriendsListLoaded(System.Action`1<ISN_Result>)
extern "C"  void GameCenterManager_remove_OnFriendsListLoaded_m2665200165 (Il2CppObject * __this /* static, unused */, Action_1_t2646135257 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::add_OnUserInfoLoaded(System.Action`1<GK_UserInfoLoadResult>)
extern "C"  void GameCenterManager_add_OnUserInfoLoaded_m229613853 (Il2CppObject * __this /* static, unused */, Action_1_t617892184 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::remove_OnUserInfoLoaded(System.Action`1<GK_UserInfoLoadResult>)
extern "C"  void GameCenterManager_remove_OnUserInfoLoaded_m1871258334 (Il2CppObject * __this /* static, unused */, Action_1_t617892184 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::add_OnPlayerSignatureRetrieveResult(System.Action`1<GK_PlayerSignatureResult>)
extern "C"  void GameCenterManager_add_OnPlayerSignatureRetrieveResult_m2415051149 (Il2CppObject * __this /* static, unused */, Action_1_t4146793978 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::remove_OnPlayerSignatureRetrieveResult(System.Action`1<GK_PlayerSignatureResult>)
extern "C"  void GameCenterManager_remove_OnPlayerSignatureRetrieveResult_m1984017678 (Il2CppObject * __this /* static, unused */, Action_1_t4146793978 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::_initGameCenter()
extern "C"  void GameCenterManager__initGameCenter_m2466486521 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::_showLeaderboard(System.String,System.Int32)
extern "C"  void GameCenterManager__showLeaderboard_m3040511189 (Il2CppObject * __this /* static, unused */, String_t* ___leaderboardId, int32_t ___timeSpan, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::_reportScore(System.String,System.String)
extern "C"  void GameCenterManager__reportScore_m1574689728 (Il2CppObject * __this /* static, unused */, String_t* ___score, String_t* ___leaderboardId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::_showLeaderboards()
extern "C"  void GameCenterManager__showLeaderboards_m1054166485 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::_ISN_loadLeaderboardInfo(System.String,System.Int32)
extern "C"  void GameCenterManager__ISN_loadLeaderboardInfo_m4005536319 (Il2CppObject * __this /* static, unused */, String_t* ___leaderboardId, int32_t ___requestId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::_ISN_loadLeaderboardScore(System.String,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void GameCenterManager__ISN_loadLeaderboardScore_m2280413386 (Il2CppObject * __this /* static, unused */, String_t* ___leaderboardId, int32_t ___timeSpan, int32_t ___collection, int32_t ___from, int32_t ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::_showAchievements()
extern "C"  void GameCenterManager__showAchievements_m4045779171 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::_resetAchievements()
extern "C"  void GameCenterManager__resetAchievements_m21912851 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::_submitAchievement(System.Single,System.String,System.Boolean)
extern "C"  void GameCenterManager__submitAchievement_m443001645 (Il2CppObject * __this /* static, unused */, float ___percent, String_t* ___achievementId, bool ___isCompleteNotification, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::_ISN_issueLeaderboardChallenge(System.String,System.String,System.String)
extern "C"  void GameCenterManager__ISN_issueLeaderboardChallenge_m986933238 (Il2CppObject * __this /* static, unused */, String_t* ___leaderboardId, String_t* ___message, String_t* ___playerIds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::_ISN_issueLeaderboardChallengeWithFriendsPicker(System.String,System.String)
extern "C"  void GameCenterManager__ISN_issueLeaderboardChallengeWithFriendsPicker_m3682084483 (Il2CppObject * __this /* static, unused */, String_t* ___leaderboardId, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::_ISN_issueAchievementChallenge(System.String,System.String,System.String)
extern "C"  void GameCenterManager__ISN_issueAchievementChallenge_m2231925416 (Il2CppObject * __this /* static, unused */, String_t* ___leaderboardId, String_t* ___message, String_t* ___playerIds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::_ISN_issueAchievementChallengeWithFriendsPicker(System.String,System.String)
extern "C"  void GameCenterManager__ISN_issueAchievementChallengeWithFriendsPicker_m1906491025 (Il2CppObject * __this /* static, unused */, String_t* ___leaderboardId, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::_ISN_RetrieveFriends()
extern "C"  void GameCenterManager__ISN_RetrieveFriends_m2653923390 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::_ISN_loadGKPlayerData(System.String)
extern "C"  void GameCenterManager__ISN_loadGKPlayerData_m4229580240 (Il2CppObject * __this /* static, unused */, String_t* ___playerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::_ISN_loadGKPlayerPhoto(System.String,System.Int32)
extern "C"  void GameCenterManager__ISN_loadGKPlayerPhoto_m294355297 (Il2CppObject * __this /* static, unused */, String_t* ___playerId, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::_ISN_getSignature()
extern "C"  void GameCenterManager__ISN_getSignature_m4005787935 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::_ISN_loadLeaderboardSetInfo()
extern "C"  void GameCenterManager__ISN_loadLeaderboardSetInfo_m2433874902 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::_ISN_loadLeaderboardsForSet(System.String)
extern "C"  void GameCenterManager__ISN_loadLeaderboardsForSet_m2636430928 (Il2CppObject * __this /* static, unused */, String_t* ___setId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::_ISN_ShowNotificationBanner(System.String,System.String)
extern "C"  void GameCenterManager__ISN_ShowNotificationBanner_m1017187213 (Il2CppObject * __this /* static, unused */, String_t* ___title, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::_ISN_LoadAchievements()
extern "C"  void GameCenterManager__ISN_LoadAchievements_m2855148135 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameCenterManager::_ISN_GK_IsUnderage()
extern "C"  bool GameCenterManager__ISN_GK_IsUnderage_m1376936573 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameCenterManager::_ISN_GK_IsAuthenticated()
extern "C"  bool GameCenterManager__ISN_GK_IsAuthenticated_m4142353019 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::init()
extern "C"  void GameCenterManager_init_m1571386383 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::Init()
extern "C"  void GameCenterManager_Init_m655253551 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::RetrievePlayerSignature()
extern "C"  void GameCenterManager_RetrievePlayerSignature_m2057984606 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::ShowGmaeKitNotification(System.String,System.String)
extern "C"  void GameCenterManager_ShowGmaeKitNotification_m721147457 (Il2CppObject * __this /* static, unused */, String_t* ___title, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::RegisterAchievement(System.String)
extern "C"  void GameCenterManager_RegisterAchievement_m4285695667 (Il2CppObject * __this /* static, unused */, String_t* ___achievementId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::RegisterAchievement(GK_AchievementTemplate)
extern "C"  void GameCenterManager_RegisterAchievement_m4238547233 (Il2CppObject * __this /* static, unused */, GK_AchievementTemplate_t91890894 * ___achievement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::ShowLeaderboard(System.String)
extern "C"  void GameCenterManager_ShowLeaderboard_m3978827647 (Il2CppObject * __this /* static, unused */, String_t* ___leaderboardId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::ShowLeaderboard(System.String,GK_TimeSpan)
extern "C"  void GameCenterManager_ShowLeaderboard_m918790681 (Il2CppObject * __this /* static, unused */, String_t* ___leaderboardId, int32_t ___timeSpan, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::ShowLeaderboards()
extern "C"  void GameCenterManager_ShowLeaderboards_m2487395730 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::ReportScore(System.Int64,System.String)
extern "C"  void GameCenterManager_ReportScore_m2215664047 (Il2CppObject * __this /* static, unused */, int64_t ___score, String_t* ___leaderboardId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::ReportScore(System.Double,System.String)
extern "C"  void GameCenterManager_ReportScore_m916915197 (Il2CppObject * __this /* static, unused */, double ___score, String_t* ___leaderboardId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::RetrieveFriends()
extern "C"  void GameCenterManager_RetrieveFriends_m497665948 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::LoadUsersData(System.String[])
extern "C"  void GameCenterManager_LoadUsersData_m2235942033 (Il2CppObject * __this /* static, unused */, StringU5BU5D_t2956870243* ___UIDs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::LoadGKPlayerInfo(System.String)
extern "C"  void GameCenterManager_LoadGKPlayerInfo_m3184952074 (Il2CppObject * __this /* static, unused */, String_t* ___playerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::LoadGKPlayerPhoto(System.String,GK_PhotoSize)
extern "C"  void GameCenterManager_LoadGKPlayerPhoto_m814246710 (Il2CppObject * __this /* static, unused */, String_t* ___playerId, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::LoadCurrentPlayerScore(System.String,GK_TimeSpan,GK_CollectionType)
extern "C"  void GameCenterManager_LoadCurrentPlayerScore_m2077507928 (Il2CppObject * __this /* static, unused */, String_t* ___leaderboardId, int32_t ___timeSpan, int32_t ___collection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::LoadLeaderboardInfo(System.String)
extern "C"  void GameCenterManager_LoadLeaderboardInfo_m674174490 (Il2CppObject * __this /* static, unused */, String_t* ___leaderboardId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GameCenterManager::LoadLeaderboardInfoLocal(System.String)
extern "C"  Il2CppObject * GameCenterManager_LoadLeaderboardInfoLocal_m801593957 (GameCenterManager_t2911035046 * __this, String_t* ___leaderboardId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::LoadScore(System.String,System.Int32,System.Int32,GK_TimeSpan,GK_CollectionType)
extern "C"  void GameCenterManager_LoadScore_m392650342 (Il2CppObject * __this /* static, unused */, String_t* ___leaderboardId, int32_t ___startIndex, int32_t ___length, int32_t ___timeSpan, int32_t ___collection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::IssueLeaderboardChallenge(System.String,System.String,System.String)
extern "C"  void GameCenterManager_IssueLeaderboardChallenge_m1871973368 (Il2CppObject * __this /* static, unused */, String_t* ___leaderboardId, String_t* ___message, String_t* ___playerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::IssueLeaderboardChallenge(System.String,System.String,System.String[])
extern "C"  void GameCenterManager_IssueLeaderboardChallenge_m3670127894 (Il2CppObject * __this /* static, unused */, String_t* ___leaderboardId, String_t* ___message, StringU5BU5D_t2956870243* ___playerIds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::IssueLeaderboardChallenge(System.String,System.String)
extern "C"  void GameCenterManager_IssueLeaderboardChallenge_m3194608828 (Il2CppObject * __this /* static, unused */, String_t* ___leaderboardId, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::IssueAchievementChallenge(System.String,System.String,System.String)
extern "C"  void GameCenterManager_IssueAchievementChallenge_m3116965546 (Il2CppObject * __this /* static, unused */, String_t* ___achievementId, String_t* ___message, String_t* ___playerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::LoadLeaderboardSetInfo()
extern "C"  void GameCenterManager_LoadLeaderboardSetInfo_m2101582552 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::LoadLeaderboardsForSet(System.String)
extern "C"  void GameCenterManager_LoadLeaderboardsForSet_m1284051598 (Il2CppObject * __this /* static, unused */, String_t* ___setId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::LoadAchievements()
extern "C"  void GameCenterManager_LoadAchievements_m435676873 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::IssueAchievementChallenge(System.String,System.String,System.String[])
extern "C"  void GameCenterManager_IssueAchievementChallenge_m1811735368 (Il2CppObject * __this /* static, unused */, String_t* ___achievementId, String_t* ___message, StringU5BU5D_t2956870243* ___playerIds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::IssueAchievementChallenge(System.String,System.String)
extern "C"  void GameCenterManager_IssueAchievementChallenge_m945532654 (Il2CppObject * __this /* static, unused */, String_t* ___achievementId, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::ShowAchievements()
extern "C"  void GameCenterManager_ShowAchievements_m1184041120 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::ResetAchievements()
extern "C"  void GameCenterManager_ResetAchievements_m1502346486 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::SubmitAchievement(System.Single,System.String)
extern "C"  void GameCenterManager_SubmitAchievement_m1467664525 (Il2CppObject * __this /* static, unused */, float ___percent, String_t* ___achievementId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::SubmitAchievementNoCache(System.Single,System.String)
extern "C"  void GameCenterManager_SubmitAchievementNoCache_m70889758 (Il2CppObject * __this /* static, unused */, float ___percent, String_t* ___achievementId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::SubmitAchievement(System.Single,System.String,System.Boolean)
extern "C"  void GameCenterManager_SubmitAchievement_m3274948432 (Il2CppObject * __this /* static, unused */, float ___percent, String_t* ___achievementId, bool ___isCompleteNotification, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GameCenterManager::GetAchievementProgress(System.String)
extern "C"  float GameCenterManager_GetAchievementProgress_m1801676425 (Il2CppObject * __this /* static, unused */, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GK_AchievementTemplate GameCenterManager::GetAchievement(System.String)
extern "C"  GK_AchievementTemplate_t91890894 * GameCenterManager_GetAchievement_m4192025497 (Il2CppObject * __this /* static, unused */, String_t* ___achievementId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GK_Leaderboard GameCenterManager::GetLeaderboard(System.String)
extern "C"  GK_Leaderboard_t1569407106 * GameCenterManager_GetLeaderboard_m1787798871 (Il2CppObject * __this /* static, unused */, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GK_Player GameCenterManager::GetPlayerById(System.String)
extern "C"  GK_Player_t3188093628 * GameCenterManager_GetPlayerById_m567975391 (Il2CppObject * __this /* static, unused */, String_t* ___playerID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GK_AchievementTemplate> GameCenterManager::get_Achievements()
extern "C"  List_1_t888849863 * GameCenterManager_get_Achievements_m41646987 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GK_Leaderboard> GameCenterManager::get_Leaderboards()
extern "C"  List_1_t2366366075 * GameCenterManager_get_Leaderboards_m833827145 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,GK_Player> GameCenterManager::get_Players()
extern "C"  Dictionary_2_t530824236 * GameCenterManager_get_Players_m989997990 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GK_Player GameCenterManager::get_Player()
extern "C"  GK_Player_t3188093628 * GameCenterManager_get_Player_m4144106514 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameCenterManager::get_IsInitialized()
extern "C"  bool GameCenterManager_get_IsInitialized_m2943497528 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GK_LeaderboardSet> GameCenterManager::get_LeaderboardSets()
extern "C"  List_1_t4285119865 * GameCenterManager_get_LeaderboardSets_m3994523049 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameCenterManager::get_IsPlayerAuthenticated()
extern "C"  bool GameCenterManager_get_IsPlayerAuthenticated_m3991872434 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameCenterManager::get_IsAchievementsInfoLoaded()
extern "C"  bool GameCenterManager_get_IsAchievementsInfoLoaded_m3028868501 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> GameCenterManager::get_FriendsList()
extern "C"  List_1_t1765447871 * GameCenterManager_get_FriendsList_m2597174142 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameCenterManager::get_IsPlayerUnderage()
extern "C"  bool GameCenterManager_get_IsPlayerUnderage_m3512165094 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::OnLoaderBoardInfoRetrivedFail(System.String)
extern "C"  void GameCenterManager_OnLoaderBoardInfoRetrivedFail_m3220992962 (GameCenterManager_t2911035046 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::OnLoaderBoardInfoRetrived(System.String)
extern "C"  void GameCenterManager_OnLoaderBoardInfoRetrived_m196856384 (GameCenterManager_t2911035046 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::onScoreSubmittedEvent(System.String)
extern "C"  void GameCenterManager_onScoreSubmittedEvent_m2333457837 (GameCenterManager_t2911035046 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::onScoreSubmittedFailed(System.String)
extern "C"  void GameCenterManager_onScoreSubmittedFailed_m1760515742 (GameCenterManager_t2911035046 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::OnLeaderboardScoreListLoaded(System.String)
extern "C"  void GameCenterManager_OnLeaderboardScoreListLoaded_m2923844844 (GameCenterManager_t2911035046 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::OnLeaderboardScoreListLoadFailed(System.String)
extern "C"  void GameCenterManager_OnLeaderboardScoreListLoadFailed_m3013097582 (GameCenterManager_t2911035046 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::onAchievementsReset(System.String)
extern "C"  void GameCenterManager_onAchievementsReset_m2928274099 (GameCenterManager_t2911035046 * __this, String_t* ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::onAchievementsResetFailed(System.String)
extern "C"  void GameCenterManager_onAchievementsResetFailed_m2342711094 (GameCenterManager_t2911035046 * __this, String_t* ___errorData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::onAchievementProgressChanged(System.String)
extern "C"  void GameCenterManager_onAchievementProgressChanged_m890130860 (GameCenterManager_t2911035046 * __this, String_t* ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::onAchievementsLoaded(System.String)
extern "C"  void GameCenterManager_onAchievementsLoaded_m2153284827 (GameCenterManager_t2911035046 * __this, String_t* ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::onAchievementsLoadedFailed(System.String)
extern "C"  void GameCenterManager_onAchievementsLoadedFailed_m244271966 (GameCenterManager_t2911035046 * __this, String_t* ___errorData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::onAuthenticateLocalPlayer(System.String)
extern "C"  void GameCenterManager_onAuthenticateLocalPlayer_m3437549543 (GameCenterManager_t2911035046 * __this, String_t* ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::onAuthenticationFailed(System.String)
extern "C"  void GameCenterManager_onAuthenticationFailed_m587341327 (GameCenterManager_t2911035046 * __this, String_t* ___errorData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::OnUserInfoLoadedEvent(System.String)
extern "C"  void GameCenterManager_OnUserInfoLoadedEvent_m2740396866 (GameCenterManager_t2911035046 * __this, String_t* ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::OnUserInfoLoadFailedEvent(System.String)
extern "C"  void GameCenterManager_OnUserInfoLoadFailedEvent_m4197436928 (GameCenterManager_t2911035046 * __this, String_t* ___playerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::OnUserPhotoLoadedEvent(System.String)
extern "C"  void GameCenterManager_OnUserPhotoLoadedEvent_m1281139638 (GameCenterManager_t2911035046 * __this, String_t* ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::OnUserPhotoLoadFailedEvent(System.String)
extern "C"  void GameCenterManager_OnUserPhotoLoadFailedEvent_m2866279540 (GameCenterManager_t2911035046 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::OnFriendListLoadedEvent(System.String)
extern "C"  void GameCenterManager_OnFriendListLoadedEvent_m228756357 (GameCenterManager_t2911035046 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::OnFriendListLoadFailEvent(System.String)
extern "C"  void GameCenterManager_OnFriendListLoadFailEvent_m2595332324 (GameCenterManager_t2911035046 * __this, String_t* ___errorData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::OnGameCenterViewDismissedEvent(System.String)
extern "C"  void GameCenterManager_OnGameCenterViewDismissedEvent_m2862095879 (GameCenterManager_t2911035046 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::VerificationSignatureRetrieveFailed(System.String)
extern "C"  void GameCenterManager_VerificationSignatureRetrieveFailed_m1051322409 (GameCenterManager_t2911035046 * __this, String_t* ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::VerificationSignatureRetrieved(System.String)
extern "C"  void GameCenterManager_VerificationSignatureRetrieved_m2594481432 (GameCenterManager_t2911035046 * __this, String_t* ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::SaveLocalProgress(GK_AchievementTemplate)
extern "C"  void GameCenterManager_SaveLocalProgress_m2748437584 (GameCenterManager_t2911035046 * __this, GK_AchievementTemplate_t91890894 * ___tpl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::ResetStoredProgress()
extern "C"  void GameCenterManager_ResetStoredProgress_m2242881922 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::SaveAchievementProgress(System.String,System.Single)
extern "C"  void GameCenterManager_SaveAchievementProgress_m1775704325 (Il2CppObject * __this /* static, unused */, String_t* ___achievementId, float ___progress, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GameCenterManager::GetStoredAchievementProgress(System.String)
extern "C"  float GameCenterManager_GetStoredAchievementProgress_m4208272012 (Il2CppObject * __this /* static, unused */, String_t* ___achievementId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::ISN_OnLBSetsLoaded(System.String)
extern "C"  void GameCenterManager_ISN_OnLBSetsLoaded_m3225736093 (GameCenterManager_t2911035046 * __this, String_t* ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::ISN_OnLBSetsLoadFailed(System.String)
extern "C"  void GameCenterManager_ISN_OnLBSetsLoadFailed_m2414212767 (GameCenterManager_t2911035046 * __this, String_t* ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::ISN_OnLBSetsBoardsLoadFailed(System.String)
extern "C"  void GameCenterManager_ISN_OnLBSetsBoardsLoadFailed_m2779597842 (GameCenterManager_t2911035046 * __this, String_t* ___identifier, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::ISN_OnLBSetsBoardsLoaded(System.String)
extern "C"  void GameCenterManager_ISN_OnLBSetsBoardsLoaded_m1897847440 (GameCenterManager_t2911035046 * __this, String_t* ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::DispatchLeaderboardUpdateEvent(GK_LeaderboardResult,System.Boolean)
extern "C"  void GameCenterManager_DispatchLeaderboardUpdateEvent_m3510135887 (Il2CppObject * __this /* static, unused */, GK_LeaderboardResult_t3333950271 * ___result, bool ___isInternal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GK_TBM_Participant> GameCenterManager::ParseParticipantsData(System.String[],System.Int32)
extern "C"  List_1_t3951393297 * GameCenterManager_ParseParticipantsData_m2415920706 (Il2CppObject * __this /* static, unused */, StringU5BU5D_t2956870243* ___data, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GK_TBM_Participant GameCenterManager::ParseParticipanData(System.String[],System.Int32)
extern "C"  GK_TBM_Participant_t3154434328 * GameCenterManager_ParseParticipanData_m825624445 (Il2CppObject * __this /* static, unused */, StringU5BU5D_t2956870243* ___data, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::<OnAuthFinished>m__10(ISN_Result)
extern "C"  void GameCenterManager_U3COnAuthFinishedU3Em__10_m114403342 (Il2CppObject * __this /* static, unused */, ISN_Result_t2497682552 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::<OnScoreSubmitted>m__11(GK_LeaderboardResult)
extern "C"  void GameCenterManager_U3COnScoreSubmittedU3Em__11_m2839265207 (Il2CppObject * __this /* static, unused */, GK_LeaderboardResult_t3333950271 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::<OnScoresListLoaded>m__12(GK_LeaderboardResult)
extern "C"  void GameCenterManager_U3COnScoresListLoadedU3Em__12_m2111867379 (Il2CppObject * __this /* static, unused */, GK_LeaderboardResult_t3333950271 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::<OnLeadrboardInfoLoaded>m__13(GK_LeaderboardResult)
extern "C"  void GameCenterManager_U3COnLeadrboardInfoLoadedU3Em__13_m37965171 (Il2CppObject * __this /* static, unused */, GK_LeaderboardResult_t3333950271 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::<OnLeaderboardSetsInfoLoaded>m__14(ISN_Result)
extern "C"  void GameCenterManager_U3COnLeaderboardSetsInfoLoadedU3Em__14_m3576135391 (Il2CppObject * __this /* static, unused */, ISN_Result_t2497682552 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::<OnAchievementsReset>m__15(ISN_Result)
extern "C"  void GameCenterManager_U3COnAchievementsResetU3Em__15_m2748798986 (Il2CppObject * __this /* static, unused */, ISN_Result_t2497682552 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::<OnAchievementsLoaded>m__16(ISN_Result)
extern "C"  void GameCenterManager_U3COnAchievementsLoadedU3Em__16_m2731965859 (Il2CppObject * __this /* static, unused */, ISN_Result_t2497682552 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::<OnAchievementsProgress>m__17(GK_AchievementProgressResult)
extern "C"  void GameCenterManager_U3COnAchievementsProgressU3Em__17_m4233972358 (Il2CppObject * __this /* static, unused */, GK_AchievementProgressResult_t4115606014 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::<OnGameCenterViewDismissed>m__18()
extern "C"  void GameCenterManager_U3COnGameCenterViewDismissedU3Em__18_m1712864023 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::<OnFriendsListLoaded>m__19(ISN_Result)
extern "C"  void GameCenterManager_U3COnFriendsListLoadedU3Em__19_m2042298875 (Il2CppObject * __this /* static, unused */, ISN_Result_t2497682552 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::<OnUserInfoLoaded>m__1A(GK_UserInfoLoadResult)
extern "C"  void GameCenterManager_U3COnUserInfoLoadedU3Em__1A_m3325146592 (Il2CppObject * __this /* static, unused */, GK_UserInfoLoadResult_t469439479 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameCenterManager::<OnPlayerSignatureRetrieveResult>m__1B(GK_PlayerSignatureResult)
extern "C"  void GameCenterManager_U3COnPlayerSignatureRetrieveResultU3Em__1B_m2922325819 (Il2CppObject * __this /* static, unused */, GK_PlayerSignatureResult_t3998341273 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
