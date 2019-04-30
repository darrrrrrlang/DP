
#include "Adapter.h"
#include "Adaptee.h"

struct DataBaseAdapter::DB
{
	DataBaseA db;
};

DataBaseAdapter::DataBaseAdapter()
	:m_ptrDB(new DB())
{
}

DataBaseAdapter::~DataBaseAdapter()
{
	delete m_ptrDB;
	m_ptrDB = nullptr;
}

void DataBaseAdapter::Insert()
{
	m_ptrDB->db.AInsert();
}

void DataBaseAdapter::Delete()
{
	m_ptrDB->db.ADelete();
}