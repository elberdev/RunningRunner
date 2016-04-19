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

// IOSDialog
struct IOSDialog_t4137983893;
// System.Action`1<IOSDialogResult>
struct Action_1_t3472737651;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_IOSDialogResult3324284946.h"

// System.Void IOSDialog::.ctor()
extern "C"  void IOSDialog__ctor_m2331520374 (IOSDialog_t4137983893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSDialog::add_OnComplete(System.Action`1<IOSDialogResult>)
extern "C"  void IOSDialog_add_OnComplete_m2399361058 (IOSDialog_t4137983893 * __this, Action_1_t3472737651 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSDialog::remove_OnComplete(System.Action`1<IOSDialogResult>)
extern "C"  void IOSDialog_remove_OnComplete_m1131770533 (IOSDialog_t4137983893 * __this, Action_1_t3472737651 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// IOSDialog IOSDialog::Create(System.String,System.String)
extern "C"  IOSDialog_t4137983893 * IOSDialog_Create_m1083000466 (Il2CppObject * __this /* static, unused */, String_t* ___title, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// IOSDialog IOSDialog::Create(System.String,System.String,System.String,System.String)
extern "C"  IOSDialog_t4137983893 * IOSDialog_Create_m877776650 (Il2CppObject * __this /* static, unused */, String_t* ___title, String_t* ___message, String_t* ___yes, String_t* ___no, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSDialog::init()
extern "C"  void IOSDialog_init_m3575279102 (IOSDialog_t4137983893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSDialog::onPopUpCallBack(System.String)
extern "C"  void IOSDialog_onPopUpCallBack_m3011034268 (IOSDialog_t4137983893 * __this, String_t* ___buttonIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSDialog::<OnComplete>m__57(IOSDialogResult)
extern "C"  void IOSDialog_U3COnCompleteU3Em__57_m1102259719 (Il2CppObject * __this /* static, unused */, int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
