#pragma once

#include "Product.h"

EXAMPLE_BEGIN

class Pencil : public Pen
{
public:
	void Draw(const std::string &content, std::string &output);
};

EXAMPLE_END