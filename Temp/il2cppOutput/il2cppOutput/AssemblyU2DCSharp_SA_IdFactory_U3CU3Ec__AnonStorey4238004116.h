﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Random
struct Random_t922188920;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA_IdFactory/<>c__AnonStorey9
struct  U3CU3Ec__AnonStorey9_t4238004116  : public Il2CppObject
{
public:
	// System.Random SA_IdFactory/<>c__AnonStorey9::random
	Random_t922188920 * ___random_0;

public:
	inline static int32_t get_offset_of_random_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__AnonStorey9_t4238004116, ___random_0)); }
	inline Random_t922188920 * get_random_0() const { return ___random_0; }
	inline Random_t922188920 ** get_address_of_random_0() { return &___random_0; }
	inline void set_random_0(Random_t922188920 * value)
	{
		___random_0 = value;
		Il2CppCodeGenWriteBarrier(&___random_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
