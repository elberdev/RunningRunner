#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// IOSBillingInitChecker/BillingInitListener
struct BillingInitListener_t2535381983;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IOSBillingInitChecker
struct  IOSBillingInitChecker_t2906948055  : public Il2CppObject
{
public:
	// IOSBillingInitChecker/BillingInitListener IOSBillingInitChecker::_listener
	BillingInitListener_t2535381983 * ____listener_0;

public:
	inline static int32_t get_offset_of__listener_0() { return static_cast<int32_t>(offsetof(IOSBillingInitChecker_t2906948055, ____listener_0)); }
	inline BillingInitListener_t2535381983 * get__listener_0() const { return ____listener_0; }
	inline BillingInitListener_t2535381983 ** get_address_of__listener_0() { return &____listener_0; }
	inline void set__listener_0(BillingInitListener_t2535381983 * value)
	{
		____listener_0 = value;
		Il2CppCodeGenWriteBarrier(&____listener_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
