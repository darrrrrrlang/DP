#include <string>
#include <Public/DesignPatterns.h>

EXAMPLE_BEGIN

class Singleton
{
};

/*
ʹ�á���������ʽ���߱����̰߳�ȫ�ԡ�
*/

class Boss : public Singleton
{
public:
	static Boss *instance();
public:
	std::string Sing();
protected:
	Boss() :m_name("zhangsan") {}
	static Boss m_instance;
private:
	std::string m_name;
};

EXAMPLE_END