#include<iostream>
#include<deque>
using namespace std;

//���˲���
void test01()
{
	deque<int>d;
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_back(40);
	d.push_back(50);

	//����[]��ʽ����Ԫ��
	for(int i=0;i<d.size();i++)
	{
		cout<<d[i]<<" ";
	}
	cout<<endl;

	//����at��ʽ����Ԫ��
	for(int i=0;i<d.size();i++)
	{
		cout<<d.at(i)<<" ";
	}
	cout<<endl;

	//��ȡ��һ��Ԫ��
	cout<<"��һ��Ԫ��Ϊ��"<<d.front()<<endl;

	//��ȡ���һ��Ԫ��
	cout<<"���һ��Ԫ��Ϊ��"<<d.back()<<endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}