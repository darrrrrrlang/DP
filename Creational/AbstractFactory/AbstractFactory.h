
#pragma once

#include <memory>
#include "AbstractProductA.h"
#include "AbstractProductB.h"

EXAMPLE_BEGIN

class AbstractFactory
{

};

class AbstractWndFactory : public AbstractFactory
{
public:
	virtual std::shared_ptr<ButtonAbstract> CreateButton() = 0;
	virtual std::shared_ptr<LabelAbstract> CreateLabel() = 0;
};


EXAMPLE_END