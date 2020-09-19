#include<iostream>
#include "workerManager.h"//功能实现方法
using namespace std;

//work类表示职工抽象类
//employee表示普通职工类 manager表示经理类 boss表示老板类

#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"




int main()
{
	//测试多态
	/*Worker * worker = NULL;
	worker = new Employee(5,"张三",5);
	worker->showInfo();
	delete worker;

	worker = new Manager(2,"李四",2);
	worker->showInfo();
	delete worker;
	worker = new Boss(3,"韩五",3);
	worker ->showInfo();
	delete worker;*/

	////实例化管理者对象
	WorkerManager wm;
	int choice = 0;//用来存储用户的选择
	while(true)
	{
		//展示菜单
		wm.Show_Menu();
		cout << "请输入您的选择："<<endl;
		cin >> choice;

		switch(choice)
		{
		case 0://退出系统
			wm.exitSystem();
			break;
		case 1://添加职工
			wm.Add_Emp();
			break;
		case 2://显示系统
			wm.Show_Emp();
			break;
		case 3://删除职工
			wm.Del_Emp();
			break;
		case 4://修改系统
			wm.Mod_Emp();
			break;
		case 5://查找职工
			wm.Find_Emp();
			break;
		case 6://排序职工
			wm.Sort_Emp();
			break;
		case 7://清空文件
			wm.Clean_Emp();
			break;
		default:
			system("cls");//清屏
			break;
		}
	}


	
	system("pause");
	return 0;
}
