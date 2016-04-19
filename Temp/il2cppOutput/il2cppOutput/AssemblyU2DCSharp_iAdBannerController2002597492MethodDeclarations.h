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

// iAdBannerController
struct iAdBannerController_t2002597492;
// System.Action
struct Action_t437523947;
// iAdBanner
struct iAdBanner_t1347910840;
// System.Collections.Generic.List`1<iAdBanner>
struct List_1_t2144869809;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Action437523947.h"
#include "UnityEngine_UnityEngine_TextAnchor551935663.h"
#include "mscorlib_System_String968488902.h"

// System.Void iAdBannerController::.ctor()
extern "C"  void iAdBannerController__ctor_m1384439671 (iAdBannerController_t2002597492 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBannerController::.cctor()
extern "C"  void iAdBannerController__cctor_m3780827926 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBannerController::add_InterstitialDidFailWithErrorAction(System.Action)
extern "C"  void iAdBannerController_add_InterstitialDidFailWithErrorAction_m513908139 (Il2CppObject * __this /* static, unused */, Action_t437523947 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBannerController::remove_InterstitialDidFailWithErrorAction(System.Action)
extern "C"  void iAdBannerController_remove_InterstitialDidFailWithErrorAction_m2709158118 (Il2CppObject * __this /* static, unused */, Action_t437523947 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBannerController::add_InterstitialAdWillLoadAction(System.Action)
extern "C"  void iAdBannerController_add_InterstitialAdWillLoadAction_m1685399285 (Il2CppObject * __this /* static, unused */, Action_t437523947 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBannerController::remove_InterstitialAdWillLoadAction(System.Action)
extern "C"  void iAdBannerController_remove_InterstitialAdWillLoadAction_m1156958832 (Il2CppObject * __this /* static, unused */, Action_t437523947 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBannerController::add_InterstitialAdDidLoadAction(System.Action)
extern "C"  void iAdBannerController_add_InterstitialAdDidLoadAction_m2110364794 (Il2CppObject * __this /* static, unused */, Action_t437523947 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBannerController::remove_InterstitialAdDidLoadAction(System.Action)
extern "C"  void iAdBannerController_remove_InterstitialAdDidLoadAction_m1262034335 (Il2CppObject * __this /* static, unused */, Action_t437523947 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBannerController::add_InterstitialAdDidFinishAction(System.Action)
extern "C"  void iAdBannerController_add_InterstitialAdDidFinishAction_m1422627949 (Il2CppObject * __this /* static, unused */, Action_t437523947 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBannerController::remove_InterstitialAdDidFinishAction(System.Action)
extern "C"  void iAdBannerController_remove_InterstitialAdDidFinishAction_m2220843090 (Il2CppObject * __this /* static, unused */, Action_t437523947 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBannerController::_IADDestroyBanner(System.Int32)
extern "C"  void iAdBannerController__IADDestroyBanner_m95601695 (Il2CppObject * __this /* static, unused */, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBannerController::_IADStartInterstitialAd()
extern "C"  void iAdBannerController__IADStartInterstitialAd_m2259074425 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBannerController::_IADLoadInterstitialAd()
extern "C"  void iAdBannerController__IADLoadInterstitialAd_m2407608975 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBannerController::_IADShowInterstitialAd()
extern "C"  void iAdBannerController__IADShowInterstitialAd_m31144614 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBannerController::Awake()
extern "C"  void iAdBannerController_Awake_m1622044890 (iAdBannerController_t2002597492 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// iAdBanner iAdBannerController::CreateAdBanner(UnityEngine.TextAnchor)
extern "C"  iAdBanner_t1347910840 * iAdBannerController_CreateAdBanner_m4034970916 (iAdBannerController_t2002597492 * __this, int32_t ___anchor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// iAdBanner iAdBannerController::CreateAdBanner(System.Int32,System.Int32)
extern "C"  iAdBanner_t1347910840 * iAdBannerController_CreateAdBanner_m1261874697 (iAdBannerController_t2002597492 * __this, int32_t ___x, int32_t ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBannerController::DestroyBanner(System.Int32)
extern "C"  void iAdBannerController_DestroyBanner_m4098261932 (iAdBannerController_t2002597492 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBannerController::StartInterstitialAd()
extern "C"  void iAdBannerController_StartInterstitialAd_m1622174406 (iAdBannerController_t2002597492 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBannerController::LoadInterstitialAd()
extern "C"  void iAdBannerController_LoadInterstitialAd_m3356895138 (iAdBannerController_t2002597492 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBannerController::ShowInterstitialAd()
extern "C"  void iAdBannerController_ShowInterstitialAd_m980430777 (iAdBannerController_t2002597492 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 iAdBannerController::get_nextId()
extern "C"  int32_t iAdBannerController_get_nextId_m2493573174 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean iAdBannerController::get_IsInterstisialsAdReady()
extern "C"  bool iAdBannerController_get_IsInterstisialsAdReady_m2043042534 (iAdBannerController_t2002597492 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// iAdBanner iAdBannerController::GetBanner(System.Int32)
extern "C"  iAdBanner_t1347910840 * iAdBannerController_GetBanner_m2881735459 (iAdBannerController_t2002597492 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<iAdBanner> iAdBannerController::get_banners()
extern "C"  List_1_t2144869809 * iAdBannerController_get_banners_m1931290188 (iAdBannerController_t2002597492 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBannerController::didFailToReceiveAdWithError(System.String)
extern "C"  void iAdBannerController_didFailToReceiveAdWithError_m1097420313 (iAdBannerController_t2002597492 * __this, String_t* ___bannerID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBannerController::bannerViewDidLoadAd(System.String)
extern "C"  void iAdBannerController_bannerViewDidLoadAd_m3392787062 (iAdBannerController_t2002597492 * __this, String_t* ___bannerID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBannerController::bannerViewWillLoadAd(System.String)
extern "C"  void iAdBannerController_bannerViewWillLoadAd_m1642930921 (iAdBannerController_t2002597492 * __this, String_t* ___bannerID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBannerController::bannerViewActionDidFinish(System.String)
extern "C"  void iAdBannerController_bannerViewActionDidFinish_m897795810 (iAdBannerController_t2002597492 * __this, String_t* ___bannerID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBannerController::bannerViewActionShouldBegin(System.String)
extern "C"  void iAdBannerController_bannerViewActionShouldBegin_m1153264862 (iAdBannerController_t2002597492 * __this, String_t* ___bannerID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBannerController::interstitialdidFailWithError(System.String)
extern "C"  void iAdBannerController_interstitialdidFailWithError_m283159780 (iAdBannerController_t2002597492 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBannerController::interstitialAdWillLoad(System.String)
extern "C"  void iAdBannerController_interstitialAdWillLoad_m1905153038 (iAdBannerController_t2002597492 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBannerController::interstitialAdDidLoad(System.String)
extern "C"  void iAdBannerController_interstitialAdDidLoad_m739150615 (iAdBannerController_t2002597492 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBannerController::interstitialAdActionDidFinish()
extern "C"  void iAdBannerController_interstitialAdActionDidFinish_m966148450 (iAdBannerController_t2002597492 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBannerController::<InterstitialDidFailWithErrorAction>m__66()
extern "C"  void iAdBannerController_U3CInterstitialDidFailWithErrorActionU3Em__66_m909346407 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBannerController::<InterstitialAdWillLoadAction>m__67()
extern "C"  void iAdBannerController_U3CInterstitialAdWillLoadActionU3Em__67_m1443204254 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBannerController::<InterstitialAdDidLoadAction>m__68()
extern "C"  void iAdBannerController_U3CInterstitialAdDidLoadActionU3Em__68_m504057646 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iAdBannerController::<InterstitialAdDidFinishAction>m__69()
extern "C"  void iAdBannerController_U3CInterstitialAdDidFinishActionU3Em__69_m2918252508 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
