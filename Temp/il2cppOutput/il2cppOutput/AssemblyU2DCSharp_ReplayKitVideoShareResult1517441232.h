#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String[]
struct StringU5BU5D_t2956870243;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ReplayKitVideoShareResult
struct  ReplayKitVideoShareResult_t1517441232  : public Il2CppObject
{
public:
	// System.String[] ReplayKitVideoShareResult::_Sources
	StringU5BU5D_t2956870243* ____Sources_0;

public:
	inline static int32_t get_offset_of__Sources_0() { return static_cast<int32_t>(offsetof(ReplayKitVideoShareResult_t1517441232, ____Sources_0)); }
	inline StringU5BU5D_t2956870243* get__Sources_0() const { return ____Sources_0; }
	inline StringU5BU5D_t2956870243** get_address_of__Sources_0() { return &____Sources_0; }
	inline void set__Sources_0(StringU5BU5D_t2956870243* value)
	{
		____Sources_0 = value;
		Il2CppCodeGenWriteBarrier(&____Sources_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
