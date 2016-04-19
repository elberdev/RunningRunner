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
// System.Collections.Generic.List`1<ISD_Framework>
struct List_1_t2104926514;
// System.Collections.Generic.List`1<ISD_Lib>
struct List_1_t3602143737;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1765447871;
// System.Collections.Generic.List`1<ISD_Variable>
struct List_1_t1234514394;
// ISDSettings
struct ISDSettings_t1687241373;

#include "UnityEngine_UnityEngine_ScriptableObject184905905.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ISDSettings
struct  ISDSettings_t1687241373  : public ScriptableObject_t184905905
{
public:
	// System.Boolean ISDSettings::IsfwSettingOpen
	bool ___IsfwSettingOpen_5;
	// System.Boolean ISDSettings::IsLibSettingOpen
	bool ___IsLibSettingOpen_6;
	// System.Boolean ISDSettings::IslinkerSettingOpne
	bool ___IslinkerSettingOpne_7;
	// System.Boolean ISDSettings::IscompilerSettingsOpen
	bool ___IscompilerSettingsOpen_8;
	// System.Boolean ISDSettings::IsPlistSettingsOpen
	bool ___IsPlistSettingsOpen_9;
	// System.Boolean ISDSettings::IsLanguageSettingOpen
	bool ___IsLanguageSettingOpen_10;
	// System.Collections.Generic.List`1<ISD_Framework> ISDSettings::Frameworks
	List_1_t2104926514 * ___Frameworks_11;
	// System.Collections.Generic.List`1<ISD_Lib> ISDSettings::Libraries
	List_1_t3602143737 * ___Libraries_12;
	// System.Collections.Generic.List`1<System.String> ISDSettings::compileFlags
	List_1_t1765447871 * ___compileFlags_13;
	// System.Collections.Generic.List`1<System.String> ISDSettings::linkFlags
	List_1_t1765447871 * ___linkFlags_14;
	// System.Collections.Generic.List`1<ISD_Variable> ISDSettings::PlistVariables
	List_1_t1234514394 * ___PlistVariables_15;
	// System.Collections.Generic.List`1<System.String> ISDSettings::langFolders
	List_1_t1765447871 * ___langFolders_16;

public:
	inline static int32_t get_offset_of_IsfwSettingOpen_5() { return static_cast<int32_t>(offsetof(ISDSettings_t1687241373, ___IsfwSettingOpen_5)); }
	inline bool get_IsfwSettingOpen_5() const { return ___IsfwSettingOpen_5; }
	inline bool* get_address_of_IsfwSettingOpen_5() { return &___IsfwSettingOpen_5; }
	inline void set_IsfwSettingOpen_5(bool value)
	{
		___IsfwSettingOpen_5 = value;
	}

	inline static int32_t get_offset_of_IsLibSettingOpen_6() { return static_cast<int32_t>(offsetof(ISDSettings_t1687241373, ___IsLibSettingOpen_6)); }
	inline bool get_IsLibSettingOpen_6() const { return ___IsLibSettingOpen_6; }
	inline bool* get_address_of_IsLibSettingOpen_6() { return &___IsLibSettingOpen_6; }
	inline void set_IsLibSettingOpen_6(bool value)
	{
		___IsLibSettingOpen_6 = value;
	}

	inline static int32_t get_offset_of_IslinkerSettingOpne_7() { return static_cast<int32_t>(offsetof(ISDSettings_t1687241373, ___IslinkerSettingOpne_7)); }
	inline bool get_IslinkerSettingOpne_7() const { return ___IslinkerSettingOpne_7; }
	inline bool* get_address_of_IslinkerSettingOpne_7() { return &___IslinkerSettingOpne_7; }
	inline void set_IslinkerSettingOpne_7(bool value)
	{
		___IslinkerSettingOpne_7 = value;
	}

	inline static int32_t get_offset_of_IscompilerSettingsOpen_8() { return static_cast<int32_t>(offsetof(ISDSettings_t1687241373, ___IscompilerSettingsOpen_8)); }
	inline bool get_IscompilerSettingsOpen_8() const { return ___IscompilerSettingsOpen_8; }
	inline bool* get_address_of_IscompilerSettingsOpen_8() { return &___IscompilerSettingsOpen_8; }
	inline void set_IscompilerSettingsOpen_8(bool value)
	{
		___IscompilerSettingsOpen_8 = value;
	}

	inline static int32_t get_offset_of_IsPlistSettingsOpen_9() { return static_cast<int32_t>(offsetof(ISDSettings_t1687241373, ___IsPlistSettingsOpen_9)); }
	inline bool get_IsPlistSettingsOpen_9() const { return ___IsPlistSettingsOpen_9; }
	inline bool* get_address_of_IsPlistSettingsOpen_9() { return &___IsPlistSettingsOpen_9; }
	inline void set_IsPlistSettingsOpen_9(bool value)
	{
		___IsPlistSettingsOpen_9 = value;
	}

