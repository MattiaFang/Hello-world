#include<iostream>
#include<deque>
using namespace std;
void printDeque(const deque<int>&d)//const 代表引用的deque只能进行读操作
{
	for(deque<int>::const_iterator it=d.begin();it!=d.end();it++)
	{
		cout<< *it <<" ";
	}
	cout<<endl;
}
//两端操作
void test01()
{
	deque<int> d1;
	//尾插
	d1.push_back(10);
	d1.push_back(20);

	//头插
	d1.push_front(100);
	d1.push_front(200);

	printDeque(d1);

	//尾删
	d1.pop_back();
	printDeque(d1);

	//头删
	d1.pop_front();
	printDeque(d1);
}

//指定位置操作
void test02()
{
	deque<int>d2;
	for(int i=0;i<10;i++)
	{
		d2.push_back(i);
	}
	printDeque(d2);

	//insert
	d2.insert(d2.begin(),10);
	printDeque(d2);

	d2.insert(d2.begin(),2,100);
	printDeque(d2);

	//按区间进行插入
	cout<<"=================="<<endl;
	deque<int>d3;
	for(int i=0;i<10;i++)
	{
		d3.push_back(i);
	}
	printDeque(d3);
	d3.insert(d3.begin(),d2.begin(),d2.end());
	printDeque(d3);

	cout<<"=================="<<endl;
	printDeque(d2);
	//删除
	deque<int>::iterator it=d2.begin();
	it=it+4;//第5个位置
	d2.erase(it);
	printDeque(d2);
	//按区间删除
	d2.erase(d2.begin(),d2.end());
	//d2.clear();//清空
	printDeque(d2);
}

int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}