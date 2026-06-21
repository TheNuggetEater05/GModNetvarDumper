#pragma once

#ifndef GLOBALS_H
#define GLOBALS_H

// Definitions
#define WIN32_LEAN_AND_MEAN

// Headers
#include <Windows.h>
#include <iostream>
#include <string>

// Classes
#include "Utility/Logger/Logger.hpp"
#include "Interfaces/Interfaces.h"

#include "Interfaces/Classes.hpp"

// Global variables
HMODULE g_hModule;

// Global instances
Logger* g_pLogger = &Logger::Get();

#endif