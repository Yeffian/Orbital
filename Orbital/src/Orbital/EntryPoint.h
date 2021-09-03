#pragma once

#ifdef ORBIT_PLATFORM_WINDOWS
extern Orbital::Application* Orbital::CreateApplication();

int main(int argc, char** argv) 
{
	printf("Orbital Engine is running!\n");
	auto app = Orbital::CreateApplication();
	app->RunApplication();
	delete app;
}
#endif