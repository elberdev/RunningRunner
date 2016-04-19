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
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Action`1<GK_SaveDataLoaded>
struct Action_1_t1903676392;

#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_DateTime339033936.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GK_SavedGame
struct  GK_SavedGame_t3944999262  : public Il2CppObject
{
public:
	// System.String GK_SavedGame::_Id
	String_t* ____Id_0;
	// System.String GK_SavedGame::_Name
	String_t* ____Name_1;
	// System.String GK_SavedGame::_DeviceName
	String_t* ____DeviceName_2;
	// System.DateTime GK_SavedGame::_ModificationDate
	DateTime_t339033936  ____ModificationDate_3;
	// System.Byte[] GK_SavedGame::_Data
	ByteU5BU5D_t58506160* ____Data_4;
	// System.Action`1<GK_SaveDataLoaded> GK_SavedGame::ActionDataLoaded
	Action_1_t1903676392 * ___ActionDataLoaded_5;

public:
	inline static int32_t get_offset_of__Id_0() { return static_cast<int32_t>(offsetof(GK_SavedGame_t3944999262, ____Id_0)); }
	inline String_t* get__Id_0() const { return ____Id_0; }
	inline String_t** get_address_of__Id_0() { return &____Id_0; }
	inline void set__Id_0(String_t* value)
	{
		____Id_0 = value;
		Il2CppCodeGenWriteBarrier(&____Id_0, value);
	}

	inline static int32_t get_offset_of__Name_1() { return static_cast<int32_t>(offsetof(GK_SavedGame_t3944999262, ____Name_1)); }
	inline String_t* get__Name_1() const { return ____Name_1; }
	inline String_t** get_address_of__Name_1() { return &____Name_1; }
	inline void set__Name_1(String_t* value)
	{
		____Name_1 = value;
		Il2CppCodeGenWriteBarrier(&____Name_1, value);
	}

	inline static int32_t get_offset_of__DeviceName_2() { return static_cast<int32_t>(offsetof(GK_SavedGame_t3944999262, ____DeviceName_2)); }
	inline String_t* get__DeviceName_2() const { return ____DeviceName_2; }
	inline String_t** get_address_of__DeviceName_2() { return &____DeviceName_2; }
	inline void set__DeviceName_2(String_t* value)
	{
		____DeviceName_2 = value;
		Il2CppCodeGenWriteBarrier(&____DeviceName_2, value);
	}

	inline static int32_t get_offset_of__ModificationDate_3() { return static_cast<int32_t>(offsetof(GK_SavedGame_t3944999262, ____ModificationDate_3)); }
	inline DateTime_t339033936  get__ModificationDate_3() const { return ____ModificationDate_3; }
	inline DateTime_t339033936 * get_address_of__ModificationDate_3() { return &____ModificationDate_3; }
	inline void set__ModificationDate_3(DateTime_t339033936  value)
	{
		____ModificationDate_3 = value;
	}

	inline static int32_t get_offset_of__Data_4() { return static_cast<int32_t>(offsetof(GK_SavedGame_t3944999262, ____Data_4)); }
	inline ByteU5BU5D_t58506160* get__Data_4() const { return ____Data_4; }
	inline ByteU5BU5D_t58506160** get_address_of__Data_4() { return &____Data_4; }
	inline void set__Data_4(ByteU5BU5D_t58506160* value)
	{
		____Data_4 = value;
		Il2CppCodeGenWriteBarrier(&____Data_4, value);
	}

	inline static int32_t get_offset_of_ActionDataLoaded_5() { return static_cast<int32_t>(offsetof(GK_SavedGame_t3944999262, ___ActionDataLoaded_5)); }
	inline Action_1_t1903676392 * get_ActionDataLoaded_5() const { return ___ActionDataLoaded_5; }
	inline Action_1_t1903676392 ** get_address_of_ActionDataLoaded_5() { return &___ActionDataLoaded_5; }
	inline void set_ActionDataLoaded_5(Action_1_t1903676392 * value)
	{
		___ActionDataLoaded_5 = value;
		Il2CppCodeGenWriteBarrier(&___ActionDataLoaded_5, value);
	}
};

struct GK_SavedGame_t3944999262_StaticFields
{
public:
	// System.Action`1<GK_SaveDataLoaded> GK_SavedGame::<>f__am$cache6
	Action_1_t1903676392 * ___U3CU3Ef__amU24cache6_6;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache6_6() { return static_cast<int32_t>(offsetof(GK_SavedGame_t3944999262_StaticFields, ___U3CU3Ef__amU24cache6_6)); }
	inline Action_1_t1903676392 * get_U3CU3Ef__amU24cache6_6() const { return ___U3CU3Ef__amU24cache6_6; }
	inline Action_1_t1903676392 ** get_address_of_U3CU3Ef__amU24cache6_6() { return &___U3CU3Ef__amU24cache6_6; }
	inline void set_U3CU3Ef__amU24cache6_6(Action_1_t1903676392 * value)
	{
		___U3CU3Ef__amU24cache6_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache6_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
