//�������������
//2020.8.11
#include<iostream>
using namespace std;
class Person
{
	friend ostream & operator<<(ostream &cout,Person &p);//��Ԫ
public:
	Person()
	{
		m_a=0;
	}
	//����++�����
	//����ǰ��++�����
	 Person& operator++()
	{
		//�Ƚ���++����
		m_a++;
		//�ٽ��з�������
		return *this;
	}

	//���غ���++�����
	Person operator++(int)	//int����ռλ������������������ǰ�û��ߺ���
							//���ص��Ǿֲ����������Բ��ܷ������ã�����ֵ
	{
		//�ȼ�¼��ʱ���
		Person temp=*this;
		//�ٽ���++����
		m_a++;
		//��󷵻ص�ʱ��¼
		return temp;
	}

private:
	int m_a;

};

//ȫ�ֺ�������<<��
ostream & operator<<(ostream &cout,Person &p)//����
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