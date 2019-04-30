#include "ConcreteProduct.h"

EXAMPLE_BEGIN

void Pencil::Draw(const std::string &content, std::string &output)
{
	output.append("<Pencil>");
	output.append(content);
	output.append("<\\Pencil>");
}

EXAMPLE_END