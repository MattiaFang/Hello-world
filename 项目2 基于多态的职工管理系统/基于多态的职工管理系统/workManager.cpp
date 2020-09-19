#include "workerManager.h"
	//���캯��
WorkerManager::WorkerManager()
{
	//1.�ļ�������
	ifstream ifs;
	ifs.open(FILENAME,ios::in);//���ļ�
	if(!ifs.is_open())
	{
		//cout<<"_____�ļ������ڣ�_____"<<endl;
		//��ʼ������
		this->m_EmpNum = 0;//��ʼ������
		this->m_EmpArray=NULL;//��ʼ������ָ��
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}
	//2.�ļ����ڣ�����û�м�¼
	char ch;
	ifs >> ch;
	if(ifs.eof())
	{
		//�ļ�Ϊ��
		//cout<<"_____�ļ������ڣ�_____"<<endl;
		this->m_EmpNum = 0;
		this->m_FileIsEmpty = true;
		this->m_EmpArray = NULL;
		ifs.close();
		return;
	}
	//3.�ļ����ڣ������м�¼����
	int num = this -> get_EmpNum();
	//cout << "_____ְ������Ϊ��"<<num<<" ��_____"<<endl;
	this->m_EmpNum = num;

	//���ٿռ�
	this->m_EmpArray = new Worker*[this->m_EmpNum];
	//���ļ��е����ݣ��浽����
	this->init_Emp();
	//���Դ���
	//for(int i=0;i<this->m_EmpNum;i++)
	//{
	//	cout<<"ְ����ţ�"<<this->m_EmpArray[i]->m_Id<<"   "
	//		<<"������"<<this->m_EmpArray[i]->m_Name<<"   "
	//		<<"���ű�ţ�"<<this->m_EmpArray[i]->m_DeptId<<endl;
	//}
	this->m_FileIsEmpty = false;
	//ifs.close();
}

	//չʾ�˵�
void WorkerManager::Show_Menu()
{
	cout <<"**********************************"<<endl;
	cout <<"****** ��ӭʹ��ְ������ϵͳ��*****"<<endl;
	cout <<"********* 0.�˳�������� *********"<<endl;
	cout <<"********* 1.����ְ����Ϣ *********"<<endl;
	cout <<"********* 2.��ʾְ����Ϣ *********"<<endl;
	cout <<"********* 3.ɾ��ְ����Ϣ *********"<<endl;
	cout <<"********* 4.�޸�ְ����Ϣ *********"<<endl;
	cout <<"********* 5.����ְ����Ϣ *********"<<endl;
	cout <<"********* 6.���ձ������ *********"<<endl;
	cout <<"********* 7.��������ĵ� *********"<<endl;
	cout <<"**********************************"<<endl;
	cout << endl;
}
	
	//�˳�ϵͳ
void WorkerManager::exitSystem()
{
	cout<<"��ӭ�´�ʹ��"<<endl;
	system("pause");
	exit(0);
}

	//���ְ��
void WorkerManager::Add_Emp()
{
	cout<<"���������Ա��������"<<endl;
	int addNum=0;//�����û�����������
	cin >> addNum;
	if(addNum>0)
	{
		//���
		//��������¿ռ��С
		int newSize = this -> m_EmpNum + addNum;//�¿ռ����� = ԭ����¼����+��������
		//�����¿ռ�
		Worker ** newSpace = new Worker*[newSize];
		//��ԭ���ռ������ݣ��������¿ռ���
		if(this->m_EmpArray != NULL)
		{
			for(int i=0;i<this->m_EmpNum;i++)
			{
				newSpace[i]=this->m_EmpArray[i];
			}
		}
		//�������������
		for(int i=0;i<addNum;i++)
		{
			int id;        //ְ�����
			string name;   //ְ������
			int dSelect;   //����ѡ��

			cout<<"������� "<< i+1 <<" ����ְ����ţ� "<<endl;
			cin >> id;
			cout<<"������� "<< i+1 <<" ����ְ�������� "<<endl;
			cin >> name;
			cout<<"��ѡ���ְ����λ�� "<<endl;
			cout<<"1����ͨԱ��"<<endl;
			cout<<"2������"<<endl;
			cout<<"3���ϰ�"<<endl;
			cin >> dSelect;
			Worker * worker = NULL;
			switch(dSelect)
			{
			case 1:
				worker =new Employee(id,name,1);
				break;
			case 2:
				worker =new Manager(id,name,2);
				break;
			case 3:
				worker =new Boss(id,name,3);
				break;
			default:
				break;
			}
			//������ְ��ְ�𣬱��浽������
			newSpace[this->m_EmpNum+i]= worker;
		}

		//�ͷ�ԭ�пռ�
		delete[] this->m_EmpArray;

		//�����¿ռ��ָ��
		this->m_EmpArray = newSpace;

		//�����µ�ְ������
		this->m_EmpNum = newSize;

		//����ְ����Ϊ�ձ�־
		this->m_FileIsEmpty = false;

		//�ɹ���Ӻ󣬱����ļ�
		this->save();

		//��ʾ��ӳɹ�
		cout << "�ɹ������ "<< addNum <<" ����Ա��"<<endl;
	}
	else
	{
		cout<<"������������"<<endl;
	}

	//�������������������һ��Ŀ¼
	system("pause");
	system("cls");
}
	
	//�����ļ�
