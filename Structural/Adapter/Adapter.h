#pragma once

#include "Target.h"
#include <memory>

class DataBaseAdapter : public AbstractDataBase
{
protected:
	virtual void MakeAbstract() override {}
public:
	DataBaseAdapter();
	~DataBaseAdapter();
	virtual void Insert() override;
	virtual void Delete() override;
private:
	struct DB;
	DB* m_ptrDB;
};