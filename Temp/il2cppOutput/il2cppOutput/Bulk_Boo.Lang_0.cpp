#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// System.String
struct String_t;
// System.Collections.IEnumerable
struct IEnumerable_t287189635;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array2840145358.h"
#include "Boo_Lang_U3CModuleU3E86524790.h"
#include "Boo_Lang_U3CModuleU3E86524790MethodDeclarations.h"
#include "Boo_Lang_Boo_Lang_Builtins4233200974.h"
#include "Boo_Lang_Boo_Lang_Builtins4233200974MethodDeclarations.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Text_StringBuilder3822575854MethodDeclarations.h"
#include "mscorlib_System_Text_StringBuilder3822575854.h"
#include "mscorlib_System_Void2779279689.h"
#include "mscorlib_System_Boolean211005341.h"
#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Boo.Lang.Builtins::join(System.Collections.IEnumerable,System.String)
extern TypeInfo* StringBuilder_t3822575854_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerable_t287189635_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t1628921374_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t287207039_il2cpp_TypeInfo_var;
extern const uint32_t Builtins_join_m2635169011_MetadataUsageId;
extern "C"  String_t* Builtins_join_m2635169011 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___enumerable, String_t* ___separator, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Builtins_join_m2635169011_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t3822575854 * V_0 = NULL;
	Il2CppObject * V_1 = NULL;
	Il2CppObject * V_2 = NULL;
	Exception_t1967233988 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1967233988 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		StringBuilder_t3822575854 * L_0 = (StringBuilder_t3822575854 *)il2cpp_codegen_object_new(StringBuilder_t3822575854_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m135953004(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		Il2CppObject * L_1 = ___enumerable;
		NullCheck(L_1);
		Il2CppObject * L_2 = InterfaceFuncInvoker0< Il2CppObject * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t287189635_il2cpp_TypeInfo_var, L_1);
		V_1 = L_2;
		Il2CppObject * L_3 = V_1;
		V_2 = ((Il2CppObject *)IsInst(L_3, IDisposable_t1628921374_il2cpp_TypeInfo_var));
	}

IL_0014:
	try
	{ // begin try (depth: 1)
		{
			Il2CppObject * L_4 = V_1;
			NullCheck(L_4);
			bool L_5 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t287207039_il2cpp_TypeInfo_var, L_4);
			if (!L_5)
			{
				goto IL_0051;
			}
		}

IL_001f:
		{
			StringBuilder_t3822575854 * L_6 = V_0;
			Il2CppObject * L_7 = V_1;
			NullCheck(L_7);
			Il2CppObject * L_8 = InterfaceFuncInvoker0< Il2CppObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t287207039_il2cpp_TypeInfo_var, L_7);
			NullCheck(L_6);
			StringBuilder_Append_m4120200429(L_6, L_8, /*hidden argument*/NULL);
			goto IL_0046;
		}

IL_0031:
		{
			StringBuilder_t3822575854 * L_9 = V_0;
			String_t* L_10 = ___separator;
			NullCheck(L_9);
			StringBuilder_Append_m3898090075(L_9, L_10, /*hidden argument*/NULL);
			StringBuilder_t3822575854 * L_11 = V_0;
			Il2CppObject * L_12 = V_1;
			NullCheck(L_12);
			Il2CppObject * L_13 = InterfaceFuncInvoker0< Il2CppObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t287207039_il2cpp_TypeInfo_var, L_12);
			NullCheck(L_11);
			StringBuilder_Append_m4120200429(L_11, L_13, /*hidden argument*/NULL);
		}

IL_0046:
		{
			Il2CppObject * L_14 = V_1;
			NullCheck(L_14);
			bool L_15 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t287207039_il2cpp_TypeInfo_var, L_14);
			if (L_15)
			{
				goto IL_0031;
			}
		}

IL_0051:
		{
			IL2CPP_LEAVE(0x63, FINALLY_0056);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1967233988 *)e.ex;
		goto FINALLY_0056;
	}

FINALLY_0056:
	{ // begin finally (depth: 1)
		{
			Il2CppObject * L_16 = V_2;
			if (!L_16)
			{
				goto IL_0062;
			}
		}

IL_005c:
		{
			Il2CppObject * L_17 = V_2;
			NullCheck(L_17);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t1628921374_il2cpp_TypeInfo_var, L_17);
		}

IL_0062:
		{
			IL2CPP_END_FINALLY(86)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(86)
	{
		IL2CPP_JUMP_TBL(0x63, IL_0063)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1967233988 *)
	}

IL_0063:
	{
		StringBuilder_t3822575854 * L_18 = V_0;
		NullCheck(L_18);
		String_t* L_19 = StringBuilder_ToString_m350379841(L_18, /*hidden argument*/NULL);
		return L_19;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
