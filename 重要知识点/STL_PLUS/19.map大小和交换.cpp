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
	//创建map容器
	map<int,int> m;
	m.insert(pair<int,int>(1,10));
	m.insert(pair<int,int>(2,20));
	m.insert(pair<int,int>(3,30));
	m.insert(pair<int,int>(4,40));
	m.insert(pair<int,int>(5,50));
	printMap(m);
	//大小
	if(!m.empty())
	{
		cout<<"map容器大小为:"<<m.size()<<endl;
	}
	else
	{
		cout<<"map容器为空"<<endl;
	}
	//交换
	map<int,int>m2;
	m2.insert(pair<int,int>(6,60));
	m.swap(m2);
	cout<<"map交换后"<<endl;
	printMap(m);
}

int main()
{
	test01();
	system("pause");
	return 0;
}