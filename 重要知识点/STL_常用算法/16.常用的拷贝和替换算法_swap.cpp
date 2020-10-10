#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
//»¥»»swap
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
	//Á½ÖÖÍ¬ÑùÊý¾ÝÀàÐÍµÄÈÝÆ÷
	vector<int>v1;
	vector<int>v2;
	for(int i = 0;i<10;i++)
	{
		v1.push_back(i);
		v2.push_back(i+10);
	}
	cout<<"Ìæ»»Ç°v1ÈÝÆ÷£º " ;
	/*for(vector<int>::iterator it = v1.begin();it!= v1.end();it++)
	{
		cout << *it << " ";
	}
	cout<<endl;*/
	printV(v1);
	cout<<"Ìæ»»Ç°v2ÈÝÆ÷£º " ;
	printV(v2);

	swap(v1,v2);

	cout<<"Ìæ»»ºóv1ÈÝÆ÷£º " ;
	printV(v1);
	cout<<"Ìæ»»ºóv2ÈÝÆ÷£º " ;
	printV(v2);
}
int main()
{
	test01();
	system("pause");
	return 0;
}