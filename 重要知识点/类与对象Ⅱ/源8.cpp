//�ֱ�������ͨд���Ͷ�̬����ʵ�ּ�����
#include<iostream>
#include<string>
using namespace std;
class Calculator
{
public:
	int getResule(string oper)
	{
		if(oper=="+")
			return m_Num1+m_Num2;
		else if(oper=="-")
			return m_Num1-m_Num2;
		else if(oper=="*")
			return m_Num1*m_Num2;
		//���Ҫ��չ�¹��ܣ���Ҫ����Դ��
		//����ʵ������ �ᳫ ����ԭ��
		//����ԭ�򣺶���չ���п��ţ����޸Ľ��йر�

	}
	int m_Num1;
	int m_Num2;
};
void test01()
{
	//�������������
	Calculator c;
	c.m_Num1 = 10;
	c.m_Num2 = 10;

	cout<<c.m_Num1<<" + "<<c.m_Num2<<" = "<<c.getResule("+")<<endl;
	cout<<c.m_Num1<<" - "<<c.m_Num2<<" = "<<c.getResule("-")<<endl;
	cout<<c.m_Num1<<" * "<<c.m_Num2<<" = "<<c.getResule("*")<<endl;
}

//���ö�̬ʵ�ּ�����
//��̬�ô���1.��֯�ṹ����    2.�ɶ���ǿ     3.����ǰ�ں�ά���Ը�
//ʵ�ּ�����������
class AbstractCalculator
{
public:
	virtual int getResult()
	{
		return 0;
	}
	int m_Num1;
	int m_Num2;
};
//�ӷ���������
class AddCalculator:public AbstractCalculator
{
public:
	int getResult()
	{
		return m_Num1+m_Num2;
	}
};
//������������
class SubCalculator:public AbstractCalculator
{
public:
	int getResult()
	{
		return m_Num1-m_Num2;
	}
};
//�˷�������
class MulCalculator:public AbstractCalculator
{
public:
	int getResult()
	{
		return m_Num1*m_Num2;
	}
};
//ʹ�ø�������ָ���������
void doCalculate(AbstractCalculator &a)
{
	a.getResult();
}

void test02()
{
	MulCalculator m;
	m.m_Num1=20;
	m.m_Num2=2;
	doCalculate(m);
}

//ʹ�ø���ָ��ָ���������
void test03()
{
	//�ӷ�����
	AbstractCalculator *abc =new AddCalculator;
	abc->m_Num1 = 100;
	abc->m_Num2 = 100;
	cout<< abc->m_Num1<<" + "<<abc->m_Num2<<" = "<<abc->getResult()<<endl;
	//�����ǵ�����
	delete abc;

	//��������
	abc = new SubCalculator;
	abc->m_Num1 = 100;
	abc->m_Num2 = 100;
	cout<< abc->m_Num1<<" - "<<abc->m_Num2<<" = "<<abc->getResult()<<endl;
	delete abc;

	//�˷�����
	abc = new MulCalculator;
	abc->m_Num1 = 100;
	abc->m_Num2 = 100;
	cout<< abc->m_Num1<<" * "<<abc->m_Num2<<" = "<<abc->getResult()<<endl;
	delete abc;
}

int main()
{
	//test01();
	test03();
	system("pause");
	return 0;
}
