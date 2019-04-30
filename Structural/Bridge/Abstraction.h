#pragma once

#include <string>
#include "Implementor.h"

/* �����࣬�����û�ֱ��ʹ�õ��� */

class Abstraction
{

};

/* ��ʱ��̽��ģ�����Ž�ģʽ��ʵ�� */
/* ������������һ���㷨��������֪����㷨�����϶��������Ŀ�� */
/* �����õ����Ž�ģʽ�ļ������ԣ�
���û���ȫ����ʵ�֣������޸���ʵ�ֺ��û����벻�����±��롣
�����ܴ���ƿ��ʱ�����Էǳ�������޸��Žӵ�ʵ�ִ���Ӷ��ı����ܡ���������ͨ��������ʱ�̶�̬�޸�ʵ�֡�
*/
/* Ӧ�÷��֣��������ϣ��ͨ���Ž�ģʽʵ�ֽӿں�ʵ�ֵķ��룬�������ǰ��Ʋ�û��Ҫ��
   ��ʹĳ�������Ѿ�������ʹ�ã���Ȼ����ͨ������ʵ�ָö���Ϊ�Ž�ģʽ�Ӷ��ﵽĿ�ġ�
   ��Ȼ��ǰ��������������Ϊһ�������޸ĵĶ���
*/
class ListImplementor;
class CustomList : public Abstraction
{
protected:
	virtual ListImplementor& _Imp() = 0;
public:
	void insert(int index, const std::string &value) {}
	std::string operator[] (int index) { return std::string(); }
	const std::string &at(int index) const {}
	std::size_t size() const { return 0; }
	void push_back(const std::string &value) {}
	void push_front(const std::string &value) {}
	std::string pop_back() { return std::string(); }
	std::string pop_front() { return std::string(); }
};
