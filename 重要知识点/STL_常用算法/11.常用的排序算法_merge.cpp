#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


void test01()
{
	//注意：两个容器必须有序的
	vector<int>v1;
	vector<int>v2;
	for(int i = 0;i<10;i++)
	{
		v1.push_back(i);
		v2.push_back(i+10);
	}
	//目标容器
	vector<int>vTarget;
	vTarget.resize(v1.size()+v2.size());
	merge(v1.begin(),v1.end(),v2.begin(),v2.end(),vTarget.begin());
	for(vector<int>::iterator it = vTarget.begin();it!= vTarget.end();it++)
	{
		cout << *it << " ";
	}
	cout<<endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}