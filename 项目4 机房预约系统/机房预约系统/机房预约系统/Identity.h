#pragma once
#include<iostream>
#include "globalFile.h"
#include<fstream>
#include<string>
using namespace std;
//����ϵͳ����������ݣ�ѧ��������ʦ������Ա��
//��Ϊ����������乲��Ҳ�������ԣ���˽�������ݳ����һ����ݻ���



//��ݳ�����
class Identity
{
public:
	//�����˵� ���麯��
	virtual void operMenu() = 0;

	//�û���
	string m_Name;
	//����
	string m_Pwd;
};