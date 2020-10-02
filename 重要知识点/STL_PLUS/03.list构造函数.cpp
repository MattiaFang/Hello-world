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

//list构造函数
void test01()
{
	//创建list容器
	//默认构造
	list<int> L1;
	//添加数据
	L1.push_back(20);
	L1.push_back(40);
	L1.push_back(60);
	L1.push_back(80);

	//遍历容器
	printList(L1);

	//区间构造
	list<int> L2(L1.begin(),L1.end());
	printList(L2);

	//拷贝构造
	list<int>L3(L2);
	printList(L3);

	//elem构造
	list<int>L4(5,100);//5个100
	printList(L4);
}
int main()
{
	test01();
	system("pause");
	return 0;
}