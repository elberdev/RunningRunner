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

// System.Action`3<System.Object,System.Object,System.Object>
struct Action_3_t834096159;
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

// System.Void System.Action`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_3__ctor_m22279495_gshared (Action_3_t834096159 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_3__ctor_m22279495(__this, ___object, ___method, method) ((  void (*) (Action_3_t834096159 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Action_3__ctor_m22279495_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`3<System.Object,System.Object,System.Object>::Invoke(T1,T2,T3)
extern "C"  void Action_3_Invoke_m3949892547_gshared (Action_3_t834096159 * __this, Il2CppObject * ___arg1, Il2CppObject * ___arg2, Il2CppObject * ___arg3, const MethodInfo* method);
#define Action_3_Invoke_m3949892547(__this, ___arg1, ___arg2, ___arg3, method) ((  void (*) (Action_3_t834096159 *, Il2CppObject *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Action_3_Invoke_m3949892547_gshared)(__this, ___arg1, ___arg2, ___arg3, method)
// System.IAsyncResult System.Action`3<System.Object,System.Object,System.Object>::BeginInvoke(T1,T2,T3,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Action_3_BeginInvoke_m1386617082_gshared (Action_3_t834096159 * __this, Il2CppObject * ___arg1, Il2CppObject * ___arg2, Il2CppObject * ___arg3, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Action_3_BeginInvoke_m1386617082(__this, ___arg1, ___arg2, ___arg3, ___callback, ___object, method) ((  Il2CppObject * (*) (Action_3_t834096159 *, Il2CppObject *, Il2CppObject *, Il2CppObject *, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Action_3_BeginInvoke_m1386617082_gshared)(__this, ___arg1, ___arg2, ___arg3, ___callback, ___object, method)
// System.Void System.Action`3<System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_3_EndInvoke_m3792380631_gshared (Action_3_t834096159 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Action_3_EndInvoke_m3792380631(__this, ___result, method) ((  void (*) (Action_3_t834096159 *, Il2CppObject *, const MethodInfo*))Action_3_EndInvoke_m3792380631_gshared)(__this, ___result, method)
