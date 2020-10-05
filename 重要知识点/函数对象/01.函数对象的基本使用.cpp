#include<iostream>
#include<string>
using namespace std;
//函数对象（仿函数）
class MyAdd
{
public:
	int operator()(int v1,int v2)
	{
		return v1+v2;
	}
};

//1.函数对象在使用时，可以像普通函数那样调用，可以有参数，可以有返回值
void test01()
{
	MyAdd myAdd;
	cout<<myAdd(10,10)<<endl;
}

//2.函数对象超出普通函数对象概念，函数对象可以有自己的状态
class MyString
{
public:
	MyString()
	{
		this->count = 0;
	}
	void operator()(string Test)
	{
		cout<<Test<<endl;
		this->count++;
	}
	int count;//内部有自己的状态
};
void test02()
{
	MyString mystring;
	mystring("heel");
	mystring("woer");
	mystring("sdsv");
	mystring("fewf");
	cout<<"mystring调用的次数："<<mystring.count<<endl;
}

//3.函数对象可以作为参数传递
void doPrint(MyString &ms, string test)
{
	ms(test);
}
void test03()
{
	MyString mystring;
	doPrint(mystring,"Hello C++!");
}
int main()
{
	//test01();
	//test02();
	test03();
	system("pause");
	return 0;
}