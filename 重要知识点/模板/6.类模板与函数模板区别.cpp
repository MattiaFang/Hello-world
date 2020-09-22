//2020.09.13
#include<iostream>
#include<string>
using namespace std;

//类模板
template<class NameType,class AgeType = int>
class Person
{
public:
	Person(NameType name,AgeType age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	void showPerson()
	{
		cout<<"name = "<< this->m_Name <<endl;
		cout<<" age = " << this->m_Age <<endl;
	}
	NameType m_Name;
	AgeType m_Age;
};
//1.类模板没有自动类型推导使用方式
void test01()
{
	//Person p1("孙悟空",999);   错，无法用自动类型推导
	Person<string,int> p1("孙悟空",999);
	p1.showPerson();
}
//2.类模板在模板参数列表中可以有默认参数
void test02()
{
	//Person p1("孙悟空",999);   错，无法用自动类型推导
	Person<string> p2("轩辕剑",1299);
	p2.showPerson();
}
int main()
{ 
	test01();
	test02();
	system("pause");
	return 0;
}