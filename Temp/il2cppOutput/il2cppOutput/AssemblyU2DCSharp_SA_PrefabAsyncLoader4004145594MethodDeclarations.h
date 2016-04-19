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

// SA_PrefabAsyncLoader
struct SA_PrefabAsyncLoader_t4004145594;
// System.Action`1<UnityEngine.GameObject>
struct Action_1_t4161147807;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"

// System.Void SA_PrefabAsyncLoader::.ctor()
extern "C"  void SA_PrefabAsyncLoader__ctor_m2759868961 (SA_PrefabAsyncLoader_t4004145594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SA_PrefabAsyncLoader::add_ObjectLoadedAction(System.Action`1<UnityEngine.GameObject>)
extern "C"  void SA_PrefabAsyncLoader_add_ObjectLoadedAction_m2476470551 (SA_PrefabAsyncLoader_t4004145594 * __this, Action_1_t4161147807 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SA_PrefabAsyncLoader::remove_ObjectLoadedAction(System.Action`1<UnityEngine.GameObject>)
extern "C"  void SA_PrefabAsyncLoader_remove_ObjectLoadedAction_m2161986814 (SA_PrefabAsyncLoader_t4004145594 * __this, Action_1_t4161147807 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SA_PrefabAsyncLoader SA_PrefabAsyncLoader::Create(System.String)
extern "C"  SA_PrefabAsyncLoader_t4004145594 * SA_PrefabAsyncLoader_Create_m2891371072 (Il2CppObject * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SA_PrefabAsyncLoader::LoadAsync(System.String)
extern "C"  void SA_PrefabAsyncLoader_LoadAsync_m2763629869 (SA_PrefabAsyncLoader_t4004145594 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator SA_PrefabAsyncLoader::Load()
extern "C"  Il2CppObject * SA_PrefabAsyncLoader_Load_m3267430577 (SA_PrefabAsyncLoader_t4004145594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SA_PrefabAsyncLoader::<ObjectLoadedAction>m__71(UnityEngine.GameObject)
extern "C"  void SA_PrefabAsyncLoader_U3CObjectLoadedActionU3Em__71_m2809317654 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
