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
#include "mscorlib_System_DateTime339033936.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ISN_LocalNotification
struct  ISN_LocalNotification_t792750267  : public Il2CppObject
{
public:
	// System.Int32 ISN_LocalNotification::_Id
	int32_t ____Id_1;
	// System.DateTime ISN_LocalNotification::_Date
	DateTime_t339033936  ____Date_2;
	// System.String ISN_LocalNotification::_Message
	String_t* ____Message_3;
	// System.Boolean ISN_LocalNotification::_UseSound
	bool ____UseSound_4;
	// System.Int32 ISN_LocalNotification::_Badges
	int32_t ____Badges_5;
	// System.String ISN_LocalNotification::_Data
	String_t* ____Data_6;
	// System.String ISN_LocalNotification::_SoundName
	String_t* ____SoundName_7;

public:
	inline static int32_t get_offset_of__Id_1() { return static_cast<int32_t>(offsetof(ISN_LocalNotification_t792750267, ____Id_1)); }
	inline int32_t get__Id_1() const { return ____Id_1; }
	inline int32_t* get_address_of__Id_1() { return &____Id_1; }
	inline void set__Id_1(int32_t value)
	{
		____Id_1 = value;
	}

	inline static int32_t get_offset_of__Date_2() { return static_cast<int32_t>(offsetof(ISN_LocalNotification_t792750267, ____Date_2)); }
	inline DateTime_t339033936  get__Date_2() const { return ____Date_2; }
	inline DateTime_t339033936 * get_address_of__Date_2() { return &____Date_2; }
	inline void set__Date_2(DateTime_t339033936  value)
	{
		____Date_2 = value;
	}

	inline static int32_t get_offset_of__Message_3() { return static_cast<int32_t>(offsetof(ISN_LocalNotification_t792750267, ____Message_3)); }
	inline String_t* get__Message_3() const { return ____Message_3; }
	inline String_t** get_address_of__Message_3() { return &____Message_3; }
	inline void set__Message_3(String_t* value)
	{
		____Message_3 = value;
		Il2CppCodeGenWriteBarrier(&____Message_3, value);
	}

	inline static int32_t get_offset_of__UseSound_4() { return static_cast<int32_t>(offsetof(ISN_LocalNotification_t792750267, ____UseSound_4)); }
	inline bool get__UseSound_4() const { return ____UseSound_4; }
	inline bool* get_address_of__UseSound_4() { return &____UseSound_4; }
	inline void set__UseSound_4(bool value)
	{
		____UseSound_4 = value;
	}

	inline static int32_t get_offset_of__Badges_5() { return static_cast<int32_t>(offsetof(ISN_LocalNotification_t792750267, ____Badges_5)); }
	inline int32_t get__Badges_5() const { return ____Badges_5; }
	inline int32_t* get_address_of__Badges_5() { return &____Badges_5; }
	inline void set__Badges_5(int32_t value)
	{
		____Badges_5 = value;
	}

	inline static int32_t get_offset_of__Data_6() { return static_cast<int32_t>(offsetof(ISN_LocalNotification_t792750267, ____Data_6)); }
	inline String_t* get__Data_6() const { return ____Data_6; }
	inline String_t** get_address_of__Data_6() { return &____Data_6; }
	inline void set__Data_6(String_t* value)
	{
		____Data_6 = value;
		Il2CppCodeGenWriteBarrier(&____Data_6, value);
	}

	inline static int32_t get_offset_of__SoundName_7() { return static_cast<int32_t>(offsetof(ISN_LocalNotification_t792750267, ____SoundName_7)); }
	inline String_t* get__SoundName_7() const { return ____SoundName_7; }
	inline String_t** get_address_of__SoundName_7() { return &____SoundName_7; }
	inline void set__SoundName_7(String_t* value)
	{
		____SoundName_7 = value;
		Il2CppCodeGenWriteBarrier(&____SoundName_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
