#pragma once

#include <GarrysMod/ModuleLoader.hpp>
#include <GarrysMod/FactoryLoader.hpp>
#include <GarrysMod/FunctionPointers.hpp>
#include <GarrysMod/InterfacePointers.hpp>
#include <GarrysMod/Lua/Interface.h>

#include "eiface.h"

namespace GarrysMod
{
	namespace Lua
	{
		class ILuaBase;
	}
}

namespace global
{
	extern GarrysMod::Lua::ILuaBase* lua;

	extern INetworkStringTableContainer* stringtable;
	extern IVEngineServer* engine;
}