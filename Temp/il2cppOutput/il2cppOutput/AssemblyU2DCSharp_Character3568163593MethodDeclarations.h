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

// Character
struct Character_t3568163593;
// UnityEngine.Collision2D
struct Collision2D_t452810033;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UnityEngine_Collision2D452810033.h"

// System.Void Character::.ctor()
extern "C"  void Character__ctor_m90739842 (Character_t3568163593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Character::Start()
extern "C"  void Character_Start_m3332844930 (Character_t3568163593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Character::Update()
extern "C"  void Character_Update_m244829899 (Character_t3568163593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Character::ReceiveInput(System.Single,UnityEngine.Vector2)
extern "C"  void Character_ReceiveInput_m1381574742 (Character_t3568163593 * __this, float ___distance, Vector2_t3525329788  ___direction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Character::OnCollisionEnter2D(UnityEngine.Collision2D)
extern "C"  void Character_OnCollisionEnter2D_m4110837740 (Character_t3568163593 * __this, Collision2D_t452810033 * ___Col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Character::KillCharacter()
extern "C"  void Character_KillCharacter_m244434251 (Character_t3568163593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Character::ReviveCharacter()
extern "C"  void Character_ReviveCharacter_m3520105268 (Character_t3568163593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Character::AddDistance(System.Int32)
extern "C"  void Character_AddDistance_m266038503 (Character_t3568163593 * __this, int32_t ___additional, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Character::AddCoins(System.Int32)
extern "C"  void Character_AddCoins_m2123215988 (Character_t3568163593 * __this, int32_t ___additional, const MethodInfo* method) IL2CPP_METHOD_ATTR;
