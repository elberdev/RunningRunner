#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`1<ISN_Result>
struct Action_1_t2646135257;
// System.Action`1<ReplayKitVideoShareResult>
struct Action_1_t1665893937;
// System.Action`1<ISN_Error>
struct Action_1_t3265444782;
// System.Action`1<System.Boolean>
struct Action_1_t359458046;
// System.Action
struct Action_t437523947;

#include "AssemblyU2DCSharp_ISN_Singleton_1_gen600486834.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ISN_ReplayKit
struct  ISN_ReplayKit_t3812330292  : public ISN_Singleton_1_t600486834
{
public:
	// System.Boolean ISN_ReplayKit::_IsRecodingAvailableToShare
	bool ____IsRecodingAvailableToShare_4;

public:
	inline static int32_t get_offset_of__IsRecodingAvailableToShare_4() { return static_cast<int32_t>(offsetof(ISN_ReplayKit_t3812330292, ____IsRecodingAvailableToShare_4)); }
	inline bool get__IsRecodingAvailableToShare_4() const { return ____IsRecodingAvailableToShare_4; }
	inline bool* get_address_of__IsRecodingAvailableToShare_4() { return &____IsRecodingAvailableToShare_4; }
	inline void set__IsRecodingAvailableToShare_4(bool value)
	{
		____IsRecodingAvailableToShare_4 = value;
	}
};

struct ISN_ReplayKit_t3812330292_StaticFields
{
public:
	// System.Action`1<ISN_Result> ISN_ReplayKit::ActionRecordStarted
	Action_1_t2646135257 * ___ActionRecordStarted_5;
	// System.Action`1<ISN_Result> ISN_ReplayKit::ActionRecordStoped
	Action_1_t2646135257 * ___ActionRecordStoped_6;
	// System.Action`1<ReplayKitVideoShareResult> ISN_ReplayKit::ActionShareDialogFinished
	Action_1_t1665893937 * ___ActionShareDialogFinished_7;
	// System.Action`1<ISN_Error> ISN_ReplayKit::ActionRecordInterrupted
	Action_1_t3265444782 * ___ActionRecordInterrupted_8;
	// System.Action`1<System.Boolean> ISN_ReplayKit::ActionRecorderDidChangeAvailability
	Action_1_t359458046 * ___ActionRecorderDidChangeAvailability_9;
	// System.Action ISN_ReplayKit::ActionRecordDiscard
	Action_t437523947 * ___ActionRecordDiscard_10;
	// System.Action`1<ISN_Result> ISN_ReplayKit::<>f__am$cache7
	Action_1_t2646135257 * ___U3CU3Ef__amU24cache7_11;
	// System.Action`1<ISN_Result> ISN_ReplayKit::<>f__am$cache8
	Action_1_t2646135257 * ___U3CU3Ef__amU24cache8_12;
	// System.Action`1<ReplayKitVideoShareResult> ISN_ReplayKit::<>f__am$cache9
	Action_1_t1665893937 * ___U3CU3Ef__amU24cache9_13;
	// System.Action`1<ISN_Error> ISN_ReplayKit::<>f__am$cacheA
	Action_1_t3265444782 * ___U3CU3Ef__amU24cacheA_14;
	// System.Action`1<System.Boolean> ISN_ReplayKit::<>f__am$cacheB
	Action_1_t359458046 * ___U3CU3Ef__amU24cacheB_15;
	// System.Action ISN_ReplayKit::<>f__am$cacheC
	Action_t437523947 * ___U3CU3Ef__amU24cacheC_16;

public:
	inline static int32_t get_offset_of_ActionRecordStarted_5() { return static_cast<int32_t>(offsetof(ISN_ReplayKit_t3812330292_StaticFields, ___ActionRecordStarted_5)); }
	inline Action_1_t2646135257 * get_ActionRecordStarted_5() const { return ___ActionRecordStarted_5; }
	inline Action_1_t2646135257 ** get_address_of_ActionRecordStarted_5() { return &___ActionRecordStarted_5; }
	inline void set_ActionRecordStarted_5(Action_1_t2646135257 * value)
	{
		___ActionRecordStarted_5 = value;
		Il2CppCodeGenWriteBarrier(&___ActionRecordStarted_5, value);
	}

	inline static int32_t get_offset_of_ActionRecordStoped_6() { return static_cast<int32_t>(offsetof(ISN_ReplayKit_t3812330292_StaticFields, ___ActionRecordStoped_6)); }
	inline Action_1_t2646135257 * get_ActionRecordStoped_6() const { return ___ActionRecordStoped_6; }
	inline Action_1_t2646135257 ** get_address_of_ActionRecordStoped_6() { return &___ActionRecordStoped_6; }
	inline void set_ActionRecordStoped_6(Action_1_t2646135257 * value)
	{
		___ActionRecordStoped_6 = value;
		Il2CppCodeGenWriteBarrier(&___ActionRecordStoped_6, value);
	}

	inline static int32_t get_offset_of_ActionShareDialogFinished_7() { return static_cast<int32_t>(offsetof(ISN_ReplayKit_t3812330292_StaticFields, ___ActionShareDialogFinished_7)); }
	inline Action_1_t1665893937 * get_ActionShareDialogFinished_7() const { return ___ActionShareDialogFinished_7; }
	inline Action_1_t1665893937 ** get_address_of_ActionShareDialogFinished_7() { return &___ActionShareDialogFinished_7; }
	inline void set_ActionShareDialogFinished_7(Action_1_t1665893937 * value)
	{
		___ActionShareDialogFinished_7 = value;
		Il2CppCodeGenWriteBarrier(&___ActionShareDialogFinished_7, value);
	}

