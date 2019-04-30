
#pragma once

#include <Public/DesignPatterns.h>
#include <string>


EXAMPLE_BEGIN

class AbstractProductB
{
};

class LabelAbstract : public AbstractProductB
{
public:
	virtual void SetText(const std::string &text) = 0;
};

EXAMPLE_END