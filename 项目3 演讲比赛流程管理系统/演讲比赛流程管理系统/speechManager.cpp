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
	string nameSeed = "ABCDEFGHIKL";
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
	speechDraw();
	//2������

	//3����ʾ�������

	//�ڶ��ֿ�ʼ����

	//1����ǩ

	//2������

	//3����ʾ���ս��

	//4������������ļ���
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
		system("pause");
		
	}
	else 
	{
		//�ڶ��ֱ���
	}
}
//��������
SpeechManager::~SpeechManager()
{

}