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
// System.Collections.Generic.List`1<GK_Score>
struct List_1_t625221712;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GK_LocalPlayerScoreUpdateListener
struct  GK_LocalPlayerScoreUpdateListener_t2547964126  : public Il2CppObject
{
public:
	// System.Int32 GK_LocalPlayerScoreUpdateListener::_RequestId
	int32_t ____RequestId_0;
	// System.Boolean GK_LocalPlayerScoreUpdateListener::_IsInternal
	bool ____IsInternal_1;
	// System.String GK_LocalPlayerScoreUpdateListener::_leaderboardId
	String_t* ____leaderboardId_2;
	// System.String GK_LocalPlayerScoreUpdateListener::_ErrorData
	String_t* ____ErrorData_3;
	// System.Collections.Generic.List`1<GK_Score> GK_LocalPlayerScoreUpdateListener::Scores
	List_1_t625221712 * ___Scores_4;

public:
	inline static int32_t get_offset_of__RequestId_0() { return static_cast<int32_t>(offsetof(GK_LocalPlayerScoreUpdateListener_t2547964126, ____RequestId_0)); }
	inline int32_t get__RequestId_0() const { return ____RequestId_0; }
	inline int32_t* get_address_of__RequestId_0() { return &____RequestId_0; }
	inline void set__RequestId_0(int32_t value)
	{
		____RequestId_0 = value;
	}

	inline static int32_t get_offset_of__IsInternal_1() { return static_cast<int32_t>(offsetof(GK_LocalPlayerScoreUpdateListener_t2547964126, ____IsInternal_1)); }
	inline bool get__IsInternal_1() const { return ____IsInternal_1; }
	inline bool* get_address_of__IsInternal_1() { return &____IsInternal_1; }
	inline void set__IsInternal_1(bool value)
	{
		____IsInternal_1 = value;
	}

	inline static int32_t get_offset_of__leaderboardId_2() { return static_cast<int32_t>(offsetof(GK_LocalPlayerScoreUpdateListener_t2547964126, ____leaderboardId_2)); }
	inline String_t* get__leaderboardId_2() const { return ____leaderboardId_2; }
	inline String_t** get_address_of__leaderboardId_2() { return &____leaderboardId_2; }
	inline void set__leaderboardId_2(String_t* value)
	{
		____leaderboardId_2 = value;
		Il2CppCodeGenWriteBarrier(&____leaderboardId_2, value);
	}

	inline static int32_t get_offset_of__ErrorData_3() { return static_cast<int32_t>(offsetof(GK_LocalPlayerScoreUpdateListener_t2547964126, ____ErrorData_3)); }
	inline String_t* get__ErrorData_3() const { return ____ErrorData_3; }
	inline String_t** get_address_of__ErrorData_3() { return &____ErrorData_3; }
	inline void set__ErrorData_3(String_t* value)
	{
		____ErrorData_3 = value;
		Il2CppCodeGenWriteBarrier(&____ErrorData_3, value);
	}

	inline static int32_t get_offset_of_Scores_4() { return static_cast<int32_t>(offsetof(GK_LocalPlayerScoreUpdateListener_t2547964126, ___Scores_4)); }
	inline List_1_t625221712 * get_Scores_4() const { return ___Scores_4; }
	inline List_1_t625221712 ** get_address_of_Scores_4() { return &___Scores_4; }
	inline void set_Scores_4(List_1_t625221712 * value)
	{
		___Scores_4 = value;
		Il2CppCodeGenWriteBarrier(&___Scores_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
