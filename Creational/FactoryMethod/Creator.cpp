#include "Creator.h"

#include "Product.h"

EXAMPLE_BEGIN

void Painter::CreatePicture(std::string &picture)
{
	auto ptrPen = _CreatePen();

	ptrPen->Draw("Blue sky and blue sea", picture);
}

std::shared_ptr<Pen> Painter::_CreatePen()
{
	return std::shared_ptr<Pen>(new Pen());
}

EXAMPLE_END