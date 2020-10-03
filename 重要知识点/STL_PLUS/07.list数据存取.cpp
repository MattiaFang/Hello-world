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
//list不支持l1[0]和L1.at(0)访问list容器中的元素
//原因是list本质是链表，不是用连续空间存储数据，迭代器也是不支持随机访问的
void test01()
{
	list<int> L1;
	L1.push_back(20);
	L1.push_back(40);
	L1.push_back(60);
	printList(L1);
	cout<<"第一个元素是："<<L1.front()<<endl;
	cout<<"最后一个元素是："<<L1.back()<<endl;

	//list迭代器是双向，不支持随机访问
	list<int>::iterator it = L1.begin();
	it++;
	it--;
	//it=it+2;错误！
}
int main()
{
	test01();
	system("pause");
	return 0;
}