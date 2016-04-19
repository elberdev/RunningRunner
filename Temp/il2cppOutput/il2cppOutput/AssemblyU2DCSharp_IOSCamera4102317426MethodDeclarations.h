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

// IOSCamera
struct IOSCamera_t4102317426;
// System.Action`1<IOSImagePickResult>
struct Action_1_t529105165;
// System.Action`1<ISN_Result>
struct Action_1_t2646135257;
// System.Action`1<System.String>
struct Action_1_t1116941607;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t2509538522;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// IOSImagePickResult
struct IOSImagePickResult_t380652460;
// ISN_Result
struct ISN_Result_t2497682552;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_Texture2D2509538522.h"
#include "AssemblyU2DCSharp_ISN_ImageSource1176500699.h"
#include "AssemblyU2DCSharp_IOSImagePickResult380652460.h"
#include "AssemblyU2DCSharp_ISN_Result2497682552.h"

// System.Void IOSCamera::.ctor()
extern "C"  void IOSCamera__ctor_m527216697 (IOSCamera_t4102317426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSCamera::.cctor()
extern "C"  void IOSCamera__cctor_m2976719508 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSCamera::add_OnImagePicked(System.Action`1<IOSImagePickResult>)
extern "C"  void IOSCamera_add_OnImagePicked_m2765836673 (Il2CppObject * __this /* static, unused */, Action_1_t529105165 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSCamera::remove_OnImagePicked(System.Action`1<IOSImagePickResult>)
extern "C"  void IOSCamera_remove_OnImagePicked_m647061226 (Il2CppObject * __this /* static, unused */, Action_1_t529105165 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSCamera::add_OnImageSaved(System.Action`1<ISN_Result>)
extern "C"  void IOSCamera_add_OnImageSaved_m3579422030 (Il2CppObject * __this /* static, unused */, Action_1_t2646135257 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSCamera::remove_OnImageSaved(System.Action`1<ISN_Result>)
extern "C"  void IOSCamera_remove_OnImageSaved_m3030396357 (Il2CppObject * __this /* static, unused */, Action_1_t2646135257 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSCamera::add_OnVideoPathPicked(System.Action`1<System.String>)
extern "C"  void IOSCamera_add_OnVideoPathPicked_m143630998 (Il2CppObject * __this /* static, unused */, Action_1_t1116941607 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSCamera::remove_OnVideoPathPicked(System.Action`1<System.String>)
extern "C"  void IOSCamera_remove_OnVideoPathPicked_m2292040717 (Il2CppObject * __this /* static, unused */, Action_1_t1116941607 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSCamera::_ISN_SaveToCameraRoll(System.String)
extern "C"  void IOSCamera__ISN_SaveToCameraRoll_m3906953911 (Il2CppObject * __this /* static, unused */, String_t* ___encodedMedia, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSCamera::_ISN_GetVideoPathFromAlbum()
extern "C"  void IOSCamera__ISN_GetVideoPathFromAlbum_m101092428 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSCamera::_ISN_PickImage(System.Int32)
extern "C"  void IOSCamera__ISN_PickImage_m3306172316 (Il2CppObject * __this /* static, unused */, int32_t ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSCamera::_ISN_InitCameraAPI(System.Single,System.Int32,System.Int32)
extern "C"  void IOSCamera__ISN_InitCameraAPI_m1384123061 (Il2CppObject * __this /* static, unused */, float ___compressionRate, int32_t ___maxSize, int32_t ___encodingType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSCamera::Awake()
extern "C"  void IOSCamera_Awake_m764821916 (IOSCamera_t4102317426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSCamera::SaveTextureToCameraRoll(UnityEngine.Texture2D)
extern "C"  void IOSCamera_SaveTextureToCameraRoll_m4070903338 (IOSCamera_t4102317426 * __this, Texture2D_t2509538522 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSCamera::SaveScreenshotToCameraRoll()
extern "C"  void IOSCamera_SaveScreenshotToCameraRoll_m2974409451 (IOSCamera_t4102317426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSCamera::GetVideoPathFromAlbum()
extern "C"  void IOSCamera_GetVideoPathFromAlbum_m3447839250 (IOSCamera_t4102317426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSCamera::GetImageFromAlbum()
extern "C"  void IOSCamera_GetImageFromAlbum_m910286615 (IOSCamera_t4102317426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSCamera::GetImageFromCamera()
extern "C"  void IOSCamera_GetImageFromCamera_m767476831 (IOSCamera_t4102317426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSCamera::PickImage(ISN_ImageSource)
extern "C"  void IOSCamera_PickImage_m626502470 (IOSCamera_t4102317426 * __this, int32_t ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSCamera::OnImagePickedEvent(System.String)
extern "C"  void IOSCamera_OnImagePickedEvent_m1746657049 (IOSCamera_t4102317426 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSCamera::OnImageSaveFailed()
extern "C"  void IOSCamera_OnImageSaveFailed_m3851398861 (IOSCamera_t4102317426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSCamera::OnImageSaveSuccess()
extern "C"  void IOSCamera_OnImageSaveSuccess_m616446293 (IOSCamera_t4102317426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSCamera::OnVideoPickedEvent(System.String)
extern "C"  void IOSCamera_OnVideoPickedEvent_m1286840889 (IOSCamera_t4102317426 * __this, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator IOSCamera::SaveScreenshot()
extern "C"  Il2CppObject * IOSCamera_SaveScreenshot_m2803912742 (IOSCamera_t4102317426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSCamera::<OnImagePicked>m__44(IOSImagePickResult)
extern "C"  void IOSCamera_U3COnImagePickedU3Em__44_m2372973550 (Il2CppObject * __this /* static, unused */, IOSImagePickResult_t380652460 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSCamera::<OnImageSaved>m__45(ISN_Result)
extern "C"  void IOSCamera_U3COnImageSavedU3Em__45_m1735759510 (Il2CppObject * __this /* static, unused */, ISN_Result_t2497682552 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSCamera::<OnVideoPathPicked>m__46(System.String)
extern "C"  void IOSCamera_U3COnVideoPathPickedU3Em__46_m3626894113 (Il2CppObject * __this /* static, unused */, String_t* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
