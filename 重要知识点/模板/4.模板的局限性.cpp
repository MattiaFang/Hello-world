//2020.09.12
#include<iostream>
#include<string>
using namespace std;

//模板局限性
//模板并不是万能的，有些特定数据类型，需要用具体化方式做特殊实现

class Person
{
public:
	Person(string name,int age)
	{
		this->m_Name =name;
		this->m_Age =age;
	}
	string m_Name;//姓名
	int m_Age;//年龄
};

//对比两个数据是否相等函数
template<typename T>
bool myCompare(T &a, T &b)
{
	if(a==b)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//利用具体化Person版本实现代码，具体化优先调用
template<>
bool myCompare(Person &p1,Person &p2)
{
	if(p1.m_Name==p2.m_Name&&p1.m_Age==p2.m_Age)
	{
		return true;
	}
	else
	{
		return false;
	}
}


void test01()
{
	int a=10;
	int b=20;
	bool ret = myCompare(a,b);
	if(ret)
	{
		cout<<"两数相等"<<endl;
	}
	else
	{
		cout<<"两数不相等"<<endl;
	}
}
void test02()
{
	Person p1("Tom",20);
	Person p2("Tom",10);
	bool ret = myCompare(p1,p2);
	if(ret)
	{
		cout <<"两者相同"<<endl;
	}
	else
	{
		cout <<"两者不同"<<endl;
	}
}

int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}