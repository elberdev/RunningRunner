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

// ISN_LocalNotification
struct ISN_LocalNotification_t792750267;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime339033936.h"
#include "mscorlib_System_String968488902.h"

// System.Void ISN_LocalNotification::.ctor(System.DateTime,System.String,System.Boolean)
extern "C"  void ISN_LocalNotification__ctor_m4054752153 (ISN_LocalNotification_t792750267 * __this, DateTime_t339033936  ___time, String_t* ___message, bool ___useSound, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_LocalNotification::.ctor(System.String)
extern "C"  void ISN_LocalNotification__ctor_m2168972786 (ISN_LocalNotification_t792750267 * __this, String_t* ___serializaedNotificationData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_LocalNotification::SetId(System.Int32)
extern "C"  void ISN_LocalNotification_SetId_m3764909788 (ISN_LocalNotification_t792750267 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_LocalNotification::SetData(System.String)
extern "C"  void ISN_LocalNotification_SetData_m3542987816 (ISN_LocalNotification_t792750267 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_LocalNotification::SetSoundName(System.String)
extern "C"  void ISN_LocalNotification_SetSoundName_m424527190 (ISN_LocalNotification_t792750267 * __this, String_t* ___soundName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_LocalNotification::SetBadgesNumber(System.Int32)
extern "C"  void ISN_LocalNotification_SetBadgesNumber_m2433139482 (ISN_LocalNotification_t792750267 * __this, int32_t ___badges, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_LocalNotification::Schedule()
extern "C"  void ISN_LocalNotification_Schedule_m3143585675 (ISN_LocalNotification_t792750267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ISN_LocalNotification::get_Id()
extern "C"  int32_t ISN_LocalNotification_get_Id_m3105719626 (ISN_LocalNotification_t792750267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime ISN_LocalNotification::get_Date()
extern "C"  DateTime_t339033936  ISN_LocalNotification_get_Date_m3521814066 (ISN_LocalNotification_t792750267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ISN_LocalNotification::get_IsFired()
extern "C"  bool ISN_LocalNotification_get_IsFired_m2293809757 (ISN_LocalNotification_t792750267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ISN_LocalNotification::get_Message()
extern "C"  String_t* ISN_LocalNotification_get_Message_m3006482351 (ISN_LocalNotification_t792750267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ISN_LocalNotification::get_UseSound()
extern "C"  bool ISN_LocalNotification_get_UseSound_m102009169 (ISN_LocalNotification_t792750267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ISN_LocalNotification::get_Badges()
extern "C"  int32_t ISN_LocalNotification_get_Badges_m755431711 (ISN_LocalNotification_t792750267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ISN_LocalNotification::get_Data()
extern "C"  String_t* ISN_LocalNotification_get_Data_m4022188836 (ISN_LocalNotification_t792750267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ISN_LocalNotification::get_SoundName()
extern "C"  String_t* ISN_LocalNotification_get_SoundName_m1355751778 (ISN_LocalNotification_t792750267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ISN_LocalNotification::get_SerializedString()
extern "C"  String_t* ISN_LocalNotification_get_SerializedString_m3714651631 (ISN_LocalNotification_t792750267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
