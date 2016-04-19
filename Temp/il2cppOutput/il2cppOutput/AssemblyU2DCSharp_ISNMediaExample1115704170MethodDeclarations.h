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

// ISNMediaExample
struct ISNMediaExample_t1115704170;
// MP_MediaItem
struct MP_MediaItem_t1982431579;
// System.Collections.Generic.List`1<MP_MediaItem>
struct List_1_t2779390548;
// MP_MediaPickerResult
struct MP_MediaPickerResult_t1214765203;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_MP_MediaItem1982431579.h"
#include "AssemblyU2DCSharp_MP_MusicPlaybackState4241134925.h"
#include "AssemblyU2DCSharp_MP_MediaPickerResult1214765203.h"

// System.Void ISNMediaExample::.ctor()
extern "C"  void ISNMediaExample__ctor_m171225921 (ISNMediaExample_t1115704170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISNMediaExample::Awake()
extern "C"  void ISNMediaExample_Awake_m408831140 (ISNMediaExample_t1115704170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISNMediaExample::HandleActionNowPlayingItemChanged(MP_MediaItem)
extern "C"  void ISNMediaExample_HandleActionNowPlayingItemChanged_m3016257999 (ISNMediaExample_t1115704170 * __this, MP_MediaItem_t1982431579 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISNMediaExample::HandleActionPlaybackStateChanged(MP_MusicPlaybackState)
extern "C"  void ISNMediaExample_HandleActionPlaybackStateChanged_m3586180166 (ISNMediaExample_t1115704170 * __this, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISNMediaExample::HandleActionQueueUpdated(System.Collections.Generic.List`1<MP_MediaItem>)
extern "C"  void ISNMediaExample_HandleActionQueueUpdated_m1887014146 (ISNMediaExample_t1115704170 * __this, List_1_t2779390548 * ___items, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISNMediaExample::HandleActionMediaPickerResult(MP_MediaPickerResult)
extern "C"  void ISNMediaExample_HandleActionMediaPickerResult_m155918301 (ISNMediaExample_t1115704170 * __this, MP_MediaPickerResult_t1214765203 * ___res, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISNMediaExample::OnGUI()
extern "C"  void ISNMediaExample_OnGUI_m3961591867 (ISNMediaExample_t1115704170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
