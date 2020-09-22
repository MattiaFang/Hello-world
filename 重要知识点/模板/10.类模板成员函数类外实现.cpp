//2020.09.13
//学习目标：能够掌握类模板中的成员函数类外实现
#include<iostream>
#include<string>
//类模板中成员函数类外实现
template<class T1,class T2>
class Person
{
public:
	//成员函数类内声明
	Person(T1 name,T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	void showPerson()
	{
	}

	T1 m_Name;
	T2 m_Age;
}
//构造函数 类外实现
Person()

int main()
{

	system("pause");
	return 0;
}
