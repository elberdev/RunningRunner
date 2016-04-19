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

// IOSBillingInitChecker/BillingInitListener
struct BillingInitListener_t2535381983;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void IOSBillingInitChecker/BillingInitListener::.ctor(System.Object,System.IntPtr)
extern "C"  void BillingInitListener__ctor_m1038711806 (BillingInitListener_t2535381983 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSBillingInitChecker/BillingInitListener::Invoke()
extern "C"  void BillingInitListener_Invoke_m611199448 (BillingInitListener_t2535381983 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_BillingInitListener_t2535381983(Il2CppObject* delegate);
// System.IAsyncResult IOSBillingInitChecker/BillingInitListener::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * BillingInitListener_BeginInvoke_m514228659 (BillingInitListener_t2535381983 * __this, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSBillingInitChecker/BillingInitListener::EndInvoke(System.IAsyncResult)
extern "C"  void BillingInitListener_EndInvoke_m3387333902 (BillingInitListener_t2535381983 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
