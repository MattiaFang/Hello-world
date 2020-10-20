#include "teacher.h"

//Ĭ�Ϲ���
Teacher::Teacher()
{
}
//�вι���
Teacher::Teacher(int empId,string name,string pwd)
{
	//��ʼ������
	this->m_EmpId = empId;
	this->m_Name = name;
	this->m_Pwd = pwd;
}
//�˵�����
void Teacher::operMenu()
{
	cout<<"��ӭ��ʦ��"<<this->m_Name<<" ��¼��"<<endl;
	cout<<"--------------------------------------"<<endl;
	cout<<endl;
	cout<<"\t\t 1���鿴����ԤԼ"<<endl;
	cout<<endl;
	cout<<"\t\t 2�����ԤԼ"<<endl;
	cout<<endl;
	cout<<"\t\t 0��ע����¼"<<endl;
	cout<<endl;
	cout<<"--------------------------------------"<<endl;
	cout<<"���������Ĳ�����"<<endl;
}
//�鿴����ԤԼ
void Teacher::showAllOrder()
{
	OrderFile of;
	if(of.m_Size == 0)
	{
		cout<<"��ԤԼ��¼"<<endl;
		system("pause");
		system("cls");
		return ;
	}
	for(int i=0;i<of.m_Size;i++)
	{
		cout<<i+1<<"��";
		cout<<"ԤԼ���ڣ���"<<of.m_orderData[i]["date"];
		cout<<"  ʱ�Σ�"<<of.m_orderData[i]["interval"]=="1"?"����":"����";
		cout<<"  ѧ�ţ�"<<of.m_orderData[i]["stuId"];
		cout<<"  ������"<<of.m_orderData[i]["stuName"];
		cout<<"  ������"<<of.m_orderData[i]["roomId"];
		string status = "״̬��";//0��ȡ����ԤԼ 1�������  2����ԤԼ  -1��ԤԼʧ��
		if(of.m_orderData[i]["status"]=="1")
		{
			status +="�����";
		}
		if(of.m_orderData[i]["status"]=="2")
		{
			status +="ԤԼ�ɹ�";
		}
		if(of.m_orderData[i]["status"]=="-1")
		{
			status +="ԤԼʧ��";
		}
		if(of.m_orderData[i]["status"]=="0")
		{
			status +="ԤԼ��ȡ��";
		}
		cout<<status<<endl;
	}
	system("pause");
	system("cls");
	return;
}
//�������ԤԼ
void Teacher::validOrder()
{
	OrderFile of;
	if(of.m_Size == 0)
	{
		cout<<"��ԤԼ��¼"<<endl;
		system("pause");
		system("cls");
		return ;
	}
	vector<int>v;
	int index = 0;
	for(int i=0;i<of.m_Size;i++)
	{
		if(of.m_orderData[i]["status"]=="1")
		{
			v.push_back(i);
			cout<<++index<<"��";
			cout<<"ԤԼ���ڣ���"<<of.m_orderData[i]["date"];
			cout<<"  ʱ�Σ�"<<of.m_orderData[i]["interval"]=="1"?"����":"����";
			cout<<"  ѧ�ţ�"<<of.m_orderData[i]["stuId"];
			cout<<"  ������"<<of.m_orderData[i]["stuName"];
			cout<<"  ������"<<of.m_orderData[i]["roomId"];
			string status = "״̬�������";
			cout<<status<<endl;
		}	
	}
	if(index==0)
	{
		cout<<"��ǰ��ԤԼ��¼��Ҫ���"<<endl;
		system("pause");
		system("cls");
		return;
	}
	cout<<"��������˵�ԤԼ��¼��0��ʾ����"<<endl;
	int select = 0;
	int ret = 0;
	while(true)
	{
		cin>>select;
		if(select>=0 && select<=v.size())
		{
			if(select == 0)
			{
				break;
			}
			cout<<"��ѡ����˽����(1��ͨ��  2����ͨ��)"<<endl;
			cin>>ret;
			while(true)
			{
				if(ret==1)
				{
					of.m_orderData[v[select-1]]["status"] = "2";
					break;
				}
				else if(ret==2)
				{
					of.m_orderData[v[select-1]]["status"] = "-1";
					break;
				}
				else
				{
					cout<<"�����������������"<<endl;
				}
			}
			of.updateOrder();//����ԤԼ��¼
			break;
		}
		else
		{
			cout<<"�������,���������룡"<<endl;
		}
	}
	system("pause");
	system("cls");
	return;
}
