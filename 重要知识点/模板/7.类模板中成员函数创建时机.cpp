//2020.09.13
#include<iostream>
using namespace std;

//��ģ���г�Ա��������ʱ��
//��ģ���г�Ա�����ڵ���ʱ��ȥ����

class Person1
{
public:
	void showPerson1()
	{
		cout<<"Person1 show"<<endl;
	}
};
class Person2
{
public:
	void showPerson2()
	{
		cout<<"Person2 show"<<endl;
	}
};
template<class T>
class Myclass
{
public:
	T obj;
	//��ģ���еĳ�Ա����
	//��ģ�����ʱ������
	void func1()
	{
		obj.showPerson1();
	}
	void func2()
	{
		obj.showPerson2();
	}
};
void test01()
{
	Myclass<Person1> m;
	m.func1();
	//m.func2();

}
int main()
{
	test01();
	system("pause");
	return 0;
}
