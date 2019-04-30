#include "Product.h"

#include <iostream>

using std::cout;
using std::endl;

EXAMPLE_BEGIN

void Person::show() const
{
	cout << "Person: " << endl;
	cout << "--head:" << m_head << endl;
	cout << "--body:" << m_body << endl;
	cout << "--arm:" << m_arm << endl;
	cout << "--hand:" << m_hand << endl;
	cout << "--leg:" << m_leg << endl;
	cout << "--feet:" << m_feet << endl;
}

EXAMPLE_END