#include<iostream>
#include<string>
using namespace std;
//类模板做函数参数
template<class T1,class T2>
class Person
{
public:
	Person(T1 name,T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	void showPerson()
	{
		cout<<"name :"<<this->m_Name<<endl;
		cout<<"age :"<<this->m_Age<<endl;
	}

	T1 m_Name;
	T2 m_Age;
};
//1.指定传入类型
void printPerson1(Person<string,int>& p)//用引用的方式传入
{
	p.showPerson();
}
void test01()
{
	cout<<"___指定传入类型___"<<endl;
	Person<string,int> p1("张三",23);
	//p1.showPerson();
	printPerson1(p1);
}

//2.参数模板化
template<class T1,class T2>
void printPerson2(Person<T1,T2>& p)//用引用的方式传入
{
	p.showPerson();
	//查看T中类型
	cout<<"T1的类型为： "<<typeid(T1).name()<<endl;
	cout<<"T2的类型为： "<<typeid(T2).name()<<endl;
}
void test02()
{
	cout<<"___参数模板化___"<<endl;
	Person<string,int> p2("李四",33);
	//p2.showPerson();
	printPerson2(p2);
}

//3.整个类模板化
template<class T>
void printPerson3(T &p)//用引用的方式传入
{
	p.showPerson();
	//查看T中类型
	cout<<"T的类型为： "<<typeid(T).name()<<endl;
}
void test03()
{
	cout<<"___整个类模板化___"<<endl;
	Person<string,int> p3("王五",31);
	//p3.showPerson();
	printPerson3(p3);
}

int main()
{
	test01();
	test02();
	test03();
	system("pause");
	return 0;
}