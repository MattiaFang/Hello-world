//2020.09.12
#include<iostream>
using namespace std;

void myPrint(int a,int b)
{
	cout << "���õ���ͨ����" <<endl;
}
template<typename T>
void myPrint(T a,T b)
{
	cout << "���õ�ģ��" << endl;
}

template<typename T>
void myPrint(T a,T b,T c)
{
	cout << "���õ�ģ��_����" << endl;
}

void test01()
{
	//1.�������ģ�����ͨ����������ʵ�����ȵ�����ͨ����
	int a=10;
	int b=20;
	myPrint(a,b);

	//2.ͨ����ģ������б�ǿ�Ƶ��ú���ģ��
	myPrint<>(a,b);

	//3.����ģ����Է�������
	myPrint(a,b,b);

	//4.���Ժ���ģ����Բ������õ�ƥ�䣬����ʹ�ú���ģ��
	char c='a';
	char d='b';
	myPrint(c,d);
}


int main()
{
	test01();
	system("pause");
	return 0;
}
