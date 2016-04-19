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

// NotificationExample
struct NotificationExample_t971119071;
// IOSNotificationDeviceToken
struct IOSNotificationDeviceToken_t53985451;
// ISN_LocalNotification
struct ISN_LocalNotification_t792750267;
// ISN_Result
struct ISN_Result_t2497682552;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_IOSNotificationDeviceToken53985451.h"
#include "AssemblyU2DCSharp_ISN_LocalNotification792750267.h"
#include "AssemblyU2DCSharp_ISN_Result2497682552.h"

// System.Void NotificationExample::.ctor()
extern "C"  void NotificationExample__ctor_m1585554540 (NotificationExample_t971119071 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NotificationExample::Awake()
extern "C"  void NotificationExample_Awake_m1823159759 (NotificationExample_t971119071 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NotificationExample::OnGUI()
extern "C"  void NotificationExample_OnGUI_m1080953190 (NotificationExample_t971119071 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NotificationExample::CheckNotificationSettings()
extern "C"  void NotificationExample_CheckNotificationSettings_m3838623968 (NotificationExample_t971119071 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NotificationExample::HandleOnNotificationSettingsInfoResult(System.Int32)
extern "C"  void NotificationExample_HandleOnNotificationSettingsInfoResult_m3820116521 (NotificationExample_t971119071 * __this, int32_t ___avaliableTypes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NotificationExample::OnDeviceTokenReceived(IOSNotificationDeviceToken)
extern "C"  void NotificationExample_OnDeviceTokenReceived_m77434724 (NotificationExample_t971119071 * __this, IOSNotificationDeviceToken_t53985451 * ___token, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NotificationExample::HandleOnLocalNotificationReceived(ISN_LocalNotification)
extern "C"  void NotificationExample_HandleOnLocalNotificationReceived_m1353800189 (NotificationExample_t971119071 * __this, ISN_LocalNotification_t792750267 * ___notification, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NotificationExample::OnNotificationScheduleResult(ISN_Result)
extern "C"  void NotificationExample_OnNotificationScheduleResult_m713479614 (NotificationExample_t971119071 * __this, ISN_Result_t2497682552 * ___res, const MethodInfo* method) IL2CPP_METHOD_ATTR;
