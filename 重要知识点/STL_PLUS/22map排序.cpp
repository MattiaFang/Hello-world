#include<iostream>
#include<map>
using namespace std;
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
	//����Ĭ�ϴ�С�����Լ���д�º���ָ�����й���
	map<int,int,Mycompare>m;
	m.insert(pair<int,int>(1,10));
	m.insert(pair<int,int>(3,30));
	m.insert(pair<int,int>(9,90));
	m.insert(pair<int,int>(8,80));
	m.insert(pair<int,int>(2,20));

	for(map<int,int,Mycompare>::iterator it=m.begin();it!=m.end();it++)
	{
		cout<<"key="<<it->first<<" Value="<<it->second<<endl;
	}
	cout<<endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}