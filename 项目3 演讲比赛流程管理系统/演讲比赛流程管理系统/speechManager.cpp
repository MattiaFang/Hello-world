#include "speechManager.h"

//���캯��
SpeechManager::SpeechManager()
{
	//��ʼ������������
	this->initSpeech();

	//����12��ѡ��
	this->createSpeaker();
}

//չʾ�˵�
void SpeechManager::show_Menu()
{
	cout << endl;
	cout << "***********************************************" << endl;
	cout << "************** ��ӭ�μ��ݽ����� ***************" << endl;
	cout << "************** 1. ��ʼ�ݽ�����  ***************" << endl;
	cout << "************** 2. �鿴�����¼  ***************" << endl;
	cout << "************** 3. ��ձ�����¼  ***************" << endl;
	cout << "************** 0. �˳���������  ***************" << endl;
	cout << "***********************************************" << endl;
	cout << endl;
}

//�˳�ϵͳ
void SpeechManager::exitSystem()
{
	cout<<"��ӭ�´�ʹ�ã�"<<endl;
	system("pause");
	exit(0);
}

//��ʼ������������
void SpeechManager::initSpeech()
{
	//�������ÿ�
	this->v1.clear();
	this->v2.clear();
	this->vVictory.clear();
	this->m_Speaker.clear();

	//��ʼ����������
	this->m_Index = 1;
}

//����ѡ��
void SpeechManager::createSpeaker()
{
	string nameSeed = "ABCDEFGHIJKL";
	for(int i =0 ; i < nameSeed.size() ; i++)
	{
		string name = "ѡ��";
		name += nameSeed[i];

		Speaker sp;
		sp.m_Name = name;
		for (int j=0;j<2;j++)
		{
			sp.m_Score[j] = 0;
		}

		//12��ѡ�ֱ��
		this->v1.push_back(i + 10001);

		//ѡ�ֱ�� �Լ���Ӧ��ѡ�� ��ŵ�map������
		this->m_Speaker.insert(make_pair(i+10001,sp));
	}
}

//��ʼ����
void SpeechManager::startSpeech()
{
	//��һ�ֿ�ʼ����

	//1����ǩ
	this->speechDraw();
	//2������
	this->speechContest();
	//3����ʾ�������
	this->showScore();

	//�ڶ��ֿ�ʼ����
	this->m_Index++;
	//1����ǩ
	this->speechDraw();
	//2������
	this->speechContest();
	//3����ʾ���ս��
	this->showScore();
	//4������������ļ���
	this->saveRecord();

	cout<<"����������"<<endl;
	system("pause");
	system("cls");
}

//��ǩ
void SpeechManager::speechDraw()
{
	cout<<"�� <<"<<this->m_Index<<">> �ֱ���ѡ�����ڳ�ǩ"<<endl;
	cout<<"-----------------------------"<<endl;
	cout<<"��ǩ���ݽ�˳�����£�"<<endl;

	if(this->m_Index == 1 )
	{
		//��һ�ֱ���
		random_shuffle(v1.begin(),v1.end());
		for(vector<int>::iterator it=v1.begin();it!=v1.end();it++)
		{
			cout << *it <<" ";
		}
		cout<<endl;
		cout<<"-----------------------------"<<endl;	
	}
	else 
	{
		//�ڶ��ֱ���
		random_shuffle(v2.begin(),v2.end());
		for(vector<int>::iterator it=v2.begin();it!=v2.end();it++)
		{
			cout << *it <<" ";
		}
		cout<<endl;
		cout<<"-----------------------------"<<endl;
	}
	cout<<endl;
	system("pause");
}

