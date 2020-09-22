//2020.09.12
#include<iostream>
using namespace std;

template<typename T>//模板的声明 T为通用类型
void myswap(T &a,T &b)
{
	T temp =a;
	a=b;
	b=temp;
}

void test01()
{
	int a=10;
	int b=20;
	//利用函数模板交换
	//1、自动类型推导
	//myswap(a,b);
	//2、显示指定类型
	myswap<int>(a,b);

	cout<<"a = "<< a <<endl;
	cout<<"b = "<< b <<endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}