//�����ǳ����
#include<iostream>
using namespace std;
class Person
{
public:
	Person()
	{
		cout<<"Person�޲Σ�Ĭ�ϣ����캯���ĵ���"<<endl;
	}
	Person(int a,int hei)
	{
		age=a;
		height=new int (hei);
		cout<<"Person�вι��캯���ĵ���"<<endl;
	}
	//�Լ�ʵ�ֿ������캯�������ǳ��������������
	Person(const Person &p)
	{
		age=p.age;
		//height=p.height;//������Ĭ��ʵ��
		//���
		height=new int(*p.height);
		cout<<"Person�������캯���ĵ���"<<endl;
	}
	~Person()
	{
		//�������룬�����������������ͷŲ���
		if(height!=NULL)
		{
			delete height;
			height=NULL;
		}
		cout<<"Person���������ĵ���"<<endl;
	}
	int age;//����
	int *height;//���
};
void test01()
{
	Person p1(18,165);
	cout <<"p1������Ϊ��"<<p1.age<<" ���Ϊ��"<<*p1.height<<endl;
	Person p2(p1);
	cout <<"p2������Ϊ��"<<p2.age<<" ���Ϊ��"<<*p2.height<<endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}
