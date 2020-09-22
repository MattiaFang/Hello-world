//对象的初始化和清理
#include<iostream>
using namespace std;
class Person
{
public:
	//构造函数
	//构造函数分类：无参（默认）和有参构造
	//按照类型分类：普通和拷贝构造
	Person()
	{
		cout<<"Person无参构造函数的调用"<<endl;
	}
	//有参构造函数
	Person(int a)
	{
		age=a;
		cout<<"Person有参构造函数的调用"<<endl;
	}
	//拷贝构造函数
	Person(const Person &p)
	{
		//将传入的人的身上所有属性，拷贝到我身上
		age=p.age;
		cout<<"Person拷贝构造函数的调用"<<endl;
	}
	//析构函数
	~Person()//析构函数不可带参数
	{
		cout<<"Person析构函数的调用"<<endl;
	}
	int age;
};

//调用
//构造函数与析构函数都是必须要有的，如果不提供，编译器也会提供一个空实现
void test01()
{
	//1.括号法
	Person p1;//在栈上的数据，test01在执行完毕后会释放
	Person p2(10);//有参构造函数
	Person p3(p2);//拷贝析构函数
	//注意事项 _ 1
	//调用默认构造函数时候，不要加()   
	//Person p1();     《---错误
	//因为编译器会认为是一个函数的声明
	
	//2.显示法
	Person P1;
	Person P2 = Person(10);
	Person P3 = Person(P2);
	//Person(10); // 匿名对象 特点：当前行执行结束后，系统会立即回收掉匿名对象
	//cout<<"验证是否之前运行析构函数"<<end;
	//注意事项 _ 2
	//不要利用拷贝函数 初始化匿名函数 编译器会认为Person(P3)===Person p3;重定义
	//Person(P3);   《--错误

	//3.隐式转换法
	Person p4=10;//相当于Person p4=person(10);//有参构造
	Person p5=p4;//拷贝构造
}


int main()
{
	test01();
	//Person p;//在程序全部结束后才调用析构函数，一般我们看不到
	system("pause");
	return 0;
}