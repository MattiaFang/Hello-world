//2020.10.10
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
//�����㷨find
//����ָ��Ԫ�أ��ҵ��ͷ���ָ��Ԫ�ص��������Ҳ������ؽ���������end

//����������������
void test01()
{
	vector<int>v;
	for(int i=0;i<10;i++)
	{
		v.push_back(i);
	}

	//����  �Ƿ���5Ԫ��
	vector<int>::iterator ret=find(v.begin(),v.end(),5);
	if(ret!=v.end())
	{
		cout<<"�ҵ��˸�Ԫ�أ�"<<*ret<<endl;
	}
	else
	{
		cout<<"û���ҵ���"<<endl;
	}
}

//�����Զ�����������
class Person
{
public:
	Person(string name,int age)
	{
		this->m_Name = name;
		this->m_Age  = age;
	}

	//����==�� �ײ�find��ζԱ�Person��������
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
	Person p1("����",23);
	Person p2("����",25);
	Person p3("����",22);
	Person p4("����",21);
	Person p5("����",27);
	vector<Person> vp;
	vp.push_back(p1);
	vp.push_back(p2);
	vp.push_back(p3);
	vp.push_back(p4);
	vp.push_back(p5);

	//����  �Ƿ���p2Ԫ��
	vector<Person>::iterator ret=find(vp.begin(),vp.end(),p2);
	if(ret ==vp.end())
	{
		cout<<"û���ҵ�"<<endl;
	}
	else
	{
		cout<<"�ҵ�Ԫ�� ������"<< ret->m_Name <<" ���䣺"<< ret->m_Age<<endl;
	}
}

int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}