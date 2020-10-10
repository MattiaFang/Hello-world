#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
//替换replace_if
//将区间内的符合条件的旧元素换成新元素

//选择大于7的
class Mynum
{
public:
	bool operator()(int val)
	{
		return val>7;
	}
};

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

	replace_if(v.begin(),v.end(),Mynum(),0);//Mynum()为选择区间内大于7的元素，0为新元素

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