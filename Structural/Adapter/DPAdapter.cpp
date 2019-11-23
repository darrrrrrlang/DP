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
	/* 适配器可以实现为类适配器，也可以实现为对象适配器。两者的区别在于，前者通过同时继承需求接口和可用接口，以完成
		可用接口的包装；后者通过持有一个可用接口对象，完成可用接口的包装。 */
	/* 一个典型的例子是，我们尝试创建一个使用数据库的应用，但是希望数据库可以更换而不必进行大量修改。 */
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