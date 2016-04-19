#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GK_TBM_Match
struct GK_TBM_Match_t1724863338;

#include "AssemblyU2DCSharp_ISN_Result2497682552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GK_TBM_RematchResult
struct  GK_TBM_RematchResult_t3072888532  : public ISN_Result_t2497682552
{
public:
	// GK_TBM_Match GK_TBM_RematchResult::_Match
	GK_TBM_Match_t1724863338 * ____Match_2;

public:
	inline static int32_t get_offset_of__Match_2() { return static_cast<int32_t>(offsetof(GK_TBM_RematchResult_t3072888532, ____Match_2)); }
	inline GK_TBM_Match_t1724863338 * get__Match_2() const { return ____Match_2; }
	inline GK_TBM_Match_t1724863338 ** get_address_of__Match_2() { return &____Match_2; }
	inline void set__Match_2(GK_TBM_Match_t1724863338 * value)
	{
		____Match_2 = value;
		Il2CppCodeGenWriteBarrier(&____Match_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
