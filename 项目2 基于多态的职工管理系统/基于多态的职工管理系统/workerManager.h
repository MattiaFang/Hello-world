#pragma once//防止头文件重复包含
#include<iostream>
#include<fstream>
#define FILENAME "Hello.txt"

#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"

using namespace std;

class WorkerManager
{
public:

	//构造函数
	WorkerManager();

	//展示菜单
	void Show_Menu();

	//退出
	void exitSystem();

	//记录职工人数
	int m_EmpNum;

	//职工数组指针
	Worker ** m_EmpArray;

	//添加职工
	void Add_Emp();

	//保存文件
	void save();

	//判断文件是否为空的标志
	bool m_FileIsEmpty;

	//统计文件中记录的人数
	int get_EmpNum();

	//初始化职工
	void init_Emp();

	//显示职工
	void Show_Emp();

	//删除职工
	void Del_Emp();

	//判断职工是否存在
	int isExist(int id);

	//修改职工
	void Mod_Emp();

	//查找职工
	void Find_Emp();

	//排序职工
	void Sort_Emp();

	//清空职工
	void Clean_Emp();

	//析构函数
	~WorkerManager();
};