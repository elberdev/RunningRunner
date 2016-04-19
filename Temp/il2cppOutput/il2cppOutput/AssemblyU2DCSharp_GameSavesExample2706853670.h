#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<GK_SavedGame>>
struct Dictionary_2_t2084688839;
// System.String
struct String_t;

#include "AssemblyU2DCSharp_BaseIOSFeaturePreview3923413614.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameSavesExample
struct  GameSavesExample_t2706853670  : public BaseIOSFeaturePreview_t3923413614
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<GK_SavedGame>> GameSavesExample::GameSaves
	Dictionary_2_t2084688839 * ___GameSaves_12;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<GK_SavedGame>> GameSavesExample::SavesConflicts
	Dictionary_2_t2084688839 * ___SavesConflicts_13;
	// System.String GameSavesExample::test_name
	String_t* ___test_name_14;
	// System.String GameSavesExample::test_name_2
	String_t* ___test_name_2_15;

public:
	inline static int32_t get_offset_of_GameSaves_12() { return static_cast<int32_t>(offsetof(GameSavesExample_t2706853670, ___GameSaves_12)); }
	inline Dictionary_2_t2084688839 * get_GameSaves_12() const { return ___GameSaves_12; }
	inline Dictionary_2_t2084688839 ** get_address_of_GameSaves_12() { return &___GameSaves_12; }
	inline void set_GameSaves_12(Dictionary_2_t2084688839 * value)
	{
		___GameSaves_12 = value;
		Il2CppCodeGenWriteBarrier(&___GameSaves_12, value);
	}

	inline static int32_t get_offset_of_SavesConflicts_13() { return static_cast<int32_t>(offsetof(GameSavesExample_t2706853670, ___SavesConflicts_13)); }
	inline Dictionary_2_t2084688839 * get_SavesConflicts_13() const { return ___SavesConflicts_13; }
	inline Dictionary_2_t2084688839 ** get_address_of_SavesConflicts_13() { return &___SavesConflicts_13; }
	inline void set_SavesConflicts_13(Dictionary_2_t2084688839 * value)
	{
		___SavesConflicts_13 = value;
		Il2CppCodeGenWriteBarrier(&___SavesConflicts_13, value);
	}

	inline static int32_t get_offset_of_test_name_14() { return static_cast<int32_t>(offsetof(GameSavesExample_t2706853670, ___test_name_14)); }
	inline String_t* get_test_name_14() const { return ___test_name_14; }
	inline String_t** get_address_of_test_name_14() { return &___test_name_14; }
	inline void set_test_name_14(String_t* value)
	{
		___test_name_14 = value;
		Il2CppCodeGenWriteBarrier(&___test_name_14, value);
	}

	inline static int32_t get_offset_of_test_name_2_15() { return static_cast<int32_t>(offsetof(GameSavesExample_t2706853670, ___test_name_2_15)); }
	inline String_t* get_test_name_2_15() const { return ___test_name_2_15; }
	inline String_t** get_address_of_test_name_2_15() { return &___test_name_2_15; }
	inline void set_test_name_2_15(String_t* value)
	{
		___test_name_2_15 = value;
		Il2CppCodeGenWriteBarrier(&___test_name_2_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
