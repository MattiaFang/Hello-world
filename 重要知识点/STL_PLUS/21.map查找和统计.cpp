#include<iostream>
#include<map>
using namespace std;
void test01()
{
	//查找
	map<int,int>m;
	m.insert(pair<int,int>(1,10));
	m.insert(pair<int,int>(2,20));
	m.insert(pair<int,int>(3,30));
	m.insert(pair<int,int>(5,50));

	map<int,int>::iterator pos = m.find(3);
	if(pos!=m.end())
	{
		cout<<"找到了元素key："<<pos->first<<endl;
	}
	else
	{
		cout<<"未找到"<<endl;
	}

	//统计(map中 只能0或者1)
	int num =m.count(4);
	cout<<"num"<<num<<endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}
