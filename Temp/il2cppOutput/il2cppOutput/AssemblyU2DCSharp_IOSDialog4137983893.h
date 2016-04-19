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

// IOSDialog
struct  IOSDialog_t4137983893  : public BaseIOSPopup_t653380272
{
public:
	// System.String IOSDialog::yes
	String_t* ___yes_4;
	// System.String IOSDialog::no
	String_t* ___no_5;
	// System.Action`1<IOSDialogResult> IOSDialog::OnComplete
	Action_1_t3472737651 * ___OnComplete_6;

public:
	inline static int32_t get_offset_of_yes_4() { return static_cast<int32_t>(offsetof(IOSDialog_t4137983893, ___yes_4)); }
	inline String_t* get_yes_4() const { return ___yes_4; }
	inline String_t** get_address_of_yes_4() { return &___yes_4; }
	inline void set_yes_4(String_t* value)
	{
		___yes_4 = value;
		Il2CppCodeGenWriteBarrier(&___yes_4, value);
	}

	inline static int32_t get_offset_of_no_5() { return static_cast<int32_t>(offsetof(IOSDialog_t4137983893, ___no_5)); }
	inline String_t* get_no_5() const { return ___no_5; }
	inline String_t** get_address_of_no_5() { return &___no_5; }
	inline void set_no_5(String_t* value)
	{
		___no_5 = value;
		Il2CppCodeGenWriteBarrier(&___no_5, value);
	}

	inline static int32_t get_offset_of_OnComplete_6() { return static_cast<int32_t>(offsetof(IOSDialog_t4137983893, ___OnComplete_6)); }
	inline Action_1_t3472737651 * get_OnComplete_6() const { return ___OnComplete_6; }
	inline Action_1_t3472737651 ** get_address_of_OnComplete_6() { return &___OnComplete_6; }
	inline void set_OnComplete_6(Action_1_t3472737651 * value)
	{
		___OnComplete_6 = value;
		Il2CppCodeGenWriteBarrier(&___OnComplete_6, value);
	}
};

struct IOSDialog_t4137983893_StaticFields
{
public:
	// System.Action`1<IOSDialogResult> IOSDialog::<>f__am$cache3
	Action_1_t3472737651 * ___U3CU3Ef__amU24cache3_7;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_7() { return static_cast<int32_t>(offsetof(IOSDialog_t4137983893_StaticFields, ___U3CU3Ef__amU24cache3_7)); }
	inline Action_1_t3472737651 * get_U3CU3Ef__amU24cache3_7() const { return ___U3CU3Ef__amU24cache3_7; }
	inline Action_1_t3472737651 ** get_address_of_U3CU3Ef__amU24cache3_7() { return &___U3CU3Ef__amU24cache3_7; }
	inline void set_U3CU3Ef__amU24cache3_7(Action_1_t3472737651 * value)
	{
		___U3CU3Ef__amU24cache3_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache3_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
