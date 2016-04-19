#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// CK_Record
struct CK_Record_t1878820904;
// CK_Database
struct CK_Database_t4249326482;

#include "AssemblyU2DCSharp_ISN_Result2497682552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CK_RecordResult
struct  CK_RecordResult_t2820832869  : public ISN_Result_t2497682552
{
public:
	// CK_Record CK_RecordResult::_Record
	CK_Record_t1878820904 * ____Record_2;
	// CK_Database CK_RecordResult::_Database
	CK_Database_t4249326482 * ____Database_3;

public:
	inline static int32_t get_offset_of__Record_2() { return static_cast<int32_t>(offsetof(CK_RecordResult_t2820832869, ____Record_2)); }
	inline CK_Record_t1878820904 * get__Record_2() const { return ____Record_2; }
	inline CK_Record_t1878820904 ** get_address_of__Record_2() { return &____Record_2; }
	inline void set__Record_2(CK_Record_t1878820904 * value)
	{
		____Record_2 = value;
		Il2CppCodeGenWriteBarrier(&____Record_2, value);
	}

	inline static int32_t get_offset_of__Database_3() { return static_cast<int32_t>(offsetof(CK_RecordResult_t2820832869, ____Database_3)); }
	inline CK_Database_t4249326482 * get__Database_3() const { return ____Database_3; }
	inline CK_Database_t4249326482 ** get_address_of__Database_3() { return &____Database_3; }
	inline void set__Database_3(CK_Database_t4249326482 * value)
	{
		____Database_3 = value;
		Il2CppCodeGenWriteBarrier(&____Database_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
