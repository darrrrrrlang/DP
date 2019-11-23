#pragma once

#include <Public/DesignPatterns.h>
#include <memory>
#include <string>

EXAMPLE_BEGIN

class Pen;

/*
这里的Painter是一个画家，他在画板上作画。
*/

class Painter
{
public:
	void CreatePicture(std::string &picture);
protected:
	virtual std::shared_ptr<Pen> _CreatePen();
};

EXAMPLE_END