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

// SA_DataConverter
struct SA_DataConverter_t1937417413;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t2956870243;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void SA_DataConverter::.ctor()
extern "C"  void SA_DataConverter__ctor_m3340177270 (SA_DataConverter_t1937417413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SA_DataConverter::SerializeArray(System.String[],System.String)
extern "C"  String_t* SA_DataConverter_SerializeArray_m1801840850 (Il2CppObject * __this /* static, unused */, StringU5BU5D_t2956870243* ___array, String_t* ___splitter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] SA_DataConverter::ParseArray(System.String,System.String)
extern "C"  StringU5BU5D_t2956870243* SA_DataConverter_ParseArray_m2318276329 (Il2CppObject * __this /* static, unused */, String_t* ___arrayData, String_t* ___splitter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
