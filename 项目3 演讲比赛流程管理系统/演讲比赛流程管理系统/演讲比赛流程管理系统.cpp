#include<iostream>
#include<string>
#include "speechManager.h"
using namespace std;

//���Դ���
void try_test(SpeechManager sm)
{
	//sm.show_Menu();

	for(map<int,Speaker>::iterator it = sm.m_Speaker.begin();it!=sm.m_Speaker.end();it++)
	{
		cout<<"ѡ�ֱ�ţ�"<<it->first<<"  "
			<<"������"<<it->second.m_Name<<"  "
			<<"�ɼ���"<<it->second.m_Score[0]<<endl;
	}
}


int main()
{
	SpeechManager sm;

	//����
	//try_test(sm);

	while(true)
	{
		int ch;
		sm.show_Menu();
		cout <<"���������ѡ��"<<endl;
		cin>>ch;
		switch(ch)
		{
		case 1:  //��ʼ����
			sm.startSpeech();
			system("cls");
			break;
		case 2:	 //�鿴��¼
			break;
		case 3:  //��ռ�¼
			break;
		case 0:	 //�˳�ϵͳ
			sm.exitSystem();
			break;
		default:  //�޴�ѡ�����
			system("cls");
			break;
		}
	}
	system("pause");
	return 0;
}