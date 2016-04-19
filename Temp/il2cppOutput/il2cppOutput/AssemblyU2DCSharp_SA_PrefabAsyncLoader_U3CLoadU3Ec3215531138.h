#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.ResourceRequest
struct ResourceRequest_t2256525006;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// System.Object
struct Il2CppObject;
// SA_PrefabAsyncLoader
struct SA_PrefabAsyncLoader_t4004145594;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SA_PrefabAsyncLoader/<Load>c__Iterator7
struct  U3CLoadU3Ec__Iterator7_t3215531138  : public Il2CppObject
{
public:
	// UnityEngine.ResourceRequest SA_PrefabAsyncLoader/<Load>c__Iterator7::<request>__0
	ResourceRequest_t2256525006 * ___U3CrequestU3E__0_0;
	// UnityEngine.GameObject SA_PrefabAsyncLoader/<Load>c__Iterator7::<loadedObject>__1
	GameObject_t4012695102 * ___U3CloadedObjectU3E__1_1;
	// System.Int32 SA_PrefabAsyncLoader/<Load>c__Iterator7::$PC
	int32_t ___U24PC_2;
	// System.Object SA_PrefabAsyncLoader/<Load>c__Iterator7::$current
	Il2CppObject * ___U24current_3;
	// SA_PrefabAsyncLoader SA_PrefabAsyncLoader/<Load>c__Iterator7::<>f__this
	SA_PrefabAsyncLoader_t4004145594 * ___U3CU3Ef__this_4;

public:
	inline static int32_t get_offset_of_U3CrequestU3E__0_0() { return static_cast<int32_t>(offsetof(U3CLoadU3Ec__Iterator7_t3215531138, ___U3CrequestU3E__0_0)); }
	inline ResourceRequest_t2256525006 * get_U3CrequestU3E__0_0() const { return ___U3CrequestU3E__0_0; }
	inline ResourceRequest_t2256525006 ** get_address_of_U3CrequestU3E__0_0() { return &___U3CrequestU3E__0_0; }
	inline void set_U3CrequestU3E__0_0(ResourceRequest_t2256525006 * value)
	{
		___U3CrequestU3E__0_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CrequestU3E__0_0, value);
	}

	inline static int32_t get_offset_of_U3CloadedObjectU3E__1_1() { return static_cast<int32_t>(offsetof(U3CLoadU3Ec__Iterator7_t3215531138, ___U3CloadedObjectU3E__1_1)); }
	inline GameObject_t4012695102 * get_U3CloadedObjectU3E__1_1() const { return ___U3CloadedObjectU3E__1_1; }
	inline GameObject_t4012695102 ** get_address_of_U3CloadedObjectU3E__1_1() { return &___U3CloadedObjectU3E__1_1; }
	inline void set_U3CloadedObjectU3E__1_1(GameObject_t4012695102 * value)
	{
		___U3CloadedObjectU3E__1_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CloadedObjectU3E__1_1, value);
	}

	inline static int32_t get_offset_of_U24PC_2() { return static_cast<int32_t>(offsetof(U3CLoadU3Ec__Iterator7_t3215531138, ___U24PC_2)); }
	inline int32_t get_U24PC_2() const { return ___U24PC_2; }
	inline int32_t* get_address_of_U24PC_2() { return &___U24PC_2; }
	inline void set_U24PC_2(int32_t value)
	{
		___U24PC_2 = value;
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CLoadU3Ec__Iterator7_t3215531138, ___U24current_3)); }
	inline Il2CppObject * get_U24current_3() const { return ___U24current_3; }
	inline Il2CppObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(Il2CppObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_3, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_4() { return static_cast<int32_t>(offsetof(U3CLoadU3Ec__Iterator7_t3215531138, ___U3CU3Ef__this_4)); }
	inline SA_PrefabAsyncLoader_t4004145594 * get_U3CU3Ef__this_4() const { return ___U3CU3Ef__this_4; }
	inline SA_PrefabAsyncLoader_t4004145594 ** get_address_of_U3CU3Ef__this_4() { return &___U3CU3Ef__this_4; }
	inline void set_U3CU3Ef__this_4(SA_PrefabAsyncLoader_t4004145594 * value)
	{
		___U3CU3Ef__this_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
