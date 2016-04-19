#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.Int32,IOSStoreProductView>
struct Dictionary_2_t2780923967;
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

#include "AssemblyU2DCSharp_ISN_Singleton_1_gen140882203.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IOSInAppPurchaseManager
struct  IOSInAppPurchaseManager_t3352725661  : public ISN_Singleton_1_t140882203
{
public:
	// System.Boolean IOSInAppPurchaseManager::_IsStoreLoaded
	bool ____IsStoreLoaded_6;
	// System.Boolean IOSInAppPurchaseManager::_IsWaitingLoadResult
	bool ____IsWaitingLoadResult_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,IOSStoreProductView> IOSInAppPurchaseManager::_productsView
	Dictionary_2_t2780923967 * ____productsView_9;

public:
	inline static int32_t get_offset_of__IsStoreLoaded_6() { return static_cast<int32_t>(offsetof(IOSInAppPurchaseManager_t3352725661, ____IsStoreLoaded_6)); }
	inline bool get__IsStoreLoaded_6() const { return ____IsStoreLoaded_6; }
	inline bool* get_address_of__IsStoreLoaded_6() { return &____IsStoreLoaded_6; }
	inline void set__IsStoreLoaded_6(bool value)
	{
		____IsStoreLoaded_6 = value;
	}

	inline static int32_t get_offset_of__IsWaitingLoadResult_7() { return static_cast<int32_t>(offsetof(IOSInAppPurchaseManager_t3352725661, ____IsWaitingLoadResult_7)); }
	inline bool get__IsWaitingLoadResult_7() const { return ____IsWaitingLoadResult_7; }
	inline bool* get_address_of__IsWaitingLoadResult_7() { return &____IsWaitingLoadResult_7; }
	inline void set__IsWaitingLoadResult_7(bool value)
	{
		____IsWaitingLoadResult_7 = value;
	}

	inline static int32_t get_offset_of__productsView_9() { return static_cast<int32_t>(offsetof(IOSInAppPurchaseManager_t3352725661, ____productsView_9)); }
	inline Dictionary_2_t2780923967 * get__productsView_9() const { return ____productsView_9; }
	inline Dictionary_2_t2780923967 ** get_address_of__productsView_9() { return &____productsView_9; }
	inline void set__productsView_9(Dictionary_2_t2780923967 * value)
	{
		____productsView_9 = value;
		Il2CppCodeGenWriteBarrier(&____productsView_9, value);
	}
};

