#pragma once

#include <memory>
#include "Builder.h"

EXAMPLE_BEGIN

class ConcreteBuilderB : public Builder
{

};

class LivePersonBuilder : public ConcreteBuilderB
{
public:
	LivePersonBuilder();
	void BuildHead() override;
	void BuildBody() override;
	void BuildArm() override;
	void BuildHand() override;
	void BuildLeg() override;
	void BuildFeet() override;
	std::shared_ptr<Person> GetPerson() override;
private:
	std::shared_ptr<Person> m_person;
};

EXAMPLE_END