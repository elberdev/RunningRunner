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

// ISN_CacheManager
struct ISN_CacheManager_t2082522598;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void ISN_CacheManager::.ctor()
extern "C"  void ISN_CacheManager__ctor_m238920565 (ISN_CacheManager_t2082522598 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_CacheManager::SaveAchievementRequest(System.String,System.Single)
extern "C"  void ISN_CacheManager_SaveAchievementRequest_m369653179 (Il2CppObject * __this /* static, unused */, String_t* ___achievementId, float ___percent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_CacheManager::SendAchievementCachedRequest()
extern "C"  void ISN_CacheManager_SendAchievementCachedRequest_m3415884661 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_CacheManager::Clear()
extern "C"  void ISN_CacheManager_Clear_m1940021152 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ISN_CacheManager::get_SavedData()
extern "C"  String_t* ISN_CacheManager_get_SavedData_m3270049784 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_CacheManager::set_SavedData(System.String)
extern "C"  void ISN_CacheManager_set_SavedData_m4234360219 (Il2CppObject * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
