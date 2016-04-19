#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "AssemblyU2DCSharp_ISN_Result2497682552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GK_SaveRemoveResult
struct  GK_SaveRemoveResult_t3368549881  : public ISN_Result_t2497682552
{
public:
	// System.String GK_SaveRemoveResult::_SaveName
	String_t* ____SaveName_2;

public:
	inline static int32_t get_offset_of__SaveName_2() { return static_cast<int32_t>(offsetof(GK_SaveRemoveResult_t3368549881, ____SaveName_2)); }
	inline String_t* get__SaveName_2() const { return ____SaveName_2; }
	inline String_t** get_address_of__SaveName_2() { return &____SaveName_2; }
	inline void set__SaveName_2(String_t* value)
	{
		____SaveName_2 = value;
		Il2CppCodeGenWriteBarrier(&____SaveName_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
