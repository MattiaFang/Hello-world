//2020.09.22
#include<iostream>
#include<string>
using namespace std;
//��һ�ֽ��������ֱ�Ӱ���Դ�ļ�
//#include "Person.cpp"//����ֱ������.h�ļ�

//�ڶ��ֽ����������.h��.cpp������д��һ�𣬽���׺����Ϊ.hpp�ļ�
#include "Person.hpp"

//��ģ����ļ���д�����Լ����
//template<class T1,class T2>
//class Person
//{
//public:
//	Person(T1 name,T2 age);
//	
//	void showPerson();
//
//	T1 m_Name;
//	T2 m_Age;
//};

//template<class T1,class T2>
//Person<T1,T2>::Person(T1 name,T2 age)
//{
//	this->m_Name = name;
//	this->m_Age = age;
//}
//
//template<class T1,class T2>
//void Person<T1,T2>::showPerson()
//{
//	cout<<"������"<<this->m_Name<<endl;
//	cout<<"���䣺"<<this->m_Age<<endl;
//}

void test01()
{
	Person<string,int> p("С��",22);
	p.showPerson();
}
int main()
{
	test01();
	system("pause");
	return 0;
}