#pragma once

#ifdef PE_PLATFORM_WINDOWS
	#ifdef PE_BUILD_DLL
		#define PERG_API __declspec(dllexport)
	#else
		#define PERG_API __declspec(dllimport)
	#endif
#else
	#error Perg only supports Windows!
#endif
