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

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ISD_Lib
struct  ISD_Lib_t2805184768  : public Il2CppObject
{
public:
	// System.Boolean ISD_Lib::IsOpen
	bool ___IsOpen_0;
	// System.String ISD_Lib::Name
	String_t* ___Name_1;
	// System.Boolean ISD_Lib::IsOptional
	bool ___IsOptional_2;

public:
	inline static int32_t get_offset_of_IsOpen_0() { return static_cast<int32_t>(offsetof(ISD_Lib_t2805184768, ___IsOpen_0)); }
	inline bool get_IsOpen_0() const { return ___IsOpen_0; }
	inline bool* get_address_of_IsOpen_0() { return &___IsOpen_0; }
	inline void set_IsOpen_0(bool value)
	{
		___IsOpen_0 = value;
	}

	inline static int32_t get_offset_of_Name_1() { return static_cast<int32_t>(offsetof(ISD_Lib_t2805184768, ___Name_1)); }
	inline String_t* get_Name_1() const { return ___Name_1; }
	inline String_t** get_address_of_Name_1() { return &___Name_1; }
	inline void set_Name_1(String_t* value)
	{
		___Name_1 = value;
		Il2CppCodeGenWriteBarrier(&___Name_1, value);
	}

	inline static int32_t get_offset_of_IsOptional_2() { return static_cast<int32_t>(offsetof(ISD_Lib_t2805184768, ___IsOptional_2)); }
	inline bool get_IsOptional_2() const { return ___IsOptional_2; }
	inline bool* get_address_of_IsOptional_2() { return &___IsOptional_2; }
	inline void set_IsOptional_2(bool value)
	{
		___IsOptional_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
