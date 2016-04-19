#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Int32,CK_Database>
struct Dictionary_2_t445169969;
// System.Action`1<CK_RecordResult>
struct Action_1_t2969285574;
// System.Action`1<CK_RecordDeleteResult>
struct Action_1_t414786385;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CK_Database
struct  CK_Database_t4249326482  : public Il2CppObject
{
public:
	// System.Int32 CK_Database::_InternalId
	int32_t ____InternalId_1;
	// System.Action`1<CK_RecordResult> CK_Database::ActionRecordSaved
	Action_1_t2969285574 * ___ActionRecordSaved_2;
	// System.Action`1<CK_RecordResult> CK_Database::ActionRecordFetchComplete
	Action_1_t2969285574 * ___ActionRecordFetchComplete_3;
	// System.Action`1<CK_RecordDeleteResult> CK_Database::ActionRecordDeleted
	Action_1_t414786385 * ___ActionRecordDeleted_4;

public:
	inline static int32_t get_offset_of__InternalId_1() { return static_cast<int32_t>(offsetof(CK_Database_t4249326482, ____InternalId_1)); }
	inline int32_t get__InternalId_1() const { return ____InternalId_1; }
	inline int32_t* get_address_of__InternalId_1() { return &____InternalId_1; }
	inline void set__InternalId_1(int32_t value)
	{
		____InternalId_1 = value;
	}

	inline static int32_t get_offset_of_ActionRecordSaved_2() { return static_cast<int32_t>(offsetof(CK_Database_t4249326482, ___ActionRecordSaved_2)); }
	inline Action_1_t2969285574 * get_ActionRecordSaved_2() const { return ___ActionRecordSaved_2; }
	inline Action_1_t2969285574 ** get_address_of_ActionRecordSaved_2() { return &___ActionRecordSaved_2; }
	inline void set_ActionRecordSaved_2(Action_1_t2969285574 * value)
	{
		___ActionRecordSaved_2 = value;
		Il2CppCodeGenWriteBarrier(&___ActionRecordSaved_2, value);
	}

	inline static int32_t get_offset_of_ActionRecordFetchComplete_3() { return static_cast<int32_t>(offsetof(CK_Database_t4249326482, ___ActionRecordFetchComplete_3)); }
	inline Action_1_t2969285574 * get_ActionRecordFetchComplete_3() const { return ___ActionRecordFetchComplete_3; }
	inline Action_1_t2969285574 ** get_address_of_ActionRecordFetchComplete_3() { return &___ActionRecordFetchComplete_3; }
	inline void set_ActionRecordFetchComplete_3(Action_1_t2969285574 * value)
	{
		___ActionRecordFetchComplete_3 = value;
		Il2CppCodeGenWriteBarrier(&___ActionRecordFetchComplete_3, value);
	}

	inline static int32_t get_offset_of_ActionRecordDeleted_4() { return static_cast<int32_t>(offsetof(CK_Database_t4249326482, ___ActionRecordDeleted_4)); }
	inline Action_1_t414786385 * get_ActionRecordDeleted_4() const { return ___ActionRecordDeleted_4; }
	inline Action_1_t414786385 ** get_address_of_ActionRecordDeleted_4() { return &___ActionRecordDeleted_4; }
	inline void set_ActionRecordDeleted_4(Action_1_t414786385 * value)
	{
		___ActionRecordDeleted_4 = value;
		Il2CppCodeGenWriteBarrier(&___ActionRecordDeleted_4, value);
	}
};

struct CK_Database_t4249326482_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,CK_Database> CK_Database::_Databases
	Dictionary_2_t445169969 * ____Databases_0;
	// System.Action`1<CK_RecordResult> CK_Database::<>f__am$cache5
	Action_1_t2969285574 * ___U3CU3Ef__amU24cache5_5;
	// System.Action`1<CK_RecordResult> CK_Database::<>f__am$cache6
	Action_1_t2969285574 * ___U3CU3Ef__amU24cache6_6;
	// System.Action`1<CK_RecordDeleteResult> CK_Database::<>f__am$cache7
	Action_1_t414786385 * ___U3CU3Ef__amU24cache7_7;

public:
	inline static int32_t get_offset_of__Databases_0() { return static_cast<int32_t>(offsetof(CK_Database_t4249326482_StaticFields, ____Databases_0)); }
	inline Dictionary_2_t445169969 * get__Databases_0() const { return ____Databases_0; }
	inline Dictionary_2_t445169969 ** get_address_of__Databases_0() { return &____Databases_0; }
	inline void set__Databases_0(Dictionary_2_t445169969 * value)
	{
		____Databases_0 = value;
		Il2CppCodeGenWriteBarrier(&____Databases_0, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache5_5() { return static_cast<int32_t>(offsetof(CK_Database_t4249326482_StaticFields, ___U3CU3Ef__amU24cache5_5)); }
	inline Action_1_t2969285574 * get_U3CU3Ef__amU24cache5_5() const { return ___U3CU3Ef__amU24cache5_5; }
	inline Action_1_t2969285574 ** get_address_of_U3CU3Ef__amU24cache5_5() { return &___U3CU3Ef__amU24cache5_5; }
	inline void set_U3CU3Ef__amU24cache5_5(Action_1_t2969285574 * value)
	{
		___U3CU3Ef__amU24cache5_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache5_5, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache6_6() { return static_cast<int32_t>(offsetof(CK_Database_t4249326482_StaticFields, ___U3CU3Ef__amU24cache6_6)); }
	inline Action_1_t2969285574 * get_U3CU3Ef__amU24cache6_6() const { return ___U3CU3Ef__amU24cache6_6; }
	inline Action_1_t2969285574 ** get_address_of_U3CU3Ef__amU24cache6_6() { return &___U3CU3Ef__amU24cache6_6; }
	inline void set_U3CU3Ef__amU24cache6_6(Action_1_t2969285574 * value)
	{
		___U3CU3Ef__amU24cache6_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache6_6, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache7_7() { return static_cast<int32_t>(offsetof(CK_Database_t4249326482_StaticFields, ___U3CU3Ef__amU24cache7_7)); }
	inline Action_1_t414786385 * get_U3CU3Ef__amU24cache7_7() const { return ___U3CU3Ef__amU24cache7_7; }
	inline Action_1_t414786385 ** get_address_of_U3CU3Ef__amU24cache7_7() { return &___U3CU3Ef__amU24cache7_7; }
	inline void set_U3CU3Ef__amU24cache7_7(Action_1_t414786385 * value)
	{
		___U3CU3Ef__amU24cache7_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache7_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
