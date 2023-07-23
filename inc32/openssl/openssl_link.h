#pragma once

#ifdef _DEBUG
	#pragma comment(lib, "v12_smdd_libeay32.lib")
	#pragma comment(lib, "v12_smdd_ssleay32.lib")
#else
	#pragma comment(lib, "v12_smd_libeay32.lib")
	#pragma comment(lib, "v12_smd_ssleay32.lib")
#endif

