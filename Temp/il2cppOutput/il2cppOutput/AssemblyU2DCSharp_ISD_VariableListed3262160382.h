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
#include "AssemblyU2DCSharp_ISD_PlistValueTypes2440341297.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ISD_VariableListed
struct  ISD_VariableListed_t3262160382  : public Il2CppObject
{
public:
	// System.Boolean ISD_VariableListed::IsOpen
	bool ___IsOpen_0;
	// ISD_PlistValueTypes ISD_VariableListed::Type
	int32_t ___Type_1;
	// System.String ISD_VariableListed::DictKey
	String_t* ___DictKey_2;
	// System.String ISD_VariableListed::StringValue
	String_t* ___StringValue_3;
	// System.Int32 ISD_VariableListed::IntegerValue
	int32_t ___IntegerValue_4;
	// System.Single ISD_VariableListed::FloatValue
	float ___FloatValue_5;
	// System.Boolean ISD_VariableListed::BooleanValue
	bool ___BooleanValue_6;

public:
	inline static int32_t get_offset_of_IsOpen_0() { return static_cast<int32_t>(offsetof(ISD_VariableListed_t3262160382, ___IsOpen_0)); }
	inline bool get_IsOpen_0() const { return ___IsOpen_0; }
	inline bool* get_address_of_IsOpen_0() { return &___IsOpen_0; }
	inline void set_IsOpen_0(bool value)
	{
		___IsOpen_0 = value;
	}

	inline static int32_t get_offset_of_Type_1() { return static_cast<int32_t>(offsetof(ISD_VariableListed_t3262160382, ___Type_1)); }
	inline int32_t get_Type_1() const { return ___Type_1; }
	inline int32_t* get_address_of_Type_1() { return &___Type_1; }
	inline void set_Type_1(int32_t value)
	{
		___Type_1 = value;
	}

	inline static int32_t get_offset_of_DictKey_2() { return static_cast<int32_t>(offsetof(ISD_VariableListed_t3262160382, ___DictKey_2)); }
	inline String_t* get_DictKey_2() const { return ___DictKey_2; }
	inline String_t** get_address_of_DictKey_2() { return &___DictKey_2; }
	inline void set_DictKey_2(String_t* value)
	{
		___DictKey_2 = value;
		Il2CppCodeGenWriteBarrier(&___DictKey_2, value);
	}

	inline static int32_t get_offset_of_StringValue_3() { return static_cast<int32_t>(offsetof(ISD_VariableListed_t3262160382, ___StringValue_3)); }
	inline String_t* get_StringValue_3() const { return ___StringValue_3; }
	inline String_t** get_address_of_StringValue_3() { return &___StringValue_3; }
	inline void set_StringValue_3(String_t* value)
	{
		___StringValue_3 = value;
		Il2CppCodeGenWriteBarrier(&___StringValue_3, value);
	}

	inline static int32_t get_offset_of_IntegerValue_4() { return static_cast<int32_t>(offsetof(ISD_VariableListed_t3262160382, ___IntegerValue_4)); }
	inline int32_t get_IntegerValue_4() const { return ___IntegerValue_4; }
	inline int32_t* get_address_of_IntegerValue_4() { return &___IntegerValue_4; }
	inline void set_IntegerValue_4(int32_t value)
	{
		___IntegerValue_4 = value;
	}

	inline static int32_t get_offset_of_FloatValue_5() { return static_cast<int32_t>(offsetof(ISD_VariableListed_t3262160382, ___FloatValue_5)); }
	inline float get_FloatValue_5() const { return ___FloatValue_5; }
	inline float* get_address_of_FloatValue_5() { return &___FloatValue_5; }
	inline void set_FloatValue_5(float value)
	{
		___FloatValue_5 = value;
	}

	inline static int32_t get_offset_of_BooleanValue_6() { return static_cast<int32_t>(offsetof(ISD_VariableListed_t3262160382, ___BooleanValue_6)); }
	inline bool get_BooleanValue_6() const { return ___BooleanValue_6; }
	inline bool* get_address_of_BooleanValue_6() { return &___BooleanValue_6; }
	inline void set_BooleanValue_6(bool value)
	{
		___BooleanValue_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
