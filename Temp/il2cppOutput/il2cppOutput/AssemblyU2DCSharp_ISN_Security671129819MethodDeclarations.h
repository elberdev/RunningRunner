#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// ISN_Security
struct ISN_Security_t671129819;
// System.Action`1<ISN_LocalReceiptResult>
struct Action_1_t2000940038;
// System.Action`1<ISN_Result>
struct Action_1_t2646135257;
// System.String
struct String_t;
// ISN_LocalReceiptResult
struct ISN_LocalReceiptResult_t1852487333;
// ISN_Result
struct ISN_Result_t2497682552;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_ISN_LocalReceiptResult1852487333.h"
#include "AssemblyU2DCSharp_ISN_Result2497682552.h"

// System.Void ISN_Security::.ctor()
extern "C"  void ISN_Security__ctor_m1095702560 (ISN_Security_t671129819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_Security::.cctor()
extern "C"  void ISN_Security__cctor_m3419912077 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_Security::add_OnReceiptLoaded(System.Action`1<ISN_LocalReceiptResult>)
extern "C"  void ISN_Security_add_OnReceiptLoaded_m3612371345 (Il2CppObject * __this /* static, unused */, Action_1_t2000940038 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_Security::remove_OnReceiptLoaded(System.Action`1<ISN_LocalReceiptResult>)
extern "C"  void ISN_Security_remove_OnReceiptLoaded_m3253555368 (Il2CppObject * __this /* static, unused */, Action_1_t2000940038 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_Security::add_OnReceiptRefreshComplete(System.Action`1<ISN_Result>)
extern "C"  void ISN_Security_add_OnReceiptRefreshComplete_m1559263237 (Il2CppObject * __this /* static, unused */, Action_1_t2646135257 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_Security::remove_OnReceiptRefreshComplete(System.Action`1<ISN_Result>)
extern "C"  void ISN_Security_remove_OnReceiptRefreshComplete_m3536830542 (Il2CppObject * __this /* static, unused */, Action_1_t2646135257 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_Security::_ISN_RetrieveLocalReceipt()
extern "C"  void ISN_Security__ISN_RetrieveLocalReceipt_m739060545 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_Security::_ISN_ReceiptRefreshRequest()
extern "C"  void ISN_Security__ISN_ReceiptRefreshRequest_m726933142 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_Security::Awake()
extern "C"  void ISN_Security_Awake_m1333307779 (ISN_Security_t671129819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_Security::RetrieveLocalReceipt()
extern "C"  void ISN_Security_RetrieveLocalReceipt_m2344717197 (ISN_Security_t671129819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_Security::StartReceiptRefreshRequest()
extern "C"  void ISN_Security_StartReceiptRefreshRequest_m3740511918 (ISN_Security_t671129819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_Security::Event_ReceiptLoaded(System.String)
extern "C"  void ISN_Security_Event_ReceiptLoaded_m1922354924 (ISN_Security_t671129819 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_Security::Event_ReceiptRefreshRequestReceived(System.String)
extern "C"  void ISN_Security_Event_ReceiptRefreshRequestReceived_m2068259772 (ISN_Security_t671129819 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_Security::<OnReceiptLoaded>m__4F(ISN_LocalReceiptResult)
extern "C"  void ISN_Security_U3COnReceiptLoadedU3Em__4F_m2274507586 (Il2CppObject * __this /* static, unused */, ISN_LocalReceiptResult_t1852487333 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_Security::<OnReceiptRefreshComplete>m__50(ISN_Result)
extern "C"  void ISN_Security_U3COnReceiptRefreshCompleteU3Em__50_m3184011399 (Il2CppObject * __this /* static, unused */, ISN_Result_t2497682552 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
