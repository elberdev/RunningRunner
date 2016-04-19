#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Texture2D>
struct Dictionary_2_t4147236426;
// System.String
struct String_t;
// System.Action`1<UnityEngine.Texture2D>
struct Action_1_t2657991227;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WWWTextureLoader
struct  WWWTextureLoader_t695118039  : public MonoBehaviour_t3012272455
{
public:
	// System.String WWWTextureLoader::_url
	String_t* ____url_3;
	// System.Action`1<UnityEngine.Texture2D> WWWTextureLoader::OnLoad
	Action_1_t2657991227 * ___OnLoad_4;

public:
	inline static int32_t get_offset_of__url_3() { return static_cast<int32_t>(offsetof(WWWTextureLoader_t695118039, ____url_3)); }
	inline String_t* get__url_3() const { return ____url_3; }
	inline String_t** get_address_of__url_3() { return &____url_3; }
	inline void set__url_3(String_t* value)
	{
		____url_3 = value;
		Il2CppCodeGenWriteBarrier(&____url_3, value);
	}

	inline static int32_t get_offset_of_OnLoad_4() { return static_cast<int32_t>(offsetof(WWWTextureLoader_t695118039, ___OnLoad_4)); }
	inline Action_1_t2657991227 * get_OnLoad_4() const { return ___OnLoad_4; }
	inline Action_1_t2657991227 ** get_address_of_OnLoad_4() { return &___OnLoad_4; }
	inline void set_OnLoad_4(Action_1_t2657991227 * value)
	{
		___OnLoad_4 = value;
		Il2CppCodeGenWriteBarrier(&___OnLoad_4, value);
	}
};

struct WWWTextureLoader_t695118039_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Texture2D> WWWTextureLoader::LocalCache
	Dictionary_2_t4147236426 * ___LocalCache_2;
	// System.Action`1<UnityEngine.Texture2D> WWWTextureLoader::<>f__am$cache3
	Action_1_t2657991227 * ___U3CU3Ef__amU24cache3_5;

public:
	inline static int32_t get_offset_of_LocalCache_2() { return static_cast<int32_t>(offsetof(WWWTextureLoader_t695118039_StaticFields, ___LocalCache_2)); }
	inline Dictionary_2_t4147236426 * get_LocalCache_2() const { return ___LocalCache_2; }
	inline Dictionary_2_t4147236426 ** get_address_of_LocalCache_2() { return &___LocalCache_2; }
	inline void set_LocalCache_2(Dictionary_2_t4147236426 * value)
	{
		___LocalCache_2 = value;
		Il2CppCodeGenWriteBarrier(&___LocalCache_2, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_5() { return static_cast<int32_t>(offsetof(WWWTextureLoader_t695118039_StaticFields, ___U3CU3Ef__amU24cache3_5)); }
	inline Action_1_t2657991227 * get_U3CU3Ef__amU24cache3_5() const { return ___U3CU3Ef__amU24cache3_5; }
	inline Action_1_t2657991227 ** get_address_of_U3CU3Ef__amU24cache3_5() { return &___U3CU3Ef__amU24cache3_5; }
	inline void set_U3CU3Ef__amU24cache3_5(Action_1_t2657991227 * value)
	{
		___U3CU3Ef__amU24cache3_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache3_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
