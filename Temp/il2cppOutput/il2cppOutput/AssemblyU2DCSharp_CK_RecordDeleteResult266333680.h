#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// CK_RecordID
struct CK_RecordID_t1660626755;
// CK_Database
struct CK_Database_t4249326482;

#include "AssemblyU2DCSharp_ISN_Result2497682552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CK_RecordDeleteResult
struct  CK_RecordDeleteResult_t266333680  : public ISN_Result_t2497682552
{
public:
	// CK_RecordID CK_RecordDeleteResult::_RecordID
	CK_RecordID_t1660626755 * ____RecordID_2;
	// CK_Database CK_RecordDeleteResult::_Database
	CK_Database_t4249326482 * ____Database_3;

public:
	inline static int32_t get_offset_of__RecordID_2() { return static_cast<int32_t>(offsetof(CK_RecordDeleteResult_t266333680, ____RecordID_2)); }
	inline CK_RecordID_t1660626755 * get__RecordID_2() const { return ____RecordID_2; }
	inline CK_RecordID_t1660626755 ** get_address_of__RecordID_2() { return &____RecordID_2; }
	inline void set__RecordID_2(CK_RecordID_t1660626755 * value)
	{
		____RecordID_2 = value;
		Il2CppCodeGenWriteBarrier(&____RecordID_2, value);
	}

	inline static int32_t get_offset_of__Database_3() { return static_cast<int32_t>(offsetof(CK_RecordDeleteResult_t266333680, ____Database_3)); }
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
