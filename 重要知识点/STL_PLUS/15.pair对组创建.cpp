#include<iostream>
#include<string>

using namespace std;

void test01()
{
	//��һ��
	pair<string,int>p1("Tom",22);
	cout<<"������"<<p1.first<<"  ���䣺"<<p1.second<<endl;

	//�ڶ���
	pair<string,int>p2=make_pair("Jerry",13);
	cout<<"������"<<p2.first<<"  ���䣺"<<p2.second<<endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}