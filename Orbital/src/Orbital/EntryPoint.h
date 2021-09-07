#pragma once

#include "Log.h"

#ifdef ORBIT_PLATFORM_WINDOWS
extern Orbital::Application* Orbital::CreateApplication();

int main(int argc, char** argv) 
{
	Orbital::Log::InitLog();

	ORBIT_ENGINE_INFO("Orbital Engine is running!");

	auto app = Orbital::CreateApplication();
	app->RunApplication();
	delete app;
}
#endif