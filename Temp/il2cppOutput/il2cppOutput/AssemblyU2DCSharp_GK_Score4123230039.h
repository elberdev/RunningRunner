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

#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharp_GK_CollectionType2752839635.h"
#include "AssemblyU2DCSharp_GK_TimeSpan1784601810.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GK_Score
struct  GK_Score_t4123230039  : public Il2CppObject
{
public:
	// System.Int32 GK_Score::_Rank
	int32_t ____Rank_0;
	// System.Int64 GK_Score::_Score
	int64_t ____Score_1;
	// System.String GK_Score::_PlayerId
	String_t* ____PlayerId_2;
	// System.String GK_Score::_LeaderboardId
	String_t* ____LeaderboardId_3;
	// GK_CollectionType GK_Score::_Collection
	int32_t ____Collection_4;
	// GK_TimeSpan GK_Score::_TimeSpan
	int32_t ____TimeSpan_5;

public:
	inline static int32_t get_offset_of__Rank_0() { return static_cast<int32_t>(offsetof(GK_Score_t4123230039, ____Rank_0)); }
	inline int32_t get__Rank_0() const { return ____Rank_0; }
	inline int32_t* get_address_of__Rank_0() { return &____Rank_0; }
	inline void set__Rank_0(int32_t value)
	{
		____Rank_0 = value;
	}

	inline static int32_t get_offset_of__Score_1() { return static_cast<int32_t>(offsetof(GK_Score_t4123230039, ____Score_1)); }
	inline int64_t get__Score_1() const { return ____Score_1; }
	inline int64_t* get_address_of__Score_1() { return &____Score_1; }
	inline void set__Score_1(int64_t value)
	{
		____Score_1 = value;
	}

	inline static int32_t get_offset_of__PlayerId_2() { return static_cast<int32_t>(offsetof(GK_Score_t4123230039, ____PlayerId_2)); }
	inline String_t* get__PlayerId_2() const { return ____PlayerId_2; }
	inline String_t** get_address_of__PlayerId_2() { return &____PlayerId_2; }
	inline void set__PlayerId_2(String_t* value)
	{
		____PlayerId_2 = value;
		Il2CppCodeGenWriteBarrier(&____PlayerId_2, value);
	}

	inline static int32_t get_offset_of__LeaderboardId_3() { return static_cast<int32_t>(offsetof(GK_Score_t4123230039, ____LeaderboardId_3)); }
	inline String_t* get__LeaderboardId_3() const { return ____LeaderboardId_3; }
	inline String_t** get_address_of__LeaderboardId_3() { return &____LeaderboardId_3; }
	inline void set__LeaderboardId_3(String_t* value)
	{
		____LeaderboardId_3 = value;
		Il2CppCodeGenWriteBarrier(&____LeaderboardId_3, value);
	}

	inline static int32_t get_offset_of__Collection_4() { return static_cast<int32_t>(offsetof(GK_Score_t4123230039, ____Collection_4)); }
	inline int32_t get__Collection_4() const { return ____Collection_4; }
	inline int32_t* get_address_of__Collection_4() { return &____Collection_4; }
	inline void set__Collection_4(int32_t value)
	{
		____Collection_4 = value;
	}

	inline static int32_t get_offset_of__TimeSpan_5() { return static_cast<int32_t>(offsetof(GK_Score_t4123230039, ____TimeSpan_5)); }
	inline int32_t get__TimeSpan_5() const { return ____TimeSpan_5; }
	inline int32_t* get_address_of__TimeSpan_5() { return &____TimeSpan_5; }
	inline void set__TimeSpan_5(int32_t value)
	{
		____TimeSpan_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
