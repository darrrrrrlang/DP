#pragma once

#include <memory>
#include <string>
#include <Public/DesignPatterns.h>

EXAMPLE_BEGIN

class Prototype
{

};

/*
一个提示内容，用以提供向用户展示的提示内容。
这里的Clone()是对 “深拷贝” 的强调。
*/

class Notice : public Prototype
{
public:
	virtual std::shared_ptr<Notice> Clone() const = 0;
	virtual const std::string &Title() const = 0;
	virtual const std::string &Message() const = 0;
};

EXAMPLE_END