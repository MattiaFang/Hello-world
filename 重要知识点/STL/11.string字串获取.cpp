#include<iostream>
#include<string>
using namespace std;
void test01()
{
	string str="abcdefg";
	string subStr = str.substr(1,3);//���±�Ϊ1��ʼ��ȡ3���ַ�
	cout<<"subStr = "<<subStr<<endl;
}
//ʵ�ò���
void test02()
{
	string email="hello@abc.com";
	//�������ַ��ȡ�û�����Ϣ
	int pos =email.find("@");//5

	string userName = email.substr(0,pos);
	cout<<"username = "<<userName<<endl;
}

int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}