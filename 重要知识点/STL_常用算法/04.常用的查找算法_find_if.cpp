//2020.10.10
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;


//内置数据类型
class GreatFive
{
public:
	bool operator()(int val)
	{
		return val>5;
	}
};
void test01()
{
	vector<int>v;
	for(int i=0;i<10;i++)
	{
		v.push_back(i);
	}

	//查找  是否有5元素
	vector<int>::iterator ret=find_if(v.begin(),v.end(),GreatFive());
	if(ret!=v.end())
	{
		cout<<"找到了大于五的数："<<*ret<<endl;
	}
	else
	{
		cout<<"没有找到！"<<endl;
	}
}
//查找 自定义数据类型
class Person
{
public:
	Person(string name,int age)
	{
		this->m_Name = name;
		this->m_Age  = age;
	}
	string m_Name;
	int m_Age;
};
class GreatTw
{
public:
	bool operator()(Person p)
	{
		return p.m_Age>5;
	}
};
void test02()
{
	Person p1("张三",23);
	Person p2("李四",15);
	Person p3("王五",22);
	Person p4("赵六",11);
	Person p5("吴七",27);
	vector<Person> vp;
	vp.push_back(p1);
	vp.push_back(p2);
	vp.push_back(p3);
	vp.push_back(p4);
	vp.push_back(p5);

	//查找  是否有年龄大于20
	vector<Person>::iterator ret=find_if(vp.begin(),vp.end(),GreatTw());
	if(ret ==vp.end())
	{
		cout<<"没有找到"<<endl;
	}
	else
	{
		cout<<"找到年龄大于20的人 姓名："<< ret->m_Name <<" 年龄："<< ret->m_Age<<endl;
	}
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}