//�����������������
#include<iostream>
#include<string>
using namespace std;

//��ӡ�����
class MyPrint
{
public:
	//���غ������������
	void operator()(string test)
	{
		cout<<test<<endl;
	}
};
void text01()
{
	MyPrint myPrint;
	myPrint("Hello world!");//����ʹ�������ǳ������ں������ã�Ҳ����Ϊ�º���
}

//�º����ǳ���û�й̶���д��
//�ӷ���
class MyAdd
{
public:
	int operator()(int num1,int num2)
	{
		return num1+num2;
	}
};
void text02()
{
	MyAdd myAdd;
	int ret =myAdd(100,100);
	cout<<ret<<endl;

	//������������
	cout<<MyAdd()(100,100)<<endl;
}
int main()
{
	//text01();
	text02();
	system("pause");
	return 0;
}