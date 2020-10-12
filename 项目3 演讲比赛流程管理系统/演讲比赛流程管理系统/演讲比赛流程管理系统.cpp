#include<iostream>
#include<string>
#include "speechManager.h"
using namespace std;

//测试代码
void try_test(SpeechManager sm)
{
	//sm.show_Menu();

	for(map<int,Speaker>::iterator it = sm.m_Speaker.begin();it!=sm.m_Speaker.end();it++)
	{
		cout<<"选手编号："<<it->first<<"  "
			<<"姓名："<<it->second.m_Name<<"  "
			<<"成绩："<<it->second.m_Score[0]<<endl;
	}
}


int main()
{
	SpeechManager sm;

	//测试
	//try_test(sm);

	while(true)
	{
		int ch;
		sm.show_Menu();
		cout <<"请输入你的选择"<<endl;
		cin>>ch;
		switch(ch)
		{
		case 1:  //开始比赛
			sm.startSpeech();
			system("cls");
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