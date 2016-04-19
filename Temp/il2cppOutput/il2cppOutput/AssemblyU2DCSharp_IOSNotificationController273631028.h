#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// IOSNotificationController
struct IOSNotificationController_t273631028;
// ISN_LocalNotification
struct ISN_LocalNotification_t792750267;
// System.Action`1<IOSNotificationDeviceToken>
struct Action_1_t202438156;
// System.Action`1<ISN_Result>
struct Action_1_t2646135257;
// System.Action`1<System.Int32>
struct Action_1_t2995867492;
// System.Action`1<ISN_LocalNotification>
struct Action_1_t941202972;

#include "AssemblyU2DCSharp_ISN_Singleton_1_gen1356754866.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IOSNotificationController
struct  IOSNotificationController_t273631028  : public ISN_Singleton_1_t1356754866
{
public:
	// ISN_LocalNotification IOSNotificationController::_LaunchNotification
	ISN_LocalNotification_t792750267 * ____LaunchNotification_8;

public:
	inline static int32_t get_offset_of__LaunchNotification_8() { return static_cast<int32_t>(offsetof(IOSNotificationController_t273631028, ____LaunchNotification_8)); }
	inline ISN_LocalNotification_t792750267 * get__LaunchNotification_8() const { return ____LaunchNotification_8; }
	inline ISN_LocalNotification_t792750267 ** get_address_of__LaunchNotification_8() { return &____LaunchNotification_8; }
	inline void set__LaunchNotification_8(ISN_LocalNotification_t792750267 * value)
	{
		____LaunchNotification_8 = value;
		Il2CppCodeGenWriteBarrier(&____LaunchNotification_8, value);
	}
};

struct IOSNotificationController_t273631028_StaticFields
{
public:
	// IOSNotificationController IOSNotificationController::_instance
	IOSNotificationController_t273631028 * ____instance_6;
	// System.Int32 IOSNotificationController::_AllowedNotificationsType
	int32_t ____AllowedNotificationsType_7;
	// System.Action`1<IOSNotificationDeviceToken> IOSNotificationController::OnDeviceTokenReceived
	Action_1_t202438156 * ___OnDeviceTokenReceived_9;
	// System.Action`1<ISN_Result> IOSNotificationController::OnNotificationScheduleResult
	Action_1_t2646135257 * ___OnNotificationScheduleResult_10;
	// System.Action`1<System.Int32> IOSNotificationController::OnNotificationSettingsInfoResult
	Action_1_t2995867492 * ___OnNotificationSettingsInfoResult_11;
	// System.Action`1<ISN_LocalNotification> IOSNotificationController::OnLocalNotificationReceived
	Action_1_t941202972 * ___OnLocalNotificationReceived_12;
	// System.Action`1<IOSNotificationDeviceToken> IOSNotificationController::<>f__am$cache7
	Action_1_t202438156 * ___U3CU3Ef__amU24cache7_13;
	// System.Action`1<ISN_Result> IOSNotificationController::<>f__am$cache8
	Action_1_t2646135257 * ___U3CU3Ef__amU24cache8_14;
	// System.Action`1<System.Int32> IOSNotificationController::<>f__am$cache9
	Action_1_t2995867492 * ___U3CU3Ef__amU24cache9_15;
	// System.Action`1<ISN_LocalNotification> IOSNotificationController::<>f__am$cacheA
	Action_1_t941202972 * ___U3CU3Ef__amU24cacheA_16;

public:
	inline static int32_t get_offset_of__instance_6() { return static_cast<int32_t>(offsetof(IOSNotificationController_t273631028_StaticFields, ____instance_6)); }
	inline IOSNotificationController_t273631028 * get__instance_6() const { return ____instance_6; }
	inline IOSNotificationController_t273631028 ** get_address_of__instance_6() { return &____instance_6; }
	inline void set__instance_6(IOSNotificationController_t273631028 * value)
	{
		____instance_6 = value;
		Il2CppCodeGenWriteBarrier(&____instance_6, value);
	}

	inline static int32_t get_offset_of__AllowedNotificationsType_7() { return static_cast<int32_t>(offsetof(IOSNotificationController_t273631028_StaticFields, ____AllowedNotificationsType_7)); }
	inline int32_t get__AllowedNotificationsType_7() const { return ____AllowedNotificationsType_7; }
	inline int32_t* get_address_of__AllowedNotificationsType_7() { return &____AllowedNotificationsType_7; }
	inline void set__AllowedNotificationsType_7(int32_t value)
	{
		____AllowedNotificationsType_7 = value;
	}

	inline static int32_t get_offset_of_OnDeviceTokenReceived_9() { return static_cast<int32_t>(offsetof(IOSNotificationController_t273631028_StaticFields, ___OnDeviceTokenReceived_9)); }
	inline Action_1_t202438156 * get_OnDeviceTokenReceived_9() const { return ___OnDeviceTokenReceived_9; }
	inline Action_1_t202438156 ** get_address_of_OnDeviceTokenReceived_9() { return &___OnDeviceTokenReceived_9; }
	inline void set_OnDeviceTokenReceived_9(Action_1_t202438156 * value)
	{
		___OnDeviceTokenReceived_9 = value;
		Il2CppCodeGenWriteBarrier(&___OnDeviceTokenReceived_9, value);
	}