	inline static int32_t get_offset_of_ActionRecordInterrupted_8() { return static_cast<int32_t>(offsetof(ISN_ReplayKit_t3812330292_StaticFields, ___ActionRecordInterrupted_8)); }
	inline Action_1_t3265444782 * get_ActionRecordInterrupted_8() const { return ___ActionRecordInterrupted_8; }
	inline Action_1_t3265444782 ** get_address_of_ActionRecordInterrupted_8() { return &___ActionRecordInterrupted_8; }
	inline void set_ActionRecordInterrupted_8(Action_1_t3265444782 * value)
	{
		___ActionRecordInterrupted_8 = value;
		Il2CppCodeGenWriteBarrier(&___ActionRecordInterrupted_8, value);
	}

	inline static int32_t get_offset_of_ActionRecorderDidChangeAvailability_9() { return static_cast<int32_t>(offsetof(ISN_ReplayKit_t3812330292_StaticFields, ___ActionRecorderDidChangeAvailability_9)); }
	inline Action_1_t359458046 * get_ActionRecorderDidChangeAvailability_9() const { return ___ActionRecorderDidChangeAvailability_9; }
	inline Action_1_t359458046 ** get_address_of_ActionRecorderDidChangeAvailability_9() { return &___ActionRecorderDidChangeAvailability_9; }
	inline void set_ActionRecorderDidChangeAvailability_9(Action_1_t359458046 * value)
	{
		___ActionRecorderDidChangeAvailability_9 = value;
		Il2CppCodeGenWriteBarrier(&___ActionRecorderDidChangeAvailability_9, value);
	}

	inline static int32_t get_offset_of_ActionRecordDiscard_10() { return static_cast<int32_t>(offsetof(ISN_ReplayKit_t3812330292_StaticFields, ___ActionRecordDiscard_10)); }
	inline Action_t437523947 * get_ActionRecordDiscard_10() const { return ___ActionRecordDiscard_10; }
	inline Action_t437523947 ** get_address_of_ActionRecordDiscard_10() { return &___ActionRecordDiscard_10; }
	inline void set_ActionRecordDiscard_10(Action_t437523947 * value)
	{
		___ActionRecordDiscard_10 = value;
		Il2CppCodeGenWriteBarrier(&___ActionRecordDiscard_10, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache7_11() { return static_cast<int32_t>(offsetof(ISN_ReplayKit_t3812330292_StaticFields, ___U3CU3Ef__amU24cache7_11)); }
	inline Action_1_t2646135257 * get_U3CU3Ef__amU24cache7_11() const { return ___U3CU3Ef__amU24cache7_11; }
	inline Action_1_t2646135257 ** get_address_of_U3CU3Ef__amU24cache7_11() { return &___U3CU3Ef__amU24cache7_11; }
	inline void set_U3CU3Ef__amU24cache7_11(Action_1_t2646135257 * value)
	{
		___U3CU3Ef__amU24cache7_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache7_11, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache8_12() { return static_cast<int32_t>(offsetof(ISN_ReplayKit_t3812330292_StaticFields, ___U3CU3Ef__amU24cache8_12)); }
	inline Action_1_t2646135257 * get_U3CU3Ef__amU24cache8_12() const { return ___U3CU3Ef__amU24cache8_12; }
	inline Action_1_t2646135257 ** get_address_of_U3CU3Ef__amU24cache8_12() { return &___U3CU3Ef__amU24cache8_12; }
	inline void set_U3CU3Ef__amU24cache8_12(Action_1_t2646135257 * value)
	{
		___U3CU3Ef__amU24cache8_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache8_12, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache9_13() { return static_cast<int32_t>(offsetof(ISN_ReplayKit_t3812330292_StaticFields, ___U3CU3Ef__amU24cache9_13)); }
	inline Action_1_t1665893937 * get_U3CU3Ef__amU24cache9_13() const { return ___U3CU3Ef__amU24cache9_13; }
	inline Action_1_t1665893937 ** get_address_of_U3CU3Ef__amU24cache9_13() { return &___U3CU3Ef__amU24cache9_13; }
	inline void set_U3CU3Ef__amU24cache9_13(Action_1_t1665893937 * value)
	{
		___U3CU3Ef__amU24cache9_13 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache9_13, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheA_14() { return static_cast<int32_t>(offsetof(ISN_ReplayKit_t3812330292_StaticFields, ___U3CU3Ef__amU24cacheA_14)); }
	inline Action_1_t3265444782 * get_U3CU3Ef__amU24cacheA_14() const { return ___U3CU3Ef__amU24cacheA_14; }
	inline Action_1_t3265444782 ** get_address_of_U3CU3Ef__amU24cacheA_14() { return &___U3CU3Ef__amU24cacheA_14; }
	inline void set_U3CU3Ef__amU24cacheA_14(Action_1_t3265444782 * value)
	{
		___U3CU3Ef__amU24cacheA_14 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheA_14, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(ISN_ReplayKit_t3812330292_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Action_1_t359458046 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Action_1_t359458046 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Action_1_t359458046 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheB_15, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheC_16() { return static_cast<int32_t>(offsetof(ISN_ReplayKit_t3812330292_StaticFields, ___U3CU3Ef__amU24cacheC_16)); }
	inline Action_t437523947 * get_U3CU3Ef__amU24cacheC_16() const { return ___U3CU3Ef__amU24cacheC_16; }
	inline Action_t437523947 ** get_address_of_U3CU3Ef__amU24cacheC_16() { return &___U3CU3Ef__amU24cacheC_16; }
	inline void set_U3CU3Ef__amU24cacheC_16(Action_t437523947 * value)
	{
		___U3CU3Ef__amU24cacheC_16 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheC_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
