#include<iostream>
#include<string>
using namespace std;
void test01()
{
	string s1;//默认构造

	const char* str= "Hello World";   //使用字符串str初始化
	string s2(str);
	cout<<"s2 = "<<s2<<endl;

	string s3(s2);                    //使用一个string对象初始化另一个string对象
	cout<<"s3 = "<<s3<<endl;

	string s4(10,'a');                //使用n个c字符初始化
	cout<<"s4 = "<<s4<<endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}