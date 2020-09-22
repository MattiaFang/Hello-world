//赋值运算符重载
//2020.8.11
#include<iostream>
using namespace std;
class Person
{
public:
	Person(int age)
	{
		m_Age = new int(age);//new int 返回是int*
	}
	//重载 赋值运算符
	Person &operator=(Person &p)
	{
		//编译器是提供浅拷贝
		//m_Age = p.m_Age;
		//应该先判断是否有属性在堆区，如果有先释放干净，然后再深拷贝
		if(m_Age !=NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}
		//深拷贝
		m_Age = new int(*p.m_Age);
		//返回自身
		return *this;
	}
	~Person()
	{
		if(m_Age !=NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}
	}
	int  *m_Age;
};
void test01()
{
	Person p1(18);
	Person p2(20);
	p2 = p1;//赋值操作
	cout<<"p1的年龄为："<<*p1.m_Age<<endl;
	cout<<"p2的年龄为："<<*p1.m_Age<<endl;
}

int main()
{
	 test01();
	system("pause");
	return 0;
}