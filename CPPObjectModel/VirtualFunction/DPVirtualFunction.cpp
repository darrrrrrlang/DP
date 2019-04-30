#include <Public/DPVirtualFunction.h>

#include <cstdio>
#include <iostream>
using std::cout;
using std::endl;

PRIVATE_BEGIN

/*
������ʾC++����̳й�ϵ�ﺯ����ַ�Ĺ�ϵ���ر����麯����ʵ�ַ�ʽ��
*/

class BaseA
{
public:
	void ANormalOne() { cout << "BaseA::ANormalOne" << endl; }
	void ANormalTwo() { cout << "BaseA::ANormalTwo" << endl; }
	virtual void AVirtualOne() { cout << "BaseA::AVirtualOne" << endl; }
	virtual void AVirtualTwo() { cout << "BaseA::AVirtualTwo" << endl; }
};

class BaseB
{
public:
	void BNormalOne() { cout << "BaseB::BNormalOne" << endl; }
	void BNormalTwo() { cout << "BaseB::BNormalTwo" << endl; }
	virtual void BVirtualOne() { cout << "BaseB::BVirtualOne" << endl; }
	virtual void BVirtualTwo() { cout << "BaseB::BVirtualTwo" << endl; }
};

class BaseC
{
private:
	void test();
};

class DerivedA : public BaseA, public BaseB, public BaseC
{
public:
	//virtual void AVirtualOne() { cout << "DerivedA::AVirtualOne" << endl; }
	virtual void AVirtualTwo() { cout << "DerivedA::AVirtualTwo" << endl; }
	//virtual void BVirtualOne() { cout << "DerivedA::BVirtualOne" << endl; }
	virtual void BVirtualTwo() { cout << "DerivedA::BVirtualTwo" << endl; }
};

