#include<iostream>
#include<string>

using namespace std;

void test01()
{
	//第一种
	pair<string,int>p1("Tom",22);
	cout<<"姓名："<<p1.first<<"  年龄："<<p1.second<<endl;

	//第二种
	pair<string,int>p2=make_pair("Jerry",13);
	cout<<"姓名："<<p2.first<<"  年龄："<<p2.second<<endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}