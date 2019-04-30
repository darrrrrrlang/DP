#include <Public/DPAbstractFactory.h>

#include <iostream>
#include <array>

#include "ConcreteFactoryA.h"
#include "ConcreteFactoryB.h"

using std::cout;
using std::endl;

/*

���󹤳���
��������ʵ��һ��ͼ�ν��档���������а�ť����ǩ���������Ϊ��ʵ�ֻ������ܣ����ǽ�����ͳһ���������ʹ�á�

*/

PRIVATE_BEGIN

void Example()
{
	/*
	����Ϊ����ʾЧ����ʵ����������������
	ÿ��������ʹ�ó��󹤳�ģʽʱ�����ֻ��һ��ʵ��������Ա�ֻ֤����ͬһ���Ʒ��

	����Ҫʹ����һ�ײ�Ʒʱ��ֻ��Ҫ����ʵ�����Ĺ������͡�
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
	Ч��������
	�û�ֻ��Ҫ֪�����󹤳��������Ĳ�Ʒ���Ͳ�ͬ��Ʒ�Ĺ��ܡ��Ӷ����뿪��ÿһ���Ʒ�ľ���ʵ�֡�

	ȱ�ݣ�
	����һ����Ʒ���ʱ����Ҫ�޸�ÿ�������ľ���ʵ�֡�
	*/
}

PRIVATE_END

DP_BEGIN

void DPAbstractFactory::Play()
{
	Example();
}

DP_END
