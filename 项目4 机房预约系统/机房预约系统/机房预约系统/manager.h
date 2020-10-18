#pragma once
#include<iostream>
using namespace std;
#include "Identity.h"
#include "student.h"
#include "teacher.h"
#include "ComputerRoom.h"
#include<vector>
#include<algorithm>

//����Ա�����
class Manager:public Identity
{
public:
	//Ĭ�Ϲ���
	Manager();
	//�вι���
	Manager(string name,string pwd);
	//�˵�����.
	virtual void operMenu();
	//����˺�
	void addPerson();
	//�鿴�˺�
	void showPerson();
	//�鿴������Ϣ
	void showComputer();
	//���ԤԼ��¼
	void cleanFile();
	//����ظ�  ����1��ѧ��/ְ����  ����2�Ǽ������
	bool checkRepeat(int id,int type);

	//��ʼ������
	void initVector();
	//ѧ������
	vector<Student> vStu;
	//��ʦ����
	vector<Teacher> vTea;

	//��������
	vector<ComputerRoom> vCom;
};