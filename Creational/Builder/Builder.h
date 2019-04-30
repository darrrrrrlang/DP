#pragma once

#include <memory>
#include <Public/DesignPatterns.h>

EXAMPLE_BEGIN

class Person;

/*
Builder:
建造者基类。
用来指定建造一个Product的基本方法。
*/

class Builder
{
public:
	virtual void BuildHead() {}
	virtual void BuildBody() {}
	virtual void BuildArm() {}
	virtual void BuildHand() {}
	virtual void BuildLeg() {}
	virtual void BuildFeet() {}
	virtual std::shared_ptr<Person> GetPerson() { return nullptr; }
};

EXAMPLE_END