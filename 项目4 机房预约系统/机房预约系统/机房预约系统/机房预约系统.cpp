#include<iostream>
#include<string>
#include<fstream>
#include "Identity.h"
#include "globalFile.h"
#include "student.h"
#include "teacher.h"
#include "manager.h"

using namespace std;

//����ѧ���Ӳ˵�����
void studentMenu(Identity * &student)
{
	while(true)
	{
		//����ѧ���Ӳ˵�
		student->operMenu();

		Student * stu = (Student *)student;

		int select = 0;
		cin>>select;//�����û�ѡ��

		if(select == 1)//����ԤԼ
		{
			stu->applyOrder();
		}
		else if(select == 2)//�鿴����ԤԼ
		{
			stu->showMyOrder();
		}
		else if(select == 3)//�鿴������ԤԼ
		{
			stu->cancelOrder();
		}
		else if(select == 4)//ȡ��ԤԼ
		{
			stu->cancelOrder();
		}
		else//ע����¼
		{
			delete student;
			cout<<"ע���ɹ���"<<endl;
			system("pause");
			system("cls");
		}
	}
}

//�������Ա�Ӳ˵�����
void managerMenu(Identity * &manager)//����ָ���������ӿڣ���̬��
{
	while(true)
	{
		//���ù���Ա���Ӳ˵�
		manager -> operMenu();

		//�������ָ��ת��Ϊ�����ָ�룬���������������ӿ�
		Manager *man = (Manager*)manager;

		int select = 0;
		cin >> select;
		if(select == 1)//����˺�
		{
			//cout<<"����˺�"<<endl;
			man->addPerson();
		}
		else if(select == 2)//�鿴�˺�
		{
			//cout<<"�鿴�˺�"<<endl;
			man->showPerson();
		}
		else if(select == 3)//�鿴����
		{
			//cout<<"�鿴����"<<endl;
			man->showComputer();
		}
		else if(select == 4)//���ԤԼ
		{
			//cout<<"���ԤԼ"<<endl;
			man->cleanFile();
		}
		else
		{
			//ע��
			delete manager;//ע����������
			cout << "ע���ɹ���"<<endl;
			system("pause");
			system("cls");
			return ;
		}
	}
}

//��¼����
void LoginIn(string fileName,int type)
{
	//����ָ�� ����ָ���������
	Identity *person = NULL;

	//���ļ�
	ifstream ifs;
	ifs.open(fileName,ios::in);
	//�ж��ļ��Ƿ����
	if(!ifs.is_open())
	{
		cout << "�ļ������ڣ�" <<endl;
		ifs.close();
		return;
	}

	//׼�������û���Ϣ
	int id = 0;
	string name;
	string pwd;

	//�ж����
	if(type == 1)//ѧ�����
	{
		cout<<"���������ѧ�ţ�"<<endl;
		cin>>id;
	}
	else if(type == 2)//��ʦ���
	{
		cout<<"���������ְ���ţ�"<<endl;
		cin>>id;
	}
	cout<<"�������û�����"<<endl;
	cin>>name;
	cout<<"���������룺"<<endl;
	cin>>pwd;

	switch(type)
	{
	case 1:
	{
		//ѧ�������֤
		//���ļ��л�ȡ��Ϣ(ѧ�š�����������)
		int fId;
		string fName;
		string fPwd;
		while(ifs>>fId && ifs >> fName && ifs >> fPwd)
		{
			//���û��������Ϣ���Ա�
			if(fId == id && fName == name && fPwd ==pwd)
			{
				cout<<"ѧ����֤��¼�ɹ���"<<endl;
				system("pause");
				system("cls");
				person = new Student(id,name,pwd);
				//����ѧ���Ӳ˵�.
				studentMenu(person);
				return;
			}
		}
	}
	case 2:
	{
		//��ʦ�����֤
		//���ļ��л�ȡ��Ϣ(ѧ�š�����������)
		int fId;
		string fName;
		string fPwd;
		while(ifs>>fId && ifs >> fName && ifs >> fPwd)
		{
			//���û��������Ϣ���Ա�
			if(fId == id && fName == name && fPwd ==pwd)
			{
				cout<<"��ʦ��֤��¼�ɹ���"<<endl;
				system("pause");
				system("cls");
				person = new Teacher(id,name,pwd);
				//������ʦ�Ӳ˵�.

				return;
			}
		}
	}
	case 3:
	{
		//����Ա�����֤
		//���ļ��л�ȡ��Ϣ(����������)
		string fName;
		string fPwd;
		while(ifs >> fName && ifs >> fPwd)
		{
			//���û��������Ϣ���Ա�
			if(fName == name && fPwd ==pwd)
			{
				cout<<"����Ա��֤��¼�ɹ���"<<endl;
				system("pause");
				system("cls");
				person = new Manager(name,pwd);
				//�������Ա�Ӳ˵�.
				managerMenu(person);
				return;
			}
		}
	}
	default:
		break;
	}
	cout<<"��֤��¼ʧ�ܣ�"<<endl;
	system("pause");
	system("cls");
}


int main()
{
	while(true)
	{
		cout<<"===============��ӭ����ԤԼϵͳ================="<<endl;
		cout<<"��ѡ��������"<<endl;
		cout<<"\t\t1��ѧ������"<<endl;
		cout<<endl;
		cout<<"\t\t2��  ��ʦ"<<endl;
		cout<<endl;
		cout<<"\t\t3�� ����Ա"<<endl;
		cout<<endl;
		cout<<"\t\t0��  �˳�"<<endl;
		cout<<"================================================"<<endl;
		cout<<"���������ѡ��";
		int select;
		cin>>select;
		switch(select)
		{
		case 1://ѧ�����
			cout<<"ѧ�����"<<endl;
			LoginIn(STUDENT_FILE,1);
			break;
		case 2://��ʦ���
			cout<<"��ʦ���"<<endl;
			LoginIn(TEACHER_FILE,2);
			break;
		case 3://����Ա���
			cout<<"����Ա���"<<endl;
			LoginIn(ADMIN_FILE,3);
			break;
		case 0://�˳�ϵͳ
			cout<<"ллʹ�ã�"<<endl;
			system("pause");
			exit(0);
			break;
		default:
			cout<<"��������������ѡ��"<<endl;
			system("pause");
			system("cls");
			break;
		}
	}
	system("pause");
	return 0;
}