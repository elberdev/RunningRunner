#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1765447871;
// System.Collections.Generic.List`1<IOSProductTemplate>
struct List_1_t3260933077;
// System.Collections.Generic.List`1<GK_Leaderboard>
struct List_1_t2366366075;
// System.Collections.Generic.List`1<GK_AchievementTemplate>
struct List_1_t888849863;
// IOSNativeSettings
struct IOSNativeSettings_t4031999655;

#include "UnityEngine_UnityEngine_ScriptableObject184905905.h"
#include "AssemblyU2DCSharp_IOSGalleryLoadImageFormat4171476743.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IOSNativeSettings
struct  IOSNativeSettings_t4031999655  : public ScriptableObject_t184905905
{
public:
	// System.String IOSNativeSettings::AppleId
	String_t* ___AppleId_5;
	// System.Int32 IOSNativeSettings::ToolbarIndex
	int32_t ___ToolbarIndex_6;
	// System.Boolean IOSNativeSettings::SendFakeEventsInEditor
	bool ___SendFakeEventsInEditor_7;
	// System.Collections.Generic.List`1<System.String> IOSNativeSettings::DefaultStoreProductsView
	List_1_t1765447871 * ___DefaultStoreProductsView_8;
	// System.Collections.Generic.List`1<IOSProductTemplate> IOSNativeSettings::InAppProducts
	List_1_t3260933077 * ___InAppProducts_9;
	// System.Collections.Generic.List`1<GK_Leaderboard> IOSNativeSettings::Leaderboards
	List_1_t2366366075 * ___Leaderboards_10;
	// System.Collections.Generic.List`1<GK_AchievementTemplate> IOSNativeSettings::Achievements
	List_1_t888849863 * ___Achievements_11;
	// System.Boolean IOSNativeSettings::checkInternetBeforeLoadRequest
	bool ___checkInternetBeforeLoadRequest_12;
	// System.Boolean IOSNativeSettings::ShowStoreKitProducts
	bool ___ShowStoreKitProducts_13;
	// System.Boolean IOSNativeSettings::ShowLeaderboards
	bool ___ShowLeaderboards_14;
	// System.Boolean IOSNativeSettings::ShowAchievementsParams
	bool ___ShowAchievementsParams_15;
	// System.Boolean IOSNativeSettings::ShowUsersParams
	bool ___ShowUsersParams_16;
	// System.Boolean IOSNativeSettings::ShowOtherParams
	bool ___ShowOtherParams_17;
	// System.Boolean IOSNativeSettings::ShowRPKParams
	bool ___ShowRPKParams_18;
	// System.Boolean IOSNativeSettings::ExpandAPISettings
	bool ___ExpandAPISettings_19;
	// System.Boolean IOSNativeSettings::EnableGameCenterAPI
	bool ___EnableGameCenterAPI_20;
	// System.Boolean IOSNativeSettings::EnableInAppsAPI
	bool ___EnableInAppsAPI_21;
	// System.Boolean IOSNativeSettings::EnableCameraAPI
	bool ___EnableCameraAPI_22;
	// System.Boolean IOSNativeSettings::EnableSocialSharingAPI
	bool ___EnableSocialSharingAPI_23;
	// System.Boolean IOSNativeSettings::EnableMediaPlayerAPI
	bool ___EnableMediaPlayerAPI_24;
	// System.Boolean IOSNativeSettings::EnableiAdAPI
	bool ___EnableiAdAPI_25;
	// System.Boolean IOSNativeSettings::EnableReplayKit
	bool ___EnableReplayKit_26;
	// System.Boolean IOSNativeSettings::EnableCloudKit
	bool ___EnableCloudKit_27;
	// System.Boolean IOSNativeSettings::EnableSoomla
	bool ___EnableSoomla_28;
	// System.Boolean IOSNativeSettings::EnablePushNotificationsAPI
	bool ___EnablePushNotificationsAPI_29;
	// System.Boolean IOSNativeSettings::DisablePluginLogs
	bool ___DisablePluginLogs_30;
	// System.Boolean IOSNativeSettings::UseGCRequestCaching
	bool ___UseGCRequestCaching_31;
	// System.Boolean IOSNativeSettings::UsePPForAchievements
	bool ___UsePPForAchievements_32;
	// System.Boolean IOSNativeSettings::AutoLoadUsersSmallImages
	bool ___AutoLoadUsersSmallImages_33;
	// System.Boolean IOSNativeSettings::AutoLoadUsersBigImages
	bool ___AutoLoadUsersBigImages_34;
	// System.Int32 IOSNativeSettings::MaxImageLoadSize
	int32_t ___MaxImageLoadSize_35;
	// System.Single IOSNativeSettings::JPegCompressionRate
	float ___JPegCompressionRate_36;
	// IOSGalleryLoadImageFormat IOSNativeSettings::GalleryImageFormat
	int32_t ___GalleryImageFormat_37;
	// System.Int32 IOSNativeSettings::RPK_iPadViewType
	int32_t ___RPK_iPadViewType_38;
	// System.String IOSNativeSettings::SoomlaDownloadLink
	String_t* ___SoomlaDownloadLink_39;
	// System.String IOSNativeSettings::SoomlaDocsLink
	String_t* ___SoomlaDocsLink_40;
	// System.String IOSNativeSettings::SoomlaGameKey
	String_t* ___SoomlaGameKey_41;
	// System.String IOSNativeSettings::SoomlaEnvKey
	String_t* ___SoomlaEnvKey_42;
	// System.Boolean IOSNativeSettings::OneSignalEnabled
	bool ___OneSignalEnabled_43;
	// System.String IOSNativeSettings::OneSignalDocsLink
	String_t* ___OneSignalDocsLink_44;

public:
	inline static int32_t get_offset_of_AppleId_5() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t4031999655, ___AppleId_5)); }
	inline String_t* get_AppleId_5() const { return ___AppleId_5; }
	inline String_t** get_address_of_AppleId_5() { return &___AppleId_5; }
	inline void set_AppleId_5(String_t* value)
	{
		___AppleId_5 = value;
		Il2CppCodeGenWriteBarrier(&___AppleId_5, value);
	}

	inline static int32_t get_offset_of_ToolbarIndex_6() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t4031999655, ___ToolbarIndex_6)); }
	inline int32_t get_ToolbarIndex_6() const { return ___ToolbarIndex_6; }
	inline int32_t* get_address_of_ToolbarIndex_6() { return &___ToolbarIndex_6; }
	inline void set_ToolbarIndex_6(int32_t value)
	{
		___ToolbarIndex_6 = value;
	}

	inline static int32_t get_offset_of_SendFakeEventsInEditor_7() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t4031999655, ___SendFakeEventsInEditor_7)); }
	inline bool get_SendFakeEventsInEditor_7() const { return ___SendFakeEventsInEditor_7; }
	inline bool* get_address_of_SendFakeEventsInEditor_7() { return &___SendFakeEventsInEditor_7; }
	inline void set_SendFakeEventsInEditor_7(bool value)
	{
		___SendFakeEventsInEditor_7 = value;
	}

	inline static int32_t get_offset_of_DefaultStoreProductsView_8() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t4031999655, ___DefaultStoreProductsView_8)); }
	inline List_1_t1765447871 * get_DefaultStoreProductsView_8() const { return ___DefaultStoreProductsView_8; }
	inline List_1_t1765447871 ** get_address_of_DefaultStoreProductsView_8() { return &___DefaultStoreProductsView_8; }
	inline void set_DefaultStoreProductsView_8(List_1_t1765447871 * value)
	{
		___DefaultStoreProductsView_8 = value;
		Il2CppCodeGenWriteBarrier(&___DefaultStoreProductsView_8, value);
	}

	inline static int32_t get_offset_of_InAppProducts_9() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t4031999655, ___InAppProducts_9)); }
	inline List_1_t3260933077 * get_InAppProducts_9() const { return ___InAppProducts_9; }
	inline List_1_t3260933077 ** get_address_of_InAppProducts_9() { return &___InAppProducts_9; }
	inline void set_InAppProducts_9(List_1_t3260933077 * value)
	{
		___InAppProducts_9 = value;
		Il2CppCodeGenWriteBarrier(&___InAppProducts_9, value);
	}

	inline static int32_t get_offset_of_Leaderboards_10() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t4031999655, ___Leaderboards_10)); }
	inline List_1_t2366366075 * get_Leaderboards_10() const { return ___Leaderboards_10; }
	inline List_1_t2366366075 ** get_address_of_Leaderboards_10() { return &___Leaderboards_10; }
	inline void set_Leaderboards_10(List_1_t2366366075 * value)
	{
		___Leaderboards_10 = value;
		Il2CppCodeGenWriteBarrier(&___Leaderboards_10, value);
	}

	inline static int32_t get_offset_of_Achievements_11() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t4031999655, ___Achievements_11)); }
	inline List_1_t888849863 * get_Achievements_11() const { return ___Achievements_11; }
	inline List_1_t888849863 ** get_address_of_Achievements_11() { return &___Achievements_11; }
	inline void set_Achievements_11(List_1_t888849863 * value)
	{
		___Achievements_11 = value;
		Il2CppCodeGenWriteBarrier(&___Achievements_11, value);
	}

	inline static int32_t get_offset_of_checkInternetBeforeLoadRequest_12() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t4031999655, ___checkInternetBeforeLoadRequest_12)); }
	inline bool get_checkInternetBeforeLoadRequest_12() const { return ___checkInternetBeforeLoadRequest_12; }
	inline bool* get_address_of_checkInternetBeforeLoadRequest_12() { return &___checkInternetBeforeLoadRequest_12; }
	inline void set_checkInternetBeforeLoadRequest_12(bool value)
	{
		___checkInternetBeforeLoadRequest_12 = value;
	}

	inline static int32_t get_offset_of_ShowStoreKitProducts_13() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t4031999655, ___ShowStoreKitProducts_13)); }
	inline bool get_ShowStoreKitProducts_13() const { return ___ShowStoreKitProducts_13; }
	inline bool* get_address_of_ShowStoreKitProducts_13() { return &___ShowStoreKitProducts_13; }
	inline void set_ShowStoreKitProducts_13(bool value)
	{
		___ShowStoreKitProducts_13 = value;
	}

	inline static int32_t get_offset_of_ShowLeaderboards_14() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t4031999655, ___ShowLeaderboards_14)); }
	inline bool get_ShowLeaderboards_14() const { return ___ShowLeaderboards_14; }
	inline bool* get_address_of_ShowLeaderboards_14() { return &___ShowLeaderboards_14; }
	inline void set_ShowLeaderboards_14(bool value)
	{
		___ShowLeaderboards_14 = value;
	}

	inline static int32_t get_offset_of_ShowAchievementsParams_15() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t4031999655, ___ShowAchievementsParams_15)); }
	inline bool get_ShowAchievementsParams_15() const { return ___ShowAchievementsParams_15; }
	inline bool* get_address_of_ShowAchievementsParams_15() { return &___ShowAchievementsParams_15; }
	inline void set_ShowAchievementsParams_15(bool value)
	{
		___ShowAchievementsParams_15 = value;
	}

	inline static int32_t get_offset_of_ShowUsersParams_16() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t4031999655, ___ShowUsersParams_16)); }
	inline bool get_ShowUsersParams_16() const { return ___ShowUsersParams_16; }
	inline bool* get_address_of_ShowUsersParams_16() { return &___ShowUsersParams_16; }
	inline void set_ShowUsersParams_16(bool value)
	{
		___ShowUsersParams_16 = value;
	}

	inline static int32_t get_offset_of_ShowOtherParams_17() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t4031999655, ___ShowOtherParams_17)); }
	inline bool get_ShowOtherParams_17() const { return ___ShowOtherParams_17; }
	inline bool* get_address_of_ShowOtherParams_17() { return &___ShowOtherParams_17; }
	inline void set_ShowOtherParams_17(bool value)
	{
		___ShowOtherParams_17 = value;
	}

	inline static int32_t get_offset_of_ShowRPKParams_18() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t4031999655, ___ShowRPKParams_18)); }
	inline bool get_ShowRPKParams_18() const { return ___ShowRPKParams_18; }
	inline bool* get_address_of_ShowRPKParams_18() { return &___ShowRPKParams_18; }
	inline void set_ShowRPKParams_18(bool value)
	{
		___ShowRPKParams_18 = value;
	}

	inline static int32_t get_offset_of_ExpandAPISettings_19() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t4031999655, ___ExpandAPISettings_19)); }
	inline bool get_ExpandAPISettings_19() const { return ___ExpandAPISettings_19; }
	inline bool* get_address_of_ExpandAPISettings_19() { return &___ExpandAPISettings_19; }
	inline void set_ExpandAPISettings_19(bool value)
	{
		___ExpandAPISettings_19 = value;
	}

	inline static int32_t get_offset_of_EnableGameCenterAPI_20() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t4031999655, ___EnableGameCenterAPI_20)); }
	inline bool get_EnableGameCenterAPI_20() const { return ___EnableGameCenterAPI_20; }
	inline bool* get_address_of_EnableGameCenterAPI_20() { return &___EnableGameCenterAPI_20; }
	inline void set_EnableGameCenterAPI_20(bool value)
	{
		___EnableGameCenterAPI_20 = value;
	}

	inline static int32_t get_offset_of_EnableInAppsAPI_21() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t4031999655, ___EnableInAppsAPI_21)); }
	inline bool get_EnableInAppsAPI_21() const { return ___EnableInAppsAPI_21; }
	inline bool* get_address_of_EnableInAppsAPI_21() { return &___EnableInAppsAPI_21; }
	inline void set_EnableInAppsAPI_21(bool value)
	{
		___EnableInAppsAPI_21 = value;
	}

	inline static int32_t get_offset_of_EnableCameraAPI_22() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t4031999655, ___EnableCameraAPI_22)); }
	inline bool get_EnableCameraAPI_22() const { return ___EnableCameraAPI_22; }
	inline bool* get_address_of_EnableCameraAPI_22() { return &___EnableCameraAPI_22; }
	inline void set_EnableCameraAPI_22(bool value)
	{
		___EnableCameraAPI_22 = value;
	}

	inline static int32_t get_offset_of_EnableSocialSharingAPI_23() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t4031999655, ___EnableSocialSharingAPI_23)); }
	inline bool get_EnableSocialSharingAPI_23() const { return ___EnableSocialSharingAPI_23; }
	inline bool* get_address_of_EnableSocialSharingAPI_23() { return &___EnableSocialSharingAPI_23; }
	inline void set_EnableSocialSharingAPI_23(bool value)
	{
		___EnableSocialSharingAPI_23 = value;
	}

	inline static int32_t get_offset_of_EnableMediaPlayerAPI_24() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t4031999655, ___EnableMediaPlayerAPI_24)); }
	inline bool get_EnableMediaPlayerAPI_24() const { return ___EnableMediaPlayerAPI_24; }
	inline bool* get_address_of_EnableMediaPlayerAPI_24() { return &___EnableMediaPlayerAPI_24; }
	inline void set_EnableMediaPlayerAPI_24(bool value)
	{
		___EnableMediaPlayerAPI_24 = value;
	}

	inline static int32_t get_offset_of_EnableiAdAPI_25() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t4031999655, ___EnableiAdAPI_25)); }
	inline bool get_EnableiAdAPI_25() const { return ___EnableiAdAPI_25; }
	inline bool* get_address_of_EnableiAdAPI_25() { return &___EnableiAdAPI_25; }
	inline void set_EnableiAdAPI_25(bool value)
	{
		___EnableiAdAPI_25 = value;
	}

	inline static int32_t get_offset_of_EnableReplayKit_26() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t4031999655, ___EnableReplayKit_26)); }
	inline bool get_EnableReplayKit_26() const { return ___EnableReplayKit_26; }
	inline bool* get_address_of_EnableReplayKit_26() { return &___EnableReplayKit_26; }
	inline void set_EnableReplayKit_26(bool value)
	{
		___EnableReplayKit_26 = value;
	}

	inline static int32_t get_offset_of_EnableCloudKit_27() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t4031999655, ___EnableCloudKit_27)); }
	inline bool get_EnableCloudKit_27() const { return ___EnableCloudKit_27; }
	inline bool* get_address_of_EnableCloudKit_27() { return &___EnableCloudKit_27; }
	inline void set_EnableCloudKit_27(bool value)
	{
		___EnableCloudKit_27 = value;
	}

	inline static int32_t get_offset_of_EnableSoomla_28() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t4031999655, ___EnableSoomla_28)); }
	inline bool get_EnableSoomla_28() const { return ___EnableSoomla_28; }
	inline bool* get_address_of_EnableSoomla_28() { return &___EnableSoomla_28; }
	inline void set_EnableSoomla_28(bool value)
	{
		___EnableSoomla_28 = value;
	}

	inline static int32_t get_offset_of_EnablePushNotificationsAPI_29() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t4031999655, ___EnablePushNotificationsAPI_29)); }
	inline bool get_EnablePushNotificationsAPI_29() const { return ___EnablePushNotificationsAPI_29; }
	inline bool* get_address_of_EnablePushNotificationsAPI_29() { return &___EnablePushNotificationsAPI_29; }
	inline void set_EnablePushNotificationsAPI_29(bool value)
	{
		___EnablePushNotificationsAPI_29 = value;
	}

	inline static int32_t get_offset_of_DisablePluginLogs_30() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t4031999655, ___DisablePluginLogs_30)); }
	inline bool get_DisablePluginLogs_30() const { return ___DisablePluginLogs_30; }
	inline bool* get_address_of_DisablePluginLogs_30() { return &___DisablePluginLogs_30; }
	inline void set_DisablePluginLogs_30(bool value)
	{
		___DisablePluginLogs_30 = value;
	}

	inline static int32_t get_offset_of_UseGCRequestCaching_31() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t4031999655, ___UseGCRequestCaching_31)); }
	inline bool get_UseGCRequestCaching_31() const { return ___UseGCRequestCaching_31; }
	inline bool* get_address_of_UseGCRequestCaching_31() { return &___UseGCRequestCaching_31; }
	inline void set_UseGCRequestCaching_31(bool value)
	{
		___UseGCRequestCaching_31 = value;
	}

	inline static int32_t get_offset_of_UsePPForAchievements_32() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t4031999655, ___UsePPForAchievements_32)); }
	inline bool get_UsePPForAchievements_32() const { return ___UsePPForAchievements_32; }
	inline bool* get_address_of_UsePPForAchievements_32() { return &___UsePPForAchievements_32; }
	inline void set_UsePPForAchievements_32(bool value)
	{
		___UsePPForAchievements_32 = value;
	}

	inline static int32_t get_offset_of_AutoLoadUsersSmallImages_33() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t4031999655, ___AutoLoadUsersSmallImages_33)); }
	inline bool get_AutoLoadUsersSmallImages_33() const { return ___AutoLoadUsersSmallImages_33; }
	inline bool* get_address_of_AutoLoadUsersSmallImages_33() { return &___AutoLoadUsersSmallImages_33; }
	inline void set_AutoLoadUsersSmallImages_33(bool value)
	{
		___AutoLoadUsersSmallImages_33 = value;
	}

	inline static int32_t get_offset_of_AutoLoadUsersBigImages_34() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t4031999655, ___AutoLoadUsersBigImages_34)); }
	inline bool get_AutoLoadUsersBigImages_34() const { return ___AutoLoadUsersBigImages_34; }
	inline bool* get_address_of_AutoLoadUsersBigImages_34() { return &___AutoLoadUsersBigImages_34; }
	inline void set_AutoLoadUsersBigImages_34(bool value)
	{
		___AutoLoadUsersBigImages_34 = value;
	}

	inline static int32_t get_offset_of_MaxImageLoadSize_35() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t4031999655, ___MaxImageLoadSize_35)); }
	inline int32_t get_MaxImageLoadSize_35() const { return ___MaxImageLoadSize_35; }
	inline int32_t* get_address_of_MaxImageLoadSize_35() { return &___MaxImageLoadSize_35; }
	inline void set_MaxImageLoadSize_35(int32_t value)
	{
		___MaxImageLoadSize_35 = value;
	}

	inline static int32_t get_offset_of_JPegCompressionRate_36() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t4031999655, ___JPegCompressionRate_36)); }
	inline float get_JPegCompressionRate_36() const { return ___JPegCompressionRate_36; }
	inline float* get_address_of_JPegCompressionRate_36() { return &___JPegCompressionRate_36; }
	inline void set_JPegCompressionRate_36(float value)
	{
		___JPegCompressionRate_36 = value;
	}

	inline static int32_t get_offset_of_GalleryImageFormat_37() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t4031999655, ___GalleryImageFormat_37)); }
	inline int32_t get_GalleryImageFormat_37() const { return ___GalleryImageFormat_37; }
	inline int32_t* get_address_of_GalleryImageFormat_37() { return &___GalleryImageFormat_37; }
	inline void set_GalleryImageFormat_37(int32_t value)
	{
		___GalleryImageFormat_37 = value;
	}

	inline static int32_t get_offset_of_RPK_iPadViewType_38() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t4031999655, ___RPK_iPadViewType_38)); }
	inline int32_t get_RPK_iPadViewType_38() const { return ___RPK_iPadViewType_38; }
	inline int32_t* get_address_of_RPK_iPadViewType_38() { return &___RPK_iPadViewType_38; }
	inline void set_RPK_iPadViewType_38(int32_t value)
	{
		___RPK_iPadViewType_38 = value;
	}

	inline static int32_t get_offset_of_SoomlaDownloadLink_39() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t4031999655, ___SoomlaDownloadLink_39)); }
	inline String_t* get_SoomlaDownloadLink_39() const { return ___SoomlaDownloadLink_39; }
	inline String_t** get_address_of_SoomlaDownloadLink_39() { return &___SoomlaDownloadLink_39; }
	inline void set_SoomlaDownloadLink_39(String_t* value)
	{
		___SoomlaDownloadLink_39 = value;
		Il2CppCodeGenWriteBarrier(&___SoomlaDownloadLink_39, value);
	}

	inline static int32_t get_offset_of_SoomlaDocsLink_40() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t4031999655, ___SoomlaDocsLink_40)); }
	inline String_t* get_SoomlaDocsLink_40() const { return ___SoomlaDocsLink_40; }
	inline String_t** get_address_of_SoomlaDocsLink_40() { return &___SoomlaDocsLink_40; }
	inline void set_SoomlaDocsLink_40(String_t* value)
	{
		___SoomlaDocsLink_40 = value;
		Il2CppCodeGenWriteBarrier(&___SoomlaDocsLink_40, value);
	}

	inline static int32_t get_offset_of_SoomlaGameKey_41() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t4031999655, ___SoomlaGameKey_41)); }
	inline String_t* get_SoomlaGameKey_41() const { return ___SoomlaGameKey_41; }
	inline String_t** get_address_of_SoomlaGameKey_41() { return &___SoomlaGameKey_41; }
	inline void set_SoomlaGameKey_41(String_t* value)
	{
		___SoomlaGameKey_41 = value;
		Il2CppCodeGenWriteBarrier(&___SoomlaGameKey_41, value);
	}

	inline static int32_t get_offset_of_SoomlaEnvKey_42() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t4031999655, ___SoomlaEnvKey_42)); }
	inline String_t* get_SoomlaEnvKey_42() const { return ___SoomlaEnvKey_42; }
	inline String_t** get_address_of_SoomlaEnvKey_42() { return &___SoomlaEnvKey_42; }
	inline void set_SoomlaEnvKey_42(String_t* value)
	{
		___SoomlaEnvKey_42 = value;
		Il2CppCodeGenWriteBarrier(&___SoomlaEnvKey_42, value);
	}

	inline static int32_t get_offset_of_OneSignalEnabled_43() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t4031999655, ___OneSignalEnabled_43)); }
	inline bool get_OneSignalEnabled_43() const { return ___OneSignalEnabled_43; }
	inline bool* get_address_of_OneSignalEnabled_43() { return &___OneSignalEnabled_43; }
	inline void set_OneSignalEnabled_43(bool value)
	{
		___OneSignalEnabled_43 = value;
	}

	inline static int32_t get_offset_of_OneSignalDocsLink_44() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t4031999655, ___OneSignalDocsLink_44)); }
	inline String_t* get_OneSignalDocsLink_44() const { return ___OneSignalDocsLink_44; }
	inline String_t** get_address_of_OneSignalDocsLink_44() { return &___OneSignalDocsLink_44; }
	inline void set_OneSignalDocsLink_44(String_t* value)
	{
		___OneSignalDocsLink_44 = value;
		Il2CppCodeGenWriteBarrier(&___OneSignalDocsLink_44, value);
	}
};

struct IOSNativeSettings_t4031999655_StaticFields
{
public:
	// IOSNativeSettings IOSNativeSettings::instance
	IOSNativeSettings_t4031999655 * ___instance_45;

public:
	inline static int32_t get_offset_of_instance_45() { return static_cast<int32_t>(offsetof(IOSNativeSettings_t4031999655_StaticFields, ___instance_45)); }
	inline IOSNativeSettings_t4031999655 * get_instance_45() const { return ___instance_45; }
	inline IOSNativeSettings_t4031999655 ** get_address_of_instance_45() { return &___instance_45; }
	inline void set_instance_45(IOSNativeSettings_t4031999655 * value)
	{
		___instance_45 = value;
		Il2CppCodeGenWriteBarrier(&___instance_45, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
