//2020.09.12
#include<iostream>
using namespace std;

void myPrint(int a,int b)
{
	cout << "调用的普通函数" <<endl;
}
template<typename T>
void myPrint(T a,T b)
{
	cout << "调用的模板" << endl;
}

template<typename T>
void myPrint(T a,T b,T c)
{
	cout << "调用的模板_副本" << endl;
}

void test01()
{
	//1.如果函数模板和普通函数都可以实现优先调用普通函数
	int a=10;
	int b=20;
	myPrint(a,b);

	//2.通过空模板参数列表强制调用函数模板
	myPrint<>(a,b);

	//3.函数模板可以发生重载
	myPrint(a,b,b);

	//4.可以函数模板可以产生更好的匹配，优先使用函数模板
	char c='a';
	char d='b';
	myPrint(c,d);
}


int main()
{
	test01();
	system("pause");
	return 0;
}
