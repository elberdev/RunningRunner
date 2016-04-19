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

// IOSInAppPurchaseManager
struct IOSInAppPurchaseManager_t3352725661;
// System.Action
struct Action_t437523947;
// System.Action`1<System.String>
struct Action_1_t1116941607;
// System.Action`1<IOSStoreKitResult>
struct Action_1_t2952604000;
// System.Action`1<IOSStoreKitRestoreResult>
struct Action_1_t1149447050;
// System.Action`1<ISN_Result>
struct Action_1_t2646135257;
// System.Action`1<System.Boolean>
struct Action_1_t359458046;
// System.Action`1<IOSStoreKitVerificationResponse>
struct Action_1_t2178216255;
// System.String
struct String_t;
// IOSProductTemplate
struct IOSProductTemplate_t2463974108;
// IOSStoreProductView
struct IOSStoreProductView_t2290113184;
// System.Collections.Generic.List`1<IOSProductTemplate>
struct List_1_t3260933077;
// IOSStoreKitResult
struct IOSStoreKitResult_t2804151295;
// IOSStoreKitRestoreResult
struct IOSStoreKitRestoreResult_t1000994345;
// ISN_Result
struct ISN_Result_t2497682552;
// IOSStoreKitVerificationResponse
struct IOSStoreKitVerificationResponse_t2029763550;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Action437523947.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_IOSProductTemplate2463974108.h"
#include "AssemblyU2DCSharp_IOSStoreProductView2290113184.h"
#include "AssemblyU2DCSharp_IOSTransactionErrorCode2192600676.h"
#include "AssemblyU2DCSharp_IOSStoreKitResult2804151295.h"
#include "AssemblyU2DCSharp_IOSStoreKitRestoreResult1000994345.h"
#include "AssemblyU2DCSharp_ISN_Result2497682552.h"
#include "AssemblyU2DCSharp_IOSStoreKitVerificationResponse2029763550.h"

