﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// IOSDateTimePicker
struct IOSDateTimePicker_t4164536662;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ISN_Singleton`1<IOSDateTimePicker>
struct  ISN_Singleton_1_t952693204  : public MonoBehaviour_t3012272455
{
public:

public:
};

struct ISN_Singleton_1_t952693204_StaticFields
{
public:
	// T ISN_Singleton`1::_instance
	IOSDateTimePicker_t4164536662 * ____instance_2;
	// System.Boolean ISN_Singleton`1::applicationIsQuitting
	bool ___applicationIsQuitting_3;

public:
	inline static int32_t get_offset_of__instance_2() { return static_cast<int32_t>(offsetof(ISN_Singleton_1_t952693204_StaticFields, ____instance_2)); }
	inline IOSDateTimePicker_t4164536662 * get__instance_2() const { return ____instance_2; }
	inline IOSDateTimePicker_t4164536662 ** get_address_of__instance_2() { return &____instance_2; }
	inline void set__instance_2(IOSDateTimePicker_t4164536662 * value)
	{
		____instance_2 = value;
		Il2CppCodeGenWriteBarrier(&____instance_2, value);
	}

	inline static int32_t get_offset_of_applicationIsQuitting_3() { return static_cast<int32_t>(offsetof(ISN_Singleton_1_t952693204_StaticFields, ___applicationIsQuitting_3)); }
	inline bool get_applicationIsQuitting_3() const { return ___applicationIsQuitting_3; }
	inline bool* get_address_of_applicationIsQuitting_3() { return &___applicationIsQuitting_3; }
	inline void set_applicationIsQuitting_3(bool value)
	{
		___applicationIsQuitting_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
