#pragma once
#include<iostream>
#include "globalFile.h"
#include<fstream>
#include<string>
using namespace std;
//整个系统中有三个身份（学生代表、老师、管理员）
//因为三个身份有其共性也有其特性，因此将三种身份抽象出一个身份基类



//身份抽象类
class Identity
{
public:
	//操作菜单 纯虚函数
	virtual void operMenu() = 0;

	//用户名
	string m_Name;
	//密码
	string m_Pwd;
};