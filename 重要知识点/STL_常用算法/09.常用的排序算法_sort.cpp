#include<iostream>
#include<algorithm>
#include<vector>
#include<functional>
using namespace std;

class MyCompare
{
public:
	bool operator()(int v1,int v2)
	{
		return v1>v2;
	}
};
void test01()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(50);
	v.push_back(40);
	v.push_back(30);
	v.push_back(80);
	v.push_back(70);
	v.push_back(60);
	v.push_back(20);

	//sort(v.begin(),v.end(),MyCompare());//第三参数可不填，默认从小到大规则
	sort(v.begin(),v.end(),greater<int>());

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