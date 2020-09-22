//2020.09.22
#include<iostream>
#include<string>
using namespace std;
//第一种解决方法，直接包含源文件
//#include "Person.cpp"//不能直接引用.h文件

//第二种解决方法，将.h和.cpp的内容写到一起，将后缀名改为.hpp文件
#include "Person.hpp"

//类模板分文件编写问题以及解决
//template<class T1,class T2>
//class Person
//{
//public:
//	Person(T1 name,T2 age);
//	
//	void showPerson();
//
//	T1 m_Name;
//	T2 m_Age;
//};

//template<class T1,class T2>
//Person<T1,T2>::Person(T1 name,T2 age)
//{
//	this->m_Name = name;
//	this->m_Age = age;
//}
//
//template<class T1,class T2>
//void Person<T1,T2>::showPerson()
//{
//	cout<<"姓名："<<this->m_Name<<endl;
//	cout<<"年龄："<<this->m_Age<<endl;
//}

void test01()
{
	Person<string,int> p("小米",22);
	p.showPerson();
}
int main()
{
	test01();
	system("pause");
	return 0;
}