#include <Public/DPPrototype.h>

#include <iostream>

#include "PrototypeManager.h"

using std::cout;
using std::endl;

/*

ԭ�ͣ�
��������ʵ��һ��֪ͨ�����ࡣΪ�˹淶��������ֵ�֪ͨ������ʹ��ͳһ����������

*/

PRIVATE_BEGIN

void Example()
{
	/*
	����һ��ԭ�͵����ӡ�
	��������Ҫ����һ��֪ͨ����ʱ����PrototypeManager���󼴿ɡ�

	����󹤳���ȣ�ԭ��ģʽ��ǿ��������һ���ԣ��������ܸ��û�һ��ĳ�����͵Ķ��󡱡�
	���󹤳���ǿ������һ���໥Э���Ķ���

	ͬʱ��ԭ��ģʽ��������˶��󿽱�����������˶���һЩͨ����������ߴ���Ч�ʵĶ���Ҳ�ǳ����ʡ�

	���󹤳��ڲ�����ͬһ������ʱ��ͬ������ʹ��ԭ��ģʽ��������󴴽�ʱ�ĸ����ԡ�
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