#include<iostream>
#include<string>
using namespace std;

void com(int ret)
{
	if(ret==1)
		cout<<"����"<<endl;
	else if(ret==-1)
		cout<<"С��"<<endl;
	else
		cout<<"����"<<endl;
}

void test01()
{
	string s1="hello";
	string s2="hooll";
	int ret1 = s1.compare(s2);
	com(ret1);
	int ret2 = s1.compare("hello");
	com(ret2);
}
int main()
{
	test01();
	system("pause");
	return 0;
}