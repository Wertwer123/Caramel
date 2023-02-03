#pragma once

#ifdef CA_PLATFORM_WINDOWS

	#ifdef CA_BUILD_DLL
		#define CARAMEL_API __declspec(dllexport)
	#else 
		#define  CARAMEL_API __declspec(dllimport)
	#endif

#else
	#error  Caramel only supports Windows pleb
#endif
