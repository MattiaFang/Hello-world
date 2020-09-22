//类对象作为类成员
#include<iostream>
#include<string>
using namespace std;
class Phone
{
public:
	Phone(string pName)
	{
		cout<<"Phone 的构造函数调用"<<endl;
		m_PName=pName;
	}
	~Phone()
	{
		cout<<"Phone 的析构函数调用"<<endl;
	}
	string m_PName;//手机品牌名称
};
class Person
{
public:
	//Phone m_Phone = pName 隐式转换法
	Person(string name,string pName):m_Name(name),m_Phone(pName)
	{
		cout<<"Person 的构造函数调用"<<endl;
	}

	~Person()
	{
		cout<<"Person 的析构函数调用"<<endl;
	}
	//姓名
	string m_Name;
	//手机
	Phone m_Phone;
};
//当其他类对象作为本类成员，构造时候先构造类对象，再构造自身。
//析构的顺序与构造想法

void test01()
{
	Person p("张三","苹果MAX");
	cout<<p.m_Name<<"拿着"<<p.m_Phone.m_PName<<endl;
}

int main()
{
	test01();
	//test02();
	system("pause");
	return 0;
}
