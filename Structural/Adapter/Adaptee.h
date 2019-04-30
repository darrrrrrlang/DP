#pragma once

/* 这里是一个可用的数据库 */

class Target
{

};

class DataBaseA : public Target
{
public:
	void AInsert();
	void ADelete();
};

class DataBaseB : public Target
{
public:
	void BInsert();
	void BDelete();
};