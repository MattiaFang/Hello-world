//ָ��
#include<iostream>
using namespace std;
int main()
{
	//�����������ĵ�ַ
	int a;
	int b[10];
	cout <<"a �ĵ�ַΪ"<<&a<<endl;
	cout <<"b �ĵ�ַΪ"<<&b<<endl;

	//ָ����һ����������ֵΪ��һ�������ĵ�ַ
	//����ָ��
	int *a;

	int var=20;//ʵ�ʱ���������
	int *ip;//ָ�����������

	ip=&var;//��ָ������д洢var�ĵ�ַ
	cout<<"Value of var variable:"<<var<<endl;
	//�����ָ������д洢�ĵ�ַ
	cout<<"Address stored in ip variable:"<<ip<<endl;
	//����ָ���е�ַ��ֵ
	cout<<"Value of *ip variable:"<<*ip<<endl;
	

	system("pause");
	return 0;
}