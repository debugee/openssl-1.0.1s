#pragma once

#ifdef _DEBUG
	#pragma comment(lib, "libeay32_mtd.lib")
	#pragma comment(lib, "ssleay32_mtd.lib")
#else
	#pragma comment(lib, "libeay32_mt.lib")
	#pragma comment(lib, "ssleay32_mt.lib")
#endif

