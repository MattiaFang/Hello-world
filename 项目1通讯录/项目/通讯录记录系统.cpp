#include<iostream>
#include<string>
#define MAX 1000 // �����������
using namespace std;
//������ϵ�˽ṹ��
struct man
{
	string man_Name;//����
	int man_Sex;//�Ա�1���У�2��Ů
	int man_Year;//����
	int man_Number;//��ϵ�绰
};

//����ͨѶ¼�ṹ��
struct  Book
{
	struct man manArray[MAX];//ͨѶ¼�б������ϵ������
	int m_Size; //ͨѶ¼����Ա����
};

//��ʾ���˵�
void showmain()
{
	cout << "\t*  ��ӭ����ͨѶ¼����ϵͳ *" <<endl;
	cout << "\t***************************" <<endl;
	cout << "\t****** 1. �����ϵ�� ******" <<endl;
	cout << "\t****** 2. ��ʾ��ϵ�� ******" <<endl;
	cout << "\t****** 3. ɾ����ϵ�� ******" <<endl;
	cout << "\t****** 4. ������ϵ�� ******" <<endl;
	cout << "\t****** 5. �޸���ϵ�� ******" <<endl;
	cout << "\t****** 6. �����ϵ�� ******" <<endl;
	cout << "\t****** 0. �˳�ͨѶ¼ ******" <<endl;
	cout << "\t***************************" <<endl;
}

//1�������ϵ�˹���
int add_man(Book *abs)
{
    string name;
	int sex;
	int year;
	int number;
	//�ж�ͨѶ¼�Ƿ�������������˾Ͳ������
	if(abs->m_Size == MAX)
	{	
		cout << "ͨѶ¼�������޷���ӣ�"<<endl;
		return 0;
	}
	else
	{
		cout << "������Ҫ��ӵ���ϵ����Ϣ " <<endl ;
		//����
		cout << "������������ " ;
		cin >> name;
		abs ->manArray[abs->m_Size].man_Name = name;
		//�Ա�
		while(true)
		{
			if (cin.fail())    //�ж�cin״̬����ֹ����char���������ѭ��
			{
				cin.clear();
				cin.sync();
			}		
			cout << "�������Ա�( 1����  2��Ů )�� " ;
			cin >> sex;
			if(sex==1||sex==2)    //������ȷֵ�ɼ���,������������
			{	
				abs ->manArray[abs->m_Size].man_Sex = sex;
				break;
			}
			cout << "������������������" << endl;
		}
		//����
		while(true)
		{
			if (cin.fail())    //�ж�cin״̬����ֹ����char���������ѭ��
			{
				cin.clear();
				cin.sync();
			}		
			cout << "���������䣺 " ;
			cin >> year;
			if(year>0 && year<120)
			{
				abs ->manArray[abs->m_Size].man_Year = year;
				break;
			}
			cout << "������������������" << endl;
		}
		//��ϵ�绰
		cout << "��������ϵ�绰�� " ;
		cin >> number;
		abs ->manArray[abs->m_Size].man_Number = number;
		//����ͨѶ¼����
		abs->m_Size++;

		cout << "�����ϵ�˳ɹ��� " <<endl;
		cout << "---------------------------- "<<endl;
		system("pause");
		system("cls");//����
		
	}
}

//2����ʾ��ϵ�˹���
void show_man(Book *abs)
{
	//�ж�ͨѶ¼�����Ƿ�Ϊ�գ����Ϊ0����ʾΪ��
	//�����Ϊ0����ʾ��¼����ϵ����Ϣ
	if(abs->m_Size == 0)
	{
		cout << "��ǰ��¼Ϊ��"<< endl;
	}
	else
	{
		for(int i=0;i<abs->m_Size;i++)
		{
			cout<<"������ "   <<abs->manArray[i].man_Name <<"\t"
				<<"�Ա� "   <<(abs->manArray[i].man_Sex == 1 ? "��":"Ů") <<"\t"
				<<"���䣺 "   <<abs->manArray[i].man_Year <<"\t"
				<<"��ϵ�绰: "<<abs->manArray[i].man_Number <<"\t"
				<<endl;
		}
	}
	system("pause");
	system("cls");
}

//�����ϵ���Ƿ���ڣ�������ڣ�������ϵ�����������еľ���λ�ã������ڷ�-1
int isExiet(Book *abs,string name)
{
	for(int i=0;i<abs->m_Size;i++)
	{
		if(abs->manArray[i].man_Name==name)
			return i;
	}
	return -1;
}

