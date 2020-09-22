//递增运算符重载
//2020.8.11
#include<iostream>
using namespace std;
class Person
{
	friend ostream & operator<<(ostream &cout,Person &p);//友元
public:
	Person()
	{
		m_a=0;
	}
	//重载++运算符
	//重载前置++运算符
	 Person& operator++()
	{
		//先进行++运算
		m_a++;
		//再进行返回自身
		return *this;
	}

	//重载后置++运算符
	Person operator++(int)	//int代表占位参数，可以用于区分前置或者后置
							//返回的是局部变量，所以不能返回引用，返回值
	{
		//先记录当时结果
		Person temp=*this;
		//再进行++运算
		m_a++;
		//最后返回当时记录
		return temp;
	}

private:
	int m_a;

};

//全局函数重载<<号
ostream & operator<<(ostream &cout,Person &p)//引用
{
	cout<<"m_A = "<<p.m_a;
	return cout;
}


void text01()
{
	Person p1;

	cout<<p1++<<endl;
	cout<<p1<<endl;
	
}

int main()
{
	text01();

	system("pause");
	return 0;
}