#include<iostream>
#include<map>
using namespace std;
void test01()
{
	//����
	map<int,int>m;
	m.insert(pair<int,int>(1,10));
	m.insert(pair<int,int>(2,20));
	m.insert(pair<int,int>(3,30));
	m.insert(pair<int,int>(5,50));

	map<int,int>::iterator pos = m.find(3);
	if(pos!=m.end())
	{
		cout<<"�ҵ���Ԫ��key��"<<pos->first<<endl;
	}
	else
	{
		cout<<"δ�ҵ�"<<endl;
	}

	//ͳ��(map�� ֻ��0����1)
	int num =m.count(4);
	cout<<"num"<<num<<endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}
