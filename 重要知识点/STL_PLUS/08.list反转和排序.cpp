//2020.10.03
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
bool myCompare(int v1,int v2)
{
	return v1>v2;
}

void test01()
{
	list<int> L1;
	L1.push_back(20);
	L1.push_back(40);
	L1.push_back(60);
	L1.push_back(10);
	L1.push_back(30);
	L1.push_back(50);
	cout<<"L1�� ";
	printList(L1);
	cout<<"L1��ת�� ";
	L1.reverse();
	printList(L1);
	cout<<"L1Ĭ���������򣩺� ";
	//���в�֧��������ʵĵ��������������������ñ�׼�㷨����sort��l1.begin(),l1.end()��;
	L1.sort();//Ĭ������
	printList(L1);
	cout<<"L1��������� ";
	L1.sort(myCompare);//����
	printList(L1);
}
int main()
{
	test01();
	system("pause");
	return 0;
}