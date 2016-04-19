#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GK_Leaderboard
struct GK_Leaderboard_t1569407106;

#include "AssemblyU2DCSharp_ISN_Result2497682552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GK_LeaderboardResult
struct  GK_LeaderboardResult_t3333950271  : public ISN_Result_t2497682552
{
public:
	// GK_Leaderboard GK_LeaderboardResult::_Leaderboard
	GK_Leaderboard_t1569407106 * ____Leaderboard_2;

public:
	inline static int32_t get_offset_of__Leaderboard_2() { return static_cast<int32_t>(offsetof(GK_LeaderboardResult_t3333950271, ____Leaderboard_2)); }
	inline GK_Leaderboard_t1569407106 * get__Leaderboard_2() const { return ____Leaderboard_2; }
	inline GK_Leaderboard_t1569407106 ** get_address_of__Leaderboard_2() { return &____Leaderboard_2; }
	inline void set__Leaderboard_2(GK_Leaderboard_t1569407106 * value)
	{
		____Leaderboard_2 = value;
		Il2CppCodeGenWriteBarrier(&____Leaderboard_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
