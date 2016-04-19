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

// ISN_SoomlaGrow
struct ISN_SoomlaGrow_t564272061;
// System.Action
struct Action_t437523947;
// IOSStoreKitVerificationResponse
struct IOSStoreKitVerificationResponse_t2029763550;
// IOSStoreKitRestoreResult
struct IOSStoreKitRestoreResult_t1000994345;
// System.String
struct String_t;
// IOSStoreKitResult
struct IOSStoreKitResult_t2804151295;
// ISN_Result
struct ISN_Result_t2497682552;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Action437523947.h"
#include "AssemblyU2DCSharp_IOSStoreKitVerificationResponse2029763550.h"
#include "AssemblyU2DCSharp_IOSStoreKitRestoreResult1000994345.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_IOSStoreKitResult2804151295.h"
#include "AssemblyU2DCSharp_ISN_SoomlaEvent310827056.h"
#include "AssemblyU2DCSharp_ISN_SoomlaAction914082656.h"
#include "AssemblyU2DCSharp_ISN_SoomlaProvider2928783515.h"
#include "AssemblyU2DCSharp_ISN_Result2497682552.h"

// System.Void ISN_SoomlaGrow::.ctor()
extern "C"  void ISN_SoomlaGrow__ctor_m333092222 (ISN_SoomlaGrow_t564272061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_SoomlaGrow::.cctor()
extern "C"  void ISN_SoomlaGrow__cctor_m1253828079 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_SoomlaGrow::add_ActionInitialized(System.Action)
extern "C"  void ISN_SoomlaGrow_add_ActionInitialized_m3253169089 (Il2CppObject * __this /* static, unused */, Action_t437523947 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_SoomlaGrow::remove_ActionInitialized(System.Action)
extern "C"  void ISN_SoomlaGrow_remove_ActionInitialized_m560416212 (Il2CppObject * __this /* static, unused */, Action_t437523947 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_SoomlaGrow::add_ActionConnected(System.Action)
extern "C"  void ISN_SoomlaGrow_add_ActionConnected_m3901552940 (Il2CppObject * __this /* static, unused */, Action_t437523947 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_SoomlaGrow::remove_ActionConnected(System.Action)
extern "C"  void ISN_SoomlaGrow_remove_ActionConnected_m609369087 (Il2CppObject * __this /* static, unused */, Action_t437523947 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_SoomlaGrow::add_ActionDisconnected(System.Action)
extern "C"  void ISN_SoomlaGrow_add_ActionDisconnected_m2995278504 (Il2CppObject * __this /* static, unused */, Action_t437523947 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_SoomlaGrow::remove_ActionDisconnected(System.Action)
extern "C"  void ISN_SoomlaGrow_remove_ActionDisconnected_m1124317941 (Il2CppObject * __this /* static, unused */, Action_t437523947 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_SoomlaGrow::CreateObject()
extern "C"  void ISN_SoomlaGrow_CreateObject_m2128393121 (ISN_SoomlaGrow_t564272061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_SoomlaGrow::Init()
extern "C"  void ISN_SoomlaGrow_Init_m2871775510 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_SoomlaGrow::HandleOnVerificationComplete(IOSStoreKitVerificationResponse)
extern "C"  void ISN_SoomlaGrow_HandleOnVerificationComplete_m2277375411 (Il2CppObject * __this /* static, unused */, IOSStoreKitVerificationResponse_t2029763550 * ___res, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_SoomlaGrow::HandleOnRestoreComplete(IOSStoreKitRestoreResult)
extern "C"  void ISN_SoomlaGrow_HandleOnRestoreComplete_m2440056979 (Il2CppObject * __this /* static, unused */, IOSStoreKitRestoreResult_t1000994345 * ___res, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_SoomlaGrow::HandleOnRestoreStarted()
extern "C"  void ISN_SoomlaGrow_HandleOnRestoreStarted_m2080681568 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_SoomlaGrow::HandleOnTransactionStarted(System.String)
extern "C"  void ISN_SoomlaGrow_HandleOnTransactionStarted_m3986052850 (Il2CppObject * __this /* static, unused */, String_t* ___prodcutId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_SoomlaGrow::HandleOnTransactionComplete(IOSStoreKitResult)
extern "C"  void ISN_SoomlaGrow_HandleOnTransactionComplete_m3739508135 (Il2CppObject * __this /* static, unused */, IOSStoreKitResult_t2804151295 * ___res, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_SoomlaGrow::SocialAction(ISN_SoomlaEvent,ISN_SoomlaAction,ISN_SoomlaProvider)
extern "C"  void ISN_SoomlaGrow_SocialAction_m3745603710 (Il2CppObject * __this /* static, unused */, int32_t ___soomlaEvent, int32_t ___action, int32_t ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_SoomlaGrow::PurchaseStarted(System.String)
extern "C"  void ISN_SoomlaGrow_PurchaseStarted_m3411969894 (Il2CppObject * __this /* static, unused */, String_t* ___prodcutId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_SoomlaGrow::PurchaseFinished(System.String,System.String,System.String)
extern "C"  void ISN_SoomlaGrow_PurchaseFinished_m3046229825 (Il2CppObject * __this /* static, unused */, String_t* ___prodcutId, String_t* ___priceInMicros, String_t* ___currency, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_SoomlaGrow::PurchaseCanceled(System.String)
extern "C"  void ISN_SoomlaGrow_PurchaseCanceled_m1204383810 (Il2CppObject * __this /* static, unused */, String_t* ___prodcutId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_SoomlaGrow::SetPurchasesSupportedState(System.Boolean)
extern "C"  void ISN_SoomlaGrow_SetPurchasesSupportedState_m1587148080 (Il2CppObject * __this /* static, unused */, bool ___isSupported, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_SoomlaGrow::PurchaseError()
extern "C"  void ISN_SoomlaGrow_PurchaseError_m1973534563 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_SoomlaGrow::VerificationFailed()
extern "C"  void ISN_SoomlaGrow_VerificationFailed_m1154853758 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_SoomlaGrow::RestoreStarted()
extern "C"  void ISN_SoomlaGrow_RestoreStarted_m4229603097 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_SoomlaGrow::RestoreFinished(System.Boolean)
extern "C"  void ISN_SoomlaGrow_RestoreFinished_m3332260467 (Il2CppObject * __this /* static, unused */, bool ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ISN_SoomlaGrow::get_IsInitialized()
extern "C"  bool ISN_SoomlaGrow_get_IsInitialized_m4057555145 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_SoomlaGrow::OnHighWayInitialized()
extern "C"  void ISN_SoomlaGrow_OnHighWayInitialized_m59974508 (ISN_SoomlaGrow_t564272061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_SoomlaGrow::OnHihgWayConnected()
extern "C"  void ISN_SoomlaGrow_OnHihgWayConnected_m1962927039 (ISN_SoomlaGrow_t564272061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_SoomlaGrow::OnHihgWayDisconnected()
extern "C"  void ISN_SoomlaGrow_OnHihgWayDisconnected_m3870770791 (ISN_SoomlaGrow_t564272061 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_SoomlaGrow::HandleOnInstagramPostResult(ISN_Result)
extern "C"  void ISN_SoomlaGrow_HandleOnInstagramPostResult_m359001004 (Il2CppObject * __this /* static, unused */, ISN_Result_t2497682552 * ___res, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_SoomlaGrow::HandleOnTwitterPostResult(ISN_Result)
extern "C"  void ISN_SoomlaGrow_HandleOnTwitterPostResult_m3469649069 (Il2CppObject * __this /* static, unused */, ISN_Result_t2497682552 * ___res, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_SoomlaGrow::HandleOnInstagramPostStart()
extern "C"  void ISN_SoomlaGrow_HandleOnInstagramPostStart_m1750061853 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_SoomlaGrow::HandleOnTwitterPostStart()
extern "C"  void ISN_SoomlaGrow_HandleOnTwitterPostStart_m2751508668 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_SoomlaGrow::HandleOnFacebookPostStart()
extern "C"  void ISN_SoomlaGrow_HandleOnFacebookPostStart_m1725773297 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_SoomlaGrow::HandleOnFacebookPostResult(ISN_Result)
extern "C"  void ISN_SoomlaGrow_HandleOnFacebookPostResult_m3441704024 (Il2CppObject * __this /* static, unused */, ISN_Result_t2497682552 * ___res, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_SoomlaGrow::<ActionInitialized>m__0()
extern "C"  void ISN_SoomlaGrow_U3CActionInitializedU3Em__0_m4221306779 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_SoomlaGrow::<ActionConnected>m__1()
extern "C"  void ISN_SoomlaGrow_U3CActionConnectedU3Em__1_m330838215 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_SoomlaGrow::<ActionDisconnected>m__2()
extern "C"  void ISN_SoomlaGrow_U3CActionDisconnectedU3Em__2_m1803083548 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
