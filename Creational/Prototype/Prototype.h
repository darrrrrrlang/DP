#pragma once

#include <memory>
#include <string>
#include <Public/DesignPatterns.h>

EXAMPLE_BEGIN

class Prototype
{

};

/*
һ����ʾ���ݣ������ṩ���û�չʾ����ʾ���ݡ�
�����Clone()�Ƕ� ������� ��ǿ����
*/

class Notice : public Prototype
{
public:
	virtual std::shared_ptr<Notice> Clone() const = 0;
	virtual const std::string &Title() const = 0;
	virtual const std::string &Message() const = 0;
};

EXAMPLE_END