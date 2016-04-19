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

// System.Action`1<MP_MusicPlaybackState>
struct Action_1_t94620334;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "AssemblyU2DCSharp_MP_MusicPlaybackState4241134925.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Action`1<MP_MusicPlaybackState>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_1__ctor_m648699598_gshared (Action_1_t94620334 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_1__ctor_m648699598(__this, ___object, ___method, method) ((  void (*) (Action_1_t94620334 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Action_1__ctor_m648699598_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<MP_MusicPlaybackState>::Invoke(T)
extern "C"  void Action_1_Invoke_m3529723545_gshared (Action_1_t94620334 * __this, int32_t ___obj, const MethodInfo* method);
#define Action_1_Invoke_m3529723545(__this, ___obj, method) ((  void (*) (Action_1_t94620334 *, int32_t, const MethodInfo*))Action_1_Invoke_m3529723545_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<MP_MusicPlaybackState>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Action_1_BeginInvoke_m2596034842_gshared (Action_1_t94620334 * __this, int32_t ___obj, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Action_1_BeginInvoke_m2596034842(__this, ___obj, ___callback, ___object, method) ((  Il2CppObject * (*) (Action_1_t94620334 *, int32_t, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Action_1_BeginInvoke_m2596034842_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<MP_MusicPlaybackState>::EndInvoke(System.IAsyncResult)
extern "C"  void Action_1_EndInvoke_m2761887911_gshared (Action_1_t94620334 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Action_1_EndInvoke_m2761887911(__this, ___result, method) ((  void (*) (Action_1_t94620334 *, Il2CppObject *, const MethodInfo*))Action_1_EndInvoke_m2761887911_gshared)(__this, ___result, method)
