#include<iostream>
#include<string>
using namespace std;
void test01()
{
	string str="Hello";
	cout<<"ԭ�䣺"<<str<<endl;
	//����
	str.insert(1,"111");
	cout<<"�����"<<str<<endl;
	//ɾ��
	str.erase(1,3);
	cout<<"ɾ����"<<str<<endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}