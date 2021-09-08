#pragma once

#include "../Core.h"
#include "Event.h"

#include <sstream>

namespace Orbital {
	class ORBITAL_API KeyEvent : public Event {
	protected:
		KeyEvent(int keyCode) : keyCode(keyCode) {}

		int keyCode;
	public:
		inline int GetKeyCode() const { return keyCode; }

		EVENT_CLASS_CATEGORY(EventCategoryKeyboard | EventCategoryInput);
	};

	class ORBITAL_API KeyPressedEvent : public KeyEvent {
	private:
		int repeatCount;
	public:
		KeyPressedEvent(int keycode, int repeatCount)
			: KeyEvent(keycode), repeatCount(repeatCount) {}

		inline int GetRepeatCount() const { return repeatCount; }

		std::string ToString() const override
		{
			std::stringstream ss;
			ss << "KeyPressedEvent: " << keyCode << " (" << repeatCount << " repeats)";
			return ss.str();
		}

		EVENT_CLASS_TYPE(KeyPressed)
	};

	class ORBITAL_API KeyReleasedEvent : public KeyEvent
	{
	public:
		KeyReleasedEvent(int keycode) : KeyEvent(keycode) {}

		std::string ToString() const override
		{
			std::stringstream ss;
			ss << "KeyReleasedEvent: " << keyCode;
			return ss.str();
		}

		EVENT_CLASS_TYPE(KeyReleased)
	};
}
