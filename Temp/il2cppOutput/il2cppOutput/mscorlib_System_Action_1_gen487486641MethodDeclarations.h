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

// System.Action`1<System.DateTime>
struct Action_1_t487486641;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_DateTime339033936.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Action`1<System.DateTime>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_1__ctor_m3840320065_gshared (Action_1_t487486641 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_1__ctor_m3840320065(__this, ___object, ___method, method) ((  void (*) (Action_1_t487486641 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Action_1__ctor_m3840320065_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.DateTime>::Invoke(T)
extern "C"  void Action_1_Invoke_m305199884_gshared (Action_1_t487486641 * __this, DateTime_t339033936  ___obj, const MethodInfo* method);
#define Action_1_Invoke_m305199884(__this, ___obj, method) ((  void (*) (Action_1_t487486641 *, DateTime_t339033936 , const MethodInfo*))Action_1_Invoke_m305199884_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.DateTime>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Action_1_BeginInvoke_m3178728327_gshared (Action_1_t487486641 * __this, DateTime_t339033936  ___obj, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Action_1_BeginInvoke_m3178728327(__this, ___obj, ___callback, ___object, method) ((  Il2CppObject * (*) (Action_1_t487486641 *, DateTime_t339033936 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Action_1_BeginInvoke_m3178728327_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.DateTime>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_1_EndInvoke_m437358682_gshared (Action_1_t487486641 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Action_1_EndInvoke_m437358682(__this, ___result, method) ((  void (*) (Action_1_t487486641 *, Il2CppObject *, const MethodInfo*))Action_1_EndInvoke_m437358682_gshared)(__this, ___result, method)
