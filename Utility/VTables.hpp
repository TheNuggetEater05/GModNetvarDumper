#pragma once

#ifndef VTABLES_H
#define VTABLES_H

#include <cstdint>

namespace vtbl
{
	inline void**& GetVTable(void* inst, uintptr_t offset)
	{
		return *reinterpret_cast<void***>((uintptr_t)inst + offset);
	}

	inline const void** GetVTable(const void* inst, uintptr_t offset)
	{
		return *reinterpret_cast<const void***>((uintptr_t)inst + offset);
	}

	template<typename Fn>
	inline Fn GetVFunc(const void* inst, int index, uintptr_t offset = 0)
	{
		return reinterpret_cast<Fn>(GetVTable(inst, offset)[index]);
	}
}

#endif