#include "ConcreteBuilderA.h"
#include "Product.h"

EXAMPLE_BEGIN

CartoonPersonBuilder::CartoonPersonBuilder()
	:m_product(new Person())
{}

void CartoonPersonBuilder::BuildHead()
{
	m_product->setHead("Cartoon Head");
}

void CartoonPersonBuilder::BuildBody()
{
	m_product->setBody("Cartoon Body");
}

void CartoonPersonBuilder::BuildArm()
{
	m_product->setArm("Cartoon Arm");
}

void CartoonPersonBuilder::BuildHand()
{
	m_product->setHand("Cartoon Hand");
}

void CartoonPersonBuilder::BuildLeg()
{
	m_product->setLeg("Cartoon Leg");
}

void CartoonPersonBuilder::BuildFeet()
{
	m_product->setFeet("Cartoon Feet");
}

std::shared_ptr<Person> CartoonPersonBuilder::GetPerson()
{
	return m_product;
}

EXAMPLE_END