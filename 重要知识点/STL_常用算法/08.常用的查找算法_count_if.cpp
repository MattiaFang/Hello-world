//2020.10.10
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
//�����㷨count

//ͳ��������������
class greatFive
{
public:
	bool operator()(int val)
	{
		return  val>5;
	}
};
void test01()
{
	vector<int>v;
	v.push_back(1);
	v.push_back(4);
	v.push_back(7);
	v.push_back(3);
	v.push_back(4);
	v.push_back(8);
	v.push_back(4);
	v.push_back(9);

	//����  Ԫ��Ϊ����5 �ĸ���
	int ret=count_if(v.begin(),v.end(),greatFive());
	cout<<"Ԫ�ش���5���У�"<< ret <<" ��"<<endl;
}

//ͳ���Զ�����������
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
class greatTw
{
public:
	bool operator()(const Person &p)//�Ա�Ҫ��const
	{
		return p.m_Age>20;
	}
};
void test02()
{
	Person p1("����",23);
	Person p2("����",18);
	Person p3("����",22);
	Person p4("����",11);
	Person p5("����",18);
	Person p6("����",28);
	Person p7("֣��",18);
	vector<Person>vp;
	vp.push_back(p1);
	vp.push_back(p2);
	vp.push_back(p3);
	vp.push_back(p4);
	vp.push_back(p5);
	vp.push_back(p6);
	vp.push_back(p7);

	//����
	int ret=count_if(vp.begin(),vp.end(),greatTw());
	cout<<"�������20�����ж��٣�"<< ret <<" ��"<<endl;
}

int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}