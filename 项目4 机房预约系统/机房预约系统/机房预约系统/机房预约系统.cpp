#include<iostream>
#include<string>
#include<fstream>
#include "Identity.h"
#include "globalFile.h"
#include "student.h"
#include "teacher.h"
#include "manager.h"

using namespace std;

//进入学生子菜单界面
void studentMenu(Identity * &student)
{
	while(true)
	{
		//调用学生子菜单
		student->operMenu();

		Student * stu = (Student *)student;

		int select = 0;
		cin>>select;//接受用户选择

		if(select == 1)//申请预约
		{
			stu->applyOrder();
		}
		else if(select == 2)//查看自身预约
		{
			stu->showMyOrder();
		}
		else if(select == 3)//查看所有人预约
		{
			stu->cancelOrder();
		}
		else if(select == 4)//取消预约
		{
			stu->cancelOrder();
		}
		else//注销登录
		{
			delete student;
			cout<<"注销成功！"<<endl;
			system("pause");
			system("cls");
		}
	}
}

//进入管理员子菜单界面
void managerMenu(Identity * &manager)//父类指针调用子类接口（多态）
{
	while(true)
	{
		//调用管理员的子菜单
		manager -> operMenu();

		//将父类的指针转换为子类的指针，调用子类里其他接口
		Manager *man = (Manager*)manager;

		int select = 0;
		cin >> select;
		if(select == 1)//添加账号
		{
			//cout<<"添加账号"<<endl;
			man->addPerson();
		}
		else if(select == 2)//查看账号
		{
			//cout<<"查看账号"<<endl;
			man->showPerson();
		}
		else if(select == 3)//查看机房
		{
			//cout<<"查看机房"<<endl;
			man->showComputer();
		}
		else if(select == 4)//清空预约
		{
			//cout<<"清空预约"<<endl;
			man->cleanFile();
		}
		else
		{
			//注销
			delete manager;//注销堆区对象
			cout << "注销成功！"<<endl;
			system("pause");
			system("cls");
			return ;
		}
	}
}

//登录功能
void LoginIn(string fileName,int type)
{
	//父类指针 用于指向子类对象
	Identity *person = NULL;

	//读文件
	ifstream ifs;
	ifs.open(fileName,ios::in);
	//判断文件是否存在
	if(!ifs.is_open())
	{
		cout << "文件不存在！" <<endl;
		ifs.close();
		return;
	}

	//准备接受用户信息
	int id = 0;
	string name;
	string pwd;

	//判断身份
	if(type == 1)//学生身份
	{
		cout<<"请输入你的学号："<<endl;
		cin>>id;
	}
	else if(type == 2)//老师身份
	{
		cout<<"请输入你的职工号："<<endl;
		cin>>id;
	}
	cout<<"请输入用户名："<<endl;
	cin>>name;
	cout<<"请输入密码："<<endl;
	cin>>pwd;

	switch(type)
	{
	case 1:
	{
		//学生身份验证
		//从文件中获取信息(学号、姓名、密码)
		int fId;
		string fName;
		string fPwd;
		while(ifs>>fId && ifs >> fName && ifs >> fPwd)
		{
			//与用户输入的信息做对比
			if(fId == id && fName == name && fPwd ==pwd)
			{
				cout<<"学生验证登录成功！"<<endl;
				system("pause");
				system("cls");
				person = new Student(id,name,pwd);
				//进入学生子菜单.
				studentMenu(person);
				return;
			}
		}
	}
	case 2:
	{
		//教师身份验证
		//从文件中获取信息(学号、姓名、密码)
		int fId;
		string fName;
		string fPwd;
		while(ifs>>fId && ifs >> fName && ifs >> fPwd)
		{
			//与用户输入的信息做对比
			if(fId == id && fName == name && fPwd ==pwd)
			{
				cout<<"老师验证登录成功！"<<endl;
				system("pause");
				system("cls");
				person = new Teacher(id,name,pwd);
				//进入老师子菜单.

				return;
			}
		}
	}
	case 3:
	{
		//管理员身份验证
		//从文件中获取信息(姓名、密码)
		string fName;
		string fPwd;
		while(ifs >> fName && ifs >> fPwd)
		{
			//与用户输入的信息做对比
			if(fName == name && fPwd ==pwd)
			{
				cout<<"管理员验证登录成功！"<<endl;
				system("pause");
				system("cls");
				person = new Manager(name,pwd);
				//进入管理员子菜单.
				managerMenu(person);
				return;
			}
		}
	}
	default:
		break;
	}
	cout<<"验证登录失败！"<<endl;
	system("pause");
	system("cls");
}


int main()
{
	while(true)
	{
		cout<<"===============欢迎来到预约系统================="<<endl;
		cout<<"请选择你的身份"<<endl;
		cout<<"\t\t1、学生代表"<<endl;
		cout<<endl;
		cout<<"\t\t2、  老师"<<endl;
		cout<<endl;
		cout<<"\t\t3、 管理员"<<endl;
		cout<<endl;
		cout<<"\t\t0、  退出"<<endl;
		cout<<"================================================"<<endl;
		cout<<"请输入你的选择：";
		int select;
		cin>>select;
		switch(select)
		{
		case 1://学生身份
			cout<<"学生身份"<<endl;
			LoginIn(STUDENT_FILE,1);
			break;
		case 2://老师身份
			cout<<"老师身份"<<endl;
			LoginIn(TEACHER_FILE,2);
			break;
		case 3://管理员身份
			cout<<"管理员身份"<<endl;
			LoginIn(ADMIN_FILE,3);
			break;
		case 0://退出系统
			cout<<"谢谢使用！"<<endl;
			system("pause");
			exit(0);
			break;
		default:
			cout<<"输入有误，请重新选择！"<<endl;
			system("pause");
			system("cls");
			break;
		}
	}
	system("pause");
	return 0;
}