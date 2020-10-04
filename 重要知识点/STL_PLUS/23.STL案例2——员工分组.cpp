//2020.10.04
/*
��˾��Ƹ10��Ա����A-J������Ҫָ�����ǵ��ĸ����Ź���
Ա����Ϣ������������
���ŷ�Ϊ���߻����з�������
��������Ƿ��䲿�ź͹���
ͨ��multimap������Ϣ�Ĳ��� key�����ű�ţ�  value��Ա����
�ֲ�����ʾԱ����Ϣ
*/
#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<ctime>

#define CEHUA  0
#define MEISU  1
#define YANFA  2
using namespace std;

class Worker
{
public:
	string m_Name;
	int m_Salary;
};
void createWorker(vector<Worker>&v)
{
	string nameSeed="ABCDEFGHIJ";
	for(int i=0;i<10;i++)
	{
		Worker worker;
		worker.m_Name = "Ա��";
		worker.m_Name +=nameSeed[i];
		worker.m_Salary = rand()%10000+10000;
		//��Ա������������
		v.push_back(worker);
	}
}
void setGroup(vector<Worker>&v,multimap<int,Worker>&m)
{
	for(vector<Worker>::iterator it=v.begin();it!=v.end();it++)
	{
		//����������ű��
		int deptId = rand()%3;//0 1 2
		//��Ա�����������
		//keyΪ���ű�ţ�value����Ա��
		m.insert(make_pair(deptId,*it));
	}
}
void showWorkByGroup(multimap<int,Worker>&m)
{
	cout<<"�߻����ţ�"<<endl;
	multimap<int,Worker>::iterator Cit = m.find(CEHUA);
	int c_count = m.count(CEHUA);
	for( int index =0; Cit!=m.end() && index<c_count;Cit++,index++)
	{
		cout<<"������"<<Cit->second.m_Name<<" ���ʣ�"<<Cit->second.m_Salary<<endl;
	}
	cout<<"�������ţ�"<<endl;
	multimap<int,Worker>::iterator Mit = m.find(MEISU);
	int m_count = m.count(MEISU);
	for( int index =0; Mit!=m.end() && index<m_count;Mit++,index++)
	{
		cout<<"������"<<Mit->second.m_Name<<" ���ʣ�"<<Mit->second.m_Salary<<endl;
	}
	cout<<"�з����ţ�"<<endl;
	multimap<int,Worker>::iterator Yit = m.find(YANFA);
	int y_count = m.count(YANFA);
	for( int index =0; Yit!=m.end() && index<y_count;Yit++,index++)
	{
		cout<<"������"<<Yit->second.m_Name<<" ���ʣ�"<<Yit->second.m_Salary<<endl;
	}
}
int main()
{
	srand((unsigned int)time(NULL));

	//1.����Ա��
	vector<Worker> v; 
	createWorker(v);
	////����
	//for(vector<Worker>::iterator it=v.begin();it!=v.end();it++)
	//{
	//	cout<<"������"<<it->m_Name<<"   ���ʣ�"<<it->m_Salary<<endl;
	//}
	//cout<<endl;

	//2.Ա������
	multimap<int,Worker> m;
	setGroup(v,m);

	//3.������ʾԱ��
	showWorkByGroup(m);
	system("pause");
	return 0;
}