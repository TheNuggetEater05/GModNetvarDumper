#include "Interfaces.h"
#include <memory>

namespace I
{
	std::unique_ptr<InterfaceManager> ClientManager;
	std::unique_ptr<InterfaceManager> EngineManager;
	std::unique_ptr<InterfaceManager> VGUI2Manager;
	std::unique_ptr<InterfaceManager> MaterialSurfaceManager;
	std::unique_ptr<InterfaceManager> MaterialSystemManager;
	std::unique_ptr<InterfaceManager> STDLibManager;
	std::unique_ptr<InterfaceManager> InputSystemManager;

	IBaseClientDLL* Client;
	void* Engine;
	IClientEntityList* EntityList;


	void Initialize()
	{
		ClientManager = std::make_unique<InterfaceManager>("client.dll");
		EngineManager = std::make_unique<InterfaceManager>("engine.dll");
		VGUI2Manager = std::make_unique<InterfaceManager>("vgui2.dll");
		MaterialSurfaceManager = std::make_unique<InterfaceManager>("vguimatsurface.dll");
		MaterialSystemManager = std::make_unique<InterfaceManager>("materialsystem.dll");
		STDLibManager = std::make_unique<InterfaceManager>("vstdlib.dll");
		InputSystemManager = std::make_unique<InterfaceManager>("inputsystem.dll");

		ClientManager->Init();
		EngineManager->Init();
		VGUI2Manager->Init();
		MaterialSurfaceManager->Init();
		MaterialSystemManager->Init();
		STDLibManager->Init();
		InputSystemManager->Init();

		Client = ClientManager->GetInterface<IBaseClientDLL>("VClient0");
		EntityList = ClientManager->GetInterface<IClientEntityList>("VClientEntityList0");
	}

	void InterfaceManager::Init()
	{
		m_ModuleBase = GetModuleHandleA(m_ModuleName.c_str());
		if (!m_ModuleBase)
		{
			m_Logger->Log(LOG_ERROR, "Failed to get module base of %s", m_ModuleName.c_str());
			return;
		}

		m_Logger->Log("%s: found module base @ 0x%p", m_ModuleName.c_str(), m_ModuleBase);

		uint8_t* pCreateInterfaceFn = reinterpret_cast<uint8_t*>(GetProcAddress(m_ModuleBase, "CreateInterface"));

		uint8_t* instruction = pCreateInterfaceFn + 15; // 15 Bytes into CreateInterface is the global registry
		int32_t displ = *reinterpret_cast<int32_t*>(instruction + 3); // 3 Bytes after instruction

		m_pIntHead = *reinterpret_cast<InterfaceNode**>(instruction + 7 + displ);

		m_Logger->Log("%s: found first InterfaceNode @ 0x%p", m_ModuleName.c_str(), (uintptr_t)m_pIntHead);

		// DumpAll();
	}

	template<class T>
	inline T* InterfaceManager::GetInterface(const std::string& interfaceName)
	{
		if (m_pIntHead)
			for (InterfaceNode* pNode = m_pIntHead; pNode; pNode = pNode->m_pNext)
				if (std::string(pNode->m_pName).find(interfaceName) != std::string::npos)
					return reinterpret_cast<T*>(pNode->m_pCreateFn());

		return nullptr;
	}

	void InterfaceManager::DumpAll()
	{
		m_Logger->Log(LOG_SUCCESS, "%-32s%-44s%10s", "Module", "Interface", "Instance");
		printf("----------------------------------------------------------------------\n");
		if (m_pIntHead)
			for (InterfaceNode* pNode = m_pIntHead; pNode; pNode = pNode->m_pNext)
				m_Logger->Log("%-32s%-44s%10p", m_ModuleName.c_str(), pNode->m_pName, pNode->m_pCreateFn);
		printf("----------------------------------------------------------------------\n");
	}
}