//2020.09.22
#include<iostream>
#include<string>
using namespace std;

//ͨ��ȫ�ֺ�����ӡPerson��Ϣ
//Person������
template<class T1,class T2>
class Person;

//����ʵ��
template<class T1,class T2>
void showPerson2(Person<T1,T2> p)//��Ϊȫ�ֺ������ü�������
{
	cout<<"---����ʵ��---"<<endl;
	cout<<"������"<<p.m_Name<<endl;
	cout<<"���䣺"<<p.m_Age<<endl;
}

template<class T1,class T2>
class Person
{
	//ȫ�ֺ��� ����ʵ��
	friend void showPerson(Person<T1,T2> p)
	{
		cout<<"������"<<p.m_Name<<endl;
		cout<<"���䣺"<<p.m_Age<<endl;
	}

	//ȫ�ֺ��� ����ʵ��
	//��<> ��ģ������б�   ����ģ��ĺ�������
	//���ȫ�ֺ��� ������ʵ�֣���Ҫ�ñ�������ǰ֪�������������
	friend void showPerson2<>(Person<T1,T2> p);

public:
	Person(T1 name,T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

private:
	T1 m_Name;
	T2 m_Age;
};

//1.ȫ�ֺ���������ʵ��
void test01()
{
	Person<string,int> p("С��",12);
	showPerson(p);
}

//2.ȫ�ֺ���������ʵ��
void test02()
{
	Person<string,int> p2("С��",17);
	showPerson2(p2);
}

int main()
{
	test01();
	system("pause");
	return 0;
}