//����
void SpeechManager::speechContest()
{
	cout<<"�������������������� <<"<<this->m_Index<<">> �ֱ���ѡ�ֿ�ʼ����������������������"<<endl;

	//׼����ʱ���� ���С��ɼ�
	multimap<double,int,greater<double>> groupScore;

	int num = 0;//��¼��Ա���� 6��һ��

	vector<int>v_Src;//����ѡ������
	if(this->m_Index == 1)
	{
		v_Src = v1;
	}
	else
	{
		v_Src = v2;
	}
	
	//�������в���ѡ�ֽ��б���
	for(vector<int>::iterator it = v_Src.begin();it!=v_Src.end();it++)
	{
		num++;
		//��ί���
		deque<double>d;
		for(int i=0;i<10;i++)
		{
			double score = (rand()%401+600) / 10.f;  //600~1000
			//cout << score << " ";
			d.push_back(score);
		}
		//cout<<endl;

		sort(d.begin(),d.end(),greater<double>());//����
		d.pop_front();//ȥ����߷�
		d.pop_back();//ȥ����ͷ�

		double sum = accumulate(d.begin(),d.end(),0.0f);
		double avg = sum /(double)d.size();

		//��ӡƽ����
		//cout<<"��ţ�"<<*it<<" ������"<<this->m_Speaker[*it].m_Name<<" ��ȡƽ���֣�"<<avg<<endl;

		//��ƽ���ַŵ�map��������
		this->m_Speaker[*it].m_Score[this->m_Index-1] = avg;
		
		//��������� ���뵽��ʱС������
		groupScore.insert(make_pair(avg,*it));//key�ǵ÷֣�value�Ǿ���ѡ�ֱ��
		//ÿ����ȡ��ǰ����
		if(num%6 == 0)
		{
			cout<<"��"<<num/6<<"С��������Σ�"<<endl;
			for(multimap<double,int,greater<double>>::iterator it = groupScore.begin();it!=groupScore.end();it++)
			{
				cout<<"��ţ� "<<it->second<<" ������"<<this->m_Speaker[it->second].m_Name<<"�ɼ��� "<<this->m_Speaker[it->second].m_Score[this->m_Index-1]<<endl;
			}
			//ȡ��ǰ����
			int count = 0;
			for(multimap<double,int,greater<double>>::iterator it = groupScore.begin();it!=groupScore.end()&&count<3;it++,count++)
			{
				if(this->m_Index==1)
				{
					v2.push_back((*it).second);
				}
				else
				{
					vVictory.push_back((*it).second);
				}
			}
			groupScore.clear();//С���������
			cout<<endl;
		}
	}
	cout<<"���������������������� <<"<<this->m_Index<<">> �ֱ�����ϣ���������������������"<<endl;

	cout<<endl;
	system("pause");
}

//��ʾ��������
void SpeechManager::showScore()
{
	cout<<"�������������������� <<"<<this->m_Index<<">> �ֽ���ѡ����Ϣ���£�������������������"<<endl;

	vector<int>v;
	if(this->m_Index == 1)
	{
		v = v2;
	}
	else
	{
		v = vVictory;
	}
	for(vector<int>::iterator it = v.begin();it != v.end();it++)
	{
		cout<<"ѡ�ֱ�ţ�"<<*it<<" ������"<<this->m_Speaker[*it].m_Name<<" �÷֣�"<<this->m_Speaker[*it].m_Score[this->m_Index-1]<<endl;
	}
	cout<<endl;
	system("pause");
	system("cls");
	this->show_Menu();
}

//���������¼
void SpeechManager::saveRecord()
{
	ofstream ofs;
	ofs.open("speech.csv",ios::out | ios::app);//������ķ�ʽ���ļ� --׷�ӵķ�ʽд�ļ�
	for(vector<int>::iterator it = vVictory.begin();it!=vVictory.end();it++)
	{
		ofs<<*it<<","
			<<m_Speaker[*it].m_Score[1]<<",";

	}
	ofs << endl;
	//�ر��ļ�
	ofs.close();
	cout<<"��¼�ѱ���"<<endl;
}


//��������
SpeechManager::~SpeechManager()
{

}