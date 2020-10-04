#include<iostream>
#include<map>
using namespace std;

void printMap(map<int,int>&m)
{
	for(map<int,int>::iterator it=m.begin();it!=m.end();it++)
	{
		cout<<"key="<<it->first<<" value="<<it->second<<endl;
	}
	cout<<endl;
}
void test01()
{
	//����map����
	map<int,int> m;
	m.insert(pair<int,int>(1,10));
	m.insert(pair<int,int>(2,20));
	m.insert(pair<int,int>(3,30));
	m.insert(pair<int,int>(4,40));
	m.insert(pair<int,int>(5,50));
	printMap(m);
	//��С
	if(!m.empty())
	{
		cout<<"map������СΪ:"<<m.size()<<endl;
	}
	else
	{
		cout<<"map����Ϊ��"<<endl;
	}
	//����
	map<int,int>m2;
	m2.insert(pair<int,int>(6,60));
	m.swap(m2);
	cout<<"map������"<<endl;
	printMap(m);
}

int main()
{
	test01();
	system("pause");
	return 0;
}