#pragma once

#include <string>
#include "Implementor.h"

/* 抽象类，这是用户直接使用的类 */

class Abstraction
{

};

/* 暂时不探讨模板下桥接模式的实现 */
/* 这个链表代表了一种算法的需求。已知这个算法将被较多的用于项目。 */
/* 这里用到了桥接模式的几个特性：
对用户完全隐藏实现，甚至修改了实现后，用户代码不用重新编译。
当性能存在瓶颈时，可以非常方便的修改桥接的实现代码从而改变性能。甚至可以通过在运行时刻动态修改实现。
*/
/* 应该发现，如果纯粹希望通过桥接模式实现接口和实现的分离，这对于提前设计并没有要求。
   即使某个对象已经被大量使用，仍然可以通过重新实现该对象为桥接模式从而达到目的。
   当然，前提是这个对象必须为一个可以修改的对象。
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
