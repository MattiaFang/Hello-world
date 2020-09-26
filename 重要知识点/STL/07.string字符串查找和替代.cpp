#include<iostream>
#include<string>
using namespace std;
void test01()
{
	//find
	string s1="abcdefghijkde";
	int pos1 = s1.find("de");
	int pos2 = s1.find("df");                 //查找不到返回-1
	cout<<"find查找de位置："<< pos1 <<endl;
	cout<<"find查找df位置："<< pos2 <<endl;
	//rfind
	int pos3 =s1.rfind("de");
	cout<<"rfind查找df位置："<< pos3 <<endl;
	//find和rfind区别：find是从左向右查找、rfind是从右向左查找
}
void test02()
{
	//replace
	string s2 = "Hello Java!";
	s2.replace(6,5,"C++! ");      //从下标为6的字符起5个字符替换成"C++!"
	cout<<"replace替代后："<<s2<<endl;

	string s3 = "Happy";
	s2.replace(0,5,s3);
	cout<<"replace替代后："<<s2<<endl;

}
int main()
{
	test01();
	cout<<"==============="<<endl;
	test02();
	system("pause");
	return 0;
}