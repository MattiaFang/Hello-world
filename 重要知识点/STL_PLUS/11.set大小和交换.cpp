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
	//��С
	if(!s1.empty())
	{
		int ssize = s1.size();
		cout<<"s1�Ĵ�СΪ��"<<ssize<<endl;
	}
	else
	{
		cout<<"s1Ϊ��"<<endl;
	}
	//����
	set<int>s2;
	s2.insert(1);
	s2.insert(5);
	s2.insert(3);
	s2.insert(2);
	cout<<"s2:";
	printSet(s2);
	cout<<"==============����=============="<<endl;
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