void WorkerManager::save()
{
	ofstream ofs;
	ofs.open(FILENAME,ios::out);//������ķ�ʽ���ļ�   ����д�ļ�

	//��ÿ��������д�뵽�ļ���
	for(int i=0;i<m_EmpNum;i++)
	{
		ofs << this->m_EmpArray[i]->m_Id<<" "
			<< this->m_EmpArray[i]->m_Name<<" "
			<< this->m_EmpArray[i]->m_DeptId<<endl;
	}

	//�ر��ļ�
	ofs.close();
}

	//ͳ���ļ��м�¼������
int WorkerManager::get_EmpNum()
{
	ifstream ifs;
	ifs.open(FILENAME,ios::in);//���ļ�

	int id;
	string name;
	int dId;

	int num=0;
	while(ifs>>id && ifs>>name && ifs>>dId)
	{
		//��¼����
		num++;
	}
	ifs.close();
	return num;
}

	//��ʼ��ְ��
void WorkerManager::init_Emp()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	int dId;
	int index = 0;
	while(ifs>>id && ifs>>name && ifs>>dId)
	{
		
		Worker * worker = NULL;
		if(dId == 1)//��ְͨ��
		{
			worker = new Employee(id,name,dId);
		}
		else if(dId == 2)//����
		{
			worker = new Manager(id,name,dId);
		}
		else//�ϰ�
		{
			worker = new Boss(id,name,dId);
		}
		this->m_EmpArray[index] = worker;
		index++;
	}

	ifs.close();
}

	//��ʾְ��
void WorkerManager::Show_Emp()
{
	//�ж��ļ��Ƿ�Ϊ��
	if(this->m_FileIsEmpty)
	{
		cout<<"�ļ������ڻ��¼Ϊ��"<<endl;
	}
	else
	{
		for(int i=0;i<m_EmpNum;i++)
		{
			//���ö�̬���ó���ӿ�
			this->m_EmpArray[i]->showInfo();
		}
	}
	//�������������
	system("pause");
	system("cls");
}

	//ɾ��ְ��
void WorkerManager::Del_Emp()
{
	if(this->m_FileIsEmpty)
	{
		cout<<"�ļ������ڻ��¼Ϊ�գ�"<<endl;
	}
	else
	{
		//����ְ�����ɾ��
		int id=0;
		cout<<"����������Ҫɾ��ְ���ı�ţ�"<<endl;
		cin>>id;
		int index = this->isExist(id);
		if(index != -1)//˵��ְ�����ڣ�����Ҫɾ��retλ���ϵ�ְ��
		{
			//cout<<"ְ������"<<endl;
			//����ǰ��
			for(int i=index;i<this->m_EmpNum-1;i++)
			{
				this->m_EmpArray[i]=this->m_EmpArray[i+1];
			}
			this->m_EmpNum--;//���������м�¼��������
			//����ͬ�����µ��ļ���
			this->save();
			cout<<"ɾ���ɹ���"<<endl;
		}
		else
		{
			cout<<"ɾ��ʧ�ܣ�δ�ҵ���ְ��"<<endl;
		}
	}
	//�������������
	system("pause");
	system("cls");
}

	//�ж�ְ���Ƿ����
int WorkerManager::isExist(int id)
{
	int index = -1;
	for(int i=0;i<this->m_EmpNum;i++)
	{
		if(this->m_EmpArray[i]->m_Id == id)
		{
			//�ҵ�ְ��
			index = i;

			break;
		}
	}
	return index;
}
	
	//�޸�ְ��
void WorkerManager::Mod_Emp()
{
	if(this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ�գ�"<<endl;
	}
	else
	{
		cout << "�������޸�ְ���ı�ţ�"<<endl;
		int id;
		cin >> id;
		int index = this->isExist(id);
		if(index != -1)
		{
			//���ҵ����Ա��
			delete this->m_EmpArray[index];
			//�������
			int newId = 0;
			string newName ="";
			int newDSelect = 0;
			//��������
			cout << "���ҵ���"<< id << "��ְ��"<<endl;
			cout << "�������±�ţ�"<<endl;
			cin >> newId;
			int ret = isExist(newId);
			while (ret != -1)
			{
				cout << "����ظ������������±�ţ�" <<endl;
				cin >> newId;
				ret = isExist(newId);
			}
			cout << "��������������"<<endl;
			cin >> newName;
			cout << "�������¸�λ��"<<endl;
			cout << "1����ְͨ��"<<endl;
			cout << "2������"<<endl;
			cout << "3���ϰ�"<<endl;
			cin >> newDSelect;

			Worker * worker = NULL;
			switch(newDSelect)
			{
			case 1:
				worker = new Employee(newId , newName , 1);
				break;
			case 2:
				worker = new Manager(newId , newName , 2);
				break;
			case 3:
				worker = new Boss(newId , newName , 3);
				break;
			default:
				break;
			}
			//�������ݵ�������
			this -> m_EmpArray[index] = worker;
			cout << "�޸ĳɹ���" <<endl;
			//���浽�ļ���
			this -> save();
		}
		else
		{
			cout <<"���޴���,�޸�ʧ�ܣ�"<<endl;
		}
		//�����������
		system("pause");
		system("cls");
	}
}

	//����ְ��
