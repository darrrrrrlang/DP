#pragma once

#include <Public/DesignPatterns.h>
#include <memory>
#include <string>

EXAMPLE_BEGIN

class Pen;

/*
�����Painter��һ�����ң����ڻ�����������
*/

class Painter
{
public:
	void CreatePicture(std::string &picture);
protected:
	virtual std::shared_ptr<Pen> _CreatePen();
};

EXAMPLE_END