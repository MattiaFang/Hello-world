#include<iostream>
#include<string>
using namespace std;
//�������󣨷º�����
class MyAdd
{
public:
	int operator()(int v1,int v2)
	{
		return v1+v2;
	}
};

//1.����������ʹ��ʱ����������ͨ�����������ã������в����������з���ֵ
void test01()
{
	MyAdd myAdd;
	cout<<myAdd(10,10)<<endl;
}

//2.�������󳬳���ͨ������������������������Լ���״̬
class MyString
{
public:
	MyString()
	{
		this->count = 0;
	}
	void operator()(string Test)
	{
		cout<<Test<<endl;
		this->count++;
	}
	int count;//�ڲ����Լ���״̬
};
void test02()
{
	MyString mystring;
	mystring("heel");
	mystring("woer");
	mystring("sdsv");
	mystring("fewf");
	cout<<"mystring���õĴ�����"<<mystring.count<<endl;
}

//3.�������������Ϊ��������
void doPrint(MyString &ms, string test)
{
	ms(test);
}
void test03()
{
	MyString mystring;
	doPrint(mystring,"Hello C++!");
}
int main()
{
	//test01();
	//test02();
	test03();
	system("pause");
	return 0;
}