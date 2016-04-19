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
// System.Collections.Generic.Dictionary`2<System.Int32,CK_RecordID>
struct Dictionary_2_t2151437538;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CK_RecordID
struct  CK_RecordID_t1660626755  : public Il2CppObject
{
public:
	// System.Int32 CK_RecordID::_internalId
	int32_t ____internalId_0;
	// System.String CK_RecordID::_Name
	String_t* ____Name_1;

public:
	inline static int32_t get_offset_of__internalId_0() { return static_cast<int32_t>(offsetof(CK_RecordID_t1660626755, ____internalId_0)); }
	inline int32_t get__internalId_0() const { return ____internalId_0; }
	inline int32_t* get_address_of__internalId_0() { return &____internalId_0; }
	inline void set__internalId_0(int32_t value)
	{
		____internalId_0 = value;
	}

	inline static int32_t get_offset_of__Name_1() { return static_cast<int32_t>(offsetof(CK_RecordID_t1660626755, ____Name_1)); }
	inline String_t* get__Name_1() const { return ____Name_1; }
	inline String_t** get_address_of__Name_1() { return &____Name_1; }
	inline void set__Name_1(String_t* value)
	{
		____Name_1 = value;
		Il2CppCodeGenWriteBarrier(&____Name_1, value);
	}
};

struct CK_RecordID_t1660626755_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,CK_RecordID> CK_RecordID::_Ids
	Dictionary_2_t2151437538 * ____Ids_2;

public:
	inline static int32_t get_offset_of__Ids_2() { return static_cast<int32_t>(offsetof(CK_RecordID_t1660626755_StaticFields, ____Ids_2)); }
	inline Dictionary_2_t2151437538 * get__Ids_2() const { return ____Ids_2; }
	inline Dictionary_2_t2151437538 ** get_address_of__Ids_2() { return &____Ids_2; }
	inline void set__Ids_2(Dictionary_2_t2151437538 * value)
	{
		____Ids_2 = value;
		Il2CppCodeGenWriteBarrier(&____Ids_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
