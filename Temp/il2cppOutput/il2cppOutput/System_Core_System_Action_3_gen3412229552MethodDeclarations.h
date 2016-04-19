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

// System.Action`3<System.Object,GK_PlayerConnectionState,System.Object>
struct Action_3_t3412229552;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "AssemblyU2DCSharp_GK_PlayerConnectionState1085203959.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Action`3<System.Object,GK_PlayerConnectionState,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_3__ctor_m3167551642_gshared (Action_3_t3412229552 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_3__ctor_m3167551642(__this, ___object, ___method, method) ((  void (*) (Action_3_t3412229552 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Action_3__ctor_m3167551642_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`3<System.Object,GK_PlayerConnectionState,System.Object>::Invoke(T1,T2,T3)
extern "C"  void Action_3_Invoke_m1132518870_gshared (Action_3_t3412229552 * __this, Il2CppObject * ___arg1, int32_t ___arg2, Il2CppObject * ___arg3, const MethodInfo* method);
#define Action_3_Invoke_m1132518870(__this, ___arg1, ___arg2, ___arg3, method) ((  void (*) (Action_3_t3412229552 *, Il2CppObject *, int32_t, Il2CppObject *, const MethodInfo*))Action_3_Invoke_m1132518870_gshared)(__this, ___arg1, ___arg2, ___arg3, method)
// System.IAsyncResult System.Action`3<System.Object,GK_PlayerConnectionState,System.Object>::BeginInvoke(T1,T2,T3,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Action_3_BeginInvoke_m1117286021_gshared (Action_3_t3412229552 * __this, Il2CppObject * ___arg1, int32_t ___arg2, Il2CppObject * ___arg3, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Action_3_BeginInvoke_m1117286021(__this, ___arg1, ___arg2, ___arg3, ___callback, ___object, method) ((  Il2CppObject * (*) (Action_3_t3412229552 *, Il2CppObject *, int32_t, Il2CppObject *, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Action_3_BeginInvoke_m1117286021_gshared)(__this, ___arg1, ___arg2, ___arg3, ___callback, ___object, method)
// System.Void System.Action`3<System.Object,GK_PlayerConnectionState,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_3_EndInvoke_m3399274410_gshared (Action_3_t3412229552 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Action_3_EndInvoke_m3399274410(__this, ___result, method) ((  void (*) (Action_3_t3412229552 *, Il2CppObject *, const MethodInfo*))Action_3_EndInvoke_m3399274410_gshared)(__this, ___result, method)
