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

// ReplayKitUseExample
struct ReplayKitUseExample_t4146680978;
// ISN_Error
struct ISN_Error_t3116992077;
// ISN_Result
struct ISN_Result_t2497682552;
// ReplayKitVideoShareResult
struct ReplayKitVideoShareResult_t1517441232;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ISN_Error3116992077.h"
#include "AssemblyU2DCSharp_ISN_Result2497682552.h"
#include "AssemblyU2DCSharp_ReplayKitVideoShareResult1517441232.h"

// System.Void ReplayKitUseExample::.ctor()
extern "C"  void ReplayKitUseExample__ctor_m336970521 (ReplayKitUseExample_t4146680978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ReplayKitUseExample::Awake()
extern "C"  void ReplayKitUseExample_Awake_m574575740 (ReplayKitUseExample_t4146680978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ReplayKitUseExample::OnDestroy()
extern "C"  void ReplayKitUseExample_OnDestroy_m1320051602 (ReplayKitUseExample_t4146680978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ReplayKitUseExample::OnGUI()
extern "C"  void ReplayKitUseExample_OnGUI_m4127336467 (ReplayKitUseExample_t4146680978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ReplayKitUseExample::HandleActionRecordInterrupted(ISN_Error)
extern "C"  void ReplayKitUseExample_HandleActionRecordInterrupted_m1147944187 (ReplayKitUseExample_t4146680978 * __this, ISN_Error_t3116992077 * ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ReplayKitUseExample::HandleActionRecordStoped(ISN_Result)
extern "C"  void ReplayKitUseExample_HandleActionRecordStoped_m813262723 (ReplayKitUseExample_t4146680978 * __this, ISN_Result_t2497682552 * ___res, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ReplayKitUseExample::HandleActionShareDialogFinished(ReplayKitVideoShareResult)
extern "C"  void ReplayKitUseExample_HandleActionShareDialogFinished_m2395927408 (ReplayKitUseExample_t4146680978 * __this, ReplayKitVideoShareResult_t1517441232 * ___res, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ReplayKitUseExample::HandleActionRecordStarted(ISN_Result)
extern "C"  void ReplayKitUseExample_HandleActionRecordStarted_m2758217809 (ReplayKitUseExample_t4146680978 * __this, ISN_Result_t2497682552 * ___res, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ReplayKitUseExample::HandleActionRecorderDidChangeAvailability(System.Boolean)
extern "C"  void ReplayKitUseExample_HandleActionRecorderDidChangeAvailability_m3265666684 (ReplayKitUseExample_t4146680978 * __this, bool ___IsRecordingAvaliable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ReplayKitUseExample::HandleActionRecordDiscard()
extern "C"  void ReplayKitUseExample_HandleActionRecordDiscard_m1112529574 (ReplayKitUseExample_t4146680978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
