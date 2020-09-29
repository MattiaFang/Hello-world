#include<iostream>
#include<vector>
using namespace std;
void printVector(vector<int>&v)
{
	for(vector<int> ::iterator  it=v.begin();it!=v.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
}

//基本使用
void test01()
{
	vector<int>v1;
	for(int i=0;i<10;i++)
	{
		v1.push_back(i);
	}
	cout<<"v1为：";
	printVector(v1);
	vector<int>v2;
	for(int i=9;i>-1;i--)
	{
		v2.push_back(i);
	}
	cout<<"v2为：";
	printVector(v2);

	//交换
	cout<<"swap交换后"<<endl;
	v1.swap(v2);
	cout<<"v1为：";
	printVector(v1);
	cout<<"v2为：";
	printVector(v2);
}

//实际用途 ： 巧用swap可以收缩内存空间
void test02()
{
	vector<int>v3;
	for(int i=0;i<100000;i++)
	{
		v3.push_back(i);
	}
	cout<<"v3的容量为："<<v3.capacity()<<endl;
	cout<<"v3的大小为："<<v3.size()<<endl;

	v3.resize(3);
	cout<<"v3经过重新指定大小"<<endl;
	cout<<"v3的容量为："<<v3.capacity()<<endl;
	cout<<"v3的大小为："<<v3.size()<<endl;
	//容量过大，浪费资源
	//巧用swap收缩内存
	vector<int> (v3).swap(v3);//vector<int>(v)为创建一个匿名对象
	cout<<"v3经过收缩内存后"<<endl;
	cout<<"v3的容量为："<<v3.capacity()<<endl;
	cout<<"v3的大小为："<<v3.size()<<endl;
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}