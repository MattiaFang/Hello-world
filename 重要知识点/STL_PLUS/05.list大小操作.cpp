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

	//判断是否为空
	if(L1.empty())
	{
		cout<<"L1为空"<<endl;
	}
	else
	{
		cout<<"L1不为空, ";
		cout<<"L1的大小为"<<L1.size()<<endl;
	}
	//重新指定大小
	list<int>L2(5,20);
	L2.resize(10,80);//大小改为10，填充数为80
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