//2020.09.12
#include<iostream>
using namespace std;

template<typename T>//ģ������� TΪͨ������
void myswap(T &a,T &b)
{
	T temp =a;
	a=b;
	b=temp;
}

void test01()
{
	int a=10;
	int b=20;
	//���ú���ģ�彻��
	//1���Զ������Ƶ�
	//myswap(a,b);
	//2����ʾָ������
	myswap<int>(a,b);

	cout<<"a = "<< a <<endl;
	cout<<"b = "<< b <<endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}