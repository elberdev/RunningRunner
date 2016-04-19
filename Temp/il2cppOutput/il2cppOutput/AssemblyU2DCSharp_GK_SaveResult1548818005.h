#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GK_SavedGame
struct GK_SavedGame_t3944999262;

#include "AssemblyU2DCSharp_ISN_Result2497682552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GK_SaveResult
struct  GK_SaveResult_t1548818005  : public ISN_Result_t2497682552
{
public:
	// GK_SavedGame GK_SaveResult::_SavedGame
	GK_SavedGame_t3944999262 * ____SavedGame_2;

public:
	inline static int32_t get_offset_of__SavedGame_2() { return static_cast<int32_t>(offsetof(GK_SaveResult_t1548818005, ____SavedGame_2)); }
	inline GK_SavedGame_t3944999262 * get__SavedGame_2() const { return ____SavedGame_2; }
	inline GK_SavedGame_t3944999262 ** get_address_of__SavedGame_2() { return &____SavedGame_2; }
	inline void set__SavedGame_2(GK_SavedGame_t3944999262 * value)
	{
		____SavedGame_2 = value;
		Il2CppCodeGenWriteBarrier(&____SavedGame_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
