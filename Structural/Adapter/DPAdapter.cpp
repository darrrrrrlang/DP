#include <Public/DPAdapter.h>

#include <iostream>
#include "Adapter.h"

using std::cout;
using std::endl;

/*

*/

PRIVATE_BEGIN

void Example()
{
	/* ����������ʵ��Ϊ����������Ҳ����ʵ��Ϊ���������������ߵ��������ڣ�ǰ��ͨ��ͬʱ�̳�����ӿںͿ��ýӿڣ������
		���ýӿڵİ�װ������ͨ������һ�����ýӿڶ�����ɿ��ýӿڵİ�װ�� */
	/* һ�����͵������ǣ����ǳ��Դ���һ��ʹ�����ݿ��Ӧ�ã�����ϣ�����ݿ���Ը��������ؽ��д����޸ġ� */
	DataBaseAdapter dbAdapter;
	dbAdapter.Insert();
	dbAdapter.Delete();
}

PRIVATE_END

DP_BEGIN

void DPAdapter::Play()
{
	Example();
}

DP_END