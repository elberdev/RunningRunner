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

// MP_MediaPickerResult
struct MP_MediaPickerResult_t1214765203;
// System.Collections.Generic.List`1<MP_MediaItem>
struct List_1_t2779390548;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void MP_MediaPickerResult::.ctor(System.Collections.Generic.List`1<MP_MediaItem>)
extern "C"  void MP_MediaPickerResult__ctor_m3289440997 (MP_MediaPickerResult_t1214765203 * __this, List_1_t2779390548 * ___selectedItems, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MP_MediaPickerResult::.ctor(System.String)
extern "C"  void MP_MediaPickerResult__ctor_m3210047642 (MP_MediaPickerResult_t1214765203 * __this, String_t* ___errorData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<MP_MediaItem> MP_MediaPickerResult::get_SelectedmediaItems()
extern "C"  List_1_t2779390548 * MP_MediaPickerResult_get_SelectedmediaItems_m3376393258 (MP_MediaPickerResult_t1214765203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
