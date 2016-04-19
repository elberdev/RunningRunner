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

// IOSNative
struct IOSNative_t122483300;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t2956870243;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void IOSNative::.ctor()
extern "C"  void IOSNative__ctor_m3303969671 (IOSNative_t122483300 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String IOSNative::SerializeArray(System.String[])
extern "C"  String_t* IOSNative_SerializeArray_m802464333 (Il2CppObject * __this /* static, unused */, StringU5BU5D_t2956870243* ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] IOSNative::ParseArray(System.String)
extern "C"  StringU5BU5D_t2956870243* IOSNative_ParseArray_m1118698976 (Il2CppObject * __this /* static, unused */, String_t* ___arrayData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
