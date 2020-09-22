//学生学号读写操作
//2020.8.10
#include<iostream>
#include<string>
using namespace std;
class Student
{
public:
	//类中属性和行为统一称为成员
	//属性  成员属性 成员变量
	string s_name;//姓名
	int s_no;//学号
	//行为  成员函数 成员方法
	//显示姓名与学号
	void showStudent()
	{
		cout<<s_name<<"  "
			<<s_no<<endl;
	}
	//给姓名和学号赋值
	void setName(string name)
	{
		s_name =name;
	}
	void setID(int no)
	{
		s_no =no;
	}
};

int main()
{
	Student s1;
	//s1.s_name="张山";
	//s1.s_no=10001;
	s1.setID(10001);
	s1.setName("张三");
	s1.showStudent();
	system("pause");
	return 0;
}