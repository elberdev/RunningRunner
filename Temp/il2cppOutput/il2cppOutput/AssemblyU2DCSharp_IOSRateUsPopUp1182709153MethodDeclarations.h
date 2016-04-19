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

// IOSRateUsPopUp
struct IOSRateUsPopUp_t1182709153;
// System.Action`1<IOSDialogResult>
struct Action_1_t3472737651;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_IOSDialogResult3324284946.h"

// System.Void IOSRateUsPopUp::.ctor()
extern "C"  void IOSRateUsPopUp__ctor_m478338074 (IOSRateUsPopUp_t1182709153 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSRateUsPopUp::add_OnComplete(System.Action`1<IOSDialogResult>)
extern "C"  void IOSRateUsPopUp_add_OnComplete_m1202352638 (IOSRateUsPopUp_t1182709153 * __this, Action_1_t3472737651 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSRateUsPopUp::remove_OnComplete(System.Action`1<IOSDialogResult>)
extern "C"  void IOSRateUsPopUp_remove_OnComplete_m2167389001 (IOSRateUsPopUp_t1182709153 * __this, Action_1_t3472737651 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// IOSRateUsPopUp IOSRateUsPopUp::Create()
extern "C"  IOSRateUsPopUp_t1182709153 * IOSRateUsPopUp_Create_m2158895394 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// IOSRateUsPopUp IOSRateUsPopUp::Create(System.String,System.String)
extern "C"  IOSRateUsPopUp_t1182709153 * IOSRateUsPopUp_Create_m337089884 (Il2CppObject * __this /* static, unused */, String_t* ___title, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// IOSRateUsPopUp IOSRateUsPopUp::Create(System.String,System.String,System.String,System.String,System.String)
extern "C"  IOSRateUsPopUp_t1182709153 * IOSRateUsPopUp_Create_m1827737616 (Il2CppObject * __this /* static, unused */, String_t* ___title, String_t* ___message, String_t* ___rate, String_t* ___remind, String_t* ___declined, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSRateUsPopUp::init()
extern "C"  void IOSRateUsPopUp_init_m1575836378 (IOSRateUsPopUp_t1182709153 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSRateUsPopUp::onPopUpCallBack(System.String)
extern "C"  void IOSRateUsPopUp_onPopUpCallBack_m2261374328 (IOSRateUsPopUp_t1182709153 * __this, String_t* ___buttonIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSRateUsPopUp::<OnComplete>m__59(IOSDialogResult)
extern "C"  void IOSRateUsPopUp_U3COnCompleteU3Em__59_m3958912289 (Il2CppObject * __this /* static, unused */, int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
