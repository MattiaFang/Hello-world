//�̳з�ʽ
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
		m_A = 10;//�����й���Ȩ�޳�Ա ����������Ȼ�ǹ���Ȩ�޳�Ա
		m_B = 10;//�����б���Ȩ�޳�Ա ����������Ȼ�Ǳ���Ȩ�޳�Ա
		//m_C = 10;//��=����˽�г�Ա ���಻�ɷ���
	}
};

class Son2:protected Base2
{
public:
	void func()
	{
		m_A = 100;//�����й���Ȩ�޳�Ա �������б�Ϊ����Ȩ�޳�Ա
		m_B = 100;//�����й���Ȩ�޳�Ա �������б�Ϊ����Ȩ�޳�Ա
		//m_C = 100;//��=����˽�г�Ա ���಻�ɷ���
	}
};

class Son3 : private Base3
{
public:
	void func()
	{
		m_A = 100;//�����й���Ȩ�޳�Ա �������б�Ϊ˽��Ȩ�޳�Ա
		m_B = 100;//�����й���Ȩ�޳�Ա �������б�Ϊ˽��Ȩ�޳�Ա
		//m_C = 100;//��=����˽�г�Ա ���಻�ɷ���
	}
};

class GrandSon3 : private Son3
{
public:
	
	void func()
	{
		//m_A = 100;
		//m_B = 100;//��=����˽�г�Ա ���಻�ɷ���
	}


};



void test01()
{
	Son1 s1;
	s1.m_A=100;
	//s1.m_B=100;//����son��m_B�Ǳ�����Ա ���ⲻ�ɷ���
}

void test02()
{
	Son2 s2;
	//s2.m_A=100;
	//s2.m_B=100;//����son��m_A��m_B�Ǳ�����Ա ���ⲻ�ɷ���
}

void test03()
{
	Son3 s3;
	//s3.m_A=100;
	//s3.m_B=100;//����son��m_A��m_B��˽�г�Ա ���ⲻ�ɷ���
}

int main()
{

	system("pause");
	return 0;
}