#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Int32,CK_Record>
struct Dictionary_2_t2369631687;
// CK_RecordID
struct CK_RecordID_t1660626755;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t2606186806;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CK_Record
struct  CK_Record_t1878820904  : public Il2CppObject
{
public:
	// CK_RecordID CK_Record::_Id
	CK_RecordID_t1660626755 * ____Id_1;
	// System.String CK_Record::_Type
	String_t* ____Type_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> CK_Record::_Data
	Dictionary_2_t2606186806 * ____Data_3;
	// System.Int32 CK_Record::_internalId
	int32_t ____internalId_4;

public:
	inline static int32_t get_offset_of__Id_1() { return static_cast<int32_t>(offsetof(CK_Record_t1878820904, ____Id_1)); }
	inline CK_RecordID_t1660626755 * get__Id_1() const { return ____Id_1; }
	inline CK_RecordID_t1660626755 ** get_address_of__Id_1() { return &____Id_1; }
	inline void set__Id_1(CK_RecordID_t1660626755 * value)
	{
		____Id_1 = value;
		Il2CppCodeGenWriteBarrier(&____Id_1, value);
	}

	inline static int32_t get_offset_of__Type_2() { return static_cast<int32_t>(offsetof(CK_Record_t1878820904, ____Type_2)); }
	inline String_t* get__Type_2() const { return ____Type_2; }
	inline String_t** get_address_of__Type_2() { return &____Type_2; }
	inline void set__Type_2(String_t* value)
	{
		____Type_2 = value;
		Il2CppCodeGenWriteBarrier(&____Type_2, value);
	}

	inline static int32_t get_offset_of__Data_3() { return static_cast<int32_t>(offsetof(CK_Record_t1878820904, ____Data_3)); }
	inline Dictionary_2_t2606186806 * get__Data_3() const { return ____Data_3; }
	inline Dictionary_2_t2606186806 ** get_address_of__Data_3() { return &____Data_3; }
	inline void set__Data_3(Dictionary_2_t2606186806 * value)
	{
		____Data_3 = value;
		Il2CppCodeGenWriteBarrier(&____Data_3, value);
	}

	inline static int32_t get_offset_of__internalId_4() { return static_cast<int32_t>(offsetof(CK_Record_t1878820904, ____internalId_4)); }
	inline int32_t get__internalId_4() const { return ____internalId_4; }
	inline int32_t* get_address_of__internalId_4() { return &____internalId_4; }
	inline void set__internalId_4(int32_t value)
	{
		____internalId_4 = value;
	}
};

struct CK_Record_t1878820904_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,CK_Record> CK_Record::_Records
	Dictionary_2_t2369631687 * ____Records_0;

public:
	inline static int32_t get_offset_of__Records_0() { return static_cast<int32_t>(offsetof(CK_Record_t1878820904_StaticFields, ____Records_0)); }
	inline Dictionary_2_t2369631687 * get__Records_0() const { return ____Records_0; }
	inline Dictionary_2_t2369631687 ** get_address_of__Records_0() { return &____Records_0; }
	inline void set__Records_0(Dictionary_2_t2369631687 * value)
	{
		____Records_0 = value;
		Il2CppCodeGenWriteBarrier(&____Records_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
