//2020.10.10
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//查找算法binary_search
//查找指定元素，找到就返回true，找不到返回false
//无序序列不可以！！

void test01()
{
	vector<int>v;
	for(int i=0;i<10;i++)
	{
		v.push_back(i);
	}

	//查找  是否有8元素
	bool ret=binary_search(v.begin(),v.end(),8);
	if(ret == true)
	{
		cout<<"找到了该元素："<<endl;
	}
	else
	{
		cout<<"没有找到！"<<endl;
	}
}



int main()
{
	test01();

	system("pause");
	return 0;
}