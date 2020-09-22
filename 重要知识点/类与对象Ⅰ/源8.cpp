//this 指针
#include<iostream>
using namespace std;
class Person
{
public:
	Person(int age)
	{
		//age=age;//《=错 这里age编译器不认为是类成员
		//this指针指向被调用的成员函数所属的对象
		this->age=age;
	}

	Person& PersonAddAge(Person &p)  //一定要用引用
	{
		this->age += p.age;
		//this指向p2的本身，而*this指向就是p2这个对象本体
		return *this;
	}
	int age;
};
//1、解决名称冲突
void test01()
{
	Person p1(18);
	cout<<"p1的年龄是："<<p1.age<<endl;
}

//2、返回对象本身用*this
void test02()
{
	Person p1(10);
	Person p2(10);
	//链式编程思想
	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
	cout<<"p2的年龄是："<<p2.age<<endl;
}

int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}