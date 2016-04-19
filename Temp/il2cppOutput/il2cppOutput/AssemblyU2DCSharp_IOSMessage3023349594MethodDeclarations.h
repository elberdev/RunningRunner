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

// IOSMessage
struct IOSMessage_t3023349594;
// System.Action
struct Action_t437523947;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Action437523947.h"
#include "mscorlib_System_String968488902.h"

// System.Void IOSMessage::.ctor()
extern "C"  void IOSMessage__ctor_m750032513 (IOSMessage_t3023349594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSMessage::add_OnComplete(System.Action)
extern "C"  void IOSMessage_add_OnComplete_m1432859876 (IOSMessage_t3023349594 * __this, Action_t437523947 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSMessage::remove_OnComplete(System.Action)
extern "C"  void IOSMessage_remove_OnComplete_m3353331147 (IOSMessage_t3023349594 * __this, Action_t437523947 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// IOSMessage IOSMessage::Create(System.String,System.String)
extern "C"  IOSMessage_t3023349594 * IOSMessage_Create_m277783164 (Il2CppObject * __this /* static, unused */, String_t* ___title, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// IOSMessage IOSMessage::Create(System.String,System.String,System.String)
extern "C"  IOSMessage_t3023349594 * IOSMessage_Create_m1879818680 (Il2CppObject * __this /* static, unused */, String_t* ___title, String_t* ___message, String_t* ___ok, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSMessage::init()
extern "C"  void IOSMessage_init_m1861695379 (IOSMessage_t3023349594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSMessage::onPopUpCallBack(System.String)
extern "C"  void IOSMessage_onPopUpCallBack_m1441224497 (IOSMessage_t3023349594 * __this, String_t* ___buttonIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSMessage::<OnComplete>m__58()
extern "C"  void IOSMessage_U3COnCompleteU3Em__58_m1818728133 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
