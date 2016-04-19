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

// IOSStoreProductView
struct IOSStoreProductView_t2290113184;
// System.String[]
struct StringU5BU5D_t2956870243;
// System.Action
struct Action_t437523947;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Action437523947.h"
#include "mscorlib_System_String968488902.h"

// System.Void IOSStoreProductView::.ctor()
extern "C"  void IOSStoreProductView__ctor_m692694219 (IOSStoreProductView_t2290113184 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSStoreProductView::.ctor(System.String[])
extern "C"  void IOSStoreProductView__ctor_m2680844661 (IOSStoreProductView_t2290113184 * __this, StringU5BU5D_t2956870243* ___ids, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSStoreProductView::add_Loaded(System.Action)
extern "C"  void IOSStoreProductView_add_Loaded_m3968204097 (IOSStoreProductView_t2290113184 * __this, Action_t437523947 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSStoreProductView::remove_Loaded(System.Action)
extern "C"  void IOSStoreProductView_remove_Loaded_m2587975124 (IOSStoreProductView_t2290113184 * __this, Action_t437523947 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSStoreProductView::add_LoadFailed(System.Action)
extern "C"  void IOSStoreProductView_add_LoadFailed_m1894736835 (IOSStoreProductView_t2290113184 * __this, Action_t437523947 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSStoreProductView::remove_LoadFailed(System.Action)
extern "C"  void IOSStoreProductView_remove_LoadFailed_m437404374 (IOSStoreProductView_t2290113184 * __this, Action_t437523947 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSStoreProductView::add_Appeared(System.Action)
extern "C"  void IOSStoreProductView_add_Appeared_m4176100850 (IOSStoreProductView_t2290113184 * __this, Action_t437523947 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSStoreProductView::remove_Appeared(System.Action)
extern "C"  void IOSStoreProductView_remove_Appeared_m625984965 (IOSStoreProductView_t2290113184 * __this, Action_t437523947 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSStoreProductView::add_Dismissed(System.Action)
extern "C"  void IOSStoreProductView_add_Dismissed_m2932139081 (IOSStoreProductView_t2290113184 * __this, Action_t437523947 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSStoreProductView::remove_Dismissed(System.Action)
extern "C"  void IOSStoreProductView_remove_Dismissed_m252729046 (IOSStoreProductView_t2290113184 * __this, Action_t437523947 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSStoreProductView::_createProductView(System.Int32,System.String)
extern "C"  void IOSStoreProductView__createProductView_m1653603103 (Il2CppObject * __this /* static, unused */, int32_t ___viewId, String_t* ___productsId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSStoreProductView::_showProductView(System.Int32)
extern "C"  void IOSStoreProductView__showProductView_m69681026 (Il2CppObject * __this /* static, unused */, int32_t ___viewId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSStoreProductView::addProductId(System.String)
extern "C"  void IOSStoreProductView_addProductId_m3954702016 (IOSStoreProductView_t2290113184 * __this, String_t* ___productId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSStoreProductView::Load()
extern "C"  void IOSStoreProductView_Load_m1445912191 (IOSStoreProductView_t2290113184 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSStoreProductView::Show()
extern "C"  void IOSStoreProductView_Show_m1640286934 (IOSStoreProductView_t2290113184 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 IOSStoreProductView::get_id()
extern "C"  int32_t IOSStoreProductView_get_id_m621818703 (IOSStoreProductView_t2290113184 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSStoreProductView::OnProductViewAppeard()
extern "C"  void IOSStoreProductView_OnProductViewAppeard_m3219430259 (IOSStoreProductView_t2290113184 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSStoreProductView::OnProductViewDismissed()
extern "C"  void IOSStoreProductView_OnProductViewDismissed_m260370285 (IOSStoreProductView_t2290113184 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSStoreProductView::OnContentLoaded()
extern "C"  void IOSStoreProductView_OnContentLoaded_m2355540584 (IOSStoreProductView_t2290113184 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSStoreProductView::OnContentLoadFailed()
extern "C"  void IOSStoreProductView_OnContentLoadFailed_m4215974566 (IOSStoreProductView_t2290113184 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSStoreProductView::SetId(System.Int32)
extern "C"  void IOSStoreProductView_SetId_m2713235479 (IOSStoreProductView_t2290113184 * __this, int32_t ___viewId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSStoreProductView::<Loaded>m__3C()
extern "C"  void IOSStoreProductView_U3CLoadedU3Em__3C_m2058444649 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSStoreProductView::<LoadFailed>m__3D()
extern "C"  void IOSStoreProductView_U3CLoadFailedU3Em__3D_m2947302376 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSStoreProductView::<Appeared>m__3E()
extern "C"  void IOSStoreProductView_U3CAppearedU3Em__3E_m984160218 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOSStoreProductView::<Dismissed>m__3F()
extern "C"  void IOSStoreProductView_U3CDismissedU3Em__3F_m1767690248 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
