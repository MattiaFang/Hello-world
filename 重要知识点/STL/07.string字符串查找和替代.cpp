#include<iostream>
#include<string>
using namespace std;
void test01()
{
	//find
	string s1="abcdefghijkde";
	int pos1 = s1.find("de");
	int pos2 = s1.find("df");                 //���Ҳ�������-1
	cout<<"find����deλ�ã�"<< pos1 <<endl;
	cout<<"find����dfλ�ã�"<< pos2 <<endl;
	//rfind
	int pos3 =s1.rfind("de");
	cout<<"rfind����dfλ�ã�"<< pos3 <<endl;
	//find��rfind����find�Ǵ������Ҳ��ҡ�rfind�Ǵ����������
}
void test02()
{
	//replace
	string s2 = "Hello Java!";
	s2.replace(6,5,"C++! ");      //���±�Ϊ6���ַ���5���ַ��滻��"C++!"
	cout<<"replace�����"<<s2<<endl;

	string s3 = "Happy";
	s2.replace(0,5,s3);
	cout<<"replace�����"<<s2<<endl;

}
int main()
{
	test01();
	cout<<"==============="<<endl;
	test02();
	system("pause");
	return 0;
}