struct IOSInAppPurchaseManager_t3352725661_StaticFields
{
public:
	// System.Int32 IOSInAppPurchaseManager::_nextId
	int32_t ____nextId_8;
	// System.String IOSInAppPurchaseManager::lastPurchasedProduct
	String_t* ___lastPurchasedProduct_10;
	// System.Action IOSInAppPurchaseManager::OnRestoreStarted
	Action_t437523947 * ___OnRestoreStarted_11;
	// System.Action`1<System.String> IOSInAppPurchaseManager::OnTransactionStarted
	Action_1_t1116941607 * ___OnTransactionStarted_12;
	// System.Action`1<IOSStoreKitResult> IOSInAppPurchaseManager::OnTransactionComplete
	Action_1_t2952604000 * ___OnTransactionComplete_13;
	// System.Action`1<IOSStoreKitRestoreResult> IOSInAppPurchaseManager::OnRestoreComplete
	Action_1_t1149447050 * ___OnRestoreComplete_14;
	// System.Action`1<ISN_Result> IOSInAppPurchaseManager::OnStoreKitInitComplete
	Action_1_t2646135257 * ___OnStoreKitInitComplete_15;
	// System.Action`1<System.Boolean> IOSInAppPurchaseManager::OnPurchasesStateSettingsLoaded
	Action_1_t359458046 * ___OnPurchasesStateSettingsLoaded_16;
	// System.Action`1<IOSStoreKitVerificationResponse> IOSInAppPurchaseManager::OnVerificationComplete
	Action_1_t2178216255 * ___OnVerificationComplete_17;
	// System.Action IOSInAppPurchaseManager::<>f__am$cacheC
	Action_t437523947 * ___U3CU3Ef__amU24cacheC_18;
	// System.Action`1<System.String> IOSInAppPurchaseManager::<>f__am$cacheD
	Action_1_t1116941607 * ___U3CU3Ef__amU24cacheD_19;
	// System.Action`1<IOSStoreKitResult> IOSInAppPurchaseManager::<>f__am$cacheE
	Action_1_t2952604000 * ___U3CU3Ef__amU24cacheE_20;
	// System.Action`1<IOSStoreKitRestoreResult> IOSInAppPurchaseManager::<>f__am$cacheF
	Action_1_t1149447050 * ___U3CU3Ef__amU24cacheF_21;
	// System.Action`1<ISN_Result> IOSInAppPurchaseManager::<>f__am$cache10
	Action_1_t2646135257 * ___U3CU3Ef__amU24cache10_22;
	// System.Action`1<System.Boolean> IOSInAppPurchaseManager::<>f__am$cache11
	Action_1_t359458046 * ___U3CU3Ef__amU24cache11_23;
	// System.Action`1<IOSStoreKitVerificationResponse> IOSInAppPurchaseManager::<>f__am$cache12
	Action_1_t2178216255 * ___U3CU3Ef__amU24cache12_24;

public:
	inline static int32_t get_offset_of__nextId_8() { return static_cast<int32_t>(offsetof(IOSInAppPurchaseManager_t3352725661_StaticFields, ____nextId_8)); }
	inline int32_t get__nextId_8() const { return ____nextId_8; }
	inline int32_t* get_address_of__nextId_8() { return &____nextId_8; }
	inline void set__nextId_8(int32_t value)
	{
		____nextId_8 = value;
	}

	inline static int32_t get_offset_of_lastPurchasedProduct_10() { return static_cast<int32_t>(offsetof(IOSInAppPurchaseManager_t3352725661_StaticFields, ___lastPurchasedProduct_10)); }
	inline String_t* get_lastPurchasedProduct_10() const { return ___lastPurchasedProduct_10; }
	inline String_t** get_address_of_lastPurchasedProduct_10() { return &___lastPurchasedProduct_10; }
	inline void set_lastPurchasedProduct_10(String_t* value)
	{
		___lastPurchasedProduct_10 = value;
		Il2CppCodeGenWriteBarrier(&___lastPurchasedProduct_10, value);
	}

	inline static int32_t get_offset_of_OnRestoreStarted_11() { return static_cast<int32_t>(offsetof(IOSInAppPurchaseManager_t3352725661_StaticFields, ___OnRestoreStarted_11)); }
	inline Action_t437523947 * get_OnRestoreStarted_11() const { return ___OnRestoreStarted_11; }
	inline Action_t437523947 ** get_address_of_OnRestoreStarted_11() { return &___OnRestoreStarted_11; }
	inline void set_OnRestoreStarted_11(Action_t437523947 * value)
	{
		___OnRestoreStarted_11 = value;
		Il2CppCodeGenWriteBarrier(&___OnRestoreStarted_11, value);
	}

	inline static int32_t get_offset_of_OnTransactionStarted_12() { return static_cast<int32_t>(offsetof(IOSInAppPurchaseManager_t3352725661_StaticFields, ___OnTransactionStarted_12)); }
	inline Action_1_t1116941607 * get_OnTransactionStarted_12() const { return ___OnTransactionStarted_12; }
	inline Action_1_t1116941607 ** get_address_of_OnTransactionStarted_12() { return &___OnTransactionStarted_12; }
	inline void set_OnTransactionStarted_12(Action_1_t1116941607 * value)
	{
		___OnTransactionStarted_12 = value;
		Il2CppCodeGenWriteBarrier(&___OnTransactionStarted_12, value);
	}

