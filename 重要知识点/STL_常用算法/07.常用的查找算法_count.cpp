//2020.10.10
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
//�����㷨count

//ͳ��������������
void test01()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(40);
	v.push_back(70);
	v.push_back(30);
	v.push_back(40);
	v.push_back(40);
	v.push_back(40);
	v.push_back(10);

	//����  Ԫ��Ϊ40 �ĸ���
	int ret=count(v.begin(),v.end(),40);
	cout<<"Ԫ��Ϊ40���У�"<< ret <<" ��"<<endl;
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
	bool operator==(const Person &p)   //�ײ�һ��Ҫ��const!!!
	{
		if(this->m_Age == p.m_Age)
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
	Person p2("����",18);
	Person p3("����",22);
	Person p4("����",11);
	Person p5("����",18);
	Person p6("����",18);
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
	Person p("С��",18);
	int ret=count(vp.begin(),vp.end(),p);
	cout<<"��С��ͬ������ж��٣�"<< ret <<" ��"<<endl;
}

int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}