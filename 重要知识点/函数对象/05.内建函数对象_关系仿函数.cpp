#include<iostream>
#include<functional>
#include<vector>
#include<algorithm>
using namespace std;

//内建函数对象 关系仿函数
//大于 greater
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
	vector<int>v;
	v.push_back(10);
	v.push_back(60);
	v.push_back(70);
	v.push_back(30);
	v.push_back(20);
	v.push_back(90);
	v.push_back(80);

	for(vector<int>::iterator it = v.begin();it!=v.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
	//自己实现的仿函数
	//sort(v.begin(),v.end(),Mycompare());
	//内建的函数对象
	sort(v.begin(),v.end(),greater<int>());
	for(vector<int>::iterator it = v.begin();it!=v.end();it++)
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