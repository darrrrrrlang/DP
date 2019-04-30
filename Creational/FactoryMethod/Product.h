#pragma once

#include <Public/DesignPatterns.h>

#include <string>

EXAMPLE_BEGIN

/*
用来作画的纸
*/

class Pen
{
public:
	virtual void Draw(const std::string &content, std::string &output);
};


EXAMPLE_END