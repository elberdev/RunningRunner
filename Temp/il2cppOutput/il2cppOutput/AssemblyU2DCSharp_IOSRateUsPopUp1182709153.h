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
// System.Action`1<IOSDialogResult>
struct Action_1_t3472737651;

#include "AssemblyU2DCSharp_BaseIOSPopup653380272.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IOSRateUsPopUp
struct  IOSRateUsPopUp_t1182709153  : public BaseIOSPopup_t653380272
{
public:
	// System.String IOSRateUsPopUp::rate
	String_t* ___rate_4;
	// System.String IOSRateUsPopUp::remind
	String_t* ___remind_5;
	// System.String IOSRateUsPopUp::declined
	String_t* ___declined_6;
	// System.Action`1<IOSDialogResult> IOSRateUsPopUp::OnComplete
	Action_1_t3472737651 * ___OnComplete_7;

public:
	inline static int32_t get_offset_of_rate_4() { return static_cast<int32_t>(offsetof(IOSRateUsPopUp_t1182709153, ___rate_4)); }
	inline String_t* get_rate_4() const { return ___rate_4; }
	inline String_t** get_address_of_rate_4() { return &___rate_4; }
	inline void set_rate_4(String_t* value)
	{
		___rate_4 = value;
		Il2CppCodeGenWriteBarrier(&___rate_4, value);
	}

	inline static int32_t get_offset_of_remind_5() { return static_cast<int32_t>(offsetof(IOSRateUsPopUp_t1182709153, ___remind_5)); }
	inline String_t* get_remind_5() const { return ___remind_5; }
	inline String_t** get_address_of_remind_5() { return &___remind_5; }
	inline void set_remind_5(String_t* value)
	{
		___remind_5 = value;
		Il2CppCodeGenWriteBarrier(&___remind_5, value);
	}

	inline static int32_t get_offset_of_declined_6() { return static_cast<int32_t>(offsetof(IOSRateUsPopUp_t1182709153, ___declined_6)); }
	inline String_t* get_declined_6() const { return ___declined_6; }
	inline String_t** get_address_of_declined_6() { return &___declined_6; }
	inline void set_declined_6(String_t* value)
	{
		___declined_6 = value;
		Il2CppCodeGenWriteBarrier(&___declined_6, value);
	}

	inline static int32_t get_offset_of_OnComplete_7() { return static_cast<int32_t>(offsetof(IOSRateUsPopUp_t1182709153, ___OnComplete_7)); }
	inline Action_1_t3472737651 * get_OnComplete_7() const { return ___OnComplete_7; }
	inline Action_1_t3472737651 ** get_address_of_OnComplete_7() { return &___OnComplete_7; }
	inline void set_OnComplete_7(Action_1_t3472737651 * value)
	{
		___OnComplete_7 = value;
		Il2CppCodeGenWriteBarrier(&___OnComplete_7, value);
	}
};

struct IOSRateUsPopUp_t1182709153_StaticFields
{
public:
	// System.Action`1<IOSDialogResult> IOSRateUsPopUp::<>f__am$cache4
	Action_1_t3472737651 * ___U3CU3Ef__amU24cache4_8;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache4_8() { return static_cast<int32_t>(offsetof(IOSRateUsPopUp_t1182709153_StaticFields, ___U3CU3Ef__amU24cache4_8)); }
	inline Action_1_t3472737651 * get_U3CU3Ef__amU24cache4_8() const { return ___U3CU3Ef__amU24cache4_8; }
	inline Action_1_t3472737651 ** get_address_of_U3CU3Ef__amU24cache4_8() { return &___U3CU3Ef__amU24cache4_8; }
	inline void set_U3CU3Ef__amU24cache4_8(Action_1_t3472737651 * value)
	{
		___U3CU3Ef__amU24cache4_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache4_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
