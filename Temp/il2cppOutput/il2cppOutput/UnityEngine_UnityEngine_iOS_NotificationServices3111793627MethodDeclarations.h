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

// UnityEngine.iOS.LocalNotification
struct LocalNotification_t3128840488;
// UnityEngine.iOS.LocalNotification[]
struct LocalNotificationU5BU5D_t444251449;

#include "codegen/il2cpp-codegen.h"

// System.Int32 UnityEngine.iOS.NotificationServices::get_localNotificationCount()
extern "C"  int32_t NotificationServices_get_localNotificationCount_m2260448131 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.iOS.LocalNotification UnityEngine.iOS.NotificationServices::GetLocalNotification(System.Int32)
extern "C"  LocalNotification_t3128840488 * NotificationServices_GetLocalNotification_m4231487047 (Il2CppObject * __this /* static, unused */, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.iOS.LocalNotification[] UnityEngine.iOS.NotificationServices::get_localNotifications()
extern "C"  LocalNotificationU5BU5D_t444251449* NotificationServices_get_localNotifications_m3771701754 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
