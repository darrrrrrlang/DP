#pragma once

#include <Public/DesignPatterns.h>

#include <string>

EXAMPLE_BEGIN

/*
����������ֽ
*/

class Pen
{
public:
	virtual void Draw(const std::string &content, std::string &output);
};


EXAMPLE_END