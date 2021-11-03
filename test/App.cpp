#include "AppPlatform/BaseApplication.h"
#include "AppPlatform/OsxApplication.h"

// select platform
Engine::BaseApplication bApp;

// Osx app
Engine::OsxApplication oApp;

// implement app
Engine::IApplication* app = &oApp;


