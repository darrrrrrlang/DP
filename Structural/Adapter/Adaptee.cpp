#include "Adaptee.h"

#include <iostream>

using std::cout;
using std::endl;

void DataBaseA::AInsert()
{
	cout << "DataBaseA::AInsert" << endl;
}

void DataBaseA::ADelete()
{
	cout << "DataBaseA::ADelete" << endl;
}

void DataBaseB::BInsert()
{
	cout << "DataBaseB::BInsert" << endl;
}

void DataBaseB::BDelete()
{
	cout << "DataBaseB::BDelete" << endl;
}