//3��ɾ����ϵ�˹���
void del_man(Book *abs)
{
	cout<<"������Ҫɾ������ϵ��"<<endl;
	string name;
	cin >> name;
	//ret == -1 δ�鵽��ϵ��
	//ret != -1 �鵽����ϵ��
	int ret = isExiet(abs,name);
	if(ret!=-1)
	{
		//�鵽�˾ͽ���ɾ������
		for (int i=ret;i<abs->m_Size;i++)
		{
			//����ǰ��
			abs->manArray[i] = abs->manArray[i+1];
		}
		abs->m_Size--;//����ͨѶ¼����Ա��
		cout << "ɾ���ɹ�"<<endl;
	}
	else
	{
		cout<<"���޴���"<<endl;
	}
	system("pause");
	system("cls");
}

//4��������ϵ�˹���
void find_man(Book *abs)
{
	cout<<"��������Ҫ���ҵ���ϵ��"<<endl;
	string name;
	cin>>name;
	int ret = isExiet(abs,name);
	if(ret != -1)//�ҵ���ϵ��
	{
		cout << "������"<< abs->manArray[ret].man_Name<<"\t"
			 << "�Ա�"<< abs->manArray[ret].man_Sex<<"\t"
			 << "���䣺"<< abs->manArray[ret].man_Year<<"\t"
			 << "��ϵ�绰��"<< abs->manArray[ret].man_Number<<"\t"
			 << endl;
	}
	else
	{
		cout<<"���޴���"<<endl;
	}
	system("pause");
	system("cls");
}

//5���޸���ϵ�˹���
void update_man(Book *abs)
{
	cout<<"��������Ҫ���ҵ���ϵ��"<<endl;
	string name;
	int sex;
	int year;
	int number;
	cin>>name;
	int ret = isExiet(abs,name);
	if(ret != -1)//�ҵ���ϵ��
	{
		cout << "������"<< abs->manArray[ret].man_Name<<"\t"
			 << "�Ա�"<<(abs->manArray[ret].man_Sex == 1 ? "��":"Ů")<<"\t"
			 << "���䣺"<< abs->manArray[ret].man_Year<<"\t"
			 << "��ϵ�绰��"<< abs->manArray[ret].man_Number<<"\t"
			 << endl;
		cout << "--------------------------------------"<<endl;
		cout << "������Ҫ�޸ĵ���ϵ����Ϣ " <<endl ;
		//����
		cout << "������������ " ;
		cin >> name;
		abs ->manArray[ret].man_Name = name;
		//�Ա�
		while(true)
		{
			if (cin.fail())    //�ж�cin״̬����ֹ����char���������ѭ��
			{
				cin.clear();
				cin.sync();
			}		
			cout << "�������Ա�( 1����  2��Ů )�� " ;
			cin >> sex;
			if(sex==1||sex==2)    //������ȷֵ�ɼ���,������������
			{	
				abs ->manArray[ret].man_Sex = sex;
				break;
			}
			cout << "������������������" << endl;
		}
		//����
		while(true)
		{
			if (cin.fail())    //�ж�cin״̬����ֹ����char���������ѭ��
			{
				cin.clear();
				cin.sync();
			}		
			cout << "���������䣺 " ;
			cin >> year;
			if(year>0 && year<120)
			{
				abs ->manArray[ret].man_Year = year;
				break;
			}
			cout << "������������������" << endl;
		}
		//��ϵ�绰
		cout << "��������ϵ�绰�� " ;
		cin >> number;
		abs ->manArray[ret].man_Number = number;
	}
	else
	{
		cout<<"���޴���"<<endl;
	}
	system("pause");
	system("cls");
}

//6�������ϵ�˹���
void clean_man(Book *abs)
{
	abs->m_Size = 0;//�����ڼ�¼��ϵ������Ϊ�գ����߼���ղ���
	cout <<"ͨѶ¼�����"<<endl;
	system("pause");
	system("cls");
}

//������
int main()
{
	int n;     //����ѡ��
	
	//����ͨѶ¼�ṹ�����
	Book abs;
	//��ʼ��ͨѶ¼�е�ǰ��Ա����
	abs.m_Size =0;
	
	//�˵�����
	while(true)
	{
		showmain();//չʾ�˵���
		cout << " ��ѡ����Ҫ���еĲ���:" << endl;
		cin >> n;
		switch(n)
		{
			case 1://�����ϵ��
				add_man(&abs);//���õ�ַ���ݿ����޸Ĳ���
				break;
			case 2://��ʾ��ϵ��
				show_man(&abs);
				break;
			case 3://ɾ����ϵ��
				del_man(&abs);
				break;
			case 4://������ϵ��
				find_man(&abs);
				break;
			case 5://�޸���ϵ��
				update_man(&abs);
				break;
			case 6://�����ϵ��
				clean_man(&abs);
				break;
			case 0://�˳�ͨѶ¼
				cout << "�Ѱ�ȫ�˳�ϵͳ����л���ʹ�ã��ټ���"<<endl;
				system("pause");
				return 0;
				break;
			default :
				cout << "����������ٴ�����:"<<endl;
				system("pause");
				system("cls");
		}
	}
	system("pause");
	return 0;
}