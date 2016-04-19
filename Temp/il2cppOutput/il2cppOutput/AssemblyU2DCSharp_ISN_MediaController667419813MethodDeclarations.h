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

// ISN_MediaController
struct ISN_MediaController_t667419813;
// System.Action`1<MP_MediaPickerResult>
struct Action_1_t1363217908;
// System.Action`1<System.Collections.Generic.List`1<MP_MediaItem>>
struct Action_1_t2927843253;
// System.Action`1<MP_MediaItem>
struct Action_1_t2130884284;
// System.Action`1<MP_MusicPlaybackState>
struct Action_1_t94620334;
// System.String
struct String_t;
// MP_MediaItem[]
struct MP_MediaItemU5BU5D_t2688237274;
// System.String[]
struct StringU5BU5D_t2956870243;
// MP_MediaItem
struct MP_MediaItem_t1982431579;
// System.Collections.Generic.List`1<MP_MediaItem>
struct List_1_t2779390548;
// MP_MediaPickerResult
struct MP_MediaPickerResult_t1214765203;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_MP_MusicRepeatMode3901368103.h"
#include "AssemblyU2DCSharp_MP_MusicShuffleMode3821955091.h"
#include "AssemblyU2DCSharp_MP_MusicPlaybackState4241134925.h"
#include "AssemblyU2DCSharp_MP_MediaPickerResult1214765203.h"
#include "AssemblyU2DCSharp_MP_MediaItem1982431579.h"

