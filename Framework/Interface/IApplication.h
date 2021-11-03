#pragma once

#include "Interface.h"
#include "IRuntimeModule.h"

namespace Engine
{

class IApplication : public IRuntimeModule
{
public:
    virtual void Run() = 0;
    
    virtual int Initialize() = 0;
    virtual void Tick() = 0;
    virtual void Finalize() = 0;

    virtual ~IApplication(){};

};
    
} // namespace Engine

