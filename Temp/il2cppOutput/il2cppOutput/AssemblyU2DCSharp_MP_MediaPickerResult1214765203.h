﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<MP_MediaItem>
struct List_1_t2779390548;

#include "AssemblyU2DCSharp_ISN_Result2497682552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MP_MediaPickerResult
struct  MP_MediaPickerResult_t1214765203  : public ISN_Result_t2497682552
{
public:
	// System.Collections.Generic.List`1<MP_MediaItem> MP_MediaPickerResult::_SelectedmediaItems
	List_1_t2779390548 * ____SelectedmediaItems_2;

public:
	inline static int32_t get_offset_of__SelectedmediaItems_2() { return static_cast<int32_t>(offsetof(MP_MediaPickerResult_t1214765203, ____SelectedmediaItems_2)); }
	inline List_1_t2779390548 * get__SelectedmediaItems_2() const { return ____SelectedmediaItems_2; }
	inline List_1_t2779390548 ** get_address_of__SelectedmediaItems_2() { return &____SelectedmediaItems_2; }
	inline void set__SelectedmediaItems_2(List_1_t2779390548 * value)
	{
		____SelectedmediaItems_2 = value;
		Il2CppCodeGenWriteBarrier(&____SelectedmediaItems_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