// System.Void ISN_MediaController::.ctor()
extern "C"  void ISN_MediaController__ctor_m1416656998 (ISN_MediaController_t667419813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::.cctor()
extern "C"  void ISN_MediaController__cctor_m484597767 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::add_ActionMediaPickerResult(System.Action`1<MP_MediaPickerResult>)
extern "C"  void ISN_MediaController_add_ActionMediaPickerResult_m4218123998 (Il2CppObject * __this /* static, unused */, Action_1_t1363217908 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::remove_ActionMediaPickerResult(System.Action`1<MP_MediaPickerResult>)
extern "C"  void ISN_MediaController_remove_ActionMediaPickerResult_m4124688001 (Il2CppObject * __this /* static, unused */, Action_1_t1363217908 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::add_ActionQueueUpdated(System.Action`1<System.Collections.Generic.List`1<MP_MediaItem>>)
extern "C"  void ISN_MediaController_add_ActionQueueUpdated_m1621587373 (Il2CppObject * __this /* static, unused */, Action_1_t2927843253 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::remove_ActionQueueUpdated(System.Action`1<System.Collections.Generic.List`1<MP_MediaItem>>)
extern "C"  void ISN_MediaController_remove_ActionQueueUpdated_m3014332688 (Il2CppObject * __this /* static, unused */, Action_1_t2927843253 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::add_ActionNowPlayingItemChanged(System.Action`1<MP_MediaItem>)
extern "C"  void ISN_MediaController_add_ActionNowPlayingItemChanged_m1192385964 (Il2CppObject * __this /* static, unused */, Action_1_t2130884284 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::remove_ActionNowPlayingItemChanged(System.Action`1<MP_MediaItem>)
extern "C"  void ISN_MediaController_remove_ActionNowPlayingItemChanged_m2227433167 (Il2CppObject * __this /* static, unused */, Action_1_t2130884284 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::add_ActionPlaybackStateChanged(System.Action`1<MP_MusicPlaybackState>)
extern "C"  void ISN_MediaController_add_ActionPlaybackStateChanged_m1451659689 (Il2CppObject * __this /* static, unused */, Action_1_t94620334 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::remove_ActionPlaybackStateChanged(System.Action`1<MP_MusicPlaybackState>)
extern "C"  void ISN_MediaController_remove_ActionPlaybackStateChanged_m1534218188 (Il2CppObject * __this /* static, unused */, Action_1_t94620334 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::_ISN_InitMediaController()
extern "C"  void ISN_MediaController__ISN_InitMediaController_m2243771828 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::_ISN_SetRepeatMode(System.Int32)
extern "C"  void ISN_MediaController__ISN_SetRepeatMode_m3351967669 (Il2CppObject * __this /* static, unused */, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::_ISN_SetShuffleMode(System.Int32)
extern "C"  void ISN_MediaController__ISN_SetShuffleMode_m2102651689 (Il2CppObject * __this /* static, unused */, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::_ISN_Play()
extern "C"  void ISN_MediaController__ISN_Play_m3348296786 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::_ISN_Pause()
extern "C"  void ISN_MediaController__ISN_Pause_m421414906 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::_ISN_SkipToNextItem()
extern "C"  void ISN_MediaController__ISN_SkipToNextItem_m3210075390 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::_ISN_SkipToBeginning()
extern "C"  void ISN_MediaController__ISN_SkipToBeginning_m2092454055 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::_ISN_SkipToPreviousItem()
extern "C"  void ISN_MediaController__ISN_SkipToPreviousItem_m1257289346 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::_ISN_ShowMediaPicker()
extern "C"  void ISN_MediaController__ISN_ShowMediaPicker_m728982745 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::_ISN_SetCollection(System.String)
extern "C"  void ISN_MediaController__ISN_SetCollection_m3666147422 (Il2CppObject * __this /* static, unused */, String_t* ___itemsIds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::Awake()
extern "C"  void ISN_MediaController_Awake_m1654262217 (ISN_MediaController_t667419813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::SetRepeatMode(MP_MusicRepeatMode)
extern "C"  void ISN_MediaController_SetRepeatMode_m740332381 (ISN_MediaController_t667419813 * __this, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::SetShuffleMode(MP_MusicShuffleMode)
extern "C"  void ISN_MediaController_SetShuffleMode_m1644454503 (ISN_MediaController_t667419813 * __this, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::Play()
extern "C"  void ISN_MediaController_Play_m472653394 (ISN_MediaController_t667419813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::Pause()
extern "C"  void ISN_MediaController_Pause_m1470782970 (ISN_MediaController_t667419813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::SkipToNextItem()
extern "C"  void ISN_MediaController_SkipToNextItem_m1845659390 (ISN_MediaController_t667419813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::SkipToBeginning()
extern "C"  void ISN_MediaController_SkipToBeginning_m2745231015 (ISN_MediaController_t667419813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::SkipToPreviousItem()
extern "C"  void ISN_MediaController_SkipToPreviousItem_m523788418 (ISN_MediaController_t667419813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::ShowMediaPicker()
extern "C"  void ISN_MediaController_ShowMediaPicker_m1381759705 (ISN_MediaController_t667419813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::SetCollection(MP_MediaItem[])
extern "C"  void ISN_MediaController_SetCollection_m2497773959 (ISN_MediaController_t667419813 * __this, MP_MediaItemU5BU5D_t2688237274* ___items, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::SetCollection(System.String[])
extern "C"  void ISN_MediaController_SetCollection_m2472823292 (ISN_MediaController_t667419813 * __this, StringU5BU5D_t2956870243* ___itemIds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MP_MediaItem ISN_MediaController::get_NowPlayingItem()
extern "C"  MP_MediaItem_t1982431579 * ISN_MediaController_get_NowPlayingItem_m3624594960 (ISN_MediaController_t667419813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<MP_MediaItem> ISN_MediaController::get_CurrentQueue()
extern "C"  List_1_t2779390548 * ISN_MediaController_get_CurrentQueue_m174698513 (ISN_MediaController_t667419813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MP_MusicPlaybackState ISN_MediaController::get_State()
extern "C"  int32_t ISN_MediaController_get_State_m2858760850 (ISN_MediaController_t667419813 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<MP_MediaItem> ISN_MediaController::ParseMediaItemsList(System.String[],System.Int32)
extern "C"  List_1_t2779390548 * ISN_MediaController_ParseMediaItemsList_m4212256438 (ISN_MediaController_t667419813 * __this, StringU5BU5D_t2956870243* ___data, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MP_MediaItem ISN_MediaController::ParseMediaItemData(System.String[],System.Int32)
extern "C"  MP_MediaItem_t1982431579 * ISN_MediaController_ParseMediaItemData_m3334216065 (ISN_MediaController_t667419813 * __this, StringU5BU5D_t2956870243* ___data, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::OnQueueUpdate(System.String)
extern "C"  void ISN_MediaController_OnQueueUpdate_m1887134659 (ISN_MediaController_t667419813 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::OnMediaPickerResult(System.String)
extern "C"  void ISN_MediaController_OnMediaPickerResult_m1807095566 (ISN_MediaController_t667419813 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::OnMediaPickerFailed(System.String)
extern "C"  void ISN_MediaController_OnMediaPickerFailed_m4135028462 (ISN_MediaController_t667419813 * __this, String_t* ___errorData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::OnNowPlayingItemchanged(System.String)
extern "C"  void ISN_MediaController_OnNowPlayingItemchanged_m638093684 (ISN_MediaController_t667419813 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::OnPlaybackStateChanged(System.String)
extern "C"  void ISN_MediaController_OnPlaybackStateChanged_m2246410279 (ISN_MediaController_t667419813 * __this, String_t* ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::<ActionMediaPickerResult>m__47(MP_MediaPickerResult)
extern "C"  void ISN_MediaController_U3CActionMediaPickerResultU3Em__47_m3868789690 (Il2CppObject * __this /* static, unused */, MP_MediaPickerResult_t1214765203 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::<ActionQueueUpdated>m__48(System.Collections.Generic.List`1<MP_MediaItem>)
extern "C"  void ISN_MediaController_U3CActionQueueUpdatedU3Em__48_m3067665818 (Il2CppObject * __this /* static, unused */, List_1_t2779390548 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::<ActionNowPlayingItemChanged>m__49(MP_MediaItem)
extern "C"  void ISN_MediaController_U3CActionNowPlayingItemChangedU3Em__49_m797150766 (Il2CppObject * __this /* static, unused */, MP_MediaItem_t1982431579 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ISN_MediaController::<ActionPlaybackStateChanged>m__4A(MP_MusicPlaybackState)
extern "C"  void ISN_MediaController_U3CActionPlaybackStateChangedU3Em__4A_m418186421 (Il2CppObject * __this /* static, unused */, int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
