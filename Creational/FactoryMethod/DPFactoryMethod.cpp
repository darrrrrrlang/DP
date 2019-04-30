#include <Public/DPFactoryMethod.h>

#include <iostream>

using std::cout;
using std::endl;

#include "ConcreteCreator.h"

PRIVATE_BEGIN

void Example()
{
	/*
	这里创建了一个素描画家作画，画家的基本功能已经在基类中完成，但是保留了自定义画笔的能力。	*/

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