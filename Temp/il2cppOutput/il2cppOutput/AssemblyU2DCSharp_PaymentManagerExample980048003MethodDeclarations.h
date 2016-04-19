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

// PaymentManagerExample
struct PaymentManagerExample_t980048003;
// System.String
struct String_t;
// IOSStoreKitResult
struct IOSStoreKitResult_t2804151295;
// IOSStoreKitRestoreResult
struct IOSStoreKitRestoreResult_t1000994345;
// IOSStoreKitVerificationResponse
struct IOSStoreKitVerificationResponse_t2029763550;
// ISN_Result
struct ISN_Result_t2497682552;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_IOSStoreKitResult2804151295.h"
#include "AssemblyU2DCSharp_IOSStoreKitRestoreResult1000994345.h"
#include "AssemblyU2DCSharp_IOSStoreKitVerificationResponse2029763550.h"
#include "AssemblyU2DCSharp_ISN_Result2497682552.h"

// System.Void PaymentManagerExample::.ctor()
extern "C"  void PaymentManagerExample__ctor_m1622443080 (PaymentManagerExample_t980048003 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PaymentManagerExample::.cctor()
extern "C"  void PaymentManagerExample__cctor_m2568999013 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PaymentManagerExample::init()
extern "C"  void PaymentManagerExample_init_m2582574316 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PaymentManagerExample::buyItem(System.String)
extern "C"  void PaymentManagerExample_buyItem_m915364003 (Il2CppObject * __this /* static, unused */, String_t* ___productId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PaymentManagerExample::UnlockProducts(System.String)
extern "C"  void PaymentManagerExample_UnlockProducts_m3128730750 (Il2CppObject * __this /* static, unused */, String_t* ___productIdentifier, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PaymentManagerExample::OnTransactionComplete(IOSStoreKitResult)
extern "C"  void PaymentManagerExample_OnTransactionComplete_m3293777301 (Il2CppObject * __this /* static, unused */, IOSStoreKitResult_t2804151295 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PaymentManagerExample::OnRestoreComplete(IOSStoreKitRestoreResult)
extern "C"  void PaymentManagerExample_OnRestoreComplete_m3711660517 (Il2CppObject * __this /* static, unused */, IOSStoreKitRestoreResult_t1000994345 * ___res, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PaymentManagerExample::HandleOnVerificationComplete(IOSStoreKitVerificationResponse)
extern "C"  void PaymentManagerExample_HandleOnVerificationComplete_m463778045 (Il2CppObject * __this /* static, unused */, IOSStoreKitVerificationResponse_t2029763550 * ___response, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PaymentManagerExample::OnStoreKitInitComplete(ISN_Result)
extern "C"  void PaymentManagerExample_OnStoreKitInitComplete_m4204741697 (Il2CppObject * __this /* static, unused */, ISN_Result_t2497682552 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
