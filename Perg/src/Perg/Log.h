#pragma once

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"

namespace Perg {
	class PERG_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
	};
}

// Core log macros
#define PE_CORE_TRACE(...)		::Perg::Log::GetCoreLogger()->trace(__VA_ARGS__);
#define PE_CORE_INFO(...)		::Perg::Log::GetCoreLogger()->info(__VA_ARGS__);
#define PE_CORE_WARN(...)		::Perg::Log::GetCoreLogger()->warn(__VA_ARGS__);
#define PE_CORE_ERROR(...)		::Perg::Log::GetCoreLogger()->error(__VA_ARGS__);
#define PE_CORE_FATAL(...)		::Perg::Log::GetCoreLogger()->fatal(__VA_ARGS__);

// Client log macros
#define PE_TRACE(...)		    ::Perg::Log::GetClientLogger()->trace(__VA_ARGS__);
#define PE_INFO(...)		    ::Perg::Log::GetClientLogger()->info(__VA_ARGS__);
#define PE_WARN(...)		    ::Perg::Log::GetClientLogger()->warn(__VA_ARGS__);
#define PE_ERROR(...)		    ::Perg::Log::GetClientLogger()->error(__VA_ARGS__);
#define PE_FATAL(...)		    ::Perg::Log::GetClientLogger()->fatal(__VA_ARGS__);