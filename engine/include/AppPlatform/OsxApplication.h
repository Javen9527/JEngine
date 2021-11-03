#pragma once

#include "IApplication.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <xcb/xcb.h>

namespace Engine
{

class OsxApplication : public IApplication
{
public:
    virtual void Run() override;

    virtual int Initialize() override;
    virtual void Tick() override;
    virtual void Finalize() override;

public:
    virtual ~OsxApplication();

private:
    void CreateView();
};
    
} // namespace Engine
