#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
//替换replace
//将区间内的旧元素换成新元素
void test01()
{
	vector<int>v;
	for(int i = 0;i<10;i++)
	{
		v.push_back(i);
	}
	cout<<"替换前容器： " ;
	for(vector<int>::iterator it = v.begin();it!= v.end();it++)
	{
		cout << *it << " ";
	}
	cout<<endl;

	replace(v.begin(),v.end(),7,0);//7为区间内旧元素，0为新元素

	cout<<"替换后容器： " ;
	for(vector<int>::iterator it = v.begin();it!= v.end();it++)
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