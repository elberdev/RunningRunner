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

// IOSNotificationController
struct IOSNotificationController_t273631028;
// System.Action`1<IOSNotificationDeviceToken>
struct Action_1_t202438156;
// System.Action`1<ISN_Result>
struct Action_1_t2646135257;
// System.Action`1<System.Int32>
struct Action_1_t2995867492;
// System.Action`1<ISN_LocalNotification>
struct Action_1_t941202972;
// System.String
struct String_t;
// ISN_LocalNotification
struct ISN_LocalNotification_t792750267;
// System.Collections.Generic.List`1<ISN_LocalNotification>
struct List_1_t1589709236;
// IOSNotificationDeviceToken
struct IOSNotificationDeviceToken_t53985451;
// ISN_Result
struct ISN_Result_t2497682552;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_iOS_NotificationType104038455.h"
#include "AssemblyU2DCSharp_ISN_LocalNotification792750267.h"
#include "AssemblyU2DCSharp_IOSNotificationDeviceToken53985451.h"
#include "AssemblyU2DCSharp_ISN_Result2497682552.h"

// System.Void IOSNotificationController::.ctor()
extern "C"  void IOSNotificationController__ctor_m4065319095 (IOSNotificationController_t273631028 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNotificationController::.cctor()
extern "C"  void IOSNotificationController__cctor_m988744150 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNotificationController::add_OnDeviceTokenReceived(System.Action`1<IOSNotificationDeviceToken>)
extern "C"  void IOSNotificationController_add_OnDeviceTokenReceived_m363146649 (Il2CppObject * __this /* static, unused */, Action_1_t202438156 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNotificationController::remove_OnDeviceTokenReceived(System.Action`1<IOSNotificationDeviceToken>)
extern "C"  void IOSNotificationController_remove_OnDeviceTokenReceived_m3672742462 (Il2CppObject * __this /* static, unused */, Action_1_t202438156 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNotificationController::add_OnNotificationScheduleResult(System.Action`1<ISN_Result>)
extern "C"  void IOSNotificationController_add_OnNotificationScheduleResult_m1834715321 (Il2CppObject * __this /* static, unused */, Action_1_t2646135257 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNotificationController::remove_OnNotificationScheduleResult(System.Action`1<ISN_Result>)
extern "C"  void IOSNotificationController_remove_OnNotificationScheduleResult_m2765905524 (Il2CppObject * __this /* static, unused */, Action_1_t2646135257 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNotificationController::add_OnNotificationSettingsInfoResult(System.Action`1<System.Int32>)
extern "C"  void IOSNotificationController_add_OnNotificationSettingsInfoResult_m2246469750 (Il2CppObject * __this /* static, unused */, Action_1_t2995867492 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNotificationController::remove_OnNotificationSettingsInfoResult(System.Action`1<System.Int32>)
extern "C"  void IOSNotificationController_remove_OnNotificationSettingsInfoResult_m1356908017 (Il2CppObject * __this /* static, unused */, Action_1_t2995867492 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNotificationController::add_OnLocalNotificationReceived(System.Action`1<ISN_LocalNotification>)
extern "C"  void IOSNotificationController_add_OnLocalNotificationReceived_m2476992310 (Il2CppObject * __this /* static, unused */, Action_1_t941202972 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNotificationController::remove_OnLocalNotificationReceived(System.Action`1<ISN_LocalNotification>)
extern "C"  void IOSNotificationController_remove_OnLocalNotificationReceived_m1995247409 (Il2CppObject * __this /* static, unused */, Action_1_t941202972 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNotificationController::_ISN_ScheduleNotification(System.Int32,System.String,System.Boolean,System.String,System.Int32,System.String,System.String)
extern "C"  void IOSNotificationController__ISN_ScheduleNotification_m3415532436 (Il2CppObject * __this /* static, unused */, int32_t ___time, String_t* ___message, bool ___sound, String_t* ___nId, int32_t ___badges, String_t* ___data, String_t* ___soundName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNotificationController::_ISN_CancelNotifications()
extern "C"  void IOSNotificationController__ISN_CancelNotifications_m3504118625 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNotificationController::_ISN_RequestNotificationPermissions()
extern "C"  void IOSNotificationController__ISN_RequestNotificationPermissions_m1767736569 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNotificationController::_ISN_CancelNotificationById(System.String)
extern "C"  void IOSNotificationController__ISN_CancelNotificationById_m378895900 (Il2CppObject * __this /* static, unused */, String_t* ___nId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNotificationController::_ISN_ApplicationIconBadgeNumber(System.Int32)
extern "C"  void IOSNotificationController__ISN_ApplicationIconBadgeNumber_m47732771 (Il2CppObject * __this /* static, unused */, int32_t ___badges, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNotificationController::_ISN_RegisterForRemoteNotifications(System.Int32)
extern "C"  void IOSNotificationController__ISN_RegisterForRemoteNotifications_m353591164 (Il2CppObject * __this /* static, unused */, int32_t ___types, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNotificationController::_ISN_RequestNotificationSettings()
extern "C"  void IOSNotificationController__ISN_RequestNotificationSettings_m4081392752 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNotificationController::Awake()
extern "C"  void IOSNotificationController_Awake_m7957018 (IOSNotificationController_t273631028 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNotificationController::RegisterForRemoteNotifications(UnityEngine.iOS.NotificationType)
extern "C"  void IOSNotificationController_RegisterForRemoteNotifications_m1867952716 (IOSNotificationController_t273631028 * __this, int32_t ___notificationTypes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNotificationController::RequestNotificationPermissions()
extern "C"  void IOSNotificationController_RequestNotificationPermissions_m1460100919 (IOSNotificationController_t273631028 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNotificationController::ShowGmaeKitNotification(System.String,System.String)
extern "C"  void IOSNotificationController_ShowGmaeKitNotification_m2812801103 (IOSNotificationController_t273631028 * __this, String_t* ___title, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNotificationController::ShowNotificationBanner(System.String,System.String)
extern "C"  void IOSNotificationController_ShowNotificationBanner_m1407926173 (IOSNotificationController_t273631028 * __this, String_t* ___title, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNotificationController::CancelNotifications()
extern "C"  void IOSNotificationController_CancelNotifications_m2903817187 (IOSNotificationController_t273631028 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNotificationController::CancelAllLocalNotifications()
extern "C"  void IOSNotificationController_CancelAllLocalNotifications_m395012665 (IOSNotificationController_t273631028 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNotificationController::CancelLocalNotification(ISN_LocalNotification)
extern "C"  void IOSNotificationController_CancelLocalNotification_m3130354054 (IOSNotificationController_t273631028 * __this, ISN_LocalNotification_t792750267 * ___notification, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNotificationController::CancelLocalNotificationById(System.Int32)
extern "C"  void IOSNotificationController_CancelLocalNotificationById_m604331700 (IOSNotificationController_t273631028 * __this, int32_t ___notificationId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNotificationController::ScheduleNotification(ISN_LocalNotification)
extern "C"  void IOSNotificationController_ScheduleNotification_m2109477992 (IOSNotificationController_t273631028 * __this, ISN_LocalNotification_t792750267 * ___notification, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<ISN_LocalNotification> IOSNotificationController::LoadPendingNotifications(System.Boolean)
extern "C"  List_1_t1589709236 * IOSNotificationController_LoadPendingNotifications_m2595607871 (IOSNotificationController_t273631028 * __this, bool ___includeAll, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNotificationController::ApplicationIconBadgeNumber(System.Int32)
extern "C"  void IOSNotificationController_ApplicationIconBadgeNumber_m1721439329 (IOSNotificationController_t273631028 * __this, int32_t ___badges, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNotificationController::RequestNotificationSettings()
extern "C"  void IOSNotificationController_RequestNotificationSettings_m4028472050 (IOSNotificationController_t273631028 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 IOSNotificationController::get_AllowedNotificationsType()
extern "C"  int32_t IOSNotificationController_get_AllowedNotificationsType_m3001484002 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ISN_LocalNotification IOSNotificationController::get_LaunchNotification()
extern "C"  ISN_LocalNotification_t792750267 * IOSNotificationController_get_LaunchNotification_m3893745980 (IOSNotificationController_t273631028 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNotificationController::OnDeviceTockeReceivedAction(IOSNotificationDeviceToken)
extern "C"  void IOSNotificationController_OnDeviceTockeReceivedAction_m2586153966 (IOSNotificationController_t273631028 * __this, IOSNotificationDeviceToken_t53985451 * ___token, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNotificationController::OnNotificationScheduleResultAction(System.String)
extern "C"  void IOSNotificationController_OnNotificationScheduleResultAction_m501475457 (IOSNotificationController_t273631028 * __this, String_t* ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNotificationController::OnNotificationSettingsInfoRetrived(System.String)
extern "C"  void IOSNotificationController_OnNotificationSettingsInfoRetrived_m2162762845 (IOSNotificationController_t273631028 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNotificationController::OnLocalNotificationReceived_Event(System.String)
extern "C"  void IOSNotificationController_OnLocalNotificationReceived_Event_m2018135706 (IOSNotificationController_t273631028 * __this, String_t* ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNotificationController::SaveNotifications(System.Collections.Generic.List`1<ISN_LocalNotification>)
extern "C"  void IOSNotificationController_SaveNotifications_m632542207 (IOSNotificationController_t273631028 * __this, List_1_t1589709236 * ___notifications, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNotificationController::<OnDeviceTokenReceived>m__40(IOSNotificationDeviceToken)
extern "C"  void IOSNotificationController_U3COnDeviceTokenReceivedU3Em__40_m3004163158 (Il2CppObject * __this /* static, unused */, IOSNotificationDeviceToken_t53985451 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNotificationController::<OnNotificationScheduleResult>m__41(ISN_Result)
extern "C"  void IOSNotificationController_U3COnNotificationScheduleResultU3Em__41_m1172166595 (Il2CppObject * __this /* static, unused */, ISN_Result_t2497682552 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNotificationController::<OnNotificationSettingsInfoResult>m__42(System.Int32)
extern "C"  void IOSNotificationController_U3COnNotificationSettingsInfoResultU3Em__42_m1905119783 (Il2CppObject * __this /* static, unused */, int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSNotificationController::<OnLocalNotificationReceived>m__43(ISN_LocalNotification)
extern "C"  void IOSNotificationController_U3COnLocalNotificationReceivedU3Em__43_m3554953952 (Il2CppObject * __this /* static, unused */, ISN_LocalNotification_t792750267 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
