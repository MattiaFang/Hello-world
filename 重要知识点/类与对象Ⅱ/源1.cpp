//左移运算符重载
//2020.8.11
#include<iostream>
using namespace std;
class Person
{
public:
	//成员函数不可重载左移运算符（cout在 << 左边）
	int m_a;
	int m_b;
};

//全局函数重载<<号
ostream & operator<<(ostream &cout,Person &p)//引用
{
	cout<<"m_A = "<<p.m_a<<"  m_B = "<<p.m_b;
	return cout;
}


void text01()
{
	Person p1;
	p1.m_a=10;
	p1.m_b=10;
	cout<<p1<<endl;
	
}

int main()
{
	text01();

	system("pause");
	return 0;
}