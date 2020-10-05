#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//二元谓词
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
	v.push_back(70);
	v.push_back(60);
	v.push_back(50);
	v.push_back(30);
	v.push_back(20);

	sort(v.begin(),v.end());
	for(vector<int>::iterator it = v.begin();it!=v.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
	//使用函数对象改变算法策略 从小到大
	sort(v.begin(),v.end(),Mycompare());
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