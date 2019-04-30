#pragma once

#include <Public/DesignPatterns.h>
#include "AbstractFactory.h"

EXAMPLE_BEGIN

class BlackWndFactory : public AbstractWndFactory
{
public:
	std::shared_ptr<ButtonAbstract> CreateButton() override;
	std::shared_ptr<LabelAbstract> CreateLabel() override;
};

EXAMPLE_END