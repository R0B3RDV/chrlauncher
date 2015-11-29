// chrlauncher
// Copyright (c) 2015 Henry++

#ifndef __MAIN_H__
#define __MAIN_H__

#include <windows.h>
#include "resource.h"

// config
#define APP_NAME L"chrlauncher"
#define APP_NAME_SHORT L"chrlauncher"
#define APP_NAME_DESCRIPTION L"Portable Chromium launcher and updater."
#define APP_VERSION L"1.1"
#define APP_VERSION_RES 1,1,0,0
#define APP_AUTHOR L"Henry++"
#define APP_COPYRIGHT L"(c) 2015 " APP_AUTHOR L". All Rights Reserved."

#define APP_WEBSITE L"http://www.henrypp.org"
#define APP_GITHUB L"https://github.com/henrypp"

#ifdef _WIN64
#	define APP_MACHINE L"64"
#else
#	define APP_MACHINE L"32"
#endif // _WIN64

// libs
#pragma comment(lib, "version.lib")

#endif // __MAIN_H__
