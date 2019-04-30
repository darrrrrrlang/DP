#include <Public/DPFactoryMethod.h>

#include <iostream>

using std::cout;
using std::endl;

#include "ConcreteCreator.h"

PRIVATE_BEGIN

void Example()
{
	/*
	���ﴴ����һ�����軭�����������ҵĻ��������Ѿ��ڻ�������ɣ����Ǳ������Զ��廭�ʵ�������	*/

	std::string picture;
	EXAMPLE::PencilPainter iPencilPainter;
	iPencilPainter.CreatePicture(picture);
	cout << "PencilPainter Draw a picutre:" << picture << endl;
}

PRIVATE_END

DP_BEGIN

void DPFactoryMethod::Play()
{
	Example();
}

DP_END