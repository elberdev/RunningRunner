#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.String,GK_TBM_Match>
struct Dictionary_2_t3362561242;

#include "AssemblyU2DCSharp_ISN_Result2497682552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GK_TBM_LoadMatchesResult
struct  GK_TBM_LoadMatchesResult_t1624868367  : public ISN_Result_t2497682552
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,GK_TBM_Match> GK_TBM_LoadMatchesResult::LoadedMatches
	Dictionary_2_t3362561242 * ___LoadedMatches_2;

public:
	inline static int32_t get_offset_of_LoadedMatches_2() { return static_cast<int32_t>(offsetof(GK_TBM_LoadMatchesResult_t1624868367, ___LoadedMatches_2)); }
	inline Dictionary_2_t3362561242 * get_LoadedMatches_2() const { return ___LoadedMatches_2; }
	inline Dictionary_2_t3362561242 ** get_address_of_LoadedMatches_2() { return &___LoadedMatches_2; }
	inline void set_LoadedMatches_2(Dictionary_2_t3362561242 * value)
	{
		___LoadedMatches_2 = value;
		Il2CppCodeGenWriteBarrier(&___LoadedMatches_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
