#include "Application.h"
#include "Events/ApplicationEvents.h"
#include "Log.h"

namespace Orbital {

	Application::Application()
	{
	}

	Application::~Application()
	{
	}

	void Application::RunApplication()
	{
		WindowResizeEvent e(1200, 600);
		
		if (e.IsInCategory(EventCategoryApplication)) {
			ORBIT_TRACE(e);
		}

		if (e.IsInCategory(EventCategoryInput)) {
			ORBIT_TRACE(e);
		}

		while (true);
	}
}