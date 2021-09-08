#pragma once

#include "../Core.h"
#include "Event.h"

#include <sstream>

namespace Orbital {
	class ORBITAL_API WindowResizeEvent : public Event {
	private:
		unsigned int width, height;
	public:
		WindowResizeEvent(unsigned int width, unsigned int height) : width(width), height(height) {}

		std::string ToString() const override {
			std::stringstream ss;
			ss << "WindowResizeEvent: " << width << ", " << height;
			return ss.str();
		}

		EVENT_CLASS_TYPE(WindowResize);
		EVENT_CLASS_CATEGORY(EventCategoryApplication);
	};

	class ORBITAL_API WindowCloseEvent : public Event {
	public:
		WindowCloseEvent() {}

		EVENT_CLASS_TYPE(WindowClose);
		EVENT_CLASS_CATEGORY(EventCategoryApplication);
	};

	class ORBITAL_API AppTickEvent : public Event {
	public:
		AppTickEvent() {}

		EVENT_CLASS_TYPE(AppTick);
		EVENT_CLASS_CATEGORY(EventCategoryApplication);
	};

	class ORBITAL_API AppUpdateEvent : public Event {
		AppUpdateEvent() {}

		EVENT_CLASS_TYPE(AppUpdate);
		EVENT_CLASS_CATEGORY(EventCategoryApplication);
	};

	class ORBITAL_API AppRenderEvent : public Event {
	public:
		AppRenderEvent() {}

		EVENT_CLASS_TYPE(AppRender);
		EVENT_CLASS_CATEGORY(EventCategoryApplication);
	};
}
