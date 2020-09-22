//2020.09.22
#include<iostream>
#include<string>
using namespace std;

//通过全局函数打印Person信息
//Person类声明
template<class T1,class T2>
class Person;

//类外实现
template<class T1,class T2>
void showPerson2(Person<T1,T2> p)//其为全局函数不用加作用域
{
	cout<<"---类外实现---"<<endl;
	cout<<"姓名："<<p.m_Name<<endl;
	cout<<"年龄："<<p.m_Age<<endl;
}

template<class T1,class T2>
class Person
{
	//全局函数 类内实现
	friend void showPerson(Person<T1,T2> p)
	{
		cout<<"姓名："<<p.m_Name<<endl;
		cout<<"年龄："<<p.m_Age<<endl;
	}

	//全局函数 类外实现
	//加<> 空模板参数列表   函数模板的函数声明
	//如果全局函数 是类外实现，需要让编译器提前知道这个函数存在
	friend void showPerson2<>(Person<T1,T2> p);

public:
	Person(T1 name,T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

private:
	T1 m_Name;
	T2 m_Age;
};

//1.全局函数在类内实现
void test01()
{
	Person<string,int> p("小华",12);
	showPerson(p);
}

//2.全局函数在类外实现
void test02()
{
	Person<string,int> p2("小宏",17);
	showPerson2(p2);
}

int main()
{
	test01();
	system("pause");
	return 0;
}