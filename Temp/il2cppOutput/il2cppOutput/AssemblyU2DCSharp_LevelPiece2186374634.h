#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Coin[]
struct CoinU5BU5D_t2924195692;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LevelPiece
struct  LevelPiece_t2186374634  : public MonoBehaviour_t3012272455
{
public:
	// Coin[] LevelPiece::coins
	CoinU5BU5D_t2924195692* ___coins_2;
	// UnityEngine.Vector3 LevelPiece::initialLocation
	Vector3_t3525329789  ___initialLocation_3;

public:
	inline static int32_t get_offset_of_coins_2() { return static_cast<int32_t>(offsetof(LevelPiece_t2186374634, ___coins_2)); }
	inline CoinU5BU5D_t2924195692* get_coins_2() const { return ___coins_2; }
	inline CoinU5BU5D_t2924195692** get_address_of_coins_2() { return &___coins_2; }
	inline void set_coins_2(CoinU5BU5D_t2924195692* value)
	{
		___coins_2 = value;
		Il2CppCodeGenWriteBarrier(&___coins_2, value);
	}

	inline static int32_t get_offset_of_initialLocation_3() { return static_cast<int32_t>(offsetof(LevelPiece_t2186374634, ___initialLocation_3)); }
	inline Vector3_t3525329789  get_initialLocation_3() const { return ___initialLocation_3; }
	inline Vector3_t3525329789 * get_address_of_initialLocation_3() { return &___initialLocation_3; }
	inline void set_initialLocation_3(Vector3_t3525329789  value)
	{
		___initialLocation_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
