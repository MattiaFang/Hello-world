#include<iostream>
#include<string>
using namespace std;
//��ģ������������
template<class T1,class T2>
class Person
{
public:
	Person(T1 name,T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	void showPerson()
	{
		cout<<"name :"<<this->m_Name<<endl;
		cout<<"age :"<<this->m_Age<<endl;
	}

	T1 m_Name;
	T2 m_Age;
};
//1.ָ����������
void printPerson1(Person<string,int>& p)//�����õķ�ʽ����
{
	p.showPerson();
}
void test01()
{
	cout<<"___ָ����������___"<<endl;
	Person<string,int> p1("����",23);
	//p1.showPerson();
	printPerson1(p1);
}

//2.����ģ�廯
template<class T1,class T2>
void printPerson2(Person<T1,T2>& p)//�����õķ�ʽ����
{
	p.showPerson();
	//�鿴T������
	cout<<"T1������Ϊ�� "<<typeid(T1).name()<<endl;
	cout<<"T2������Ϊ�� "<<typeid(T2).name()<<endl;
}
void test02()
{
	cout<<"___����ģ�廯___"<<endl;
	Person<string,int> p2("����",33);
	//p2.showPerson();
	printPerson2(p2);
}

//3.������ģ�廯
template<class T>
void printPerson3(T &p)//�����õķ�ʽ����
{
	p.showPerson();
	//�鿴T������
	cout<<"T������Ϊ�� "<<typeid(T).name()<<endl;
}
void test03()
{
	cout<<"___������ģ�廯___"<<endl;
	Person<string,int> p3("����",31);
	//p3.showPerson();
	printPerson3(p3);
}

int main()
{
	test01();
	test02();
	test03();
	system("pause");
	return 0;
}