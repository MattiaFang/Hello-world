#include<iostream>
#include<string>
using namespace std;
void test01()
{
	string str="abcdefg";
	string subStr = str.substr(1,3);//从下标为1开始截取3个字符
	cout<<"subStr = "<<subStr<<endl;
}
//实用操作
void test02()
{
	string email="hello@abc.com";
	//从邮箱地址获取用户名信息
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