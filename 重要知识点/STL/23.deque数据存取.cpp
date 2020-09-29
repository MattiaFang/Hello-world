#include<iostream>
#include<deque>
using namespace std;

//两端操作
void test01()
{
	deque<int>d;
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_back(40);
	d.push_back(50);

	//利用[]方式访问元素
	for(int i=0;i<d.size();i++)
	{
		cout<<d[i]<<" ";
	}
	cout<<endl;

	//利用at方式访问元素
	for(int i=0;i<d.size();i++)
	{
		cout<<d.at(i)<<" ";
	}
	cout<<endl;

	//获取第一个元素
	cout<<"第一个元素为："<<d.front()<<endl;

	//获取最后一个元素
	cout<<"最后一个元素为："<<d.back()<<endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}