	inline static int32_t get_offset_of_OnTransactionComplete_13() { return static_cast<int32_t>(offsetof(IOSInAppPurchaseManager_t3352725661_StaticFields, ___OnTransactionComplete_13)); }
	inline Action_1_t2952604000 * get_OnTransactionComplete_13() const { return ___OnTransactionComplete_13; }
	inline Action_1_t2952604000 ** get_address_of_OnTransactionComplete_13() { return &___OnTransactionComplete_13; }
	inline void set_OnTransactionComplete_13(Action_1_t2952604000 * value)
	{
		___OnTransactionComplete_13 = value;
		Il2CppCodeGenWriteBarrier(&___OnTransactionComplete_13, value);
	}

	inline static int32_t get_offset_of_OnRestoreComplete_14() { return static_cast<int32_t>(offsetof(IOSInAppPurchaseManager_t3352725661_StaticFields, ___OnRestoreComplete_14)); }
	inline Action_1_t1149447050 * get_OnRestoreComplete_14() const { return ___OnRestoreComplete_14; }
	inline Action_1_t1149447050 ** get_address_of_OnRestoreComplete_14() { return &___OnRestoreComplete_14; }
	inline void set_OnRestoreComplete_14(Action_1_t1149447050 * value)
	{
		___OnRestoreComplete_14 = value;
		Il2CppCodeGenWriteBarrier(&___OnRestoreComplete_14, value);
	}

	inline static int32_t get_offset_of_OnStoreKitInitComplete_15() { return static_cast<int32_t>(offsetof(IOSInAppPurchaseManager_t3352725661_StaticFields, ___OnStoreKitInitComplete_15)); }
	inline Action_1_t2646135257 * get_OnStoreKitInitComplete_15() const { return ___OnStoreKitInitComplete_15; }
	inline Action_1_t2646135257 ** get_address_of_OnStoreKitInitComplete_15() { return &___OnStoreKitInitComplete_15; }
	inline void set_OnStoreKitInitComplete_15(Action_1_t2646135257 * value)
	{
		___OnStoreKitInitComplete_15 = value;
		Il2CppCodeGenWriteBarrier(&___OnStoreKitInitComplete_15, value);
	}

	inline static int32_t get_offset_of_OnPurchasesStateSettingsLoaded_16() { return static_cast<int32_t>(offsetof(IOSInAppPurchaseManager_t3352725661_StaticFields, ___OnPurchasesStateSettingsLoaded_16)); }
	inline Action_1_t359458046 * get_OnPurchasesStateSettingsLoaded_16() const { return ___OnPurchasesStateSettingsLoaded_16; }
	inline Action_1_t359458046 ** get_address_of_OnPurchasesStateSettingsLoaded_16() { return &___OnPurchasesStateSettingsLoaded_16; }
	inline void set_OnPurchasesStateSettingsLoaded_16(Action_1_t359458046 * value)
	{
		___OnPurchasesStateSettingsLoaded_16 = value;
		Il2CppCodeGenWriteBarrier(&___OnPurchasesStateSettingsLoaded_16, value);
	}

