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

// GK_SavesResolveResult
struct  GK_SavesResolveResult_t4177305998  : public ISN_Result_t2497682552
{
public:
	// System.Collections.Generic.List`1<GK_SavedGame> GK_SavesResolveResult::_ResolvedSaves
	List_1_t446990935 * ____ResolvedSaves_2;

public:
	inline static int32_t get_offset_of__ResolvedSaves_2() { return static_cast<int32_t>(offsetof(GK_SavesResolveResult_t4177305998, ____ResolvedSaves_2)); }
	inline List_1_t446990935 * get__ResolvedSaves_2() const { return ____ResolvedSaves_2; }
	inline List_1_t446990935 ** get_address_of__ResolvedSaves_2() { return &____ResolvedSaves_2; }
	inline void set__ResolvedSaves_2(List_1_t446990935 * value)
	{
		____ResolvedSaves_2 = value;
		Il2CppCodeGenWriteBarrier(&____ResolvedSaves_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
