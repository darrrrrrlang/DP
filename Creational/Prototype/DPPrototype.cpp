#include <Public/DPPrototype.h>

#include <iostream>

#include "PrototypeManager.h"

using std::cout;
using std::endl;

/*

原型：
这里我们实现一个通知内容类。为了规范程序里出现的通知，我们使用统一的类来管理。

*/

PRIVATE_BEGIN

void Example()
{
	/*
	这是一个原型的例子。
	当我们需要生成一个通知对象时，向PrototypeManager请求即可。

	与抽象工厂相比，原型模式更强调对象间的一致性，“总是能给用户一个某种类型的对象”。
	抽象工厂更强调生成一类相互协作的对象。

	同时，原型模式充分利用了对象拷贝的能力，因此对于一些通过拷贝能提高创建效率的对象也非常合适。

	抽象工厂内部创建同一个对象时，同样可以使用原型模式，避免对象创建时的复杂性。
	*/
	EXAMPLE::PrototypeManager iManager;
	auto ptrCriticalError = iManager.CreateNotice(EXAMPLE::NoticeType::CRITICAL_ERROR);

	cout << "title:" << ptrCriticalError->Title() << endl;
	cout << "message:" << ptrCriticalError->Message() << endl;
	cout << endl;

	auto ptrIllegalInput = iManager.CreateNotice(EXAMPLE::NoticeType::ILLEGAL_INPUT);

	cout << "title:" << ptrIllegalInput->Title() << endl;
	cout << "messsage:" << ptrIllegalInput->Message() << endl;
	cout << endl;
}

PRIVATE_END

DP_BEGIN

void DPPrototype::Play()
{
	Example();
}

DP_END