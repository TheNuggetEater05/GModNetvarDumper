#pragma once

#ifndef INTERFACES_H
#define INTERFACES_H

#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include <string>

#include "../Utility/Logger/Logger.hpp"

#include "IBaseClientDLL.h"
#include "IClientEntityList.h"

namespace I
{
	extern IBaseClientDLL* Client;
	extern void* Engine;

	extern IClientEntityList* EntityList;


	void Initialize();

	class InterfaceNode
	{
		using fnCreateFn = void* (*)();

	public:
		fnCreateFn m_pCreateFn;
		char* m_pName;
		InterfaceNode* m_pNext;
	};

	class InterfaceManager
	{
	public:
		InterfaceManager(const std::string& moduleName) : m_ModuleName(moduleName), m_ModuleBase(0), m_pIntHead(0)
		{ 
			m_Logger = &Logger::Get();
		};

		template<class T>
		T* GetInterface(const std::string& interfaceName);

		void DumpAll();

		void Init();

	private:
		std::string m_ModuleName;
		HMODULE m_ModuleBase;
		Logger* m_Logger;

		InterfaceNode* m_pIntHead;
	};
}

#endif