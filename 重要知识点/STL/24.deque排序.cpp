#include<iostream>
#include<deque>
#include<algorithm>//��׼�㷨ͷ�ļ�

using namespace std;
void printDeque(const deque<int>&d)//const �������õ�dequeֻ�ܽ��ж�����
{
	for(deque<int>::const_iterator it=d.begin();it!=d.end();it++)
	{
		cout<< *it <<" ";
	}
	cout<<endl;
}
//���˲���
void test01()
{
	deque<int> d;
	d.push_back(10);
	d.push_back(90);
	d.push_back(40);
	d.push_back(50);
	d.push_back(20);
	d.push_back(30);

	printDeque(d);
	sort(d.begin(),d.end());
	cout<<"�����"<<endl;
	//����֧��������ʵĵ���������������ʹ��sort�㷨
	printDeque(d);
}

int main()
{
	test01();
	system("pause");
	return 0;
}