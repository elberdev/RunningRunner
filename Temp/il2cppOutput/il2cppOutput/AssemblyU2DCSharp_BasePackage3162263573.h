#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.MemoryStream
struct MemoryStream_t2881531048;
// System.IO.BinaryWriter
struct BinaryWriter_t2314211483;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BasePackage
struct  BasePackage_t3162263573  : public Il2CppObject
{
public:
	// System.IO.MemoryStream BasePackage::buffer
	MemoryStream_t2881531048 * ___buffer_0;
	// System.IO.BinaryWriter BasePackage::writer
	BinaryWriter_t2314211483 * ___writer_1;

public:
	inline static int32_t get_offset_of_buffer_0() { return static_cast<int32_t>(offsetof(BasePackage_t3162263573, ___buffer_0)); }
	inline MemoryStream_t2881531048 * get_buffer_0() const { return ___buffer_0; }
	inline MemoryStream_t2881531048 ** get_address_of_buffer_0() { return &___buffer_0; }
	inline void set_buffer_0(MemoryStream_t2881531048 * value)
	{
		___buffer_0 = value;
		Il2CppCodeGenWriteBarrier(&___buffer_0, value);
	}

	inline static int32_t get_offset_of_writer_1() { return static_cast<int32_t>(offsetof(BasePackage_t3162263573, ___writer_1)); }
	inline BinaryWriter_t2314211483 * get_writer_1() const { return ___writer_1; }
	inline BinaryWriter_t2314211483 ** get_address_of_writer_1() { return &___writer_1; }
	inline void set_writer_1(BinaryWriter_t2314211483 * value)
	{
		___writer_1 = value;
		Il2CppCodeGenWriteBarrier(&___writer_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
