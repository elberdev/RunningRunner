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

// IOSSocialManager
struct IOSSocialManager_t1329031315;
// System.Action
struct Action_t437523947;
// System.Action`1<ISN_Result>
struct Action_1_t2646135257;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t2509538522;
// ISN_Result
struct ISN_Result_t2497682552;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Action437523947.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_Texture2D2509538522.h"
#include "AssemblyU2DCSharp_ISN_Result2497682552.h"

// System.Void IOSSocialManager::.ctor()
extern "C"  void IOSSocialManager__ctor_m3810440040 (IOSSocialManager_t1329031315 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSocialManager::.cctor()
extern "C"  void IOSSocialManager__cctor_m1677428037 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSocialManager::add_OnFacebookPostStart(System.Action)
extern "C"  void IOSSocialManager_add_OnFacebookPostStart_m1281303896 (Il2CppObject * __this /* static, unused */, Action_t437523947 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSocialManager::remove_OnFacebookPostStart(System.Action)
extern "C"  void IOSSocialManager_remove_OnFacebookPostStart_m500843839 (Il2CppObject * __this /* static, unused */, Action_t437523947 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSocialManager::add_OnTwitterPostStart(System.Action)
extern "C"  void IOSSocialManager_add_OnTwitterPostStart_m688720533 (Il2CppObject * __this /* static, unused */, Action_t437523947 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSocialManager::remove_OnTwitterPostStart(System.Action)
extern "C"  void IOSSocialManager_remove_OnTwitterPostStart_m524997070 (Il2CppObject * __this /* static, unused */, Action_t437523947 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSocialManager::add_OnInstagramPostStart(System.Action)
extern "C"  void IOSSocialManager_add_OnInstagramPostStart_m2808531156 (Il2CppObject * __this /* static, unused */, Action_t437523947 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSocialManager::remove_OnInstagramPostStart(System.Action)
extern "C"  void IOSSocialManager_remove_OnInstagramPostStart_m89105869 (Il2CppObject * __this /* static, unused */, Action_t437523947 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSocialManager::add_OnFacebookPostResult(System.Action`1<ISN_Result>)
extern "C"  void IOSSocialManager_add_OnFacebookPostResult_m4031873606 (Il2CppObject * __this /* static, unused */, Action_1_t2646135257 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSocialManager::remove_OnFacebookPostResult(System.Action`1<ISN_Result>)
extern "C"  void IOSSocialManager_remove_OnFacebookPostResult_m3455301503 (Il2CppObject * __this /* static, unused */, Action_1_t2646135257 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSocialManager::add_OnTwitterPostResult(System.Action`1<ISN_Result>)
extern "C"  void IOSSocialManager_add_OnTwitterPostResult_m3208567657 (Il2CppObject * __this /* static, unused */, Action_1_t2646135257 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSocialManager::remove_OnTwitterPostResult(System.Action`1<ISN_Result>)
extern "C"  void IOSSocialManager_remove_OnTwitterPostResult_m2220137232 (Il2CppObject * __this /* static, unused */, Action_1_t2646135257 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSocialManager::add_OnInstagramPostResult(System.Action`1<ISN_Result>)
extern "C"  void IOSSocialManager_add_OnInstagramPostResult_m1767307082 (Il2CppObject * __this /* static, unused */, Action_1_t2646135257 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSocialManager::remove_OnInstagramPostResult(System.Action`1<ISN_Result>)
extern "C"  void IOSSocialManager_remove_OnInstagramPostResult_m1073441073 (Il2CppObject * __this /* static, unused */, Action_1_t2646135257 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSocialManager::add_OnMailResult(System.Action`1<ISN_Result>)
extern "C"  void IOSSocialManager_add_OnMailResult_m1015464821 (Il2CppObject * __this /* static, unused */, Action_1_t2646135257 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSocialManager::remove_OnMailResult(System.Action`1<ISN_Result>)
extern "C"  void IOSSocialManager_remove_OnMailResult_m3679076782 (Il2CppObject * __this /* static, unused */, Action_1_t2646135257 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSocialManager::_ISN_TwPost(System.String,System.String,System.String)
extern "C"  void IOSSocialManager__ISN_TwPost_m2035288439 (Il2CppObject * __this /* static, unused */, String_t* ___text, String_t* ___url, String_t* ___encodedMedia, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSocialManager::_ISN_FbPost(System.String,System.String,System.String)
extern "C"  void IOSSocialManager__ISN_FbPost_m3257554462 (Il2CppObject * __this /* static, unused */, String_t* ___text, String_t* ___url, String_t* ___encodedMedia, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSocialManager::_ISN_MediaShare(System.String,System.String)
extern "C"  void IOSSocialManager__ISN_MediaShare_m407541347 (Il2CppObject * __this /* static, unused */, String_t* ___text, String_t* ___encodedMedia, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSocialManager::_ISN_SendMail(System.String,System.String,System.String,System.String)
extern "C"  void IOSSocialManager__ISN_SendMail_m25410839 (Il2CppObject * __this /* static, unused */, String_t* ___subject, String_t* ___body, String_t* ___recipients, String_t* ___encodedMedia, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSocialManager::_ISN_InstaShare(System.String,System.String)
extern "C"  void IOSSocialManager__ISN_InstaShare_m2243627930 (Il2CppObject * __this /* static, unused */, String_t* ___encodedMedia, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSocialManager::_ISN_WP_ShareText(System.String)
extern "C"  void IOSSocialManager__ISN_WP_ShareText_m1629691292 (Il2CppObject * __this /* static, unused */, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSocialManager::_ISN_WP_ShareMedia(System.String)
extern "C"  void IOSSocialManager__ISN_WP_ShareMedia_m2278893941 (Il2CppObject * __this /* static, unused */, String_t* ___encodedMedia, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSocialManager::Awake()
extern "C"  void IOSSocialManager_Awake_m4048045259 (IOSSocialManager_t1329031315 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSocialManager::ShareMedia(System.String)
extern "C"  void IOSSocialManager_ShareMedia_m3468741121 (IOSSocialManager_t1329031315 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSocialManager::ShareMedia(System.String,UnityEngine.Texture2D)
extern "C"  void IOSSocialManager_ShareMedia_m2506290327 (IOSSocialManager_t1329031315 * __this, String_t* ___text, Texture2D_t2509538522 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSocialManager::TwitterPost(System.String,System.String,UnityEngine.Texture2D)
extern "C"  void IOSSocialManager_TwitterPost_m2544587259 (IOSSocialManager_t1329031315 * __this, String_t* ___text, String_t* ___url, Texture2D_t2509538522 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSocialManager::FacebookPost(System.String,System.String,UnityEngine.Texture2D)
extern "C"  void IOSSocialManager_FacebookPost_m959604210 (IOSSocialManager_t1329031315 * __this, String_t* ___text, String_t* ___url, Texture2D_t2509538522 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSocialManager::InstagramPost(UnityEngine.Texture2D)
extern "C"  void IOSSocialManager_InstagramPost_m1763213988 (IOSSocialManager_t1329031315 * __this, Texture2D_t2509538522 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSocialManager::InstagramPost(UnityEngine.Texture2D,System.String)
extern "C"  void IOSSocialManager_InstagramPost_m2887138272 (IOSSocialManager_t1329031315 * __this, Texture2D_t2509538522 * ___texture, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSocialManager::WhatsAppShareText(System.String)
extern "C"  void IOSSocialManager_WhatsAppShareText_m3101380642 (IOSSocialManager_t1329031315 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSocialManager::WhatsAppShareImage(UnityEngine.Texture2D)
extern "C"  void IOSSocialManager_WhatsAppShareImage_m2210078322 (IOSSocialManager_t1329031315 * __this, Texture2D_t2509538522 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSocialManager::SendMail(System.String,System.String,System.String)
extern "C"  void IOSSocialManager_SendMail_m3638969567 (IOSSocialManager_t1329031315 * __this, String_t* ___subject, String_t* ___body, String_t* ___recipients, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSocialManager::SendMail(System.String,System.String,System.String,UnityEngine.Texture2D)
extern "C"  void IOSSocialManager_SendMail_m1070847221 (IOSSocialManager_t1329031315 * __this, String_t* ___subject, String_t* ___body, String_t* ___recipients, Texture2D_t2509538522 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSocialManager::OnTwitterPostFailed()
extern "C"  void IOSSocialManager_OnTwitterPostFailed_m3694928695 (IOSSocialManager_t1329031315 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSocialManager::OnTwitterPostSuccess()
extern "C"  void IOSSocialManager_OnTwitterPostSuccess_m60838443 (IOSSocialManager_t1329031315 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSocialManager::OnFacebookPostFailed()
extern "C"  void IOSSocialManager_OnFacebookPostFailed_m4097064702 (IOSSocialManager_t1329031315 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSocialManager::OnFacebookPostSuccess()
extern "C"  void IOSSocialManager_OnFacebookPostSuccess_m3937120068 (IOSSocialManager_t1329031315 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSocialManager::OnMailFailed()
extern "C"  void IOSSocialManager_OnMailFailed_m105359663 (IOSSocialManager_t1329031315 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSocialManager::OnMailSuccess()
extern "C"  void IOSSocialManager_OnMailSuccess_m453348147 (IOSSocialManager_t1329031315 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSocialManager::OnInstaPostSuccess()
extern "C"  void IOSSocialManager_OnInstaPostSuccess_m3938931011 (IOSSocialManager_t1329031315 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSocialManager::OnInstaPostFailed(System.String)
extern "C"  void IOSSocialManager_OnInstaPostFailed_m3536177219 (IOSSocialManager_t1329031315 * __this, String_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSocialManager::<OnFacebookPostStart>m__5A()
extern "C"  void IOSSocialManager_U3COnFacebookPostStartU3Em__5A_m1018468152 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSocialManager::<OnTwitterPostStart>m__5B()
extern "C"  void IOSSocialManager_U3COnTwitterPostStartU3Em__5B_m3138491884 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSocialManager::<OnInstagramPostStart>m__5C()
extern "C"  void IOSSocialManager_U3COnInstagramPostStartU3Em__5C_m3518702158 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSocialManager::<OnFacebookPostResult>m__5D(ISN_Result)
extern "C"  void IOSSocialManager_U3COnFacebookPostResultU3Em__5D_m4247795338 (Il2CppObject * __this /* static, unused */, ISN_Result_t2497682552 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSocialManager::<OnTwitterPostResult>m__5E(ISN_Result)
extern "C"  void IOSSocialManager_U3COnTwitterPostResultU3Em__5E_m3841326136 (Il2CppObject * __this /* static, unused */, ISN_Result_t2497682552 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSocialManager::<OnInstagramPostResult>m__5F(ISN_Result)
extern "C"  void IOSSocialManager_U3COnInstagramPostResultU3Em__5F_m1606646648 (Il2CppObject * __this /* static, unused */, ISN_Result_t2497682552 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSSocialManager::<OnMailResult>m__60(ISN_Result)
extern "C"  void IOSSocialManager_U3COnMailResultU3Em__60_m2039278662 (Il2CppObject * __this /* static, unused */, ISN_Result_t2497682552 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
