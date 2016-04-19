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

#include "AssemblyU2DCSharp_BaseIOSFeaturePreview3923413614.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameCenterExample
struct  GameCenterExample_t752803939  : public BaseIOSFeaturePreview_t3923413614
{
public:
	// System.Int32 GameCenterExample::hiScore
	int32_t ___hiScore_12;
	// System.String GameCenterExample::TEST_LEADERBOARD_1
	String_t* ___TEST_LEADERBOARD_1_13;
	// System.String GameCenterExample::TEST_LEADERBOARD_2
	String_t* ___TEST_LEADERBOARD_2_14;
	// System.String GameCenterExample::TEST_ACHIEVEMENT_1_ID
	String_t* ___TEST_ACHIEVEMENT_1_ID_15;
	// System.String GameCenterExample::TEST_ACHIEVEMENT_2_ID
	String_t* ___TEST_ACHIEVEMENT_2_ID_16;

public:
	inline static int32_t get_offset_of_hiScore_12() { return static_cast<int32_t>(offsetof(GameCenterExample_t752803939, ___hiScore_12)); }
	inline int32_t get_hiScore_12() const { return ___hiScore_12; }
	inline int32_t* get_address_of_hiScore_12() { return &___hiScore_12; }
	inline void set_hiScore_12(int32_t value)
	{
		___hiScore_12 = value;
	}

	inline static int32_t get_offset_of_TEST_LEADERBOARD_1_13() { return static_cast<int32_t>(offsetof(GameCenterExample_t752803939, ___TEST_LEADERBOARD_1_13)); }
	inline String_t* get_TEST_LEADERBOARD_1_13() const { return ___TEST_LEADERBOARD_1_13; }
	inline String_t** get_address_of_TEST_LEADERBOARD_1_13() { return &___TEST_LEADERBOARD_1_13; }
	inline void set_TEST_LEADERBOARD_1_13(String_t* value)
	{
		___TEST_LEADERBOARD_1_13 = value;
		Il2CppCodeGenWriteBarrier(&___TEST_LEADERBOARD_1_13, value);
	}

	inline static int32_t get_offset_of_TEST_LEADERBOARD_2_14() { return static_cast<int32_t>(offsetof(GameCenterExample_t752803939, ___TEST_LEADERBOARD_2_14)); }
	inline String_t* get_TEST_LEADERBOARD_2_14() const { return ___TEST_LEADERBOARD_2_14; }
	inline String_t** get_address_of_TEST_LEADERBOARD_2_14() { return &___TEST_LEADERBOARD_2_14; }
	inline void set_TEST_LEADERBOARD_2_14(String_t* value)
	{
		___TEST_LEADERBOARD_2_14 = value;
		Il2CppCodeGenWriteBarrier(&___TEST_LEADERBOARD_2_14, value);
	}

	inline static int32_t get_offset_of_TEST_ACHIEVEMENT_1_ID_15() { return static_cast<int32_t>(offsetof(GameCenterExample_t752803939, ___TEST_ACHIEVEMENT_1_ID_15)); }
	inline String_t* get_TEST_ACHIEVEMENT_1_ID_15() const { return ___TEST_ACHIEVEMENT_1_ID_15; }
	inline String_t** get_address_of_TEST_ACHIEVEMENT_1_ID_15() { return &___TEST_ACHIEVEMENT_1_ID_15; }
	inline void set_TEST_ACHIEVEMENT_1_ID_15(String_t* value)
	{
		___TEST_ACHIEVEMENT_1_ID_15 = value;
		Il2CppCodeGenWriteBarrier(&___TEST_ACHIEVEMENT_1_ID_15, value);
	}

	inline static int32_t get_offset_of_TEST_ACHIEVEMENT_2_ID_16() { return static_cast<int32_t>(offsetof(GameCenterExample_t752803939, ___TEST_ACHIEVEMENT_2_ID_16)); }
	inline String_t* get_TEST_ACHIEVEMENT_2_ID_16() const { return ___TEST_ACHIEVEMENT_2_ID_16; }
	inline String_t** get_address_of_TEST_ACHIEVEMENT_2_ID_16() { return &___TEST_ACHIEVEMENT_2_ID_16; }
	inline void set_TEST_ACHIEVEMENT_2_ID_16(String_t* value)
	{
		___TEST_ACHIEVEMENT_2_ID_16 = value;
		Il2CppCodeGenWriteBarrier(&___TEST_ACHIEVEMENT_2_ID_16, value);
	}
};

struct GameCenterExample_t752803939_StaticFields
{
public:
	// System.Boolean GameCenterExample::IsInitialized
	bool ___IsInitialized_17;
	// System.Int64 GameCenterExample::LB2BestScores
	int64_t ___LB2BestScores_18;

public:
	inline static int32_t get_offset_of_IsInitialized_17() { return static_cast<int32_t>(offsetof(GameCenterExample_t752803939_StaticFields, ___IsInitialized_17)); }
	inline bool get_IsInitialized_17() const { return ___IsInitialized_17; }
	inline bool* get_address_of_IsInitialized_17() { return &___IsInitialized_17; }
	inline void set_IsInitialized_17(bool value)
	{
		___IsInitialized_17 = value;
	}

	inline static int32_t get_offset_of_LB2BestScores_18() { return static_cast<int32_t>(offsetof(GameCenterExample_t752803939_StaticFields, ___LB2BestScores_18)); }
	inline int64_t get_LB2BestScores_18() const { return ___LB2BestScores_18; }
	inline int64_t* get_address_of_LB2BestScores_18() { return &___LB2BestScores_18; }
	inline void set_LB2BestScores_18(int64_t value)
	{
		___LB2BestScores_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
