#pragma once

#ifdef TT_PLATFORM_WINDOWS
	#ifdef TT_BUILD_DLL
		#define TRETA_API __declspec(dllexport)
	#else
		#define TRETA_API __declspec(dllimport)
	#endif
	#else
		#error Treta only supoort Windows !!
#endif // DEBUG