void WorkerManager::Find_Emp()
{
	if(this ->m_FileIsEmpty)
	{
		cout<<"�ļ������ڻ��߼�¼Ϊ�գ�"<<endl;
	}
	else
	{
		cout <<"��������ҵķ�ʽ��"<<endl;
		cout <<"1.��ְ����Ų���"<<endl;
		cout <<"2.����������"<<endl;

		int select = 0;
		cin >> select;
		if(select == 1)//��ְ����Ų���
		{
			int id;
			cout <<"��������ҵ�ְ����ţ�"<<endl;
			cin >> id;

			int ret = isExist(id);
			if(ret != -1)
			{
				cout << "���ҳɹ�����ְ����Ϣ���£�" << endl;
				this -> m_EmpArray[ret] -> showInfo();
			}
			else
			{
				cout << "����ʧ�ܣ����޴��ˣ�" << endl;
			}
		}
		else if(select == 2)//��ְ����������
		{
			string name;
			bool flag = false; //�鵽�ı�־
			cout <<"��������ҵ�ְ��������"<<endl;
			cin >> name;
			for(int i=0;i<m_EmpNum;i++)
			{
				if(m_EmpArray[i]->m_Name == name)
				{
					cout<<"���ҳɹ���ְ�����Ϊ��"
						<<m_EmpArray[i]->m_Id
						<<"�ŵ���Ϣ���£�"<<endl;
					flag = true;
					this -> m_EmpArray[i]->showInfo();
				}
			}
			if( flag == false)
			{
				cout << "����ʧ�ܣ����޴��ˣ�" << endl;
			}
		}
		else
		{
			cout << "����ѡ�����󣬲���ʧ�ܣ�" << endl;
		}
	}
	system("pause");
	system("cls");
}

	//����ְ��
void WorkerManager::Sort_Emp()
{
	if(this->m_FileIsEmpty)
	{
		cout<<"�ļ������ڻ��߼�¼Ϊ�գ�"<<endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout<<"��ѡ������ʽ��"<<endl;
		cout<<"1.��ְ���Ž�������"<<endl;
		cout<<"2.��Ա���Ž��н���"<<endl;
		int select = 0;
		cin >> select;
		for(int i=0;i<m_EmpNum;i++)
		{
			int minOrMax = i;//������Сֵ�������ֵ�±�
			for(int j=i+1;j<m_EmpNum;j++)
			{
				if(select==1)//����
				{
					if(this->m_EmpArray[minOrMax]->m_Id > this->m_EmpArray[j]->m_Id)
					{
						minOrMax = j;
					}
				}
				else //����
				{
					if(this->m_EmpArray[minOrMax]->m_Id < this->m_EmpArray[j]->m_Id)
					{
						minOrMax = j;
					}
				}
				
			}
			//�ж�һ��ʼ�϶� ��Сֵ�������ֵ �ǲ��Ǽ������Сֵ�����ֵ��������ǽ���
			if(i != minOrMax)
			{
				Worker * temp = this->m_EmpArray[i];
				this->m_EmpArray[i] = this->m_EmpArray[minOrMax];
				this->m_EmpArray[minOrMax] = temp;
			}
		}
		cout << "����ɹ��������Ľ��Ϊ��"<<endl;
		this -> save();     //����������浽�ļ���
		this -> Show_Emp(); //չʾ����Ա��	
	}
}

	//���ְ��
void WorkerManager::Clean_Emp()
{
	if(this->m_FileIsEmpty)
	{
		cout<<"�ļ������ڻ��߼�¼Ϊ�գ�"<<endl;
	}
	else
	{
		cout <<"ȷ����գ�"<<endl;
		cout <<"1.ȷ��"<<endl;
		cout <<"2.����"<<endl;

		int select =0;
		cin>>select;
		if(select==1)
		{
			//����ļ�
			ofstream ofs(FILENAME,ios::trunc);//ɾ���ļ������´���
			ofs.close();

			if(this->m_EmpArray!=NULL)
			{
				//ɾ��������ÿ��ְ������
				for(int i=0;i<this->m_EmpNum;i++)
				{
					delete this -> m_EmpArray[i];
					this -> m_EmpArray[i] = NULL;
				}
				//ɾ����������ָ��
				delete this->m_EmpArray;
				this->m_EmpNum=0;
				this->m_FileIsEmpty=true;
			}
			cout<<"��ճɹ���"<<endl;
		}
		
	}
	system("pause");
	system("cls");
}
	
	//��������
WorkerManager::~WorkerManager()
{
	if(this->m_EmpArray !=NULL )
	{
		delete[] this->m_EmpArray;
		this->m_EmpArray=NULL;
	}
}