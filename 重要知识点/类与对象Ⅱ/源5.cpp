//继承方式
#include<iostream>
using namespace std;
class Base1
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Base2
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Base3
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son1:public Base1
{
public:
	void func()
	{
		m_A = 10;//父类中公共权限成员 到子类中依然是公共权限成员
		m_B = 10;//父类中保护权限成员 到子类中依然是保护权限成员
		//m_C = 10;//《=父类私有成员 子类不可访问
	}
};

class Son2:protected Base2
{
public:
	void func()
	{
		m_A = 100;//父类中公共权限成员 到子类中变为保护权限成员
		m_B = 100;//父类中公共权限成员 到子类中变为保护权限成员
		//m_C = 100;//《=父类私有成员 子类不可访问
	}
};

class Son3 : private Base3
{
public:
	void func()
	{
		m_A = 100;//父类中公共权限成员 到子类中变为私有权限成员
		m_B = 100;//父类中公共权限成员 到子类中变为私有权限成员
		//m_C = 100;//《=父类私有成员 子类不可访问
	}
};

class GrandSon3 : private Son3
{
public:
	
	void func()
	{
		//m_A = 100;
		//m_B = 100;//《=父类私有成员 子类不可访问
	}


};



void test01()
{
	Son1 s1;
	s1.m_A=100;
	//s1.m_B=100;//到了son中m_B是保护成员 类外不可访问
}

void test02()
{
	Son2 s2;
	//s2.m_A=100;
	//s2.m_B=100;//到了son中m_A和m_B是保护成员 类外不可访问
}

void test03()
{
	Son3 s3;
	//s3.m_A=100;
	//s3.m_B=100;//到了son中m_A和m_B是私有成员 类外不可访问
}

int main()
{

	system("pause");
	return 0;
}