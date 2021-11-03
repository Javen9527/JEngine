#pragma once

#include "IApplication.h"

namespace Engine
{

class BaseApplication : public IApplication
{
public:
    virtual void Run() override;

    virtual int Initialize() override;
    virtual void Tick() override;
    virtual void Finalize() override;

    virtual bool IsQuit();

    virtual ~BaseApplication();

private:
    bool m_isQuit = false;
};
    
} // namespace Engine
