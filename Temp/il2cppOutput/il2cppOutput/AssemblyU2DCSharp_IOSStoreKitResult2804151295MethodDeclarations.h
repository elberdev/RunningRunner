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

// IOSStoreKitResult
struct IOSStoreKitResult_t2804151295;
// System.String
struct String_t;
// ISN_Error
struct ISN_Error_t3116992077;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_ISN_Error3116992077.h"
#include "AssemblyU2DCSharp_InAppPurchaseState4256489172.h"
#include "AssemblyU2DCSharp_IOSTransactionErrorCode2192600676.h"

// System.Void IOSStoreKitResult::.ctor(System.String,ISN_Error)
extern "C"  void IOSStoreKitResult__ctor_m2910995061 (IOSStoreKitResult_t2804151295 * __this, String_t* ___productIdentifier, ISN_Error_t3116992077 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSStoreKitResult::.ctor(System.String,InAppPurchaseState,System.String,System.String,System.String)
extern "C"  void IOSStoreKitResult__ctor_m1301067696 (IOSStoreKitResult_t2804151295 * __this, String_t* ___productIdentifier, int32_t ___state, String_t* ___applicationUsername, String_t* ___receipt, String_t* ___transactionIdentifier, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// IOSTransactionErrorCode IOSStoreKitResult::get_TransactionErrorCode()
extern "C"  int32_t IOSStoreKitResult_get_TransactionErrorCode_m1504460105 (IOSStoreKitResult_t2804151295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// InAppPurchaseState IOSStoreKitResult::get_State()
extern "C"  int32_t IOSStoreKitResult_get_State_m3379330491 (IOSStoreKitResult_t2804151295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String IOSStoreKitResult::get_ProductIdentifier()
extern "C"  String_t* IOSStoreKitResult_get_ProductIdentifier_m4054710364 (IOSStoreKitResult_t2804151295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String IOSStoreKitResult::get_ApplicationUsername()
extern "C"  String_t* IOSStoreKitResult_get_ApplicationUsername_m3474766698 (IOSStoreKitResult_t2804151295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String IOSStoreKitResult::get_Receipt()
extern "C"  String_t* IOSStoreKitResult_get_Receipt_m834302812 (IOSStoreKitResult_t2804151295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String IOSStoreKitResult::get_TransactionIdentifier()
extern "C"  String_t* IOSStoreKitResult_get_TransactionIdentifier_m3771377227 (IOSStoreKitResult_t2804151295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
