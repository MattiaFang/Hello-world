#include<iostream>
#include<set>

using namespace std;
void printSet(set<int>&s)
{
	for(set<int>::iterator it=s.begin();it!=s.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
}
void printMSet(multiset<int>&s)
{
	for(multiset<int>::iterator it=s.begin();it!=s.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
}
void tty(bool retn)
{
	if(retn)
	{
		cout<<"本次插入成功！"<<endl;
	}
	else
	{
		cout<<"本次插入失败！"<<endl;
	}
}
void test01()
{
	set<int> s;
	
	pair<set<int>::iterator,bool> ret = s.insert(20);
	tty(ret.second);
	pair<set<int>::iterator,bool> ret2 = s.insert(20);
	tty(ret2.second);
	//printSet(s1);

	multiset<int> ms;//multiset没有判断数据插入是否成功
	ms.insert(10);
	ms.insert(10);
	printMSet(ms);
	//multiset 可以插入重复数据
}
int main()
{
	test01();
	system("pause");
	return 0;
}