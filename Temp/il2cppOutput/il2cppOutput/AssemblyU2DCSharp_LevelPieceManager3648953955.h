#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// LevelPiece
struct LevelPiece_t2186374634;
// LevelPiece[]
struct LevelPieceU5BU5D_t4055571247;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LevelPieceManager
struct  LevelPieceManager_t3648953955  : public MonoBehaviour_t3012272455
{
public:
	// LevelPiece LevelPieceManager::startingLevelPiece
	LevelPiece_t2186374634 * ___startingLevelPiece_2;
	// LevelPiece[] LevelPieceManager::levelPieces
	LevelPieceU5BU5D_t4055571247* ___levelPieces_3;
	// System.Single LevelPieceManager::levelPiecesMoveRate
	float ___levelPiecesMoveRate_4;
	// LevelPiece[] LevelPieceManager::activeLevelPieces
	LevelPieceU5BU5D_t4055571247* ___activeLevelPieces_5;

public:
	inline static int32_t get_offset_of_startingLevelPiece_2() { return static_cast<int32_t>(offsetof(LevelPieceManager_t3648953955, ___startingLevelPiece_2)); }
	inline LevelPiece_t2186374634 * get_startingLevelPiece_2() const { return ___startingLevelPiece_2; }
	inline LevelPiece_t2186374634 ** get_address_of_startingLevelPiece_2() { return &___startingLevelPiece_2; }
	inline void set_startingLevelPiece_2(LevelPiece_t2186374634 * value)
	{
		___startingLevelPiece_2 = value;
		Il2CppCodeGenWriteBarrier(&___startingLevelPiece_2, value);
	}

	inline static int32_t get_offset_of_levelPieces_3() { return static_cast<int32_t>(offsetof(LevelPieceManager_t3648953955, ___levelPieces_3)); }
	inline LevelPieceU5BU5D_t4055571247* get_levelPieces_3() const { return ___levelPieces_3; }
	inline LevelPieceU5BU5D_t4055571247** get_address_of_levelPieces_3() { return &___levelPieces_3; }
	inline void set_levelPieces_3(LevelPieceU5BU5D_t4055571247* value)
	{
		___levelPieces_3 = value;
		Il2CppCodeGenWriteBarrier(&___levelPieces_3, value);
	}

	inline static int32_t get_offset_of_levelPiecesMoveRate_4() { return static_cast<int32_t>(offsetof(LevelPieceManager_t3648953955, ___levelPiecesMoveRate_4)); }
	inline float get_levelPiecesMoveRate_4() const { return ___levelPiecesMoveRate_4; }
	inline float* get_address_of_levelPiecesMoveRate_4() { return &___levelPiecesMoveRate_4; }
	inline void set_levelPiecesMoveRate_4(float value)
	{
		___levelPiecesMoveRate_4 = value;
	}

	inline static int32_t get_offset_of_activeLevelPieces_5() { return static_cast<int32_t>(offsetof(LevelPieceManager_t3648953955, ___activeLevelPieces_5)); }
	inline LevelPieceU5BU5D_t4055571247* get_activeLevelPieces_5() const { return ___activeLevelPieces_5; }
	inline LevelPieceU5BU5D_t4055571247** get_address_of_activeLevelPieces_5() { return &___activeLevelPieces_5; }
	inline void set_activeLevelPieces_5(LevelPieceU5BU5D_t4055571247* value)
	{
		___activeLevelPieces_5 = value;
		Il2CppCodeGenWriteBarrier(&___activeLevelPieces_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
