#pragma once

#include "Log.h"

#ifdef ORBIT_PLATFORM_WINDOWS
extern Orbital::Application* Orbital::CreateApplication();

int main(int argc, char** argv) 
{
	Orbital::Log::InitLog();

	ORBIT_ENGINE_INFO("This log is from a macro");
	ORBIT_ENGINE_TRACE("Var test {0}", 5);

	ORBIT_INFO("This is from a client");

	auto app = Orbital::CreateApplication();
	app->RunApplication();
	delete app;
}
#endif