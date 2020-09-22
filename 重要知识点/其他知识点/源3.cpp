//指针
#include<iostream>
using namespace std;
int main()
{
	//输出定义变量的地址
	int a;
	int b[10];
	cout <<"a 的地址为"<<&a<<endl;
	cout <<"b 的地址为"<<&b<<endl;

	//指针是一个变量，其值为另一个变量的地址
	//定义指针
	int *a;

	int var=20;//实际变量的声明
	int *ip;//指针变量的声明

	ip=&var;//在指针变量中存储var的地址
	cout<<"Value of var variable:"<<var<<endl;
	//输出在指针变量中存储的地址
	cout<<"Address stored in ip variable:"<<ip<<endl;
	//访问指针中地址的值
	cout<<"Value of *ip variable:"<<*ip<<endl;
	

	system("pause");
	return 0;
}