//深拷贝与浅拷贝
#include<iostream>
using namespace std;
class Person
{
public:
	Person()
	{
		cout<<"Person无参（默认）构造函数的调用"<<endl;
	}
	Person(int a,int hei)
	{
		age=a;
		height=new int (hei);
		cout<<"Person有参构造函数的调用"<<endl;
	}
	//自己实现拷贝构造函数，解决浅拷贝带来的问题
	Person(const Person &p)
	{
		age=p.age;
		//height=p.height;//编译器默认实现
		//深拷贝
		height=new int(*p.height);
		cout<<"Person拷贝构造函数的调用"<<endl;
	}
	~Person()
	{
		//析构代码，将堆区开辟数据做释放操作
		if(height!=NULL)
		{
			delete height;
			height=NULL;
		}
		cout<<"Person析构函数的调用"<<endl;
	}
	int age;//年龄
	int *height;//身高
};
void test01()
{
	Person p1(18,165);
	cout <<"p1的年龄为："<<p1.age<<" 身高为："<<*p1.height<<endl;
	Person p2(p1);
	cout <<"p2的年龄为："<<p2.age<<" 身高为："<<*p2.height<<endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}
