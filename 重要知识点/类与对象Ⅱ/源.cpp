//�����+����
//2020.8.11
#include<iostream>
using namespace std;
class Person
{
public:
	//��Ա��������+��
	/*Person operator+(Person &p)
	{
		Person temp;
		temp.m_a=this->m_a+p.m_a;
		temp.m_b=this->m_b+p.m_b;
		return temp;
	}*/
	int m_a;
	int m_b;
};

//ȫ�ֺ�������+��
Person operator+(Person &p1,Person &p2)
{
	Person temp_2;
	temp_2.m_a=p1.m_a+p2.m_a;
	temp_2.m_b=p1.m_b+p2.m_b;
	return temp_2;
}

//�������صİ汾
Person operator+(Person &p1,int x)
{
	Person temp_3;
	temp_3.m_a=p1.m_a + x;
	temp_3.m_b=p1.m_b + x;
	return temp_3;
}

void text01()
{
	Person p1;
	p1.m_a=10;
	p1.m_b=10;
	Person p2;
	p2.m_a=20;
	p2.m_b=50;
	Person p3 = p1+p2;  //�൱��p1.operaor+(p2)
	cout<<"p3��m_a: "<<p3.m_a<<endl;
	cout<<"p3��m_b: "<<p3.m_b<<endl;
}

void text02()
{
	Person p3;
	p3.m_a=20;
	p3.m_b=30;
	Person p4;
	p4.m_a=40;
	p4.m_b=50;
	Person p5 = p3+p4;   //�൱��operaor+(p3,p4)
	Person p6 = p3+100;  //�൱��operaor+(p3,100)
	cout<<"p5��m_a: "<<p5.m_a<<endl;
	cout<<"p5��m_b: "<<p5.m_b<<endl;
	cout<<"p6��m_a: "<<p6.m_a<<endl;
	cout<<"p6��m_b: "<<p6.m_b<<endl;
}

int main()
{
	//text01();
	text02();
	system("pause");
	return 0;
}