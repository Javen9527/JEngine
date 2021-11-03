#pragma once

#include "Interface.h"

namespace Engine
{

class IRuntimeModule
{
public:
    virtual void Run() = 0;

    virtual ~IRuntimeModule(){};

};
    
} // namespace Engine
