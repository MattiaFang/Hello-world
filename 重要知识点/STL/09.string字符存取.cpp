#include<iostream>
#include<string>
using namespace std;
void test01()
{
	string str="Hello";
	cout<<"str :"<<str<<endl;
	//通过[]访问每一字符输出
	for(int i=0;i<str.size();i++)
	{
		cout<<str[i]<<" ";
	}
	cout<<endl;
	//通过at访问每一字符输出
	for(int i=0;i<str.size();i++)
	{
		cout<<str.at(i)<<" ";
	}
	cout<<endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}