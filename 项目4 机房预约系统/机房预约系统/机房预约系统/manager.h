#pragma once
#include<iostream>
using namespace std;
#include "Identity.h"
#include "student.h"
#include "teacher.h"
#include "ComputerRoom.h"
#include<vector>
#include<algorithm>

//管理员类设计
class Manager:public Identity
{
public:
	//默认构造
	Manager();
	//有参构造
	Manager(string name,string pwd);
	//菜单界面.
	virtual void operMenu();
	//添加账号
	void addPerson();
	//查看账号
	void showPerson();
	//查看机房信息
	void showComputer();
	//清空预约记录
	void cleanFile();
	//检测重复  参数1是学号/职工号  参数2是检测类型
	bool checkRepeat(int id,int type);

	//初始化容器
	void initVector();
	//学生容器
	vector<Student> vStu;
	//老师容器
	vector<Teacher> vTea;

	//机房容器
	vector<ComputerRoom> vCom;
};