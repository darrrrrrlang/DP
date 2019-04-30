#pragma once

#include "Builder.h"

EXAMPLE_BEGIN

class ConcreteBuilderA : public Builder
{

};

class CartoonPersonBuilder : public ConcreteBuilderA
{
public:
	CartoonPersonBuilder();
	void BuildHead() override;
	void BuildBody() override;
	void BuildArm() override;
	void BuildHand() override;
	void BuildLeg() override;
	void BuildFeet() override;
	std::shared_ptr<Person> GetPerson() override;
private:
	std::shared_ptr<Person> m_product;
};

EXAMPLE_END