//2020.09.13
//学习目标：能够掌握类模板中的成员函数类外实现
#include<iostream>
#include<string>
using namespace std;
//类模板中成员函数类外实现
template<class T1,class T2>
class Person
{
public:
	//成员函数类内声明
	Person(T1 name,T2 age);
	//{
	//	this->m_Name = name;
	//	this->m_Age = age;
	//}
	void showPerson();
	//{
	//	cout<<"姓名："<<this->m_Name<<endl;
	//	cout<<"年龄："<<this->m_Age<<endl;
	//}

	T1 m_Name;
	T2 m_Age;
};
//构造函数 类外实现
template<class T1,class T2>
Person<T1,T2>::Person(T1 name,T2 age)
{
	this->m_Name = name;
	this->m_Age = age;
}
//成员函数 类外实现
template<class T1,class T2>
void Person<T1,T2>::showPerson()
{
	cout<<"姓名："<<this->m_Name<<endl;
	cout<<"年龄："<<this->m_Age<<endl;
}
void test01()
{
	Person<string,int> p("Tom",20);
	p.showPerson();
}
int main()
{
	test01();
	system("pause");
	return 0;
}
