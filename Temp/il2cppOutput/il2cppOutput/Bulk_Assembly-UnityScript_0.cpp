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

// JSCall
struct JSCall_t2197302087;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array2840145358.h"
#include "AssemblyU2DUnityScript_U3CModuleU3E86524790.h"
#include "AssemblyU2DUnityScript_U3CModuleU3E86524790MethodDeclarations.h"
#include "AssemblyU2DUnityScript_JSCall2197302087.h"
#include "AssemblyU2DUnityScript_JSCall2197302087MethodDeclarations.h"
#include "mscorlib_System_Void2779279689.h"
#include "UnityEngine_UnityEngine_MonoBehaviour3012272455MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Component2126946602MethodDeclarations.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_Rect1525428817MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GUI1522956648MethodDeclarations.h"
#include "UnityScript_Lang_UnityScript_Lang_Array1209885965MethodDeclarations.h"
#include "UnityScript_Lang_UnityScript_Lang_Array1209885965.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"
#include "mscorlib_System_Single958209021.h"
#include "mscorlib_System_Boolean211005341.h"
#include "mscorlib_System_Int322847414787.h"
#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void JSCall::.ctor()
extern "C"  void JSCall__ctor_m1333089513 (JSCall_t2197302087 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void JSCall::Start()
extern Il2CppCodeGenString* _stringLiteral77429865;
extern const uint32_t JSCall_Start_m280227305_MetadataUsageId;
extern "C"  void JSCall_Start_m280227305 (JSCall_t2197302087 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (JSCall_Start_m280227305_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Component_SendMessage_m2359133481(__this, _stringLiteral77429865, /*hidden argument*/NULL);
		return;
	}
}
// System.Void JSCall::OnGUI()
extern TypeInfo* GUI_t1522956648_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t2847414787_il2cpp_TypeInfo_var;
extern TypeInfo* Array_t1209885965_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4285039754;
extern Il2CppCodeGenString* _stringLiteral1709835578;
extern Il2CppCodeGenString* _stringLiteral2924575527;
extern Il2CppCodeGenString* _stringLiteral1537154;
extern Il2CppCodeGenString* _stringLiteral434417442;
extern Il2CppCodeGenString* _stringLiteral3959142359;
extern Il2CppCodeGenString* _stringLiteral124;
extern const uint32_t JSCall_OnGUI_m828488163_MetadataUsageId;
extern "C"  void JSCall_OnGUI_m828488163 (JSCall_t2197302087 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (JSCall_OnGUI_m828488163_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Array_t1209885965 * V_0 = NULL;
	{
		Rect_t1525428817  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Rect__ctor_m3291325233(&L_0, (((float)((float)((int32_t)10)))), (((float)((float)((int32_t)10)))), (((float)((float)((int32_t)150)))), (((float)((float)((int32_t)40)))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1522956648_il2cpp_TypeInfo_var);
		bool L_1 = GUI_Button_m885093907(NULL /*static, unused*/, L_0, _stringLiteral4285039754, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_2 = ((int32_t)100);
		Il2CppObject * L_3 = Box(Int32_t2847414787_il2cpp_TypeInfo_var, &L_2);
		Component_SendMessage_m904598583(__this, _stringLiteral1709835578, L_3, /*hidden argument*/NULL);
	}

IL_0035:
	{
		Rect_t1525428817  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Rect__ctor_m3291325233(&L_4, (((float)((float)((int32_t)10)))), (((float)((float)((int32_t)60)))), (((float)((float)((int32_t)150)))), (((float)((float)((int32_t)40)))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1522956648_il2cpp_TypeInfo_var);
		bool L_5 = GUI_Button_m885093907(NULL /*static, unused*/, L_4, _stringLiteral2924575527, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_008c;
		}
	}
	{
		Array_t1209885965 * L_6 = (Array_t1209885965 *)il2cpp_codegen_object_new(Array_t1209885965_il2cpp_TypeInfo_var);
		Array__ctor_m2243385516(L_6, /*hidden argument*/NULL);
		V_0 = L_6;
		Array_t1209885965 * L_7 = V_0;
		NullCheck(L_7);
		Array_push_m2824008196(L_7, _stringLiteral1537154, /*hidden argument*/NULL);
		Array_t1209885965 * L_8 = V_0;
		NullCheck(L_8);
		Array_push_m2824008196(L_8, _stringLiteral434417442, /*hidden argument*/NULL);
		Array_t1209885965 * L_9 = V_0;
		NullCheck(L_9);
		String_t* L_10 = Array_join_m526555293(L_9, _stringLiteral124, /*hidden argument*/NULL);
		Component_SendMessage_m904598583(__this, _stringLiteral3959142359, L_10, /*hidden argument*/NULL);
	}

IL_008c:
	{
		return;
	}
}
// System.Void JSCall::Main()
extern "C"  void JSCall_Main_m2867991220 (JSCall_t2197302087 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
