#include<iostream>
#include<string>
using namespace std;
void test01()
{
	string str="Hello";
	cout<<"原句："<<str<<endl;
	//插入
	str.insert(1,"111");
	cout<<"插入后："<<str<<endl;
	//删除
	str.erase(1,3);
	cout<<"删除后："<<str<<endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}