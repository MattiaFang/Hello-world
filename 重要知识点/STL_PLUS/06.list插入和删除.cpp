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

void test01()
{
	list<int> L1;
	//尾插
	L1.push_back(20);
	L1.push_back(40);
	L1.push_back(60);

	//头插
	L1.push_front(10);
	L1.push_front(30);
	L1.push_front(50);
	printList(L1);
	//尾删
	L1.pop_back();
	//头删
	L1.pop_front();
	printList(L1);

	//insert插入
	list<int>::iterator it=L1.begin();
	L1.insert(++it,100);
	printList(L1);

	//删除
	it  = L1.begin();
	L1.erase(it);
	printList(L1);

	//移除
	L1.push_back(90);
	L1.push_back(90);
	printList(L1);
	L1.remove(90);//移除所有该值
	printList(L1);

	//清空
	L1.clear();
	//printList(L1);
	if(L1.empty())
	{
		cout<<"L1为空"<<endl;
	}
}
int main()
{
	test01();
	system("pause");
	return 0;
}