#include<iostream>
#include<string>
using namespace std;
void test01()
{
	string s1="我";
	s1+="爱玩游戏";
	cout<<s1<<endl;

	s1+=':';
	cout<<s1<<endl;

	string s2="CF LOL";
	s1+=s2;
	cout<<s1<<endl;

	string s3="今天";
	s3.append("天气真好");
	cout<<s3<<endl;

	s3.append("我想出去踢足球！",4);
	cout<<s3<<endl;

	string s4="学C++";
	s3.append(s4);
	cout<<s3<<endl;

	string s5="好开心好快乐！";
	s3.append(s5,2,6);
	cout<<s3<<endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}