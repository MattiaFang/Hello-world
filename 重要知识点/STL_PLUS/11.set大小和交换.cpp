//2020.10.03
#include<iostream>
#include<set>
using namespace std;
void printSet(set<int>& s)
{
	for(set<int>::iterator it=s.begin();it != s.end();it++)
	{
		cout<< *it << " ";
	}
	cout<<endl;
}

void test01()
{
	set<int>s1;
	s1.insert(10);
	s1.insert(50);
	s1.insert(30);
	s1.insert(20);
	cout<<"s1:";
	printSet(s1);
	//大小
	if(!s1.empty())
	{
		int ssize = s1.size();
		cout<<"s1的大小为："<<ssize<<endl;
	}
	else
	{
		cout<<"s1为空"<<endl;
	}
	//交换
	set<int>s2;
	s2.insert(1);
	s2.insert(5);
	s2.insert(3);
	s2.insert(2);
	cout<<"s2:";
	printSet(s2);
	cout<<"==============交换=============="<<endl;
	s1.swap(s2);
	cout<<"s1:";
	printSet(s1);
	cout<<"s2:";
	printSet(s2);
}
int main()
{
	test01();
	system("pause");
	return 0;
}