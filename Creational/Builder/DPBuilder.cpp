#include <Public/DPBuilder.h>

#include <memory>

#include "ConcreteBuilderA.h"
#include "ConcreteBuilderB.h"
#include "Director.h"
#include "Product.h"

PRIVATE_BEGIN

/*
�û�ʹ��Builderģʽ��ȡһ��Productʱ��
1.����һ��Director
2.����һ��Builder
3.����Directorָ��Builder����Product
4.��ȡBuilder��Product

��AbstractFactory�Ƚϣ�
AbstractFactory��Builder�������������ṩ�����õķ�װ��
��ȶ��ԣ�AbstractFactory�ṩ��һ������һϵ����ز�Ʒ����������Builder�ṩ�˿��Ʋ�Ʒ�������̵�������

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
