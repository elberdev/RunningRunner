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

// IOSNativeUtility
struct IOSNativeUtility_t938638952;
// System.Action`1<ISN_Locale>
struct Action_1_t2483099670;
// System.Action`1<System.Boolean>
struct Action_1_t359458046;
// System.String
struct String_t;
// ISN_Locale
struct ISN_Locale_t2334646965;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_ISN_Locale2334646965.h"

// System.Void IOSNativeUtility::.ctor()
extern "C"  void IOSNativeUtility__ctor_m3827719475 (IOSNativeUtility_t938638952 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNativeUtility::.cctor()
extern "C"  void IOSNativeUtility__cctor_m2213090522 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNativeUtility::add_OnLocaleLoaded(System.Action`1<ISN_Locale>)
extern "C"  void IOSNativeUtility_add_OnLocaleLoaded_m3716021458 (Il2CppObject * __this /* static, unused */, Action_1_t2483099670 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNativeUtility::remove_OnLocaleLoaded(System.Action`1<ISN_Locale>)
extern "C"  void IOSNativeUtility_remove_OnLocaleLoaded_m1334727509 (Il2CppObject * __this /* static, unused */, Action_1_t2483099670 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNativeUtility::add_GuidedAccessSessionRequestResult(System.Action`1<System.Boolean>)
extern "C"  void IOSNativeUtility_add_GuidedAccessSessionRequestResult_m1273732834 (Il2CppObject * __this /* static, unused */, Action_1_t359458046 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNativeUtility::remove_GuidedAccessSessionRequestResult(System.Action`1<System.Boolean>)
extern "C"  void IOSNativeUtility_remove_GuidedAccessSessionRequestResult_m1926816037 (Il2CppObject * __this /* static, unused */, Action_1_t359458046 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNativeUtility::_ISN_RedirectToAppStoreRatingPage(System.String)
extern "C"  void IOSNativeUtility__ISN_RedirectToAppStoreRatingPage_m3317514004 (Il2CppObject * __this /* static, unused */, String_t* ___appId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNativeUtility::_ISN_ShowPreloader()
extern "C"  void IOSNativeUtility__ISN_ShowPreloader_m4231362704 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNativeUtility::_ISN_HidePreloader()
extern "C"  void IOSNativeUtility__ISN_HidePreloader_m931580203 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNativeUtility::_ISN_SetApplicationBagesNumber(System.Int32)
extern "C"  void IOSNativeUtility__ISN_SetApplicationBagesNumber_m3354666521 (Il2CppObject * __this /* static, unused */, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNativeUtility::_ISN_GetLocale()
extern "C"  void IOSNativeUtility__ISN_GetLocale_m1247616295 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean IOSNativeUtility::_ISN_IsGuidedAccessEnabled()
extern "C"  bool IOSNativeUtility__ISN_IsGuidedAccessEnabled_m636085110 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean IOSNativeUtility::_ISN_IsRunningTestFlightBeta()
extern "C"  bool IOSNativeUtility__ISN_IsRunningTestFlightBeta_m1418404754 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNativeUtility::_ISN_RequestGuidedAccessSession(System.Boolean)
extern "C"  void IOSNativeUtility__ISN_RequestGuidedAccessSession_m266280605 (Il2CppObject * __this /* static, unused */, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNativeUtility::Awake()
extern "C"  void IOSNativeUtility_Awake_m4065324694 (IOSNativeUtility_t938638952 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNativeUtility::GetLocale()
extern "C"  void IOSNativeUtility_GetLocale_m2329982881 (IOSNativeUtility_t938638952 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNativeUtility::RedirectToAppStoreRatingPage()
extern "C"  void IOSNativeUtility_RedirectToAppStoreRatingPage_m358218228 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNativeUtility::RedirectToAppStoreRatingPage(System.String)
extern "C"  void IOSNativeUtility_RedirectToAppStoreRatingPage_m4196954510 (Il2CppObject * __this /* static, unused */, String_t* ___appleId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNativeUtility::SetApplicationBagesNumber(System.Int32)
extern "C"  void IOSNativeUtility_SetApplicationBagesNumber_m3045041555 (Il2CppObject * __this /* static, unused */, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNativeUtility::ShowPreloader()
extern "C"  void IOSNativeUtility_ShowPreloader_m3289597450 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNativeUtility::HidePreloader()
extern "C"  void IOSNativeUtility_HidePreloader_m4284782245 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNativeUtility::RequestGuidedAccessSession(System.Boolean)
extern "C"  void IOSNativeUtility_RequestGuidedAccessSession_m1818670307 (IOSNativeUtility_t938638952 * __this, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean IOSNativeUtility::get_IsGuidedAccessEnabled()
extern "C"  bool IOSNativeUtility_get_IsGuidedAccessEnabled_m2413683487 (IOSNativeUtility_t938638952 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean IOSNativeUtility::get_IsRunningTestFlightBeta()
extern "C"  bool IOSNativeUtility_get_IsRunningTestFlightBeta_m293461243 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNativeUtility::OnGuidedAccessSessionRequestResult(System.String)
extern "C"  void IOSNativeUtility_OnGuidedAccessSessionRequestResult_m3251843504 (IOSNativeUtility_t938638952 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNativeUtility::OnLocaleLoadedHandler(System.String)
extern "C"  void IOSNativeUtility_OnLocaleLoadedHandler_m3293976549 (IOSNativeUtility_t938638952 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNativeUtility::<OnLocaleLoaded>m__8(ISN_Locale)
extern "C"  void IOSNativeUtility_U3COnLocaleLoadedU3Em__8_m3886513515 (Il2CppObject * __this /* static, unused */, ISN_Locale_t2334646965 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNativeUtility::<GuidedAccessSessionRequestResult>m__9(System.Boolean)
extern "C"  void IOSNativeUtility_U3CGuidedAccessSessionRequestResultU3Em__9_m3526288020 (Il2CppObject * __this /* static, unused */, bool p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
