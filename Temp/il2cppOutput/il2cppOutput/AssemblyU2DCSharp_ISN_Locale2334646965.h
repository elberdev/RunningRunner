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

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ISN_Locale
struct  ISN_Locale_t2334646965  : public Il2CppObject
{
public:
	// System.String ISN_Locale::_CountryCode
	String_t* ____CountryCode_0;
	// System.String ISN_Locale::_DisplayCountry
	String_t* ____DisplayCountry_1;
	// System.String ISN_Locale::_LanguageCode
	String_t* ____LanguageCode_2;
	// System.String ISN_Locale::_DisplayLanguage
	String_t* ____DisplayLanguage_3;

public:
	inline static int32_t get_offset_of__CountryCode_0() { return static_cast<int32_t>(offsetof(ISN_Locale_t2334646965, ____CountryCode_0)); }
	inline String_t* get__CountryCode_0() const { return ____CountryCode_0; }
	inline String_t** get_address_of__CountryCode_0() { return &____CountryCode_0; }
	inline void set__CountryCode_0(String_t* value)
	{
		____CountryCode_0 = value;
		Il2CppCodeGenWriteBarrier(&____CountryCode_0, value);
	}

	inline static int32_t get_offset_of__DisplayCountry_1() { return static_cast<int32_t>(offsetof(ISN_Locale_t2334646965, ____DisplayCountry_1)); }
	inline String_t* get__DisplayCountry_1() const { return ____DisplayCountry_1; }
	inline String_t** get_address_of__DisplayCountry_1() { return &____DisplayCountry_1; }
	inline void set__DisplayCountry_1(String_t* value)
	{
		____DisplayCountry_1 = value;
		Il2CppCodeGenWriteBarrier(&____DisplayCountry_1, value);
	}

	inline static int32_t get_offset_of__LanguageCode_2() { return static_cast<int32_t>(offsetof(ISN_Locale_t2334646965, ____LanguageCode_2)); }
	inline String_t* get__LanguageCode_2() const { return ____LanguageCode_2; }
	inline String_t** get_address_of__LanguageCode_2() { return &____LanguageCode_2; }
	inline void set__LanguageCode_2(String_t* value)
	{
		____LanguageCode_2 = value;
		Il2CppCodeGenWriteBarrier(&____LanguageCode_2, value);
	}

	inline static int32_t get_offset_of__DisplayLanguage_3() { return static_cast<int32_t>(offsetof(ISN_Locale_t2334646965, ____DisplayLanguage_3)); }
	inline String_t* get__DisplayLanguage_3() const { return ____DisplayLanguage_3; }
	inline String_t** get_address_of__DisplayLanguage_3() { return &____DisplayLanguage_3; }
	inline void set__DisplayLanguage_3(String_t* value)
	{
		____DisplayLanguage_3 = value;
		Il2CppCodeGenWriteBarrier(&____DisplayLanguage_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
