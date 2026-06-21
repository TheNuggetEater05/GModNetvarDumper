#include "Globals.h"
#include <fstream>

void Exit(int exitCode = 0)
{
    g_pLogger->Log(LOG_SUCCESS, "Module unloaded");
    g_pLogger->Log("You can now close this window");

    FreeConsole();
    FreeLibraryAndExitThread(g_hModule, exitCode);
}

void DumpTable(std::ofstream& file, RecvTable* recvTable, const char* prev = "")
{
    if (!recvTable)
        return;

    int numProps = recvTable->m_nProps;
    for (int i = 0; i < numProps; i++)
    {
        RecvProp* prop = &recvTable->m_pProps[i];

        if (!prop)
            continue;

        RecvTable* datatableProp = prop->m_pDataTable;
        RecvProp* arrayProp = prop->m_pArrayProp;

        std::string varName(prop->m_pVarName);
        if (varName.find("baseclass") == 0 || varName.find("0") == 0 || varName.find("1") == 0 || varName.find("2") == 0)
            continue;

        size_t pos;
        while ((pos = varName.find(".")) != std::string::npos)
        {
            varName.replace(pos, 1, "__");
        }
        while ((pos = varName.find("[")) != std::string::npos)
        {
            varName.replace(pos, 1, "__");
        }
        while ((pos = varName.find("]")) != std::string::npos)
        {
            varName.replace(pos, 1, "");
        }
        while ((pos = varName.find(" ")) != std::string::npos)
        {
            varName.replace(pos, 1, "");
        }
        while ((pos = varName.find("\"")) != std::string::npos)
        {
            varName.replace(pos, 1, "");
        }
        
        file << "\tconstexpr std::ptrdiff_t ";
        if (prev != "")
            file << prev << "__";

        file << varName << " = " << "0x" << std::hex << prop->m_Offset << std::dec << ";";

        if (datatableProp)
            file << " // DATATABLE ";
        if (arrayProp)
            file << " // ARRAY";

        file << "\n";

        if (prop->m_pDataTable)
            DumpTable(file, prop->m_pDataTable, prop->m_pVarName);
    }
}

void Main(HMODULE hMod)
{
    // Initialize global variables
    g_hModule = hMod;

    // Initialize global instances
    g_pLogger->Init();
    g_pLogger->SetPrefix("NetvarDumper");

    I::Initialize();

    std::ofstream file("C:\\Users\\Public\\netvar_dump.h");

    file << "#pragma once\n"
        << "#include <cstddef>\n"
        << "\n\n\n// GModNetvarDumper\n\n\n";

    for (ClientClass* clientClass = I::Client->GetAllClasses(); clientClass; clientClass = clientClass->m_pNext)
    {
        file << "namespace " << clientClass->m_pNetworkName << "\n"
            << "{\n";

        DumpTable(file, clientClass->m_pRecvTable);

        file << "}; // " << clientClass->m_pNetworkName << "\n";
    }

    file.close();

    g_pLogger->Log(LOG_SUCCESS, "Successfully dumped netvars to C:\\Users\\Public\\netvar_dump.h");

    while (!GetAsyncKeyState(VK_END))
        Sleep(10);

    return Exit();
}

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        DisableThreadLibraryCalls(hModule);
        CreateThread(0, 0, reinterpret_cast<LPTHREAD_START_ROUTINE>(Main), hModule, 0, 0);
        break;
    }
    return TRUE;
}

