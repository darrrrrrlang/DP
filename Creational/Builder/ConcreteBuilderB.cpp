#include "ConcreteBuilderB.h"
#include "Product.h"

EXAMPLE_BEGIN

LivePersonBuilder::LivePersonBuilder()
	:m_person(new Person())
{}

void LivePersonBuilder::BuildHead()
{
	m_person->setHead("Live Head");
}

void LivePersonBuilder::BuildBody()
{
	m_person->setBody("Live Body");
}

void LivePersonBuilder::BuildArm()
{
	m_person->setArm("Live Arm");
}

void LivePersonBuilder::BuildHand()
{
	m_person->setHand("Live Hnad");
}

void LivePersonBuilder::BuildLeg()
{
	m_person->setLeg("Live Leg");
}

void LivePersonBuilder::BuildFeet()
{
	m_person->setFeet("Live Feet");
}

std::shared_ptr<Person> LivePersonBuilder::GetPerson()
{
	return m_person;
}

EXAMPLE_END