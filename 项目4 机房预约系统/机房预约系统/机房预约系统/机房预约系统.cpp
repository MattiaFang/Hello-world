#include<iostream>
#include<string>

using namespace std;

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
			system("pause");
			system("cls");
			break;
		case 2://老师身份
			cout<<"老师身份"<<endl;
			system("pause");
			system("cls");
			break;
		case 3://管理员身份
			cout<<"管理员身份"<<endl;
			system("pause");
			system("cls");
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