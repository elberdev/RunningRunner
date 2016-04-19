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

// IOSSharedApplication
struct IOSSharedApplication_t2254871358;
// System.Action`1<ISN_CheckUrlResult>
struct Action_1_t1790332160;
// System.Action`1<System.String>
struct Action_1_t1116941607;
// System.String
struct String_t;
// ISN_CheckUrlResult
struct ISN_CheckUrlResult_t1641879455;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_ISN_CheckUrlResult1641879455.h"

// System.Void IOSSharedApplication::.ctor()
extern "C"  void IOSSharedApplication__ctor_m80315677 (IOSSharedApplication_t2254871358 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSharedApplication::.cctor()
extern "C"  void IOSSharedApplication__cctor_m2007689776 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSharedApplication::add_OnUrlCheckResultAction(System.Action`1<ISN_CheckUrlResult>)
extern "C"  void IOSSharedApplication_add_OnUrlCheckResultAction_m517543705 (Il2CppObject * __this /* static, unused */, Action_1_t1790332160 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSharedApplication::remove_OnUrlCheckResultAction(System.Action`1<ISN_CheckUrlResult>)
extern "C"  void IOSSharedApplication_remove_OnUrlCheckResultAction_m1997013896 (Il2CppObject * __this /* static, unused */, Action_1_t1790332160 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSharedApplication::add_OnAdvertisingIdentifierLoadedAction(System.Action`1<System.String>)
extern "C"  void IOSSharedApplication_add_OnAdvertisingIdentifierLoadedAction_m525399426 (Il2CppObject * __this /* static, unused */, Action_1_t1116941607 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSharedApplication::remove_OnAdvertisingIdentifierLoadedAction(System.Action`1<System.String>)
extern "C"  void IOSSharedApplication_remove_OnAdvertisingIdentifierLoadedAction_m3380609777 (Il2CppObject * __this /* static, unused */, Action_1_t1116941607 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSharedApplication::_ISN_checkUrl(System.String)
extern "C"  void IOSSharedApplication__ISN_checkUrl_m564666822 (Il2CppObject * __this /* static, unused */, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSharedApplication::_ISN_openUrl(System.String)
extern "C"  void IOSSharedApplication__ISN_openUrl_m1642028144 (Il2CppObject * __this /* static, unused */, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSharedApplication::_ISN_GetIFA()
extern "C"  void IOSSharedApplication__ISN_GetIFA_m406522499 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSharedApplication::CheckUrl(System.String)
extern "C"  void IOSSharedApplication_CheckUrl_m4188336820 (IOSSharedApplication_t2254871358 * __this, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSharedApplication::OpenUrl(System.String)
extern "C"  void IOSSharedApplication_OpenUrl_m3282941378 (IOSSharedApplication_t2254871358 * __this, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSharedApplication::GetAdvertisingIdentifier()
extern "C"  void IOSSharedApplication_GetAdvertisingIdentifier_m2688529662 (IOSSharedApplication_t2254871358 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSharedApplication::UrlCheckSuccess(System.String)
extern "C"  void IOSSharedApplication_UrlCheckSuccess_m1500415741 (IOSSharedApplication_t2254871358 * __this, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSharedApplication::UrlCheckFailed(System.String)
extern "C"  void IOSSharedApplication_UrlCheckFailed_m925757477 (IOSSharedApplication_t2254871358 * __this, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSharedApplication::OnAdvertisingIdentifierLoaded(System.String)
extern "C"  void IOSSharedApplication_OnAdvertisingIdentifierLoaded_m1759876692 (IOSSharedApplication_t2254871358 * __this, String_t* ___Identifier, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSharedApplication::<OnUrlCheckResultAction>m__4D(ISN_CheckUrlResult)
extern "C"  void IOSSharedApplication_U3COnUrlCheckResultActionU3Em__4D_m2046552770 (Il2CppObject * __this /* static, unused */, ISN_CheckUrlResult_t1641879455 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSharedApplication::<OnAdvertisingIdentifierLoadedAction>m__4E(System.String)
extern "C"  void IOSSharedApplication_U3COnAdvertisingIdentifierLoadedActionU3Em__4E_m2675138446 (Il2CppObject * __this /* static, unused */, String_t* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
