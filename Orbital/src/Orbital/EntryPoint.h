#pragma once

#include "Log.h"

#ifdef ORBIT_PLATFORM_WINDOWS

	extern Orbital::Application* Orbital::CreateApplication();

	void InitOrbital() 
	{
		Orbital::Log::InitLog();

		ORBIT_ENGINE_INFO("Orbital Engine is running!");
		ORBIT_ENGINE_INFO("Initalized application.");
	}

	int main(int argc, char** argv) 
	{
		InitOrbital();

		auto app = Orbital::CreateApplication();
		app->RunApplication();
		delete app;
	}

#endif