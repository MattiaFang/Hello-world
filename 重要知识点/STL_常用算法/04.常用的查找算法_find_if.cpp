//2020.10.10
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;


//������������
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

	//����  �Ƿ���5Ԫ��
	vector<int>::iterator ret=find_if(v.begin(),v.end(),GreatFive());
	if(ret!=v.end())
	{
		cout<<"�ҵ��˴����������"<<*ret<<endl;
	}
	else
	{
		cout<<"û���ҵ���"<<endl;
	}
}
//���� �Զ�����������
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
	Person p1("����",23);
	Person p2("����",15);
	Person p3("����",22);
	Person p4("����",11);
	Person p5("����",27);
	vector<Person> vp;
	vp.push_back(p1);
	vp.push_back(p2);
	vp.push_back(p3);
	vp.push_back(p4);
	vp.push_back(p5);

	//����  �Ƿ����������20
	vector<Person>::iterator ret=find_if(vp.begin(),vp.end(),GreatTw());
	if(ret ==vp.end())
	{
		cout<<"û���ҵ�"<<endl;
	}
	else
	{
		cout<<"�ҵ��������20���� ������"<< ret->m_Name <<" ���䣺"<< ret->m_Age<<endl;
	}
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}