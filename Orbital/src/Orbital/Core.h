#pragma once

#ifdef ORBIT_PLATFORM_WINDOWS
	#ifdef ORBIT_BUILD_DLL        
		#define ORBITAL_API __declspec(dllexport)
	#else
		#define ORBITAL_API __declspec(dllimport)
	#endif 

	#else 
		#error Orbital only works on Windows!
#endif