	inline static int32_t get_offset_of_OnNotificationScheduleResult_10() { return static_cast<int32_t>(offsetof(IOSNotificationController_t273631028_StaticFields, ___OnNotificationScheduleResult_10)); }
	inline Action_1_t2646135257 * get_OnNotificationScheduleResult_10() const { return ___OnNotificationScheduleResult_10; }
	inline Action_1_t2646135257 ** get_address_of_OnNotificationScheduleResult_10() { return &___OnNotificationScheduleResult_10; }
	inline void set_OnNotificationScheduleResult_10(Action_1_t2646135257 * value)
	{
		___OnNotificationScheduleResult_10 = value;
		Il2CppCodeGenWriteBarrier(&___OnNotificationScheduleResult_10, value);
	}

	inline static int32_t get_offset_of_OnNotificationSettingsInfoResult_11() { return static_cast<int32_t>(offsetof(IOSNotificationController_t273631028_StaticFields, ___OnNotificationSettingsInfoResult_11)); }
	inline Action_1_t2995867492 * get_OnNotificationSettingsInfoResult_11() const { return ___OnNotificationSettingsInfoResult_11; }
	inline Action_1_t2995867492 ** get_address_of_OnNotificationSettingsInfoResult_11() { return &___OnNotificationSettingsInfoResult_11; }
	inline void set_OnNotificationSettingsInfoResult_11(Action_1_t2995867492 * value)
	{
		___OnNotificationSettingsInfoResult_11 = value;
		Il2CppCodeGenWriteBarrier(&___OnNotificationSettingsInfoResult_11, value);
	}

	inline static int32_t get_offset_of_OnLocalNotificationReceived_12() { return static_cast<int32_t>(offsetof(IOSNotificationController_t273631028_StaticFields, ___OnLocalNotificationReceived_12)); }
	inline Action_1_t941202972 * get_OnLocalNotificationReceived_12() const { return ___OnLocalNotificationReceived_12; }
	inline Action_1_t941202972 ** get_address_of_OnLocalNotificationReceived_12() { return &___OnLocalNotificationReceived_12; }
	inline void set_OnLocalNotificationReceived_12(Action_1_t941202972 * value)
	{
		___OnLocalNotificationReceived_12 = value;
		Il2CppCodeGenWriteBarrier(&___OnLocalNotificationReceived_12, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache7_13() { return static_cast<int32_t>(offsetof(IOSNotificationController_t273631028_StaticFields, ___U3CU3Ef__amU24cache7_13)); }
	inline Action_1_t202438156 * get_U3CU3Ef__amU24cache7_13() const { return ___U3CU3Ef__amU24cache7_13; }
	inline Action_1_t202438156 ** get_address_of_U3CU3Ef__amU24cache7_13() { return &___U3CU3Ef__amU24cache7_13; }
	inline void set_U3CU3Ef__amU24cache7_13(Action_1_t202438156 * value)
	{
		___U3CU3Ef__amU24cache7_13 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache7_13, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache8_14() { return static_cast<int32_t>(offsetof(IOSNotificationController_t273631028_StaticFields, ___U3CU3Ef__amU24cache8_14)); }
	inline Action_1_t2646135257 * get_U3CU3Ef__amU24cache8_14() const { return ___U3CU3Ef__amU24cache8_14; }
	inline Action_1_t2646135257 ** get_address_of_U3CU3Ef__amU24cache8_14() { return &___U3CU3Ef__amU24cache8_14; }
	inline void set_U3CU3Ef__amU24cache8_14(Action_1_t2646135257 * value)
	{
		___U3CU3Ef__amU24cache8_14 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache8_14, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache9_15() { return static_cast<int32_t>(offsetof(IOSNotificationController_t273631028_StaticFields, ___U3CU3Ef__amU24cache9_15)); }
	inline Action_1_t2995867492 * get_U3CU3Ef__amU24cache9_15() const { return ___U3CU3Ef__amU24cache9_15; }
	inline Action_1_t2995867492 ** get_address_of_U3CU3Ef__amU24cache9_15() { return &___U3CU3Ef__amU24cache9_15; }
	inline void set_U3CU3Ef__amU24cache9_15(Action_1_t2995867492 * value)
	{
		___U3CU3Ef__amU24cache9_15 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache9_15, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheA_16() { return static_cast<int32_t>(offsetof(IOSNotificationController_t273631028_StaticFields, ___U3CU3Ef__amU24cacheA_16)); }
	inline Action_1_t941202972 * get_U3CU3Ef__amU24cacheA_16() const { return ___U3CU3Ef__amU24cacheA_16; }
	inline Action_1_t941202972 ** get_address_of_U3CU3Ef__amU24cacheA_16() { return &___U3CU3Ef__amU24cacheA_16; }
	inline void set_U3CU3Ef__amU24cacheA_16(Action_1_t941202972 * value)
	{
		___U3CU3Ef__amU24cacheA_16 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheA_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
