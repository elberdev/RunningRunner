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
// System.Action
struct Action_t437523947;

#include "AssemblyU2DCSharp_BaseIOSPopup653380272.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IOSMessage
struct  IOSMessage_t3023349594  : public BaseIOSPopup_t653380272
{
public:
	// System.String IOSMessage::ok
	String_t* ___ok_4;
	// System.Action IOSMessage::OnComplete
	Action_t437523947 * ___OnComplete_5;

public:
	inline static int32_t get_offset_of_ok_4() { return static_cast<int32_t>(offsetof(IOSMessage_t3023349594, ___ok_4)); }
	inline String_t* get_ok_4() const { return ___ok_4; }
	inline String_t** get_address_of_ok_4() { return &___ok_4; }
	inline void set_ok_4(String_t* value)
	{
		___ok_4 = value;
		Il2CppCodeGenWriteBarrier(&___ok_4, value);
	}

	inline static int32_t get_offset_of_OnComplete_5() { return static_cast<int32_t>(offsetof(IOSMessage_t3023349594, ___OnComplete_5)); }
	inline Action_t437523947 * get_OnComplete_5() const { return ___OnComplete_5; }
	inline Action_t437523947 ** get_address_of_OnComplete_5() { return &___OnComplete_5; }
	inline void set_OnComplete_5(Action_t437523947 * value)
	{
		___OnComplete_5 = value;
		Il2CppCodeGenWriteBarrier(&___OnComplete_5, value);
	}
};

struct IOSMessage_t3023349594_StaticFields
{
public:
	// System.Action IOSMessage::<>f__am$cache2
	Action_t437523947 * ___U3CU3Ef__amU24cache2_6;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_6() { return static_cast<int32_t>(offsetof(IOSMessage_t3023349594_StaticFields, ___U3CU3Ef__amU24cache2_6)); }
	inline Action_t437523947 * get_U3CU3Ef__amU24cache2_6() const { return ___U3CU3Ef__amU24cache2_6; }
	inline Action_t437523947 ** get_address_of_U3CU3Ef__amU24cache2_6() { return &___U3CU3Ef__amU24cache2_6; }
	inline void set_U3CU3Ef__amU24cache2_6(Action_t437523947 * value)
	{
		___U3CU3Ef__amU24cache2_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache2_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
