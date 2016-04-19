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
// System.Collections.Generic.List`1<ISD_VariableListed>
struct List_1_t4059119351;

#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharp_ISD_PlistValueTypes2440341297.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ISD_Variable
struct  ISD_Variable_t437555425  : public Il2CppObject
{
public:
	// System.Boolean ISD_Variable::IsOpen
	bool ___IsOpen_0;
	// System.Boolean ISD_Variable::IsListOpen
	bool ___IsListOpen_1;
	// System.String ISD_Variable::Name
	String_t* ___Name_2;
	// ISD_PlistValueTypes ISD_Variable::Type
	int32_t ___Type_3;
	// ISD_PlistValueTypes ISD_Variable::ArrayType
	int32_t ___ArrayType_4;
	// System.String ISD_Variable::StringValue
	String_t* ___StringValue_5;
	// System.Int32 ISD_Variable::IntegerValue
	int32_t ___IntegerValue_6;
	// System.Single ISD_Variable::FloatValue
	float ___FloatValue_7;
	// System.Boolean ISD_Variable::BooleanValue
	bool ___BooleanValue_8;
	// System.Collections.Generic.List`1<ISD_VariableListed> ISD_Variable::ArrayValue
	List_1_t4059119351 * ___ArrayValue_9;
	// System.Collections.Generic.List`1<ISD_VariableListed> ISD_Variable::DictValues
	List_1_t4059119351 * ___DictValues_10;

public:
	inline static int32_t get_offset_of_IsOpen_0() { return static_cast<int32_t>(offsetof(ISD_Variable_t437555425, ___IsOpen_0)); }
	inline bool get_IsOpen_0() const { return ___IsOpen_0; }
	inline bool* get_address_of_IsOpen_0() { return &___IsOpen_0; }
	inline void set_IsOpen_0(bool value)
	{
		___IsOpen_0 = value;
	}

	inline static int32_t get_offset_of_IsListOpen_1() { return static_cast<int32_t>(offsetof(ISD_Variable_t437555425, ___IsListOpen_1)); }
	inline bool get_IsListOpen_1() const { return ___IsListOpen_1; }
	inline bool* get_address_of_IsListOpen_1() { return &___IsListOpen_1; }
	inline void set_IsListOpen_1(bool value)
	{
		___IsListOpen_1 = value;
	}

	inline static int32_t get_offset_of_Name_2() { return static_cast<int32_t>(offsetof(ISD_Variable_t437555425, ___Name_2)); }
	inline String_t* get_Name_2() const { return ___Name_2; }
	inline String_t** get_address_of_Name_2() { return &___Name_2; }
	inline void set_Name_2(String_t* value)
	{
		___Name_2 = value;
		Il2CppCodeGenWriteBarrier(&___Name_2, value);
	}

	inline static int32_t get_offset_of_Type_3() { return static_cast<int32_t>(offsetof(ISD_Variable_t437555425, ___Type_3)); }
	inline int32_t get_Type_3() const { return ___Type_3; }
	inline int32_t* get_address_of_Type_3() { return &___Type_3; }
	inline void set_Type_3(int32_t value)
	{
		___Type_3 = value;
	}

	inline static int32_t get_offset_of_ArrayType_4() { return static_cast<int32_t>(offsetof(ISD_Variable_t437555425, ___ArrayType_4)); }
	inline int32_t get_ArrayType_4() const { return ___ArrayType_4; }
	inline int32_t* get_address_of_ArrayType_4() { return &___ArrayType_4; }
	inline void set_ArrayType_4(int32_t value)
	{
		___ArrayType_4 = value;
	}

	inline static int32_t get_offset_of_StringValue_5() { return static_cast<int32_t>(offsetof(ISD_Variable_t437555425, ___StringValue_5)); }
	inline String_t* get_StringValue_5() const { return ___StringValue_5; }
	inline String_t** get_address_of_StringValue_5() { return &___StringValue_5; }
	inline void set_StringValue_5(String_t* value)
	{
		___StringValue_5 = value;
		Il2CppCodeGenWriteBarrier(&___StringValue_5, value);
	}

	inline static int32_t get_offset_of_IntegerValue_6() { return static_cast<int32_t>(offsetof(ISD_Variable_t437555425, ___IntegerValue_6)); }
	inline int32_t get_IntegerValue_6() const { return ___IntegerValue_6; }
	inline int32_t* get_address_of_IntegerValue_6() { return &___IntegerValue_6; }
	inline void set_IntegerValue_6(int32_t value)
	{
		___IntegerValue_6 = value;
	}

	inline static int32_t get_offset_of_FloatValue_7() { return static_cast<int32_t>(offsetof(ISD_Variable_t437555425, ___FloatValue_7)); }
	inline float get_FloatValue_7() const { return ___FloatValue_7; }
	inline float* get_address_of_FloatValue_7() { return &___FloatValue_7; }
	inline void set_FloatValue_7(float value)
	{
		___FloatValue_7 = value;
	}

	inline static int32_t get_offset_of_BooleanValue_8() { return static_cast<int32_t>(offsetof(ISD_Variable_t437555425, ___BooleanValue_8)); }
	inline bool get_BooleanValue_8() const { return ___BooleanValue_8; }
	inline bool* get_address_of_BooleanValue_8() { return &___BooleanValue_8; }
	inline void set_BooleanValue_8(bool value)
	{
		___BooleanValue_8 = value;
	}

	inline static int32_t get_offset_of_ArrayValue_9() { return static_cast<int32_t>(offsetof(ISD_Variable_t437555425, ___ArrayValue_9)); }
	inline List_1_t4059119351 * get_ArrayValue_9() const { return ___ArrayValue_9; }
	inline List_1_t4059119351 ** get_address_of_ArrayValue_9() { return &___ArrayValue_9; }
	inline void set_ArrayValue_9(List_1_t4059119351 * value)
	{
		___ArrayValue_9 = value;
		Il2CppCodeGenWriteBarrier(&___ArrayValue_9, value);
	}

	inline static int32_t get_offset_of_DictValues_10() { return static_cast<int32_t>(offsetof(ISD_Variable_t437555425, ___DictValues_10)); }
	inline List_1_t4059119351 * get_DictValues_10() const { return ___DictValues_10; }
	inline List_1_t4059119351 ** get_address_of_DictValues_10() { return &___DictValues_10; }
	inline void set_DictValues_10(List_1_t4059119351 * value)
	{
		___DictValues_10 = value;
		Il2CppCodeGenWriteBarrier(&___DictValues_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