void Example()
{
	/*
	DerivedA�̳�BaseA��BaseB��
	*/
	DerivedA da;
	DerivedA *pda = &da;
	printf("address of DerivedA=%p\n", &da);

	/*
	�й����Ա����ָ���һЩ���ԡ�
	�������һ��ָ����ĳ�Ա������ָ�룿
	�𣺴������϶��ԣ��������յ�����Ҫһ������Ķ����������ĳ�Ա����ָ�벢����һ�������ĺ�����
	���ǿ��Գ���ͨ���۲��Ա������ʵ�ʱ����ֵ�����������������C++����ģ�͵Ĳ���ʵ�֡�
	*/
	void (DerivedA::*pFunc)(void) = &DerivedA::ANormalOne; // ����һ����Ա����ָ��
	(da.*pFunc)(); // . ����
	(pda->*pFunc)(); // -> ����

	void (DerivedA::*pVirtualFunc)(void) = &DerivedA::AVirtualOne; // ����ָ�����һ���麯����ָ��
	(da.*pVirtualFunc)(); 
	(pda->*pVirtualFunc)();

	/*
	��δ�����ڱ��뾯�棬��Ϊ��ĳ�Ա����ָ��û�б�����Ĵ�ӡ������
	��δ�����VC��GCC�ϵ������һ�¡�

	���������GCC��һЩ���ۣ�
	1.�����ͨ��Ա����ָ��ָ������һ���̶���λ�á����λ���ƺ��ڴ���Ρ�
	2.����麯��Ϊһ����С��ֵ������ͬһ���麯�������ֵ�ڻ���������е�ֵ��һ�µģ�Ҳ�в�һ�µġ������ƺ�ͬһ�����У����ֵ�����������ӵġ�
	*/
#if false
	printf("address of BaseA::ANormalOne=%p\n", &BaseA::ANormalOne);
	printf("address of BaseA::ANormalTwo=%p\n", &BaseA::ANormalTwo);
	printf("address of BaseA::AVirtualOne=%p\n", &BaseA::AVirtualOne);
	printf("address of BaseA::AVirtualTwo=%p\n", &BaseA::AVirtualTwo);

	printf("address of BaseB::BNormalOne=%p\n", &BaseB::BNormalOne);
	printf("address of BaseB::BNormalTwo=%p\n", &BaseB::BNormalTwo);
	printf("address of BaseB::BVirtualOne=%p\n", &BaseB::BVirtualOne);
	printf("address of BaseB::BVirtualTwo=%p\n", &BaseB::BVirtualTwo);

	printf("address of DerivedA::ANormalOne=%p\n", &DerivedA::ANormalOne);
	printf("address of DerivedA::ANormalTwo=%p\n", &DerivedA::ANormalTwo);
	printf("address of DerivedA::BNormalOne=%p\n", &DerivedA::BNormalOne);
	printf("address of DerivedA::BNormalTwo=%p\n", &DerivedA::BNormalTwo);
	//printf("address of DerivedA::AVirtualOne=%p\n", &DerivedA::AVirtualOne);
	printf("address of DerivedA::AVirtualTwo=%p\n", &DerivedA::AVirtualTwo);
	//printf("address of DerivedA::BVirtualOne=%p\n", &DerivedA::BVirtualOne);
	printf("address of DerivedA::BVirtualTwo=%p\n", &DerivedA::BVirtualTwo);
#endif 

	/*
	���黷��Ϊ64bit��
	�������ǳ��Է����麯����Ĺ��ɡ�

	��GCC���ڲ�ʵ���У�ʵ���������׵�ַ����һ��ָ���麯�����ָ�롣
	���ڴ����麯����BaseA��BaseB�����СΪ8�ֽڣ�����Ǵ洢��һ��ָ���麯�����ָ�롣
	���ڲ������麯����BaseC�����СΪ1�ֽڡ��������һ���ֽ���Ҫ��ʵ������Ҫ��һ����ַ����Ҫ��
	*/
	cout << "sizeof(BaseA) = " << sizeof(BaseA) << endl;
	cout << "sizeof(BaseB) = " << sizeof(BaseB) << endl;
	cout << "sizeof(BaseC) = " << sizeof(BaseC) << endl;
	cout << "sizeof(DerivedA) = " << sizeof(DerivedA) << endl;

	{
		BaseA iBaseA;
		BaseB iBaseB;
		DerivedA iDerA;

		/* 
		���ȡ���ĵ�ַ�洢����ָ�����ַ���ָ�룬�����һ������ָ�롣
		���������ָ�����ȡֵ���������ɵõ����ַ����洢�ĵ�ַ��			
		*/
		intptr_t **ppBaseA = reinterpret_cast<intptr_t**>(&iBaseA);
		intptr_t **ppBaseB = reinterpret_cast<intptr_t**>(&iBaseB);
		intptr_t **ppDerA_1 = reinterpret_cast<intptr_t**>(&iDerA);
		intptr_t **ppDerA_2 = reinterpret_cast<intptr_t**>((char*)(&iDerA) + sizeof(intptr_t));

		/*
		�麯������洢��Ӧ�����麯����ʵ�ʵ�ַ������麯�������麯���ĸ�����Ӧ��
		ע�������д����pp��һ��ָ��ָ�������ָ�룬��˱������������ڽ�������Ԫ������

		��ע����VisualStudio�£��麯������0��β������GCC�£��麯����û����0��β�����ȡ����ʱʹ�ù̶���ֵ��

		�ڻ�ȡ���麯��������ǽ���ת��Ϊһ����ͨ�������е��á�ע�⣬�����麯���ܼ򵥣�û��ʹ��thisָ�룬�����Ϊ�������ġ�
		���ǿ��Է��֣�ÿ������麯�������δ洢���������麯����ַ��
		�������࣬��д�˸���ķ����ģ���ָ��ָ���µĵ�ַ��û����д�ģ�ʹ��ԭ��ַ��
		�ж������ģ���Ӧ�ж���麯����ָ�롣
		*/
		typedef void(*FuncType)(void);
		int i = 0;
		while (/*(*ppBaseA)[i] != 0 && */i < 2)
		{
			intptr_t p1 = (*ppBaseA)[i];
			cout << "iBaseA[][" << i << "] = " << (void*)p1 << endl;
			((FuncType)p1)();
			++i;
		}
		i = 0;
		while (/*(*ppBaseB)[i] != 0 && */i < 2)
		{
			intptr_t p1 = (*ppBaseB)[i];
			cout << "iBaseB[][" << i << "] = " << (void*)p1 << endl;
			((FuncType)p1)();
			++i;
		}
		i = 0;
		while (/*(*ppDerA_1)[i] != 0 && */i < 2)
		{
			intptr_t p1 = (*ppDerA_1)[i];
			cout << "iDerA_1[][" << i << "] = " << (void*)p1 << endl;
			((FuncType)p1)();
			++i;
		}
		i = 0;
		while (/*(*ppDerA_2)[i] != 0 && */i < 2)
		{
			intptr_t p1 = (*ppDerA_2)[i];
			cout << "iDerA_2[][" << i << "] = " << (void*)p1 << endl;
			((FuncType)p1)();
			++i;
		}
	}
}

PRIVATE_END

DP_BEGIN

void DPVirtualFunction::Play()
{
	Example();
}

DP_END