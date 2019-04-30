#include <Public/DesignPatterns.h>
#include "Product.h"

EXAMPLE_BEGIN

void Pen::Draw(const std::string &content, std::string &output)
{
	output.append("<NormalPen>");
	output.append(content);
	output.append("<\\NormalPen>");
}

EXAMPLE_END