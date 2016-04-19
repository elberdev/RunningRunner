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

// System.Action`2<GK_MatchType,System.Object>
struct Action_2_t1015260446;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "AssemblyU2DCSharp_GK_MatchType76663012.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Action`2<GK_MatchType,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_2__ctor_m3920239194_gshared (Action_2_t1015260446 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_2__ctor_m3920239194(__this, ___object, ___method, method) ((  void (*) (Action_2_t1015260446 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Action_2__ctor_m3920239194_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`2<GK_MatchType,System.Object>::Invoke(T1,T2)
extern "C"  void Action_2_Invoke_m68419985_gshared (Action_2_t1015260446 * __this, int32_t ___arg1, Il2CppObject * ___arg2, const MethodInfo* method);
#define Action_2_Invoke_m68419985(__this, ___arg1, ___arg2, method) ((  void (*) (Action_2_t1015260446 *, int32_t, Il2CppObject *, const MethodInfo*))Action_2_Invoke_m68419985_gshared)(__this, ___arg1, ___arg2, method)
// System.IAsyncResult System.Action`2<GK_MatchType,System.Object>::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Action_2_BeginInvoke_m2330023992_gshared (Action_2_t1015260446 * __this, int32_t ___arg1, Il2CppObject * ___arg2, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Action_2_BeginInvoke_m2330023992(__this, ___arg1, ___arg2, ___callback, ___object, method) ((  Il2CppObject * (*) (Action_2_t1015260446 *, int32_t, Il2CppObject *, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Action_2_BeginInvoke_m2330023992_gshared)(__this, ___arg1, ___arg2, ___callback, ___object, method)
// System.Void System.Action`2<GK_MatchType,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_2_EndInvoke_m1200408938_gshared (Action_2_t1015260446 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Action_2_EndInvoke_m1200408938(__this, ___result, method) ((  void (*) (Action_2_t1015260446 *, Il2CppObject *, const MethodInfo*))Action_2_EndInvoke_m1200408938_gshared)(__this, ___result, method)
