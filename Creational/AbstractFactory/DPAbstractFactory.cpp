#include <Public/DPAbstractFactory.h>

#include <iostream>
#include <array>

#include "ConcreteFactoryA.h"
#include "ConcreteFactoryB.h"

using std::cout;
using std::endl;

/*

抽象工厂：
这里我们实现一个图形界面。这个界面带有按钮、标签两种组件。为了实现换肤功能，我们将具有统一风格的类组合使用。

*/

PRIVATE_BEGIN

void Example()
{
	/*
	这里为了演示效果，实例化了两个工厂。
	每个程序在使用抽象工厂模式时，最好只有一个实例。这可以保证只存在同一类产品。

	当需要使用另一套产品时，只需要更改实例化的工厂类型。
	*/
	EXAMPLE::BlueWndFactory iBlueFactory;
	EXAMPLE::BlackWndFactory iBlackFactory;

	auto btnBlue = iBlueFactory.CreateButton();
	auto labelBlue = iBlueFactory.CreateLabel();

	auto btnBlack = iBlackFactory.CreateButton();
	auto labelBlack = iBlackFactory.CreateLabel();

	btnBlue->Push();
	labelBlue->SetText("Blue Label");

	btnBlack->Push();
	labelBlack->SetText("Black Label");
	/*
	效果分析：
	用户只需要知道抽象工厂能生产的产品类别和不同产品的功能。从而隔离开了每一类产品的具体实现。

	缺陷：
	新增一个产品类别时，需要修改每个工厂的具体实现。
	*/
}

PRIVATE_END

DP_BEGIN

void DPAbstractFactory::Play()
{
	Example();
}

DP_END
