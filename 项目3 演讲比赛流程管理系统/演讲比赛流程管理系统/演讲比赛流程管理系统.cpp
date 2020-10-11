#include<iostream>

#include "speechManager.h"
using namespace std;

int main()
{
	SpeechManager sm;

	//测试
	//sm.show_Menu();

	while(true)
	{
		int ch;
		sm.show_Menu();
		cout <<"请输入你的选择"<<endl;
		cin>>ch;
		switch(ch)
		{
		case 1:  //开始比赛
			break;
		case 2:	 //查看记录
			break;
		case 3:  //清空记录
			break;
		case 0:	 //退出系统
			sm.exitSystem();
			break;
		default:  //无此选项，清屏
			system("cls");
			break;
		}
	}
	system("pause");
	return 0;
}