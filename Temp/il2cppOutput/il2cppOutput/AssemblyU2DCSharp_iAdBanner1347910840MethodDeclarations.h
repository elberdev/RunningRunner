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

// iAdBanner
struct iAdBanner_t1347910840;
// System.Action
struct Action_t437523947;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_TextAnchor551935663.h"
#include "System_Core_System_Action437523947.h"

// System.Void iAdBanner::.ctor(UnityEngine.TextAnchor,System.Int32)
extern "C"  void iAdBanner__ctor_m935139965 (iAdBanner_t1347910840 * __this, int32_t ___anchor, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBanner::.ctor(System.Int32,System.Int32,System.Int32)
extern "C"  void iAdBanner__ctor_m1935515876 (iAdBanner_t1347910840 * __this, int32_t ___x, int32_t ___y, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBanner::add_AdLoadedAction(System.Action)
extern "C"  void iAdBanner_add_AdLoadedAction_m488016048 (iAdBanner_t1347910840 * __this, Action_t437523947 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBanner::remove_AdLoadedAction(System.Action)
extern "C"  void iAdBanner_remove_AdLoadedAction_m682314611 (iAdBanner_t1347910840 * __this, Action_t437523947 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBanner::add_FailToReceiveAdAction(System.Action)
extern "C"  void iAdBanner_add_FailToReceiveAdAction_m3166114311 (iAdBanner_t1347910840 * __this, Action_t437523947 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBanner::remove_FailToReceiveAdAction(System.Action)
extern "C"  void iAdBanner_remove_FailToReceiveAdAction_m120143332 (iAdBanner_t1347910840 * __this, Action_t437523947 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBanner::add_AdWiewLoadedAction(System.Action)
extern "C"  void iAdBanner_add_AdWiewLoadedAction_m1979031436 (iAdBanner_t1347910840 * __this, Action_t437523947 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBanner::remove_AdWiewLoadedAction(System.Action)
extern "C"  void iAdBanner_remove_AdWiewLoadedAction_m1343572175 (iAdBanner_t1347910840 * __this, Action_t437523947 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBanner::add_AdViewActionBeginAction(System.Action)
extern "C"  void iAdBanner_add_AdViewActionBeginAction_m2902964201 (iAdBanner_t1347910840 * __this, Action_t437523947 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBanner::remove_AdViewActionBeginAction(System.Action)
extern "C"  void iAdBanner_remove_AdViewActionBeginAction_m597581958 (iAdBanner_t1347910840 * __this, Action_t437523947 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBanner::add_AdViewFinishedAction(System.Action)
extern "C"  void iAdBanner_add_AdViewFinishedAction_m2351045246 (iAdBanner_t1347910840 * __this, Action_t437523947 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBanner::remove_AdViewFinishedAction(System.Action)
extern "C"  void iAdBanner_remove_AdViewFinishedAction_m1560051457 (iAdBanner_t1347910840 * __this, Action_t437523947 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBanner::_IADCreateBannerAd(System.Int32,System.Int32)
extern "C"  void iAdBanner__IADCreateBannerAd_m3653975517 (Il2CppObject * __this /* static, unused */, int32_t ___gravity, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBanner::_IADCreateBannerAdPos(System.Int32,System.Int32,System.Int32)
extern "C"  void iAdBanner__IADCreateBannerAdPos_m3781203582 (Il2CppObject * __this /* static, unused */, int32_t ___x, int32_t ___y, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBanner::_IADShowAd(System.Int32)
extern "C"  void iAdBanner__IADShowAd_m4001008623 (Il2CppObject * __this /* static, unused */, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBanner::_IADHideAd(System.Int32)
extern "C"  void iAdBanner__IADHideAd_m2851759156 (Il2CppObject * __this /* static, unused */, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBanner::Hide()
extern "C"  void iAdBanner_Hide_m2103613427 (iAdBanner_t1347910840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBanner::Show()
extern "C"  void iAdBanner_Show_m2417955566 (iAdBanner_t1347910840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 iAdBanner::get_id()
extern "C"  int32_t iAdBanner_get_id_m3612257255 (iAdBanner_t1347910840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean iAdBanner::get_IsLoaded()
extern "C"  bool iAdBanner_get_IsLoaded_m604374421 (iAdBanner_t1347910840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean iAdBanner::get_IsOnScreen()
extern "C"  bool iAdBanner_get_IsOnScreen_m3059090299 (iAdBanner_t1347910840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean iAdBanner::get_ShowOnLoad()
extern "C"  bool iAdBanner_get_ShowOnLoad_m3273357960 (iAdBanner_t1347910840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBanner::set_ShowOnLoad(System.Boolean)
extern "C"  void iAdBanner_set_ShowOnLoad_m898761127 (iAdBanner_t1347910840 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextAnchor iAdBanner::get_anchor()
extern "C"  int32_t iAdBanner_get_anchor_m1038409323 (iAdBanner_t1347910840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 iAdBanner::get_gravity()
extern "C"  int32_t iAdBanner_get_gravity_m3066152484 (iAdBanner_t1347910840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBanner::didFailToReceiveAdWithError()
extern "C"  void iAdBanner_didFailToReceiveAdWithError_m1523845829 (iAdBanner_t1347910840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBanner::bannerViewDidLoadAd()
extern "C"  void iAdBanner_bannerViewDidLoadAd_m493334344 (iAdBanner_t1347910840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBanner::bannerViewWillLoadAd()
extern "C"  void iAdBanner_bannerViewWillLoadAd_m4196706557 (iAdBanner_t1347910840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBanner::bannerViewActionDidFinish()
extern "C"  void iAdBanner_bannerViewActionDidFinish_m2321817180 (iAdBanner_t1347910840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBanner::bannerViewActionShouldBegin()
extern "C"  void iAdBanner_bannerViewActionShouldBegin_m977031136 (iAdBanner_t1347910840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBanner::<AdLoadedAction>m__61()
extern "C"  void iAdBanner_U3CAdLoadedActionU3Em__61_m4160826677 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBanner::<FailToReceiveAdAction>m__62()
extern "C"  void iAdBanner_U3CFailToReceiveAdActionU3Em__62_m2802432579 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBanner::<AdWiewLoadedAction>m__63()
extern "C"  void iAdBanner_U3CAdWiewLoadedActionU3Em__63_m1064029787 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBanner::<AdViewActionBeginAction>m__64()
extern "C"  void iAdBanner_U3CAdViewActionBeginActionU3Em__64_m1342406051 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBanner::<AdViewFinishedAction>m__65()
extern "C"  void iAdBanner_U3CAdViewFinishedActionU3Em__65_m1119399851 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