	inline static int32_t get_offset_of_IsLanguageSettingOpen_10() { return static_cast<int32_t>(offsetof(ISDSettings_t1687241373, ___IsLanguageSettingOpen_10)); }
	inline bool get_IsLanguageSettingOpen_10() const { return ___IsLanguageSettingOpen_10; }
	inline bool* get_address_of_IsLanguageSettingOpen_10() { return &___IsLanguageSettingOpen_10; }
	inline void set_IsLanguageSettingOpen_10(bool value)
	{
		___IsLanguageSettingOpen_10 = value;
	}

	inline static int32_t get_offset_of_Frameworks_11() { return static_cast<int32_t>(offsetof(ISDSettings_t1687241373, ___Frameworks_11)); }
	inline List_1_t2104926514 * get_Frameworks_11() const { return ___Frameworks_11; }
	inline List_1_t2104926514 ** get_address_of_Frameworks_11() { return &___Frameworks_11; }
	inline void set_Frameworks_11(List_1_t2104926514 * value)
	{
		___Frameworks_11 = value;
		Il2CppCodeGenWriteBarrier(&___Frameworks_11, value);
	}

	inline static int32_t get_offset_of_Libraries_12() { return static_cast<int32_t>(offsetof(ISDSettings_t1687241373, ___Libraries_12)); }
	inline List_1_t3602143737 * get_Libraries_12() const { return ___Libraries_12; }
	inline List_1_t3602143737 ** get_address_of_Libraries_12() { return &___Libraries_12; }
	inline void set_Libraries_12(List_1_t3602143737 * value)
	{
		___Libraries_12 = value;
		Il2CppCodeGenWriteBarrier(&___Libraries_12, value);
	}

	inline static int32_t get_offset_of_compileFlags_13() { return static_cast<int32_t>(offsetof(ISDSettings_t1687241373, ___compileFlags_13)); }
	inline List_1_t1765447871 * get_compileFlags_13() const { return ___compileFlags_13; }
	inline List_1_t1765447871 ** get_address_of_compileFlags_13() { return &___compileFlags_13; }
	inline void set_compileFlags_13(List_1_t1765447871 * value)
	{
		___compileFlags_13 = value;
		Il2CppCodeGenWriteBarrier(&___compileFlags_13, value);
	}

	inline static int32_t get_offset_of_linkFlags_14() { return static_cast<int32_t>(offsetof(ISDSettings_t1687241373, ___linkFlags_14)); }
	inline List_1_t1765447871 * get_linkFlags_14() const { return ___linkFlags_14; }
	inline List_1_t1765447871 ** get_address_of_linkFlags_14() { return &___linkFlags_14; }
	inline void set_linkFlags_14(List_1_t1765447871 * value)
	{
		___linkFlags_14 = value;
		Il2CppCodeGenWriteBarrier(&___linkFlags_14, value);
	}

	inline static int32_t get_offset_of_PlistVariables_15() { return static_cast<int32_t>(offsetof(ISDSettings_t1687241373, ___PlistVariables_15)); }
	inline List_1_t1234514394 * get_PlistVariables_15() const { return ___PlistVariables_15; }
	inline List_1_t1234514394 ** get_address_of_PlistVariables_15() { return &___PlistVariables_15; }
	inline void set_PlistVariables_15(List_1_t1234514394 * value)
	{
		___PlistVariables_15 = value;
		Il2CppCodeGenWriteBarrier(&___PlistVariables_15, value);
	}

	inline static int32_t get_offset_of_langFolders_16() { return static_cast<int32_t>(offsetof(ISDSettings_t1687241373, ___langFolders_16)); }
	inline List_1_t1765447871 * get_langFolders_16() const { return ___langFolders_16; }
	inline List_1_t1765447871 ** get_address_of_langFolders_16() { return &___langFolders_16; }
	inline void set_langFolders_16(List_1_t1765447871 * value)
	{
		___langFolders_16 = value;
		Il2CppCodeGenWriteBarrier(&___langFolders_16, value);
	}
};

struct ISDSettings_t1687241373_StaticFields
{
public:
	// ISDSettings ISDSettings::instance
	ISDSettings_t1687241373 * ___instance_17;

public:
	inline static int32_t get_offset_of_instance_17() { return static_cast<int32_t>(offsetof(ISDSettings_t1687241373_StaticFields, ___instance_17)); }
	inline ISDSettings_t1687241373 * get_instance_17() const { return ___instance_17; }
	inline ISDSettings_t1687241373 ** get_address_of_instance_17() { return &___instance_17; }
	inline void set_instance_17(ISDSettings_t1687241373 * value)
	{
		___instance_17 = value;
		Il2CppCodeGenWriteBarrier(&___instance_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
