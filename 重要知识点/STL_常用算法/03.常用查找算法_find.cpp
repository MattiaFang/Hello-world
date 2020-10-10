//2020.10.10
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
//查找算法find
//查找指定元素，找到就返回指定元素迭代器，找不到返回结束迭代器end

//查找内置数据类型
void test01()
{
	vector<int>v;
	for(int i=0;i<10;i++)
	{
		v.push_back(i);
	}

	//查找  是否有5元素
	vector<int>::iterator ret=find(v.begin(),v.end(),5);
	if(ret!=v.end())
	{
		cout<<"找到了该元素："<<*ret<<endl;
	}
	else
	{
		cout<<"没有找到！"<<endl;
	}
}

//查找自定义数据类型
class Person
{
public:
	Person(string name,int age)
	{
		this->m_Name = name;
		this->m_Age  = age;
	}

	//重载==号 底层find如何对比Person类似数据
	bool operator==(const Person &p)
	{
		if(this->m_Name==p.m_Name && this->m_Age==p.m_Age)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	string m_Name;
	int m_Age;
};

void test02()
{
	Person p1("张三",23);
	Person p2("李四",25);
	Person p3("王五",22);
	Person p4("赵六",21);
	Person p5("吴七",27);
	vector<Person> vp;
	vp.push_back(p1);
	vp.push_back(p2);
	vp.push_back(p3);
	vp.push_back(p4);
	vp.push_back(p5);

	//查找  是否有p2元素
	vector<Person>::iterator ret=find(vp.begin(),vp.end(),p2);
	if(ret ==vp.end())
	{
		cout<<"没有找到"<<endl;
	}
	else
	{
		cout<<"找到元素 姓名："<< ret->m_Name <<" 年龄："<< ret->m_Age<<endl;
	}
}

int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}