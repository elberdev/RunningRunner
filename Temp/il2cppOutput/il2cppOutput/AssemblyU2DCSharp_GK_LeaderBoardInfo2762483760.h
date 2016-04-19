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
// UnityEngine.Texture2D
struct Texture2D_t2509538522;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GK_LeaderBoardInfo
struct  GK_LeaderBoardInfo_t2762483760  : public Il2CppObject
{
public:
	// System.String GK_LeaderBoardInfo::Title
	String_t* ___Title_0;
	// System.String GK_LeaderBoardInfo::Description
	String_t* ___Description_1;
	// System.String GK_LeaderBoardInfo::Identifier
	String_t* ___Identifier_2;
	// UnityEngine.Texture2D GK_LeaderBoardInfo::Texture
	Texture2D_t2509538522 * ___Texture_3;
	// System.Int32 GK_LeaderBoardInfo::MaxRange
	int32_t ___MaxRange_4;

public:
	inline static int32_t get_offset_of_Title_0() { return static_cast<int32_t>(offsetof(GK_LeaderBoardInfo_t2762483760, ___Title_0)); }
	inline String_t* get_Title_0() const { return ___Title_0; }
	inline String_t** get_address_of_Title_0() { return &___Title_0; }
	inline void set_Title_0(String_t* value)
	{
		___Title_0 = value;
		Il2CppCodeGenWriteBarrier(&___Title_0, value);
	}

	inline static int32_t get_offset_of_Description_1() { return static_cast<int32_t>(offsetof(GK_LeaderBoardInfo_t2762483760, ___Description_1)); }
	inline String_t* get_Description_1() const { return ___Description_1; }
	inline String_t** get_address_of_Description_1() { return &___Description_1; }
	inline void set_Description_1(String_t* value)
	{
		___Description_1 = value;
		Il2CppCodeGenWriteBarrier(&___Description_1, value);
	}

	inline static int32_t get_offset_of_Identifier_2() { return static_cast<int32_t>(offsetof(GK_LeaderBoardInfo_t2762483760, ___Identifier_2)); }
	inline String_t* get_Identifier_2() const { return ___Identifier_2; }
	inline String_t** get_address_of_Identifier_2() { return &___Identifier_2; }
	inline void set_Identifier_2(String_t* value)
	{
		___Identifier_2 = value;
		Il2CppCodeGenWriteBarrier(&___Identifier_2, value);
	}

	inline static int32_t get_offset_of_Texture_3() { return static_cast<int32_t>(offsetof(GK_LeaderBoardInfo_t2762483760, ___Texture_3)); }
	inline Texture2D_t2509538522 * get_Texture_3() const { return ___Texture_3; }
	inline Texture2D_t2509538522 ** get_address_of_Texture_3() { return &___Texture_3; }
	inline void set_Texture_3(Texture2D_t2509538522 * value)
	{
		___Texture_3 = value;
		Il2CppCodeGenWriteBarrier(&___Texture_3, value);
	}

	inline static int32_t get_offset_of_MaxRange_4() { return static_cast<int32_t>(offsetof(GK_LeaderBoardInfo_t2762483760, ___MaxRange_4)); }
	inline int32_t get_MaxRange_4() const { return ___MaxRange_4; }
	inline int32_t* get_address_of_MaxRange_4() { return &___MaxRange_4; }
	inline void set_MaxRange_4(int32_t value)
	{
		___MaxRange_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
