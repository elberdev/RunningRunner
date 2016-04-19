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

// BasePackage
struct BasePackage_t3162263573;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void BasePackage::.ctor()
extern "C"  void BasePackage__ctor_m3750720246 (BasePackage_t3162263573 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BasePackage::initWriter()
extern "C"  void BasePackage_initWriter_m161013393 (BasePackage_t3162263573 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] BasePackage::getBytes()
extern "C"  ByteU5BU5D_t58506160* BasePackage_getBytes_m3724338233 (BasePackage_t3162263573 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BasePackage::send()
extern "C"  void BasePackage_send_m2790794486 (BasePackage_t3162263573 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BasePackage::writeInt(System.Int32)
extern "C"  void BasePackage_writeInt_m2473403599 (BasePackage_t3162263573 * __this, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BasePackage::writeString(System.String)
extern "C"  void BasePackage_writeString_m3735184062 (BasePackage_t3162263573 * __this, String_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BasePackage::writeFloat(System.Single)
extern "C"  void BasePackage_writeFloat_m1914379104 (BasePackage_t3162263573 * __this, float ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
