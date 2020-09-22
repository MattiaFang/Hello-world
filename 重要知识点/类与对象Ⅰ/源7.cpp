//静态成员——变量/函数
#include<iostream>
using namespace std;
class Person
{
public:
	int c;
	static int a;//类内声明

	static void func()
	{
		cout<<"调用fun静态成员函数"<<endl;
		a=100;//静态成员函数可以访问静态成员变量
		//c=200;//《=错 静态成员函数不可以访问非静态成员变量
		//静态成员变量不属于任何一个对象
	}

	//静态成员变量也有访问权限
private:
	static int b;
	static void func1()
	{
		cout<<"调用fun1静态成员函数"<<endl;
	}
};

int Person::a=300;//类外初始化(一定)
int Person::b=600;

//静态成员变量
void test01()
{
	Person p;
	cout<<p.a<<endl;
	Person p2;
	p2.a=200;
	cout<<p.a<<endl;//所有对象共享同一份数据
	//静态成员不属于某个对象上
}

void test02()
{
	//静态成员变量有两种访问方式
	//1、通过对象进行访问
	Person p;
	cout<<p.a<<endl;
	//2.通过类名进行访问
	cout<<Person::a<<endl;
	//cout<<Person::b<<endl;《=错  类外访问不到私有的静态成员变量
}

//静态成员函数
void test03()
{
	//1、通过对象访问
	Person p;
	p.func();
	//2、通过类名访问
	Person::func();
	//Person::func1;<<=错 类外访问不到私有静态函数
}

int main()
{
	//test01();
	//test02();
	test03();
	system("pause");
	return 0;
}
