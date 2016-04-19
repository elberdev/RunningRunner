#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<GK_SavedGame>
struct List_1_t446990935;

#include "AssemblyU2DCSharp_ISN_Result2497682552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GK_FetchResult
struct  GK_FetchResult_t3785760892  : public ISN_Result_t2497682552
{
public:
	// System.Collections.Generic.List`1<GK_SavedGame> GK_FetchResult::_SavedGames
	List_1_t446990935 * ____SavedGames_2;

public:
	inline static int32_t get_offset_of__SavedGames_2() { return static_cast<int32_t>(offsetof(GK_FetchResult_t3785760892, ____SavedGames_2)); }
	inline List_1_t446990935 * get__SavedGames_2() const { return ____SavedGames_2; }
	inline List_1_t446990935 ** get_address_of__SavedGames_2() { return &____SavedGames_2; }
	inline void set__SavedGames_2(List_1_t446990935 * value)
	{
		____SavedGames_2 = value;
		Il2CppCodeGenWriteBarrier(&____SavedGames_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
