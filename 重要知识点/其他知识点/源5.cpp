//函数的分文件编写
//4个步骤：
//1.创建后缀名为.h的头文件
//2.创建后缀名为.cpp的源文件
//3.在头文件中写函数的声明
//4.在源文件中写函数的定义

//#include<iostream>
#include "标头5.h"
//using namespace std;
//函数声明
//void swap(int a,int b);

//函数定义
void swap(int a,int b)
{
	int temp=a;
	a=b;
	b=temp;

	cout<<"a ="<<a<<endl;
	cout<<"b ="<<b<<endl;
}
int main()
{
	int a=10,b=20;
	swap(a,b);//值传递
	//cout<<"a= "<<a<<endl;
	//cout<<"b= "<<b<<endl;
	system("pause");
	return 0;
}