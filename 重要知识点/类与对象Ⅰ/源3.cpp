//拷贝构造函数调用时机
#include<iostream>
using namespace std;

class Person
{
public:
	Person()
	{
		cout<<"Person无参（默认）构造函数的调用"<<endl;
	}
	Person(int a)
	{
		age=a;
		cout<<"Person有参构造函数的调用"<<endl;
	}
	Person(const Person &p)
	{
		age=p.age;
		cout<<"Person拷贝构造函数的调用"<<endl;
	}
	~Person()
	{
		cout<<"Person析构函数的调用"<<endl;
	}
	int age;
};

//1.使用一个已经创建完毕的对象初始化新函数
void test01()
{
	Person p1(20);
	Person p2(p1);
	cout<<"p1对象中age值："<<p1.age<<endl;
	cout<<"p2对象中age值："<<p2.age<<endl;
}
//2.值传递的方式给函数参数传值
void doWork(Person p)
{

}
void test02()
{
	Person p;
	doWork(p);
}
//3.值方式返回局部对象
Person doWork2()
{
	Person p1;
	return p1;
}
void test03()
{
	Person p=doWork2();
}

int main()
{
	test01();//方法一
	//test02();//方法二
	//test03();//方法三
	system("pause");
	return 0;
}