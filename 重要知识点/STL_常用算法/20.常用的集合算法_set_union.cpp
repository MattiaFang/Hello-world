#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//set_union并集
class Myprint
{
public:
	void operator()(int val)
	{
		cout<< val <<" ";
	}
};
void printV(vector<int>& v)
{
	for_each(v.begin(),v.end(),Myprint());
	cout<<endl;
}
void test01()
{
	vector<int>v1;
	vector<int>v2;
	for(int i = 0;i<10;i++)
	{
		v1.push_back(i);
		v2.push_back(i+5);
	}
	vector<int>vTarget;
	vTarget.resize(v1.size()+v2.size());//两容器大小相加

	cout<<"v1容器： " ;
	printV(v1);
	cout<<"v2容器： " ;
	printV(v2);

	//获取并集
	vector<int>::iterator it_end = set_union(v1.begin(),v1.end(),v2.begin(),v2.end(),vTarget.begin());//输出为结束迭代器

	cout<<"目标容器： " ;
	//输出注意
	for_each(vTarget.begin() , it_end , Myprint());
	cout<<endl;

}
int main()
{
	test01();
	system("pause");
	return 0;
}