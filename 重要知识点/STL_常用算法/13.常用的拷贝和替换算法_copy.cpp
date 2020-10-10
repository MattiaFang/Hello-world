#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void test01()
{
	vector<int>v;
	for(int i = 0;i<10;i++)
	{
		v.push_back(i);
	}
	cout<<"  原容器： " ;
	for(vector<int>::iterator it = v.begin();it!= v.end();it++)
	{
		cout << *it << " ";
	}
	cout<<endl;

	vector<int>vTarget;
	vTarget.resize(v.size());//一定要设置大小！！！
	cout<<"目标容器： " ;
	copy(v.begin(),v.end(),vTarget.begin());
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