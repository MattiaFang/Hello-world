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

void test01()
{
	deque<int> d1;
	for(int i=0;i<10;i++)
	{
		d1.push_back(i);
	}
	printDeque(d1);

	if(d1.empty())
	{
		cout<<"deque为空"<<endl;
	}
	else
	{
		cout<<"deque不为空"<<endl;
		cout<<"deque的大小："<<d1.size()<<endl;
		//deque没有容量的概念
	}

	//重新指定大小
	//d1.resize(16);
	d1.resize(16,1);//第二参数为填充数，默认值是0
	printDeque(d1);

	d1.resize(5);
	printDeque(d1);
}
int main()
{
	test01();
	system("pause");
	return 0;
}