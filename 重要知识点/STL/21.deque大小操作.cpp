#include<iostream>
#include<deque>
using namespace std;
void printDeque(const deque<int>&d)//const �������õ�dequeֻ�ܽ��ж�����
{
	for(deque<int>::const_iterator it=d.begin();it!=d.end();it++)
	{
		cout<< *it <<" ";
	}
	cout<<endl;
}

void test01()
{
	deque<int> d1;
	for(int i=0;i<10;i++)
	{
		d1.push_back(i);
	}
	printDeque(d1);

	if(d1.empty())
	{
		cout<<"dequeΪ��"<<endl;
	}
	else
	{
		cout<<"deque��Ϊ��"<<endl;
		cout<<"deque�Ĵ�С��"<<d1.size()<<endl;
		//dequeû�������ĸ���
	}

	//����ָ����С
	//d1.resize(16);
	d1.resize(16,1);//�ڶ�����Ϊ�������Ĭ��ֵ��0
	printDeque(d1);

	d1.resize(5);
	printDeque(d1);
}
int main()
{
	test01();
	system("pause");
	return 0;
}