//2020.10.02
#include<iostream>
#include<list>
using namespace std;

void printList( const list<int>&L)
{
	for(list<int>::const_iterator it=L.begin();it!=L.end();it++)
	{
		cout << *it <<" ";
	}
	cout<<endl;
}

void test01()
{
	list<int> L1;
	L1.push_back(20);
	L1.push_back(40);
	L1.push_back(60);
	L1.push_back(80);

	//�ж��Ƿ�Ϊ��
	if(L1.empty())
	{
		cout<<"L1Ϊ��"<<endl;
	}
	else
	{
		cout<<"L1��Ϊ��, ";
		cout<<"L1�Ĵ�СΪ"<<L1.size()<<endl;
	}
	//����ָ����С
	list<int>L2(5,20);
	L2.resize(10,80);//��С��Ϊ10�������Ϊ80
	printList(L2);
	L2.resize(2);
	printList(L2);
}
int main()
{
	test01();
	system("pause");
	return 0;
}