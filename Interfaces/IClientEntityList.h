#pragma once

#ifndef ICLIENTENTITYLIST_H
#define ICLIENTENTITYLIST_H

#include "../Utility/VTables.hpp"

class IClientEntity;

class IClientEntityList
{
public:
	IClientEntity* GetClientEntity(int entnum)
	{
		typedef IClientEntity* (*fnGetClientEntity)(void*, int entnum);
		return vtbl::GetVFunc<fnGetClientEntity>(this, 4)(this, entnum);
	}

	int NumberOfEntities(bool bIncludeNotNetworkable = false)
	{
		typedef int (*fnNumberOfEntities)(void*, bool bIncludeNonNetworkable);
		return vtbl::GetVFunc<fnNumberOfEntities>(this, 6)(this, bIncludeNotNetworkable);
	}
};

#endif