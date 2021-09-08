#pragma once

#include "Core.h"
#include "Events/Event.h"

namespace Orbital {
	class ORBITAL_API Application
	{ 
	public:
		Application();
		virtual ~Application();

		void RunApplication();
	};

	Application* CreateApplication();
}

