#include<iostream>
#include "workerManager.h"//����ʵ�ַ���
using namespace std;

//work���ʾְ��������
//employee��ʾ��ְͨ���� manager��ʾ������ boss��ʾ�ϰ���

#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"




int main()
{
	//���Զ�̬
	/*Worker * worker = NULL;
	worker = new Employee(5,"����",5);
	worker->showInfo();
	delete worker;

	worker = new Manager(2,"����",2);
	worker->showInfo();
	delete worker;
	worker = new Boss(3,"����",3);
	worker ->showInfo();
	delete worker;*/

	////ʵ���������߶���
	WorkerManager wm;
	int choice = 0;//�����洢�û���ѡ��
	while(true)
	{
		//չʾ�˵�
		wm.Show_Menu();
		cout << "����������ѡ��"<<endl;
		cin >> choice;

		switch(choice)
		{
		case 0://�˳�ϵͳ
			wm.exitSystem();
			break;
		case 1://���ְ��
			wm.Add_Emp();
			break;
		case 2://��ʾϵͳ
			wm.Show_Emp();
			break;
		case 3://ɾ��ְ��
			wm.Del_Emp();
			break;
		case 4://�޸�ϵͳ
			wm.Mod_Emp();
			break;
		case 5://����ְ��
			wm.Find_Emp();
			break;
		case 6://����ְ��
			wm.Sort_Emp();
			break;
		case 7://����ļ�
			wm.Clean_Emp();
			break;
		default:
			system("cls");//����
			break;
		}
	}


	
	system("pause");
	return 0;
}
