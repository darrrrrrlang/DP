#pragma once

class AbstractDataBase
{
protected:
	virtual void MakeAbstract() = 0;
public:
	virtual void Insert() {}
	virtual void Delete() {}
};