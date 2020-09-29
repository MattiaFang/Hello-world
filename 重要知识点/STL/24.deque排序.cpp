#include<iostream>
#include<deque>
#include<algorithm>//标准算法头文件

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
	deque<int> d;
	d.push_back(10);
	d.push_back(90);
	d.push_back(40);
	d.push_back(50);
	d.push_back(20);
	d.push_back(30);

	printDeque(d);
	sort(d.begin(),d.end());
	cout<<"排序后："<<endl;
	//对于支持随机访问的迭代器容器都可以使用sort算法
	printDeque(d);
}

int main()
{
	test01();
	system("pause");
	return 0;
}