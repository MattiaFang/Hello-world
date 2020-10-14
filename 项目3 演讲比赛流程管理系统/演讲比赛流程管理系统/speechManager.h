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

//����ݽ�������
class SpeechManager
{
public:
	//���캯��
	SpeechManager();


	//չʾ�˵�
	void show_Menu();

	//�˳�ϵͳ
	void exitSystem();

	//��������
	~SpeechManager();

	//��ʼ������������
	void initSpeech();

	//����ѡ��
	void createSpeaker();

	//��ʼ����
	void startSpeech();

	//��ʼ��ǩ
	void speechDraw();

	//����
	void speechContest();

	//��ʾ��������
	void showScore();

	//�����¼
	void saveRecord();

	//��ȡ��¼
	void loadRecord();

	//�ж��ļ��Ƿ�Ϊ��
	bool fileIsEmpty;

	//��������¼������
	map<int,vector<string>>m_Record;

	//�鿴����÷�
	void showRecord();

	//�������
	void clearRecord();

	//��Ա����
	//������һ�ֱ���ѡ�ֱ������
	vector<int>v1;
	//��һ�ֽ���ѡ�ֱ������
	vector<int>v2;
	//ʤ��ǰ����ѡ�ֱ������
	vector<int>vVictory;
	//��ű���Լ���Ӧ����ѡ������
	map<int,Speaker>m_Speaker;

	//��ű�������
	int m_Index;


};