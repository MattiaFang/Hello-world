//2020.10.04
/*
公司招聘10名员工（A-J），需要指派他们到哪个部门工作
员工信息：姓名、工资
部门分为：策划、研发、美术
随机给他们分配部门和工资
通过multimap进行信息的插入 key（部门编号）  value（员工）
分部门显示员工信息
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
		worker.m_Name = "员工";
		worker.m_Name +=nameSeed[i];
		worker.m_Salary = rand()%10000+10000;
		//将员工放入容器中
		v.push_back(worker);
	}
}
void setGroup(vector<Worker>&v,multimap<int,Worker>&m)
{
	for(vector<Worker>::iterator it=v.begin();it!=v.end();it++)
	{
		//产生随机部门编号
		int deptId = rand()%3;//0 1 2
		//将员工插入分组中
		//key为部门编号，value具体员工
		m.insert(make_pair(deptId,*it));
	}
}
void showWorkByGroup(multimap<int,Worker>&m)
{
	cout<<"策划部门："<<endl;
	multimap<int,Worker>::iterator Cit = m.find(CEHUA);
	int c_count = m.count(CEHUA);
	for( int index =0; Cit!=m.end() && index<c_count;Cit++,index++)
	{
		cout<<"姓名："<<Cit->second.m_Name<<" 工资："<<Cit->second.m_Salary<<endl;
	}
	cout<<"美术部门："<<endl;
	multimap<int,Worker>::iterator Mit = m.find(MEISU);
	int m_count = m.count(MEISU);
	for( int index =0; Mit!=m.end() && index<m_count;Mit++,index++)
	{
		cout<<"姓名："<<Mit->second.m_Name<<" 工资："<<Mit->second.m_Salary<<endl;
	}
	cout<<"研发部门："<<endl;
	multimap<int,Worker>::iterator Yit = m.find(YANFA);
	int y_count = m.count(YANFA);
	for( int index =0; Yit!=m.end() && index<y_count;Yit++,index++)
	{
		cout<<"姓名："<<Yit->second.m_Name<<" 工资："<<Yit->second.m_Salary<<endl;
	}
}
int main()
{
	srand((unsigned int)time(NULL));

	//1.创建员工
	vector<Worker> v; 
	createWorker(v);
	////测试
	//for(vector<Worker>::iterator it=v.begin();it!=v.end();it++)
	//{
	//	cout<<"姓名："<<it->m_Name<<"   工资："<<it->m_Salary<<endl;
	//}
	//cout<<endl;

	//2.员工分组
	multimap<int,Worker> m;
	setGroup(v,m);

	//3.分组显示员工
	showWorkByGroup(m);
	system("pause");
	return 0;
}