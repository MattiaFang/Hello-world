//��̬��Ա��������/����
#include<iostream>
using namespace std;
class Person
{
public:
	int c;
	static int a;//��������

	static void func()
	{
		cout<<"����fun��̬��Ա����"<<endl;
		a=100;//��̬��Ա�������Է��ʾ�̬��Ա����
		//c=200;//��=�� ��̬��Ա���������Է��ʷǾ�̬��Ա����
		//��̬��Ա�����������κ�һ������
	}

	//��̬��Ա����Ҳ�з���Ȩ��
private:
	static int b;
	static void func1()
	{
		cout<<"����fun1��̬��Ա����"<<endl;
	}
};

int Person::a=300;//�����ʼ��(һ��)
int Person::b=600;

//��̬��Ա����
void test01()
{
	Person p;
	cout<<p.a<<endl;
	Person p2;
	p2.a=200;
	cout<<p.a<<endl;//���ж�����ͬһ������
	//��̬��Ա������ĳ��������
}

void test02()
{
	//��̬��Ա���������ַ��ʷ�ʽ
	//1��ͨ��������з���
	Person p;
	cout<<p.a<<endl;
	//2.ͨ���������з���
	cout<<Person::a<<endl;
	//cout<<Person::b<<endl;��=��  ������ʲ���˽�еľ�̬��Ա����
}

//��̬��Ա����
void test03()
{
	//1��ͨ���������
	Person p;
	p.func();
	//2��ͨ����������
	Person::func();
	//Person::func1;<<=�� ������ʲ���˽�о�̬����
}

int main()
{
	//test01();
	//test02();
	test03();
	system("pause");
	return 0;
}
