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

// ISN_ReplayKit
struct ISN_ReplayKit_t3812330292;
// System.Action`1<ISN_Result>
struct Action_1_t2646135257;
// System.Action`1<ReplayKitVideoShareResult>
struct Action_1_t1665893937;
// System.Action`1<ISN_Error>
struct Action_1_t3265444782;
// System.Action`1<System.Boolean>
struct Action_1_t359458046;
// System.Action
struct Action_t437523947;
// System.String
struct String_t;
// ISN_Result
struct ISN_Result_t2497682552;
// ReplayKitVideoShareResult
struct ReplayKitVideoShareResult_t1517441232;
// ISN_Error
struct ISN_Error_t3116992077;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Action437523947.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_ISN_Result2497682552.h"
#include "AssemblyU2DCSharp_ReplayKitVideoShareResult1517441232.h"
#include "AssemblyU2DCSharp_ISN_Error3116992077.h"

// System.Void ISN_ReplayKit::.ctor()
extern "C"  void ISN_ReplayKit__ctor_m4113969335 (ISN_ReplayKit_t3812330292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_ReplayKit::.cctor()
extern "C"  void ISN_ReplayKit__cctor_m2496901590 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_ReplayKit::add_ActionRecordStarted(System.Action`1<ISN_Result>)
extern "C"  void ISN_ReplayKit_add_ActionRecordStarted_m1282002513 (Il2CppObject * __this /* static, unused */, Action_1_t2646135257 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_ReplayKit::remove_ActionRecordStarted(System.Action`1<ISN_Result>)
extern "C"  void ISN_ReplayKit_remove_ActionRecordStarted_m2179676726 (Il2CppObject * __this /* static, unused */, Action_1_t2646135257 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_ReplayKit::add_ActionRecordStoped(System.Action`1<ISN_Result>)
extern "C"  void ISN_ReplayKit_add_ActionRecordStoped_m4272301039 (Il2CppObject * __this /* static, unused */, Action_1_t2646135257 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_ReplayKit::remove_ActionRecordStoped(System.Action`1<ISN_Result>)
extern "C"  void ISN_ReplayKit_remove_ActionRecordStoped_m2500142954 (Il2CppObject * __this /* static, unused */, Action_1_t2646135257 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_ReplayKit::add_ActionShareDialogFinished(System.Action`1<ReplayKitVideoShareResult>)
extern "C"  void ISN_ReplayKit_add_ActionShareDialogFinished_m2203594166 (Il2CppObject * __this /* static, unused */, Action_1_t1665893937 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_ReplayKit::remove_ActionShareDialogFinished(System.Action`1<ReplayKitVideoShareResult>)
extern "C"  void ISN_ReplayKit_remove_ActionShareDialogFinished_m3004666609 (Il2CppObject * __this /* static, unused */, Action_1_t1665893937 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_ReplayKit::add_ActionRecordInterrupted(System.Action`1<ISN_Error>)
extern "C"  void ISN_ReplayKit_add_ActionRecordInterrupted_m1460165515 (Il2CppObject * __this /* static, unused */, Action_1_t3265444782 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_ReplayKit::remove_ActionRecordInterrupted(System.Action`1<ISN_Error>)
extern "C"  void ISN_ReplayKit_remove_ActionRecordInterrupted_m3606260102 (Il2CppObject * __this /* static, unused */, Action_1_t3265444782 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_ReplayKit::add_ActionRecorderDidChangeAvailability(System.Action`1<System.Boolean>)
extern "C"  void ISN_ReplayKit_add_ActionRecorderDidChangeAvailability_m1015281286 (Il2CppObject * __this /* static, unused */, Action_1_t359458046 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_ReplayKit::remove_ActionRecorderDidChangeAvailability(System.Action`1<System.Boolean>)
extern "C"  void ISN_ReplayKit_remove_ActionRecorderDidChangeAvailability_m3673521643 (Il2CppObject * __this /* static, unused */, Action_1_t359458046 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_ReplayKit::add_ActionRecordDiscard(System.Action)
extern "C"  void ISN_ReplayKit_add_ActionRecordDiscard_m392754639 (Il2CppObject * __this /* static, unused */, Action_t437523947 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_ReplayKit::remove_ActionRecordDiscard(System.Action)
extern "C"  void ISN_ReplayKit_remove_ActionRecordDiscard_m1185080948 (Il2CppObject * __this /* static, unused */, Action_t437523947 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_ReplayKit::Awake()
extern "C"  void ISN_ReplayKit_Awake_m56607258 (ISN_ReplayKit_t3812330292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_ReplayKit::StartRecording(System.Boolean)
extern "C"  void ISN_ReplayKit_StartRecording_m1834913555 (ISN_ReplayKit_t3812330292 * __this, bool ___microphoneEnabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_ReplayKit::StopRecording()
extern "C"  void ISN_ReplayKit_StopRecording_m112734756 (ISN_ReplayKit_t3812330292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_ReplayKit::DiscardRecording()
extern "C"  void ISN_ReplayKit_DiscardRecording_m3074678240 (ISN_ReplayKit_t3812330292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_ReplayKit::ShowVideoShareDialog()
extern "C"  void ISN_ReplayKit_ShowVideoShareDialog_m3755380502 (ISN_ReplayKit_t3812330292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ISN_ReplayKit::get_IsRecording()
extern "C"  bool ISN_ReplayKit_get_IsRecording_m3521306759 (ISN_ReplayKit_t3812330292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ISN_ReplayKit::get_IsRecodingAvailableToShare()
extern "C"  bool ISN_ReplayKit_get_IsRecodingAvailableToShare_m1116249380 (ISN_ReplayKit_t3812330292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ISN_ReplayKit::get_IsAvailable()
extern "C"  bool ISN_ReplayKit_get_IsAvailable_m1289492319 (ISN_ReplayKit_t3812330292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ISN_ReplayKit::get_IsMicEnabled()
extern "C"  bool ISN_ReplayKit_get_IsMicEnabled_m4195615302 (ISN_ReplayKit_t3812330292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_ReplayKit::OnRecorStartSuccess(System.String)
extern "C"  void ISN_ReplayKit_OnRecorStartSuccess_m1222995576 (ISN_ReplayKit_t3812330292 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_ReplayKit::OnRecorStartFailed(System.String)
extern "C"  void ISN_ReplayKit_OnRecorStartFailed_m3687755082 (ISN_ReplayKit_t3812330292 * __this, String_t* ___errorData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_ReplayKit::OnRecorStopFailed(System.String)
extern "C"  void ISN_ReplayKit_OnRecorStopFailed_m3824987930 (ISN_ReplayKit_t3812330292 * __this, String_t* ___errorData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_ReplayKit::OnRecorStopSuccess()
extern "C"  void ISN_ReplayKit_OnRecorStopSuccess_m985170586 (ISN_ReplayKit_t3812330292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_ReplayKit::OnRecordInterrupted(System.String)
extern "C"  void ISN_ReplayKit_OnRecordInterrupted_m3766124283 (ISN_ReplayKit_t3812330292 * __this, String_t* ___errorData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_ReplayKit::OnRecorderDidChangeAvailability(System.String)
extern "C"  void ISN_ReplayKit_OnRecorderDidChangeAvailability_m2179713120 (ISN_ReplayKit_t3812330292 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_ReplayKit::OnSaveResult(System.String)
extern "C"  void ISN_ReplayKit_OnSaveResult_m3056887324 (ISN_ReplayKit_t3812330292 * __this, String_t* ___sourcesData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_ReplayKit::OnRecordDiscard(System.String)
extern "C"  void ISN_ReplayKit_OnRecordDiscard_m354316063 (ISN_ReplayKit_t3812330292 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_ReplayKit::<ActionRecordStarted>m__51(ISN_Result)
extern "C"  void ISN_ReplayKit_U3CActionRecordStartedU3Em__51_m2150266750 (Il2CppObject * __this /* static, unused */, ISN_Result_t2497682552 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_ReplayKit::<ActionRecordStoped>m__52(ISN_Result)
extern "C"  void ISN_ReplayKit_U3CActionRecordStopedU3Em__52_m1921163757 (Il2CppObject * __this /* static, unused */, ISN_Result_t2497682552 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_ReplayKit::<ActionShareDialogFinished>m__53(ReplayKitVideoShareResult)
extern "C"  void ISN_ReplayKit_U3CActionShareDialogFinishedU3Em__53_m1164287905 (Il2CppObject * __this /* static, unused */, ReplayKitVideoShareResult_t1517441232 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_ReplayKit::<ActionRecordInterrupted>m__54(ISN_Error)
extern "C"  void ISN_ReplayKit_U3CActionRecordInterruptedU3Em__54_m2275404299 (Il2CppObject * __this /* static, unused */, ISN_Error_t3116992077 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_ReplayKit::<ActionRecorderDidChangeAvailability>m__55(System.Boolean)
extern "C"  void ISN_ReplayKit_U3CActionRecorderDidChangeAvailabilityU3Em__55_m823242285 (Il2CppObject * __this /* static, unused */, bool p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_ReplayKit::<ActionRecordDiscard>m__56()
extern "C"  void ISN_ReplayKit_U3CActionRecordDiscardU3Em__56_m277815064 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
