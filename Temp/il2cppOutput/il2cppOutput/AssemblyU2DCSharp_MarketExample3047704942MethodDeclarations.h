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

// MarketExample
struct MarketExample_t3047704942;
// ISN_LocalReceiptResult
struct ISN_LocalReceiptResult_t1852487333;
// ISN_Result
struct ISN_Result_t2497682552;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ISN_LocalReceiptResult1852487333.h"
#include "AssemblyU2DCSharp_IOSDialogResult3324284946.h"
#include "AssemblyU2DCSharp_ISN_Result2497682552.h"

// System.Void MarketExample::.ctor()
extern "C"  void MarketExample__ctor_m4142060477 (MarketExample_t3047704942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MarketExample::Awake()
extern "C"  void MarketExample_Awake_m84698400 (MarketExample_t3047704942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MarketExample::OnGUI()
extern "C"  void MarketExample_OnGUI_m3637459127 (MarketExample_t3047704942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MarketExample::StoreProductViewDisnissed()
extern "C"  void MarketExample_StoreProductViewDisnissed_m2937085072 (MarketExample_t3047704942 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MarketExample::OnReceiptLoaded(ISN_LocalReceiptResult)
extern "C"  void MarketExample_OnReceiptLoaded_m2197212052 (MarketExample_t3047704942 * __this, ISN_LocalReceiptResult_t1852487333 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MarketExample::OnComplete(IOSDialogResult)
extern "C"  void MarketExample_OnComplete_m2767489057 (MarketExample_t3047704942 * __this, int32_t ___res, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MarketExample::OnReceiptRefreshComplete(ISN_Result)
extern "C"  void MarketExample_OnReceiptRefreshComplete_m3100684298 (MarketExample_t3047704942 * __this, ISN_Result_t2497682552 * ___res, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MarketExample::Dialog_RetrieveLocalReceipt(IOSDialogResult)
extern "C"  void MarketExample_Dialog_RetrieveLocalReceipt_m348489093 (MarketExample_t3047704942 * __this, int32_t ___res, const MethodInfo* method) IL2CPP_METHOD_ATTR;
