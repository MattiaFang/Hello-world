//2020.09.13
//ѧϰĿ�꣺�ܹ�������ģ���еĳ�Ա��������ʵ��
#include<iostream>
#include<string>
//��ģ���г�Ա��������ʵ��
template<class T1,class T2>
class Person
{
public:
	//��Ա������������
	Person(T1 name,T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	void showPerson()
	{
	}

	T1 m_Name;
	T2 m_Age;
}
//���캯�� ����ʵ��
Person()

int main()
{

	system("pause");
	return 0;
}
