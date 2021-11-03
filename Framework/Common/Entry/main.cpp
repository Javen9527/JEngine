#include "IApplication.h"

extern Engine::IApplication* app;

int main(int argc, char** argv)
{
    app->Run();

    return 0;
}