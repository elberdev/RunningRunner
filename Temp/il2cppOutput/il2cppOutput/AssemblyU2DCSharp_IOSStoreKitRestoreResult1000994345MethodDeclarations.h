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

// IOSStoreKitRestoreResult
struct IOSStoreKitRestoreResult_t1000994345;
// ISN_Error
struct ISN_Error_t3116992077;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ISN_Error3116992077.h"
#include "AssemblyU2DCSharp_IOSTransactionErrorCode2192600676.h"

// System.Void IOSStoreKitRestoreResult::.ctor(ISN_Error)
extern "C"  void IOSStoreKitRestoreResult__ctor_m173798195 (IOSStoreKitRestoreResult_t1000994345 * __this, ISN_Error_t3116992077 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSStoreKitRestoreResult::.ctor(System.Boolean)
extern "C"  void IOSStoreKitRestoreResult__ctor_m1819427977 (IOSStoreKitRestoreResult_t1000994345 * __this, bool ___IsResultSucceeded, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// IOSTransactionErrorCode IOSStoreKitRestoreResult::get_TransactionErrorCode()
extern "C"  int32_t IOSStoreKitRestoreResult_get_TransactionErrorCode_m2795320769 (IOSStoreKitRestoreResult_t1000994345 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
