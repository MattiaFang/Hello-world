#pragma once
#include<iostream>
#include<vector>
#include<map>
#include "speaker.h"
#include<algorithm>
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