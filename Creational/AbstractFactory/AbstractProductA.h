
#pragma once

#include <Public/DesignPatterns.h>

EXAMPLE_BEGIN

class AbstractProductA
{
};

class ButtonAbstract : public AbstractProductA
{
public:
	virtual void Push() = 0;
};

EXAMPLE_END