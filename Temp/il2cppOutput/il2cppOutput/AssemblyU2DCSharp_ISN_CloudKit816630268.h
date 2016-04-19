#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// CK_Database
struct CK_Database_t4249326482;

#include "AssemblyU2DCSharp_ISN_Singleton_1_gen1899754106.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ISN_CloudKit
struct  ISN_CloudKit_t816630268  : public ISN_Singleton_1_t1899754106
{
public:
	// CK_Database ISN_CloudKit::_PrivateDB
	CK_Database_t4249326482 * ____PrivateDB_6;
	// CK_Database ISN_CloudKit::_PublicDB
	CK_Database_t4249326482 * ____PublicDB_7;

public:
	inline static int32_t get_offset_of__PrivateDB_6() { return static_cast<int32_t>(offsetof(ISN_CloudKit_t816630268, ____PrivateDB_6)); }
	inline CK_Database_t4249326482 * get__PrivateDB_6() const { return ____PrivateDB_6; }
	inline CK_Database_t4249326482 ** get_address_of__PrivateDB_6() { return &____PrivateDB_6; }
	inline void set__PrivateDB_6(CK_Database_t4249326482 * value)
	{
		____PrivateDB_6 = value;
		Il2CppCodeGenWriteBarrier(&____PrivateDB_6, value);
	}

	inline static int32_t get_offset_of__PublicDB_7() { return static_cast<int32_t>(offsetof(ISN_CloudKit_t816630268, ____PublicDB_7)); }
	inline CK_Database_t4249326482 * get__PublicDB_7() const { return ____PublicDB_7; }
	inline CK_Database_t4249326482 ** get_address_of__PublicDB_7() { return &____PublicDB_7; }
	inline void set__PublicDB_7(CK_Database_t4249326482 * value)
	{
		____PublicDB_7 = value;
		Il2CppCodeGenWriteBarrier(&____PublicDB_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
