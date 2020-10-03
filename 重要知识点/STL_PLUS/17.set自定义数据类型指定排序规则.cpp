#include<iostream>
#include<string>
#include<set>
using namespace std;

//存放自定义数据类型 排序
class Person
{
public:
	Person(string name,int age)
	{
		this->m_Name=name;
		this->m_Age=age;
	}
	string m_Name;
	int m_Age;
};
class comparePerson
{
public:
	bool operator()(const Person&p1,const Person&p2)
	{
		//按照年龄 降序
		return p1.m_Age>p2.m_Age;
	}
};
void test01()
{
	set<Person,comparePerson>s;
	Person p1("刘备",33);
	Person p2("关羽",34);
	Person p3("张飞",24);
	Person p4("赵云",18);
	Person p5("曹操",38);
	
	s.insert(p1);
	s.insert(p2);
	s.insert(p3);
	s.insert(p4);
	s.insert(p5);
	
	for(set<Person,comparePerson>::iterator it= s.begin();it!=s.end();it++)//专属迭代器
	{
		cout<<it->m_Name<<" "<<it->m_Age<<endl;
	}
	cout<<endl;

}

int main()
{
	test01();
	system("pause");
	return 0;
}