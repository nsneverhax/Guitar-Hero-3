#pragma once

#include <Defines.hpp>

namespace Mem
{
	class CCompactPool
	{
		uint8* Buffer;
		uint8* BufferEnd;
		uint32 TotalItems;
		uint32 ItemSize;
		uint32 CurrentUsedItems;
		void* FreeList;
		char Name[64];
		uint32 MaxUsedItems;
		uint32 field0x5c;
		uint32 field0x60;
		uint32 field0x64;
		uint16 field0x68;

	public:
		void* Allocate(uint32 param_1);
	};
}