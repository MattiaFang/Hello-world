#include<iostream>

#include "speechManager.h"
using namespace std;

int main()
{
	SpeechManager sm;

	//����
	//sm.show_Menu();

	while(true)
	{
		int ch;
		sm.show_Menu();
		cout <<"���������ѡ��"<<endl;
		cin>>ch;
		switch(ch)
		{
		case 1:  //��ʼ����
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