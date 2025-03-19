#pragma once

#include <Defines.hpp>

namespace Mem
{
	class CCompactPool;

	template <typename T>
	class CPoolable
	{
		static CCompactPool* Pools[2];
		static sint32 field0x04;
		static bool PoolCreated[2];
		static sint32 CurrentPool;
	};



}