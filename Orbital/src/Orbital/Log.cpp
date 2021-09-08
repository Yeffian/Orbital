#include "Log.h"

#include <memory>
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace Orbital {
    std::shared_ptr<spdlog::logger> Log::engine_logger;
	std::shared_ptr<spdlog::logger> Log::client_logger;


	void Log::InitLog() {
		spdlog::set_pattern("%^[%T] %n: %v%$");

		engine_logger = spdlog::stdout_color_mt("ORBITAL");
		engine_logger->set_level(spdlog::level::trace);

		client_logger = spdlog::stdout_color_mt("APPLICATION");
		client_logger->set_level(spdlog::level::trace);
	}
}