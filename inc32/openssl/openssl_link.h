#pragma once

#ifdef _DEBUG
	#ifdef _DLL
		#if MSVC_TOOLSET_VERSION == 120
			#pragma comment(lib, "v12_smdd_libeay32.lib")
			#pragma comment(lib, "v12_smdd_ssleay32.lib")
		#elif MSVC_TOOLSET_VERSION == 140
			#pragma comment(lib, "v14_smdd_libeay32.lib")
			#pragma comment(lib, "v14_smdd_ssleay32.lib")
		#endif
	#else
		#if MSVC_TOOLSET_VERSION == 120
			#pragma comment(lib, "v12_smtd_libeay32.lib")
			#pragma comment(lib, "v12_smtd_ssleay32.lib")
		#elif MSVC_TOOLSET_VERSION == 140
			#pragma comment(lib, "v14_smtd_libeay32.lib")
			#pragma comment(lib, "v14_smtd_ssleay32.lib")
		#endif
	#endif
#else
	#ifdef _DLL
		#if MSVC_TOOLSET_VERSION == 120
			#pragma comment(lib, "v12_smd_libeay32.lib")
			#pragma comment(lib, "v12_smd_ssleay32.lib")
		#elif MSVC_TOOLSET_VERSION == 140
			#pragma comment(lib, "v14_smd_libeay32.lib")
			#pragma comment(lib, "v14_smd_ssleay32.lib")
		#endif
	#else
		#if MSVC_TOOLSET_VERSION == 120
			#pragma comment(lib, "v12_smt_libeay32.lib")
			#pragma comment(lib, "v12_smt_ssleay32.lib")
		#elif MSVC_TOOLSET_VERSION == 140
			#pragma comment(lib, "v14_smt_libeay32.lib")
			#pragma comment(lib, "v14_smt_ssleay32.lib")
		#endif
	#endif
#endif