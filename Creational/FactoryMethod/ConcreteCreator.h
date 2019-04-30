#pragma once

#include <Public/DesignPatterns.h>
#include "ConcreteProduct.h"
#include "Creator.h"

EXAMPLE_BEGIN

/*
ËØÃè×÷¼Ò
*/

class PencilPainter : public Painter
{
protected:
	std::shared_ptr<Pen> _CreatePen() override;
};

EXAMPLE_END