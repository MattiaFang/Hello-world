//�����ķ��ļ���д
//4�����裺
//1.������׺��Ϊ.h��ͷ�ļ�
//2.������׺��Ϊ.cpp��Դ�ļ�
//3.��ͷ�ļ���д����������
//4.��Դ�ļ���д�����Ķ���

//#include<iostream>
#include "��ͷ5.h"
//using namespace std;
//��������
//void swap(int a,int b);

//��������
void swap(int a,int b)
{
	int temp=a;
	a=b;
	b=temp;

	cout<<"a ="<<a<<endl;
	cout<<"b ="<<b<<endl;
}
int main()
{
	int a=10,b=20;
	swap(a,b);//ֵ����
	//cout<<"a= "<<a<<endl;
	//cout<<"b= "<<b<<endl;
	system("pause");
	return 0;
}