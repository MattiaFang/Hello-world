//�������������
//2020.8.11
#include<iostream>
using namespace std;
class Person
{
public:
	//��Ա�����������������������cout�� << ��ߣ�
	int m_a;
	int m_b;
};

//ȫ�ֺ�������<<��
ostream & operator<<(ostream &cout,Person &p)//����
{
	cout<<"m_A = "<<p.m_a<<"  m_B = "<<p.m_b;
	return cout;
}


void text01()
{
	Person p1;
	p1.m_a=10;
	p1.m_b=10;
	cout<<p1<<endl;
	
}

int main()
{
	text01();

	system("pause");
	return 0;
}