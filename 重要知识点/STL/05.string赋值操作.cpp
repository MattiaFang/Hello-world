#include<iostream>
#include<string>
using namespace std;

void test01()
{
	string s1;
	s1="Hello C++";
	cout<<"s1 = "<<s1<<endl;

	string s2;
	s2=s1;
	cout<<"s1 = "<<s2<<endl;

	char c='a';
	string s3;
	s3=c;
	cout<<"s3 = "<<s3<<endl;

	string s4;
	s4.assign("Hello C++");
	cout<<"s4 = "<<s4<<endl;

	string s5;
	s5.assign("Hello C++",5);
	cout<<"s5 = "<<s5<<endl;

	string s6;
	s6.assign(s5);
	cout<<"s6 = "<<s6<<endl;

	string s7;
	s7.assign(10,c);
	cout<<"s7 = "<<s7<<endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}