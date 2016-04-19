#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;
// DisconnectButton
struct DisconnectButton_t3683830542;
// ConnectionButton
struct ConnectionButton_t3835738064;
// ClickManager
struct ClickManager_t1555000613;
// PTPGameController
struct PTPGameController_t4082758426;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t514686775;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PTPGameController
struct  PTPGameController_t4082758426  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject PTPGameController::pref
	GameObject_t4012695102 * ___pref_2;
	// DisconnectButton PTPGameController::d
	DisconnectButton_t3683830542 * ___d_3;
	// ConnectionButton PTPGameController::b
	ConnectionButton_t3835738064 * ___b_4;
	// ClickManager PTPGameController::m
	ClickManager_t1555000613 * ___m_5;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> PTPGameController::spheres
	List_1_t514686775 * ___spheres_7;

public:
	inline static int32_t get_offset_of_pref_2() { return static_cast<int32_t>(offsetof(PTPGameController_t4082758426, ___pref_2)); }
	inline GameObject_t4012695102 * get_pref_2() const { return ___pref_2; }
	inline GameObject_t4012695102 ** get_address_of_pref_2() { return &___pref_2; }
	inline void set_pref_2(GameObject_t4012695102 * value)
	{
		___pref_2 = value;
		Il2CppCodeGenWriteBarrier(&___pref_2, value);
	}

	inline static int32_t get_offset_of_d_3() { return static_cast<int32_t>(offsetof(PTPGameController_t4082758426, ___d_3)); }
	inline DisconnectButton_t3683830542 * get_d_3() const { return ___d_3; }
	inline DisconnectButton_t3683830542 ** get_address_of_d_3() { return &___d_3; }
	inline void set_d_3(DisconnectButton_t3683830542 * value)
	{
		___d_3 = value;
		Il2CppCodeGenWriteBarrier(&___d_3, value);
	}

	inline static int32_t get_offset_of_b_4() { return static_cast<int32_t>(offsetof(PTPGameController_t4082758426, ___b_4)); }
	inline ConnectionButton_t3835738064 * get_b_4() const { return ___b_4; }
	inline ConnectionButton_t3835738064 ** get_address_of_b_4() { return &___b_4; }
	inline void set_b_4(ConnectionButton_t3835738064 * value)
	{
		___b_4 = value;
		Il2CppCodeGenWriteBarrier(&___b_4, value);
	}

	inline static int32_t get_offset_of_m_5() { return static_cast<int32_t>(offsetof(PTPGameController_t4082758426, ___m_5)); }
	inline ClickManager_t1555000613 * get_m_5() const { return ___m_5; }
	inline ClickManager_t1555000613 ** get_address_of_m_5() { return &___m_5; }
	inline void set_m_5(ClickManager_t1555000613 * value)
	{
		___m_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_5, value);
	}

	inline static int32_t get_offset_of_spheres_7() { return static_cast<int32_t>(offsetof(PTPGameController_t4082758426, ___spheres_7)); }
	inline List_1_t514686775 * get_spheres_7() const { return ___spheres_7; }
	inline List_1_t514686775 ** get_address_of_spheres_7() { return &___spheres_7; }
	inline void set_spheres_7(List_1_t514686775 * value)
	{
		___spheres_7 = value;
		Il2CppCodeGenWriteBarrier(&___spheres_7, value);
	}
};

struct PTPGameController_t4082758426_StaticFields
{
public:
	// PTPGameController PTPGameController::instance
	PTPGameController_t4082758426 * ___instance_6;

public:
	inline static int32_t get_offset_of_instance_6() { return static_cast<int32_t>(offsetof(PTPGameController_t4082758426_StaticFields, ___instance_6)); }
	inline PTPGameController_t4082758426 * get_instance_6() const { return ___instance_6; }
	inline PTPGameController_t4082758426 ** get_address_of_instance_6() { return &___instance_6; }
	inline void set_instance_6(PTPGameController_t4082758426 * value)
	{
		___instance_6 = value;
		Il2CppCodeGenWriteBarrier(&___instance_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
