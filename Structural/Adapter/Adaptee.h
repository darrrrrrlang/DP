#pragma once

/* ������һ�����õ����ݿ� */

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