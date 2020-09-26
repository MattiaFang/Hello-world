#include<iostream>
#include<vector>
#include<string>
using namespace std;
//vector容器中存放自定义数据类型
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

void test01()
{
	vector<Person> v;
	Person p1("李白",10);
	Person p2("杜甫",20);
	Person p3("柳宗元",30);
	Person p4("郭子仪",40);
	Person p5("魏征",50);

	//向容器中添加数据
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	//遍历容器中的数据
	for(vector<Person>::iterator it=v.begin();it != v.end();it++)
	{
		cout<<"姓名："<<(*it).m_Name<<"   年龄："<<it->m_Name<<endl;
	}
}

void test02()
{
	vector<Person*> v;//指针
	Person p1("李白",10);
	Person p2("杜甫",20);
	Person p3("柳宗元",30);
	Person p4("郭子仪",40);
	Person p5("魏征",50);

	//向容器中添加数据
	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);
	v.push_back(&p5);

	//遍历容器中的数据
	for(vector<Person*>::iterator it=v.begin();it != v.end();it++)
	{
		cout<<"姓名："<<(*(*it)).m_Name<<"   年龄："<<(*it)->m_Name<<endl;
	}
}

int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}