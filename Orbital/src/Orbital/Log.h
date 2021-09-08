#pragma once

#include "Core.h"
#include <memory>
#include <spdlog/spdlog.h>
#include <spdlog/fmt/ostr.h>


namespace Orbital {
	class ORBITAL_API Log
	{
	private:
		static std::shared_ptr<spdlog::logger> engine_logger;
		static std::shared_ptr<spdlog::logger> client_logger;
	public:
		static void InitLog();

		static std::shared_ptr<spdlog::logger> GetEngineLogger() { return engine_logger; }
		static std::shared_ptr<spdlog::logger> GetClientLogger() { return client_logger; }
	};

}


// Macros to send logs from the actual engine.
#define ORBIT_ENGINE_ERROR(...)		::Orbital::Log::GetEngineLogger()->error(__VA_ARGS__)
#define ORBIT_ENGINE_WARN(...)		::Orbital::Log::GetEngineLogger()->warn(__VA_ARGS__)
#define ORBIT_ENGINE_TRACE(...)		::Orbital::Log::GetEngineLogger()->trace(__VA_ARGS__)
#define ORBIT_ENGINE_INFO(...)		::Orbital::Log::GetEngineLogger()->info(__VA_ARGS__)
#define ORBIT_ENGINE_FATAL(...)		::Orbital::Log::GetEngineLogger()->fatal(__VA_ARGS__)


// Macros to send logs from the user's application.
#define ORBIT_ERROR(...)			::Orbital::Log::GetClientLogger()->error(__VA_ARGS__)
#define ORBIT_WARN(...)				::Orbital::Log::GetClientLogger()->warn(__VA_ARGS__)
#define ORBIT_TRACE(...)			::Orbital::Log::GetClientLogger()->trace(__VA_ARGS__)
#define ORBIT_INFO(...)				::Orbital::Log::GetClientLogger()->info(__VA_ARGS__)
#define ORBIT_FATAL(...)			::Orbital::Log::GetClientLogger()->fatal(__VA_ARGS__)