//2020.8.14
#include<iostream>
#include<string>
#include<fstream>//头文件包含
using namespace std;
//文本文件 写文件
void test01()
{
	//1、包含头文件 fstream
	//2、创建；流对象
	ofstream ofs;
	//3、指定打开方式
	ofs.open("test.txt",ios::out);
	//4.写文件
	ofs<<"姓名：张三"<<endl;
	ofs<<"性别：男"<<endl;
	ofs<<"年龄：18"<<endl;
	//5.关闭文件
	ofs.close();

}
//文本文件 读文件
void test02()
{
	//1.包含头文件
	//2.创建流对象
	ifstream ifs;
	//3.打开文件 并且判断是否打开成功
	ifs.open("test.txt",ios::in);
	if(!ifs.is_open())
	{
		cout<<"文件读取失败"<<endl;
		return;
	}
	//4.读数据
	//第一种
	//char buf[1024]={0};
	//while (ifs >>buf)
	//{
	//	cout<<buf<<endl;
	//}
	//第二种
	//char buf[1024]={0};
	//while(ifs.getline(buf,sizeof(buf)))
	//{
	//	cout << buf <<endl;
	//}
	//第三种
	//string buf;
	//while( getline(ifs,buf))
	//{
	//	cout<<buf<<endl;
	//}
	//第四种
	char c;
	while((c=ifs.get())!=EOF)//EOF end of file
	{
		cout<<c;
	}
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