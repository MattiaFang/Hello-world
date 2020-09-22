//二进制文件 进行读写操作
//2020.8.14
#include<iostream>
#include<string>
#include<fstream>//头文件包含
using namespace std;

class Person
{
public:
	char m_Name[64];//姓名
	int m_Age;//年龄
};

//二进制文件 写文件
void test01()
{
	//1.包含头文件
	//2.创建流对象
	ofstream ofs;
	//3.打开文件
	ofs.open("person.txt",ios::out | ios::binary);
	Person p={"张三", 18};
	//4.写文件
	ofs.write((const char*)&p,sizeof(Person));
	//5.关闭文件
	ofs.close();
}

//二进制文件 读文件
void test02()
{
	//1.包含头文件
	//2.创建流对象	
	ifstream ifs;
	//3.打开文件 判断文件是否打开成功
	ifs.open("person.txt",ios::in | ios::binary);
	if(!ifs.is_open())
	{
		cout<<"文件打开失败"<<endl;
		return;
	}
	//4.读文件
	Person p;
	ifs.read((char*)&p,sizeof(Person));
	cout<<"姓名： "<<p.m_Name<<endl;
	cout<<"年龄： "<<p.m_Age<<endl;
	//5.关闭文件
	ifs.close();
}

int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}