#include "BaseApplication.h"

#include <stdio.h>

namespace Engine
{
    
void BaseApplication::Run()
{
    int ret = Initialize();
    if(ret != 0)
    {
        printf("Engine initialize failed! error_code: %d\n", ret);
        return;
    }

    while(!IsQuit())
    {
        Tick();
    }

    Finalize();
}

int BaseApplication::Initialize()
{
    m_isQuit = false;
}

void BaseApplication::Tick()
{
    printf("Engine loop...\n");
}

void BaseApplication::Finalize()
{

}

bool BaseApplication::IsQuit()
{
    return m_isQuit;
}

BaseApplication::~BaseApplication()
{

}

} // namespace Engine

