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

// iCloudManager
struct iCloudManager_t2144162497;
// System.Action`1<ISN_Result>
struct Action_1_t2646135257;
// System.Action`1<iCloudData>
struct Action_1_t2566707831;
// System.Action`1<System.Collections.Generic.List`1<iCloudData>>
struct Action_1_t3363666800;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// ISN_Result
struct ISN_Result_t2497682552;
// iCloudData
struct iCloudData_t2418255126;
// System.Collections.Generic.List`1<iCloudData>
struct List_1_t3215214095;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_ISN_Result2497682552.h"
#include "AssemblyU2DCSharp_iCloudData2418255126.h"

// System.Void iCloudManager::.ctor()
extern "C"  void iCloudManager__ctor_m2401736650 (iCloudManager_t2144162497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iCloudManager::.cctor()
extern "C"  void iCloudManager__cctor_m957295907 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iCloudManager::add_OnCloudInitAction(System.Action`1<ISN_Result>)
extern "C"  void iCloudManager_add_OnCloudInitAction_m351509468 (Il2CppObject * __this /* static, unused */, Action_1_t2646135257 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iCloudManager::remove_OnCloudInitAction(System.Action`1<ISN_Result>)
extern "C"  void iCloudManager_remove_OnCloudInitAction_m4051611591 (Il2CppObject * __this /* static, unused */, Action_1_t2646135257 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iCloudManager::add_OnCloudDataReceivedAction(System.Action`1<iCloudData>)
extern "C"  void iCloudManager_add_OnCloudDataReceivedAction_m1446745983 (Il2CppObject * __this /* static, unused */, Action_1_t2566707831 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iCloudManager::remove_OnCloudDataReceivedAction(System.Action`1<iCloudData>)
extern "C"  void iCloudManager_remove_OnCloudDataReceivedAction_m2799013994 (Il2CppObject * __this /* static, unused */, Action_1_t2566707831 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iCloudManager::add_OnStoreDidChangeExternally(System.Action`1<System.Collections.Generic.List`1<iCloudData>>)
extern "C"  void iCloudManager_add_OnStoreDidChangeExternally_m2509103251 (Il2CppObject * __this /* static, unused */, Action_1_t3363666800 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iCloudManager::remove_OnStoreDidChangeExternally(System.Action`1<System.Collections.Generic.List`1<iCloudData>>)
extern "C"  void iCloudManager_remove_OnStoreDidChangeExternally_m3986358270 (Il2CppObject * __this /* static, unused */, Action_1_t3363666800 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iCloudManager::_initCloud()
extern "C"  void iCloudManager__initCloud_m1970107744 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iCloudManager::_setString(System.String,System.String)
extern "C"  void iCloudManager__setString_m3334990096 (Il2CppObject * __this /* static, unused */, String_t* ___key, String_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iCloudManager::_setDouble(System.String,System.Single)
extern "C"  void iCloudManager__setDouble_m276940793 (Il2CppObject * __this /* static, unused */, String_t* ___key, float ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iCloudManager::_setData(System.String,System.String)
extern "C"  void iCloudManager__setData_m2450609431 (Il2CppObject * __this /* static, unused */, String_t* ___key, String_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iCloudManager::_requestDataForKey(System.String)
extern "C"  void iCloudManager__requestDataForKey_m1108207704 (Il2CppObject * __this /* static, unused */, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iCloudManager::Awake()
extern "C"  void iCloudManager_Awake_m2639341869 (iCloudManager_t2144162497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iCloudManager::init()
extern "C"  void iCloudManager_init_m2330618154 (iCloudManager_t2144162497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iCloudManager::setString(System.String,System.String)
extern "C"  void iCloudManager_setString_m747045635 (iCloudManager_t2144162497 * __this, String_t* ___key, String_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iCloudManager::setFloat(System.String,System.Single)
extern "C"  void iCloudManager_setFloat_m1402660275 (iCloudManager_t2144162497 * __this, String_t* ___key, float ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iCloudManager::setData(System.String,System.Byte[])
extern "C"  void iCloudManager_setData_m3590107281 (iCloudManager_t2144162497 * __this, String_t* ___key, ByteU5BU5D_t58506160* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iCloudManager::requestDataForKey(System.String)
extern "C"  void iCloudManager_requestDataForKey_m3285726347 (iCloudManager_t2144162497 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iCloudManager::OnCloudInit()
extern "C"  void iCloudManager_OnCloudInit_m3442912238 (iCloudManager_t2144162497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iCloudManager::OnCloudInitFail()
extern "C"  void iCloudManager_OnCloudInitFail_m4017807660 (iCloudManager_t2144162497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iCloudManager::OnCloudDataChanged(System.String)
extern "C"  void iCloudManager_OnCloudDataChanged_m205502484 (iCloudManager_t2144162497 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iCloudManager::OnCloudData(System.String)
extern "C"  void iCloudManager_OnCloudData_m2357654522 (iCloudManager_t2144162497 * __this, String_t* ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iCloudManager::OnCloudDataEmpty(System.String)
extern "C"  void iCloudManager_OnCloudDataEmpty_m1841638939 (iCloudManager_t2144162497 * __this, String_t* ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iCloudManager::<OnCloudInitAction>m__6D(ISN_Result)
extern "C"  void iCloudManager_U3COnCloudInitActionU3Em__6D_m1471138111 (Il2CppObject * __this /* static, unused */, ISN_Result_t2497682552 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iCloudManager::<OnCloudDataReceivedAction>m__6E(iCloudData)
extern "C"  void iCloudManager_U3COnCloudDataReceivedActionU3Em__6E_m1264788861 (Il2CppObject * __this /* static, unused */, iCloudData_t2418255126 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iCloudManager::<OnStoreDidChangeExternally>m__6F(System.Collections.Generic.List`1<iCloudData>)
extern "C"  void iCloudManager_U3COnStoreDidChangeExternallyU3Em__6F_m2219520864 (Il2CppObject * __this /* static, unused */, List_1_t3215214095 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
