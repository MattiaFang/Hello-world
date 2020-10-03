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
//���÷º�������ָ��set�������������
class Mycompare
{
public:
	bool operator()(int v1,int v2)
	{
		return v1>v2;
	}
};

void test01()
{
	set<int>s;
	s.insert(10);
	s.insert(80);
	s.insert(30);
	s.insert(70);
	s.insert(50);
	printSet(s);

	//ָ���������Ϊ��С����
	set<int,Mycompare>s2;
	s2.insert(10);
	s2.insert(80);
	s2.insert(30);
	s2.insert(70);
	s2.insert(50);
	for(set<int,Mycompare>::iterator it=s2.begin();it!=s2.end();it++)//ר��������
	{
		cout<<*it<<" ";
	}
	cout<<endl;

}

int main()
{
	test01();
	system("pause");
	return 0;
}