//�������캯������ʱ��
#include<iostream>
using namespace std;

class Person
{
public:
	Person()
	{
		cout<<"Person�޲Σ�Ĭ�ϣ����캯���ĵ���"<<endl;
	}
	Person(int a)
	{
		age=a;
		cout<<"Person�вι��캯���ĵ���"<<endl;
	}
	Person(const Person &p)
	{
		age=p.age;
		cout<<"Person�������캯���ĵ���"<<endl;
	}
	~Person()
	{
		cout<<"Person���������ĵ���"<<endl;
	}
	int age;
};

//1.ʹ��һ���Ѿ�������ϵĶ����ʼ���º���
void test01()
{
	Person p1(20);
	Person p2(p1);
	cout<<"p1������ageֵ��"<<p1.age<<endl;
	cout<<"p2������ageֵ��"<<p2.age<<endl;
}
//2.ֵ���ݵķ�ʽ������������ֵ
void doWork(Person p)
{

}
void test02()
{
	Person p;
	doWork(p);
}
//3.ֵ��ʽ���ؾֲ�����
Person doWork2()
{
	Person p1;
	return p1;
}
void test03()
{
	Person p=doWork2();
}

int main()
{
	test01();//����һ
	//test02();//������
	//test03();//������
	system("pause");
	return 0;
}