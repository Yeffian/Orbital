#include <Orbital.h>
#include <iostream>

class TestApp : public Orbital::Application {
public:
	TestApp() {}
	~TestApp() {}
};


Orbital::Application* Orbital::CreateApplication() {
	return new TestApp();
}