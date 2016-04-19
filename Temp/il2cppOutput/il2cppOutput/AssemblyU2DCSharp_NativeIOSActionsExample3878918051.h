#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture2D
struct Texture2D_t2509538522;

#include "AssemblyU2DCSharp_BaseIOSFeaturePreview3923413614.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NativeIOSActionsExample
struct  NativeIOSActionsExample_t3878918051  : public BaseIOSFeaturePreview_t3923413614
{
public:
	// UnityEngine.Texture2D NativeIOSActionsExample::hello_texture
	Texture2D_t2509538522 * ___hello_texture_12;
	// UnityEngine.Texture2D NativeIOSActionsExample::drawTexture
	Texture2D_t2509538522 * ___drawTexture_13;

public:
	inline static int32_t get_offset_of_hello_texture_12() { return static_cast<int32_t>(offsetof(NativeIOSActionsExample_t3878918051, ___hello_texture_12)); }
	inline Texture2D_t2509538522 * get_hello_texture_12() const { return ___hello_texture_12; }
	inline Texture2D_t2509538522 ** get_address_of_hello_texture_12() { return &___hello_texture_12; }
	inline void set_hello_texture_12(Texture2D_t2509538522 * value)
	{
		___hello_texture_12 = value;
		Il2CppCodeGenWriteBarrier(&___hello_texture_12, value);
	}

	inline static int32_t get_offset_of_drawTexture_13() { return static_cast<int32_t>(offsetof(NativeIOSActionsExample_t3878918051, ___drawTexture_13)); }
	inline Texture2D_t2509538522 * get_drawTexture_13() const { return ___drawTexture_13; }
	inline Texture2D_t2509538522 ** get_address_of_drawTexture_13() { return &___drawTexture_13; }
	inline void set_drawTexture_13(Texture2D_t2509538522 * value)
	{
		___drawTexture_13 = value;
		Il2CppCodeGenWriteBarrier(&___drawTexture_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
