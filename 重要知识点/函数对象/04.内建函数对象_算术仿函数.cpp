#include<iostream>
#include<functional>//�ڽ���������ͷ�ļ�
using namespace std;

//�ڽ��������� �����º���
//negate һԪ�º��� ȡ���º���
void test01()
{
	negate<int>n;
	cout<<n(50)<<endl;
}

//plus ��Ԫ���� �ӷ�
void test02()
{
	plus<int>p;
	cout<<p(10,50)<<endl;
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}