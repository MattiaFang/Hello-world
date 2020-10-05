#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//仿函数 返回值是bool类型，称为谓词
//一元谓词
class GreaterFive
{
public:
	bool operator()(int val)
	{
		return val>5;
	}
};

void test01()
{
	vector<int>v;
	for(int i=0;i<10;i++)
	{
		v.push_back(i);
	}
	//查找容器中 有没有大于5的数字
	//GreaterFive() 匿名函数对象
	if(v.end()==find_if(v.begin(),v.end(),GreaterFive()))
	{
		cout<<"未找到大于5的数字"<<endl;
	}
	else
	{
		cout<<"找到了大于5 的元素"<<endl;
	}
}
int main()
{
	test01();
	system("pause");
	return 0;
}