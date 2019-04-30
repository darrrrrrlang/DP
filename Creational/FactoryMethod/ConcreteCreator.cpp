#include "ConcreteCreator.h"

#include "ConcreteProduct.h"

EXAMPLE_BEGIN

std::shared_ptr<Pen> PencilPainter::_CreatePen()
{
	return std::shared_ptr<Pencil>(new Pencil());
}

EXAMPLE_END