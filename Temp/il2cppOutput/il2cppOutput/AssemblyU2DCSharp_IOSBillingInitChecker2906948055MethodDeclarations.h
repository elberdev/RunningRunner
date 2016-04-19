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

// IOSBillingInitChecker
struct IOSBillingInitChecker_t2906948055;
// IOSBillingInitChecker/BillingInitListener
struct BillingInitListener_t2535381983;
// ISN_Result
struct ISN_Result_t2497682552;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_IOSBillingInitChecker_BillingIni2535381983.h"
#include "AssemblyU2DCSharp_ISN_Result2497682552.h"

// System.Void IOSBillingInitChecker::.ctor(IOSBillingInitChecker/BillingInitListener)
extern "C"  void IOSBillingInitChecker__ctor_m3348931703 (IOSBillingInitChecker_t2906948055 * __this, BillingInitListener_t2535381983 * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSBillingInitChecker::HandleOnStoreKitInitComplete(ISN_Result)
extern "C"  void IOSBillingInitChecker_HandleOnStoreKitInitComplete_m2623954077 (IOSBillingInitChecker_t2906948055 * __this, ISN_Result_t2497682552 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
