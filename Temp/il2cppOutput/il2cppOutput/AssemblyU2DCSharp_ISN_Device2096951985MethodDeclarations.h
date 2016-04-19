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

// ISN_Device
struct ISN_Device_t2096951985;
// System.String
struct String_t;
// ISN_DeviceGUID
struct ISN_DeviceGUID_t4212375738;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_ISN_InterfaceIdiom3299866798.h"

// System.Void ISN_Device::.ctor()
extern "C"  void ISN_Device__ctor_m1309023498 (ISN_Device_t2096951985 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_Device::.ctor(System.String)
extern "C"  void ISN_Device__ctor_m4103897656 (ISN_Device_t2096951985 * __this, String_t* ___deviceData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_Device::.cctor()
extern "C"  void ISN_Device__cctor_m1442926563 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ISN_Device::_ISN_RetriveDeviceData()
extern "C"  String_t* ISN_Device__ISN_RetriveDeviceData_m1646011274 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ISN_Device::get_Name()
extern "C"  String_t* ISN_Device_get_Name_m3757573425 (ISN_Device_t2096951985 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ISN_Device::get_SystemName()
extern "C"  String_t* ISN_Device_get_SystemName_m2202608768 (ISN_Device_t2096951985 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ISN_Device::get_Model()
extern "C"  String_t* ISN_Device_get_Model_m25717285 (ISN_Device_t2096951985 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ISN_Device::get_LocalizedModel()
extern "C"  String_t* ISN_Device_get_LocalizedModel_m1242456084 (ISN_Device_t2096951985 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ISN_Device::get_SystemVersion()
extern "C"  String_t* ISN_Device_get_SystemVersion_m1114579877 (ISN_Device_t2096951985 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ISN_Device::get_MajorSystemVersion()
extern "C"  int32_t ISN_Device_get_MajorSystemVersion_m580300161 (ISN_Device_t2096951985 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ISN_InterfaceIdiom ISN_Device::get_InterfaceIdiom()
extern "C"  int32_t ISN_Device_get_InterfaceIdiom_m4078119717 (ISN_Device_t2096951985 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ISN_DeviceGUID ISN_Device::get_GUID()
extern "C"  ISN_DeviceGUID_t4212375738 * ISN_Device_get_GUID_m1492692719 (ISN_Device_t2096951985 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ISN_Device ISN_Device::get_CurrentDevice()
extern "C"  ISN_Device_t2096951985 * ISN_Device_get_CurrentDevice_m3606725058 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