	inline static int32_t get_offset_of_OnVerificationComplete_17() { return static_cast<int32_t>(offsetof(IOSInAppPurchaseManager_t3352725661_StaticFields, ___OnVerificationComplete_17)); }
	inline Action_1_t2178216255 * get_OnVerificationComplete_17() const { return ___OnVerificationComplete_17; }
	inline Action_1_t2178216255 ** get_address_of_OnVerificationComplete_17() { return &___OnVerificationComplete_17; }
	inline void set_OnVerificationComplete_17(Action_1_t2178216255 * value)
	{
		___OnVerificationComplete_17 = value;
		Il2CppCodeGenWriteBarrier(&___OnVerificationComplete_17, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheC_18() { return static_cast<int32_t>(offsetof(IOSInAppPurchaseManager_t3352725661_StaticFields, ___U3CU3Ef__amU24cacheC_18)); }
	inline Action_t437523947 * get_U3CU3Ef__amU24cacheC_18() const { return ___U3CU3Ef__amU24cacheC_18; }
	inline Action_t437523947 ** get_address_of_U3CU3Ef__amU24cacheC_18() { return &___U3CU3Ef__amU24cacheC_18; }
	inline void set_U3CU3Ef__amU24cacheC_18(Action_t437523947 * value)
	{
		___U3CU3Ef__amU24cacheC_18 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheC_18, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheD_19() { return static_cast<int32_t>(offsetof(IOSInAppPurchaseManager_t3352725661_StaticFields, ___U3CU3Ef__amU24cacheD_19)); }
	inline Action_1_t1116941607 * get_U3CU3Ef__amU24cacheD_19() const { return ___U3CU3Ef__amU24cacheD_19; }
	inline Action_1_t1116941607 ** get_address_of_U3CU3Ef__amU24cacheD_19() { return &___U3CU3Ef__amU24cacheD_19; }
	inline void set_U3CU3Ef__amU24cacheD_19(Action_1_t1116941607 * value)
	{
		___U3CU3Ef__amU24cacheD_19 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheD_19, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheE_20() { return static_cast<int32_t>(offsetof(IOSInAppPurchaseManager_t3352725661_StaticFields, ___U3CU3Ef__amU24cacheE_20)); }
	inline Action_1_t2952604000 * get_U3CU3Ef__amU24cacheE_20() const { return ___U3CU3Ef__amU24cacheE_20; }
	inline Action_1_t2952604000 ** get_address_of_U3CU3Ef__amU24cacheE_20() { return &___U3CU3Ef__amU24cacheE_20; }
	inline void set_U3CU3Ef__amU24cacheE_20(Action_1_t2952604000 * value)
	{
		___U3CU3Ef__amU24cacheE_20 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheE_20, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheF_21() { return static_cast<int32_t>(offsetof(IOSInAppPurchaseManager_t3352725661_StaticFields, ___U3CU3Ef__amU24cacheF_21)); }
	inline Action_1_t1149447050 * get_U3CU3Ef__amU24cacheF_21() const { return ___U3CU3Ef__amU24cacheF_21; }
	inline Action_1_t1149447050 ** get_address_of_U3CU3Ef__amU24cacheF_21() { return &___U3CU3Ef__amU24cacheF_21; }
	inline void set_U3CU3Ef__amU24cacheF_21(Action_1_t1149447050 * value)
	{
		___U3CU3Ef__amU24cacheF_21 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheF_21, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache10_22() { return static_cast<int32_t>(offsetof(IOSInAppPurchaseManager_t3352725661_StaticFields, ___U3CU3Ef__amU24cache10_22)); }
	inline Action_1_t2646135257 * get_U3CU3Ef__amU24cache10_22() const { return ___U3CU3Ef__amU24cache10_22; }
	inline Action_1_t2646135257 ** get_address_of_U3CU3Ef__amU24cache10_22() { return &___U3CU3Ef__amU24cache10_22; }
	inline void set_U3CU3Ef__amU24cache10_22(Action_1_t2646135257 * value)
	{
		___U3CU3Ef__amU24cache10_22 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache10_22, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache11_23() { return static_cast<int32_t>(offsetof(IOSInAppPurchaseManager_t3352725661_StaticFields, ___U3CU3Ef__amU24cache11_23)); }
	inline Action_1_t359458046 * get_U3CU3Ef__amU24cache11_23() const { return ___U3CU3Ef__amU24cache11_23; }
	inline Action_1_t359458046 ** get_address_of_U3CU3Ef__amU24cache11_23() { return &___U3CU3Ef__amU24cache11_23; }
	inline void set_U3CU3Ef__amU24cache11_23(Action_1_t359458046 * value)
	{
		___U3CU3Ef__amU24cache11_23 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache11_23, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache12_24() { return static_cast<int32_t>(offsetof(IOSInAppPurchaseManager_t3352725661_StaticFields, ___U3CU3Ef__amU24cache12_24)); }
	inline Action_1_t2178216255 * get_U3CU3Ef__amU24cache12_24() const { return ___U3CU3Ef__amU24cache12_24; }
	inline Action_1_t2178216255 ** get_address_of_U3CU3Ef__amU24cache12_24() { return &___U3CU3Ef__amU24cache12_24; }
	inline void set_U3CU3Ef__amU24cache12_24(Action_1_t2178216255 * value)
	{
		___U3CU3Ef__amU24cache12_24 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache12_24, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