// System.Void IOSInAppPurchaseManager::.ctor()
extern "C"  void IOSInAppPurchaseManager__ctor_m874198894 (IOSInAppPurchaseManager_t3352725661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::.cctor()
extern "C"  void IOSInAppPurchaseManager__cctor_m848265727 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::add_OnRestoreStarted(System.Action)
extern "C"  void IOSInAppPurchaseManager_add_OnRestoreStarted_m3517201271 (Il2CppObject * __this /* static, unused */, Action_t437523947 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::remove_OnRestoreStarted(System.Action)
extern "C"  void IOSInAppPurchaseManager_remove_OnRestoreStarted_m2983401764 (Il2CppObject * __this /* static, unused */, Action_t437523947 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::add_OnTransactionStarted(System.Action`1<System.String>)
extern "C"  void IOSInAppPurchaseManager_add_OnTransactionStarted_m707893650 (Il2CppObject * __this /* static, unused */, Action_1_t1116941607 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::remove_OnTransactionStarted(System.Action`1<System.String>)
extern "C"  void IOSInAppPurchaseManager_remove_OnTransactionStarted_m759036421 (Il2CppObject * __this /* static, unused */, Action_1_t1116941607 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::add_OnTransactionComplete(System.Action`1<IOSStoreKitResult>)
extern "C"  void IOSInAppPurchaseManager_add_OnTransactionComplete_m59974769 (Il2CppObject * __this /* static, unused */, Action_1_t2952604000 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::remove_OnTransactionComplete(System.Action`1<IOSStoreKitResult>)
extern "C"  void IOSInAppPurchaseManager_remove_OnTransactionComplete_m2642416606 (Il2CppObject * __this /* static, unused */, Action_1_t2952604000 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::add_OnRestoreComplete(System.Action`1<IOSStoreKitRestoreResult>)
extern "C"  void IOSInAppPurchaseManager_add_OnRestoreComplete_m4017922173 (Il2CppObject * __this /* static, unused */, Action_1_t1149447050 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::remove_OnRestoreComplete(System.Action`1<IOSStoreKitRestoreResult>)
extern "C"  void IOSInAppPurchaseManager_remove_OnRestoreComplete_m1793514992 (Il2CppObject * __this /* static, unused */, Action_1_t1149447050 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::add_OnStoreKitInitComplete(System.Action`1<ISN_Result>)
extern "C"  void IOSInAppPurchaseManager_add_OnStoreKitInitComplete_m3714503985 (Il2CppObject * __this /* static, unused */, Action_1_t2646135257 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::remove_OnStoreKitInitComplete(System.Action`1<ISN_Result>)
extern "C"  void IOSInAppPurchaseManager_remove_OnStoreKitInitComplete_m1776491102 (Il2CppObject * __this /* static, unused */, Action_1_t2646135257 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::add_OnPurchasesStateSettingsLoaded(System.Action`1<System.Boolean>)
extern "C"  void IOSInAppPurchaseManager_add_OnPurchasesStateSettingsLoaded_m229447993 (Il2CppObject * __this /* static, unused */, Action_1_t359458046 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::remove_OnPurchasesStateSettingsLoaded(System.Action`1<System.Boolean>)
extern "C"  void IOSInAppPurchaseManager_remove_OnPurchasesStateSettingsLoaded_m4260496102 (Il2CppObject * __this /* static, unused */, Action_1_t359458046 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::add_OnVerificationComplete(System.Action`1<IOSStoreKitVerificationResponse>)
extern "C"  void IOSInAppPurchaseManager_add_OnVerificationComplete_m4106814321 (Il2CppObject * __this /* static, unused */, Action_1_t2178216255 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::remove_OnVerificationComplete(System.Action`1<IOSStoreKitVerificationResponse>)
extern "C"  void IOSInAppPurchaseManager_remove_OnVerificationComplete_m4271615076 (Il2CppObject * __this /* static, unused */, Action_1_t2178216255 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::Awake()
extern "C"  void IOSInAppPurchaseManager_Awake_m1111804113 (IOSInAppPurchaseManager_t3352725661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::loadStore()
extern "C"  void IOSInAppPurchaseManager_loadStore_m3836223495 (IOSInAppPurchaseManager_t3352725661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::LoadStore()
extern "C"  void IOSInAppPurchaseManager_LoadStore_m1209124839 (IOSInAppPurchaseManager_t3352725661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::buyProduct(System.String)
extern "C"  void IOSInAppPurchaseManager_buyProduct_m672122851 (IOSInAppPurchaseManager_t3352725661 * __this, String_t* ___productId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::BuyProduct(System.String)
extern "C"  void IOSInAppPurchaseManager_BuyProduct_m2718312387 (IOSInAppPurchaseManager_t3352725661 * __this, String_t* ___productId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::addProductId(System.String)
extern "C"  void IOSInAppPurchaseManager_addProductId_m3720663523 (IOSInAppPurchaseManager_t3352725661 * __this, String_t* ___productId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::AddProductId(System.String)
extern "C"  void IOSInAppPurchaseManager_AddProductId_m3013786051 (IOSInAppPurchaseManager_t3352725661 * __this, String_t* ___productId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::AddProductId(IOSProductTemplate)
extern "C"  void IOSInAppPurchaseManager_AddProductId_m3275220675 (IOSInAppPurchaseManager_t3352725661 * __this, IOSProductTemplate_t2463974108 * ___product, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// IOSProductTemplate IOSInAppPurchaseManager::GetProductById(System.String)
extern "C"  IOSProductTemplate_t2463974108 * IOSInAppPurchaseManager_GetProductById_m2015142338 (IOSInAppPurchaseManager_t3352725661 * __this, String_t* ___prodcutId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::restorePurchases()
extern "C"  void IOSInAppPurchaseManager_restorePurchases_m2428398618 (IOSInAppPurchaseManager_t3352725661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::RestorePurchases()
extern "C"  void IOSInAppPurchaseManager_RestorePurchases_m4269942842 (IOSInAppPurchaseManager_t3352725661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::verifyLastPurchase(System.String)
extern "C"  void IOSInAppPurchaseManager_verifyLastPurchase_m3557672124 (IOSInAppPurchaseManager_t3352725661 * __this, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::VerifyLastPurchase(System.String)
extern "C"  void IOSInAppPurchaseManager_VerifyLastPurchase_m420889756 (IOSInAppPurchaseManager_t3352725661 * __this, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::RegisterProductView(IOSStoreProductView)
extern "C"  void IOSInAppPurchaseManager_RegisterProductView_m1182203541 (IOSInAppPurchaseManager_t3352725661 * __this, IOSStoreProductView_t2290113184 * ___view, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<IOSProductTemplate> IOSInAppPurchaseManager::get_products()
extern "C"  List_1_t3260933077 * IOSInAppPurchaseManager_get_products_m1168060564 (IOSInAppPurchaseManager_t3352725661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<IOSProductTemplate> IOSInAppPurchaseManager::get_Products()
extern "C"  List_1_t3260933077 * IOSInAppPurchaseManager_get_Products_m3161525428 (IOSInAppPurchaseManager_t3352725661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean IOSInAppPurchaseManager::get_IsStoreLoaded()
extern "C"  bool IOSInAppPurchaseManager_get_IsStoreLoaded_m602293139 (IOSInAppPurchaseManager_t3352725661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean IOSInAppPurchaseManager::get_IsInAppPurchasesEnabled()
extern "C"  bool IOSInAppPurchaseManager_get_IsInAppPurchasesEnabled_m3013056824 (IOSInAppPurchaseManager_t3352725661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean IOSInAppPurchaseManager::get_IsWaitingLoadResult()
extern "C"  bool IOSInAppPurchaseManager_get_IsWaitingLoadResult_m1640497821 (IOSInAppPurchaseManager_t3352725661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 IOSInAppPurchaseManager::get_NextId()
extern "C"  int32_t IOSInAppPurchaseManager_get_NextId_m2764647871 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::OnStoreKitInitFailed(System.String)
extern "C"  void IOSInAppPurchaseManager_OnStoreKitInitFailed_m3950638283 (IOSInAppPurchaseManager_t3352725661 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::onStoreDataReceived(System.String)
extern "C"  void IOSInAppPurchaseManager_onStoreDataReceived_m4168430185 (IOSInAppPurchaseManager_t3352725661 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::onProductBought(System.String)
extern "C"  void IOSInAppPurchaseManager_onProductBought_m4113583899 (IOSInAppPurchaseManager_t3352725661 * __this, String_t* ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::onProductStateDeferred(System.String)
extern "C"  void IOSInAppPurchaseManager_onProductStateDeferred_m2400587436 (IOSInAppPurchaseManager_t3352725661 * __this, String_t* ___productIdentifier, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::onTransactionFailed(System.String)
extern "C"  void IOSInAppPurchaseManager_onTransactionFailed_m2655208698 (IOSInAppPurchaseManager_t3352725661 * __this, String_t* ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::onVerificationResult(System.String)
extern "C"  void IOSInAppPurchaseManager_onVerificationResult_m3088044437 (IOSInAppPurchaseManager_t3352725661 * __this, String_t* ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::onRestoreTransactionFailed(System.String)
extern "C"  void IOSInAppPurchaseManager_onRestoreTransactionFailed_m207917632 (IOSInAppPurchaseManager_t3352725661 * __this, String_t* ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::onRestoreTransactionComplete(System.String)
extern "C"  void IOSInAppPurchaseManager_onRestoreTransactionComplete_m1354870468 (IOSInAppPurchaseManager_t3352725661 * __this, String_t* ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::OnProductViewLoaded(System.String)
extern "C"  void IOSInAppPurchaseManager_OnProductViewLoaded_m1966527676 (IOSInAppPurchaseManager_t3352725661 * __this, String_t* ___viewId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::OnProductViewLoadedFailed(System.String)
extern "C"  void IOSInAppPurchaseManager_OnProductViewLoadedFailed_m4019220095 (IOSInAppPurchaseManager_t3352725661 * __this, String_t* ___viewId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::OnProductViewDismissed(System.String)
extern "C"  void IOSInAppPurchaseManager_OnProductViewDismissed_m725840920 (IOSInAppPurchaseManager_t3352725661 * __this, String_t* ___viewId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::FireSuccessInitEvent()
extern "C"  void IOSInAppPurchaseManager_FireSuccessInitEvent_m1822082003 (IOSInAppPurchaseManager_t3352725661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::FireRestoreCompleteEvent()
extern "C"  void IOSInAppPurchaseManager_FireRestoreCompleteEvent_m3823770015 (IOSInAppPurchaseManager_t3352725661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::FireProductBoughtEvent(System.String,System.String,System.String,System.String,System.Boolean)
extern "C"  void IOSInAppPurchaseManager_FireProductBoughtEvent_m1127534003 (IOSInAppPurchaseManager_t3352725661 * __this, String_t* ___productIdentifier, String_t* ___applicationUsername, String_t* ___receipt, String_t* ___transactionIdentifier, bool ___IsRestored, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::SendTransactionFailEvent(System.String,System.String,IOSTransactionErrorCode)
extern "C"  void IOSInAppPurchaseManager_SendTransactionFailEvent_m89369322 (IOSInAppPurchaseManager_t3352725661 * __this, String_t* ___productIdentifier, String_t* ___errorDescribtion, int32_t ___errorCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::EditorFakeInitEvent()
extern "C"  void IOSInAppPurchaseManager_EditorFakeInitEvent_m1372908148 (IOSInAppPurchaseManager_t3352725661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::<OnRestoreStarted>m__35()
extern "C"  void IOSInAppPurchaseManager_U3COnRestoreStartedU3Em__35_m226642571 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::<OnTransactionStarted>m__36(System.String)
extern "C"  void IOSInAppPurchaseManager_U3COnTransactionStartedU3Em__36_m1229318022 (Il2CppObject * __this /* static, unused */, String_t* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::<OnTransactionComplete>m__37(IOSStoreKitResult)
extern "C"  void IOSInAppPurchaseManager_U3COnTransactionCompleteU3Em__37_m4264403406 (Il2CppObject * __this /* static, unused */, IOSStoreKitResult_t2804151295 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::<OnRestoreComplete>m__38(IOSStoreKitRestoreResult)
extern "C"  void IOSInAppPurchaseManager_U3COnRestoreCompleteU3Em__38_m706085453 (Il2CppObject * __this /* static, unused */, IOSStoreKitRestoreResult_t1000994345 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::<OnStoreKitInitComplete>m__39(ISN_Result)
extern "C"  void IOSInAppPurchaseManager_U3COnStoreKitInitCompleteU3Em__39_m681924226 (Il2CppObject * __this /* static, unused */, ISN_Result_t2497682552 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::<OnPurchasesStateSettingsLoaded>m__3A(System.Boolean)
extern "C"  void IOSInAppPurchaseManager_U3COnPurchasesStateSettingsLoadedU3Em__3A_m762404162 (Il2CppObject * __this /* static, unused */, bool p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSInAppPurchaseManager::<OnVerificationComplete>m__3B(IOSStoreKitVerificationResponse)
extern "C"  void IOSInAppPurchaseManager_U3COnVerificationCompleteU3Em__3B_m2763184635 (Il2CppObject * __this /* static, unused */, IOSStoreKitVerificationResponse_t2029763550 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
