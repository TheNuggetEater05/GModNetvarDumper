#include "Globals.h"
#include <fstream>

#include "test.h"

void Exit(int exitCode = 0)
{
    g_pLogger->Log(LOG_SUCCESS, "Module unloaded");
    g_pLogger->Log("You can now close this window");

    FreeConsole();
    FreeLibraryAndExitThread(g_hModule, exitCode);
}

void DumpForwards(std::ofstream& file)
{
    for (ClientClass* clientClass = I::Client->GetAllClasses(); clientClass; clientClass = clientClass->m_pNext)
    {
        RecvTable* table = clientClass->m_pRecvTable;
        const char* netTableName = table->m_pNetTableName;

        file << "struct " << netTableName << ";\n";
    }

    file << "\n\n\n";
}

void DumpTable(std::ofstream& file, RecvTable* recvTable, const std::string& parent = "")
{
    if (!recvTable)
        return;

    int numProps = recvTable->m_nProps;

    for (int i = 0; i < numProps; i++)
    {
        RecvProp* prop = &recvTable->m_pProps[i];

        if (prop->m_pDataTable && strncmp(prop->m_pDataTable->m_pNetTableName, "m_", 2) != 0)
        {
            file << "\n\tDERIVES_FROM " << prop->m_pDataTable->m_pNetTableName << ";";
            continue;
        }

        std::string varName = prop->m_pVarName;

        for (char& c : varName)
        {
            if (c == '.')
                c = '_';

            if (c == '[')
                c = '_';
        }

        varName.erase(
            std::remove(varName.begin(), varName.end(), ']'),
            varName.end()
        );

        varName.erase(
            std::remove(varName.begin(), varName.end(), '"'),
            varName.end()
        );

        varName.erase(
            std::remove(varName.begin(), varName.end(), ' '),
            varName.end()
        );

        file << "\n\tOFFSET " << varName << " = " << std::hex << "0x" << prop->m_Offset << std::dec << ";";
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

    bool forwardDeclared = false;
    std::ofstream netvarDump("C:\\Users\\Public\\netvars.h");

    netvarDump
        << "// Generated with github.com/TheNuggetEater05/GModNetvarDumper/\n\n"
        << "#define OFFSET constexpr static std::ptrdiff_t\n\n"
        << "#define DERIVES_FROM using parent = \n\n"
        << "#include <cstddef>\n\n\n"
        << "namespace DT\n"
        << "{\n"
        << "struct DT_GMODRules;\n"
        << "struct DT_ScriptedEntity;\n"
        << "struct DT_LocalActiveWeaponData;\n"
        << "struct DT_LocalWeaponData;\n"
        << "struct DT_ServerAnimationData;\n"
        << "struct DT_BeamPredictableId;\n"
        << "struct DT_OverlayVars;\n"
        << "struct DT_BCCLocalPlayerExclusive;\n"
        << "struct DT_PredictableId;\n"
        << "struct DT_CollisionProperty;\n"
        << "struct DT_AnimTimeMustBeFirst;\n"
        << "struct DT_LocalPlayerExclusive;\n"
        << "struct DT_PlayerState;\n"
        << "struct DT_EntityParticleTrailInfo;\n"
        << "struct _ST_m_hActorList_16;\n"
        << "struct DT_HL2Local;\n"
        << "struct DT_EnvHeadcrabCanisterShared;\n"
        << "struct DT_HL2MPLocalPlayerExclusive;\n"
        << "struct DT_HL2MPNonLocalPlayerExclusive;\n"
        << "struct DT_HL2MPRules;\n"
        << "struct DT_EnvWindShared;\n"
        << "struct DT_EffectData;\n";

    for (ClientClass* clientClass = I::Client->GetAllClasses(); clientClass; clientClass = clientClass->m_pNext)
    {
        if (!forwardDeclared)
        {
            DumpForwards(netvarDump);
            forwardDeclared = true;
        }

        RecvTable* table = clientClass->m_pRecvTable;
        const char* netTableName = table->m_pNetTableName;

        netvarDump
            << "struct " << netTableName << "\n"
            << "{";
        DumpTable(netvarDump, table);
        netvarDump << "\n}; // " << netTableName << "\n\n";
    }

    netvarDump << "};";

    netvarDump.close();

    // testing

    DT::DT_BasePlayer a;
    

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

