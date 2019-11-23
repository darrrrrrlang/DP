#include <Public/DPBuilder.h>

#include <memory>

#include "ConcreteBuilderA.h"
#include "ConcreteBuilderB.h"
#include "Director.h"
#include "Product.h"

PRIVATE_BEGIN

/*
用户使用Builder模式获取一个Product时，
1.创建一个Director
2.创建一个Builder
3.利用Director指导Builder生成Product
4.获取Builder的Product

与AbstractFactory比较：
AbstractFactory和Builder均对新增类型提供了良好的封装。
相比而言，AbstractFactory提供了一种生成一系列相关产品的能力，而Builder提供了控制产品生产过程的能力。

*/

void Example()
{
	EXAMPLE::Director director;

	EXAMPLE::CartoonPersonBuilder cartoonPersonBuilder;
	EXAMPLE::LivePersonBuilder livePersonBuilder;

	director.Construct(cartoonPersonBuilder);
	director.Construct(livePersonBuilder);

	std::shared_ptr<EXAMPLE::Person> ptrCartoonPerson = cartoonPersonBuilder.GetPerson();
	std::shared_ptr<EXAMPLE::Person> ptrLivePerson = livePersonBuilder.GetPerson();

	ptrCartoonPerson->show();
	ptrLivePerson->show();
}

PRIVATE_END

DP_BEGIN

void DPBuilder::Play()
{
	Example();
}

DP_END
