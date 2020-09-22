//函数调用运算符重载
#include<iostream>
#include<string>
using namespace std;

//打印输出类
class MyPrint
{
public:
	//重载函数调用运算符
	void operator()(string test)
	{
		cout<<test<<endl;
	}
};
void text01()
{
	MyPrint myPrint;
	myPrint("Hello world!");//由于使用起来非常类似于函数调用，也被称为仿函数
}

//仿函数非常灵活，没有固定的写法
//加法类
class MyAdd
{
public:
	int operator()(int num1,int num2)
	{
		return num1+num2;
	}
};
void text02()
{
	MyAdd myAdd;
	int ret =myAdd(100,100);
	cout<<ret<<endl;

	//匿名函数对象
	cout<<MyAdd()(100,100)<<endl;
}
int main()
{
	//text01();
	text02();
	system("pause");
	return 0;
}