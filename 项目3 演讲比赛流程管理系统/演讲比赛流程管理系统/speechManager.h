#pragma once
#include<iostream>
#include<vector>
#include<map>
#include<deque>
#include "speaker.h"
#include<algorithm>
#include<functional>
#include<numeric>
#include<string>
#include<fstream>

using namespace std;

//设计演讲管理类
class SpeechManager
{
public:
	//构造函数
	SpeechManager();


	//展示菜单
	void show_Menu();

	//退出系统
	void exitSystem();

	//析构函数
	~SpeechManager();

	//初始化容器和属性
	void initSpeech();

	//创建选手
	void createSpeaker();

	//开始比赛
	void startSpeech();

	//开始抽签
	void speechDraw();

	//比赛
	void speechContest();

	//显示比赛分数
	void showScore();

	//保存记录
	void saveRecord();

	//读取记录
	void loadRecord();

	//判断文件是否为空
	bool fileIsEmpty;

	//存放往届记录的容器
	map<int,vector<string>>m_Record;

	//查看往届得分
	void showRecord();

	//清空数据
	void clearRecord();

	//成员属性
	//保留第一轮比赛选手编号容器
	vector<int>v1;
	//第一轮晋级选手编号容器
	vector<int>v2;
	//胜出前三名选手编号容器
	vector<int>vVictory;
	//存放编号以及对应具体选手容器
	map<int,Speaker>m_Speaker;

	//存放比赛轮数
	int m_Index;


};