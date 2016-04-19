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

// UnityScript.Lang.Array
struct Array_t1209885965;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array2840145358.h"
#include "UnityScript_Lang_U3CModuleU3E86524790.h"
#include "UnityScript_Lang_U3CModuleU3E86524790MethodDeclarations.h"
#include "UnityScript_Lang_UnityScript_Lang_Array1209885965.h"
#include "UnityScript_Lang_UnityScript_Lang_Array1209885965MethodDeclarations.h"
#include "mscorlib_System_Void2779279689.h"
#include "mscorlib_System_Collections_CollectionBase851261505MethodDeclarations.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Int322847414787.h"
#include "mscorlib_System_Collections_ArrayList2121638921.h"
#include "mscorlib_System_Collections_ArrayList2121638921MethodDeclarations.h"
#include "mscorlib_System_String968488902.h"
#include "Boo_Lang_Boo_Lang_Builtins4233200974MethodDeclarations.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityScript.Lang.Array::.ctor()
extern "C"  void Array__ctor_m2243385516 (Array_t1209885965 * __this, const MethodInfo* method)
{
	{
		CollectionBase__ctor_m3181013581(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityScript.Lang.Array::push(System.Object)
extern "C"  int32_t Array_push_m2824008196 (Array_t1209885965 * __this, Il2CppObject * ___value, const MethodInfo* method)
{
	{
		ArrayList_t2121638921 * L_0 = CollectionBase_get_InnerList_m2840879970(__this, /*hidden argument*/NULL);
		Il2CppObject * L_1 = ___value;
		NullCheck(L_0);
		VirtFuncInvoker1< int32_t, Il2CppObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_0, L_1);
		ArrayList_t2121638921 * L_2 = CollectionBase_get_InnerList_m2840879970(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_2);
		return L_3;
	}
}
// System.String UnityScript.Lang.Array::ToString()
extern Il2CppCodeGenString* _stringLiteral44;
extern const uint32_t Array_ToString_m1683853927_MetadataUsageId;
extern "C"  String_t* Array_ToString_m1683853927 (Array_t1209885965 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Array_ToString_m1683853927_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = Array_Join_m1779851389(__this, _stringLiteral44, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String UnityScript.Lang.Array::Join(System.String)
extern "C"  String_t* Array_Join_m1779851389 (Array_t1209885965 * __this, String_t* ___seperator, const MethodInfo* method)
{
	{
		ArrayList_t2121638921 * L_0 = CollectionBase_get_InnerList_m2840879970(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___seperator;
		String_t* L_2 = Builtins_join_m2635169011(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String UnityScript.Lang.Array::join(System.String)
extern "C"  String_t* Array_join_m526555293 (Array_t1209885965 * __this, String_t* ___seperator, const MethodInfo* method)
{
	{
		ArrayList_t2121638921 * L_0 = CollectionBase_get_InnerList_m2840879970(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___seperator;
		String_t* L_2 = Builtins_join_m2635169011(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityScript.Lang.Array::OnValidate(System.Object)
extern "C"  void Array_OnValidate_m3275003399 (Array_t1209885965 * __this, Il2CppObject * ___newValue, const MethodInfo* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
