#include<iostream>
#include<string>
using namespace std;
void test01()
{
	string s1="��";
	s1+="������Ϸ";
	cout<<s1<<endl;

	s1+=':';
	cout<<s1<<endl;

	string s2="CF LOL";
	s1+=s2;
	cout<<s1<<endl;

	string s3="����";
	s3.append("�������");
	cout<<s3<<endl;

	s3.append("�����ȥ������",4);
	cout<<s3<<endl;

	string s4="ѧC++";
	s3.append(s4);
	cout<<s3<<endl;

	string s5="�ÿ��ĺÿ��֣�";
	s3.append(s5,2,6);
	cout<<s3<<endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}