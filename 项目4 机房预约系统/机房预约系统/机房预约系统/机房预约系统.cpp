#include<iostream>
#include<string>

using namespace std;

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
			system("pause");
			system("cls");
			break;
		case 2://��ʦ���
			cout<<"��ʦ���"<<endl;
			system("pause");
			system("cls");
			break;
		case 3://����Ա���
			cout<<"����Ա���"<<endl;
			system("pause");
			system("cls");
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