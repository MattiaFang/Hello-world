//2020.10.09
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//transform
//搬运容器到另一个容器中

//仿函数
class TransForm
{
public:
	int operator()(int v)
	{
		return v;
	}
};
class MyPrint
{
public:
	void operator()(int val)
	{
		cout<<val<<" ";
	}
};

void test01(){
	vector<int>v;
	for(int i=0;i<10;i++)
	{
		v.push_back(i);
	}
	vector<int>vTarget;//目标容器
	vTarget.resize(v.size());//目标容器要设置大小

	transform(v.begin(),v.end(),vTarget.begin(),TransForm());

	for_each(vTarget.begin(),vTarget.end(),MyPrint());
	cout << endl;

}
int main()
{
	test01();
	system("pause");
	return 0;
}